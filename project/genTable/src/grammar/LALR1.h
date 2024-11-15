#pragma execution_character_set("utf-8")
#include "LR1.h"
#pragma once




class LALR1 : public LR1
{
public:
    // 使用父类的构造函数
    using LR1::LR1;

    // 构造函数
    LALR1() : LR1() {}
    
    // 合并具有相同核心项的状态
    void mergeStates()
    {
        unordered_map<IndexedSet<Item>, Statu> coreToStateMap;

        // 遍历所有状态，按核心项进行分类
        for (int i = 0; i < status.size(); ++i)
        {
            Statu current = status.getElement(i);
            IndexedSet<Item> core;

            // 提取核心项
            for (const auto &item : current.items)
            {
                Item coreItem = item;
                coreItem.next_sign.clear();
                core.insert(coreItem);
            }

            // 合并状态
            if (coreToStateMap.find(core) != coreToStateMap.end())
            {
                Statu &existing = coreToStateMap[core];
                for (const auto &item : current.items)
                {
                    existing.items.insert(item);
                }
            }
            else
            {
                coreToStateMap[core] = current;
            }
        }

        // 更新状态集合
        IndexedSet<Statu> newStatus;
        for (const auto &entry : coreToStateMap)
        {
            newStatus.insert(entry.second);
        }
        status = newStatus;
    }

    void work()
    {
        // 调用父类的 work 方法生成 LR(1) 状态集合
        LR1::work();

        // 合并状态生成 LALR(1) 状态集合
        mergeStates();

        // 重新生成操作表
        rebuildTable();
    }

private:
    void rebuildTable()
    {
        unordered_map<pair<int, int>, vector<operation>, hash<pair<int, int>>> newTable;

        // 遍历合并后的状态集合，重新生成操作表
        for (int i = 0; i < status.size(); ++i)
        {
            Statu current = status.getElement(i);

            // 构建新的表项
            for (const auto &item : current.items)
            {
                Grammer this_grammer = grammers.getElement(item.grammer);
                if (this_grammer.grammer.size() == item.dot)
                {
                    operation op;
                    op.op = g;
                    op.n = item.grammer;
                    // 添加规约操作，确保不重复添加相同的操作
                    pair<int, int> key = {i, (*NTsigns).find(this_grammer.sign)};
                    if (newTable.find(key) == newTable.end())
                    {
                        newTable[key].push_back(op);
                    }
                }
                else
                {
                    string nextSign = this_grammer.grammer[item.dot];
                    Item nextItem = {item.grammer, item.dot + 1};
                    nextItem.next_sign = item.next_sign;
                    int newId = findStateWithItem(nextItem);
                    if (newId != -1)
                    {
                        operation op;
                        op.op = s;
                        op.n = newId;
                        // 添加移进操作，确保不重复添加相同的操作
                        pair<int, int> key = {i, (*signs).find(nextSign)};
                        if (newTable.find(key) == newTable.end())
                        {
                            newTable[key].push_back(op);
                        }
                    }
                }
            }
        }

        // 更新操作表
        table = newTable;
    }

    int findStateWithItem(const Item &item)
    {
        for (int i = 0; i < status.size(); ++i)
        {
            const Statu &state = status.getElement(i);
            if (state.items.contains(item))
            {
                return i;
            }
        }
        return -1;
    }
public:
    void printStateTable(const std::string &filename)
    {
        std::ofstream outFile(filename);

        if (!outFile.is_open())
        {
            std::cerr << "Error: Unable to open file " << filename << " for writing." << std::endl;
            return;
        }

        // 开始输出DOT文件头部
        outFile << "digraph StateTable {" << std::endl;
        outFile << "    node [shape=plaintext]" << std::endl;
        outFile << "    tbl [label=<" << std::endl;

        // 开始输出表格
        outFile << "    <table border='1' cellborder='1' cellspacing='0'>" << std::endl;

        // 输出表头行
        outFile << "        <tr>";
        outFile << "<td>Status</td>";
        for (int i = 0; i < signs->size(); ++i)
        {
            outFile << "<td>" << signs->getElement(i) << "</td>";
        }
        outFile << "</tr>" << std::endl;

        // 输出数据行
        for (int i = 0; i < status.size(); ++i)
        {
            outFile << "        <tr>";
            outFile << "<td>" << i << "</td>";
            for (int j = 0; j < signs->size(); ++j)
            {
                auto it = table.find({i, j});
                if (it != table.end())
                {
                    std::string cellContent;
                    for (const auto &op : it->second)
                    {
                        if (!cellContent.empty())
                            cellContent += "<br/>";
                        if (op.op == s)
                        {
                            cellContent += "s" + std::to_string(op.n);
                        }
                        else if (op.op == g)
                        {
                            cellContent += "g" + std::to_string(op.n);
                        }
                    }
                    outFile << "<td port='" << i << "_" << j << "' align='left'>" << cellContent << "</td>";
                }
                else
                {
                    outFile << "<td></td>";
                }
            }
            outFile << "</tr>" << std::endl;
        }

        // 结束输出表格和DOT文件
        outFile << "    </table>" << std::endl;
        outFile << "    >];" << std::endl;
        outFile << "}" << std::endl;

        outFile.close();
    }

    vector<vector<edge>> getEdges()
    {
        vector<edge> actionTable; // action表,存放移进和规约操作
        vector<edge> gotoTable;   // goto表,存放状态转移操作

        for (const auto &from : table)
        {
            int from_state = from.first.first;
            int sign_id = from.first.second;
            if (sign_id == -1)
            {
                continue;
            }
            string sign = signs->getElement(sign_id);
            for (const auto &op : from.second)
            {
                edge e;
                e.start = from_state;
                e.end = op.n;
                e.sign = sign;
                if (op.op == s)
                {
                    e.action = "s";
                    actionTable.push_back(e);
                }
                else if (op.op == g)
                {
                    e.action = "g";
                    gotoTable.push_back(e);
                }
            }
        }
        // 遍历项目集，寻找规约边
        for (int i = 0; i < status.size(); i++)
        {
            for (const auto &item : status.getElement(i).items)
            {
                const Grammer &grammer = grammers.getElement(item.grammer);
                if (item.dot == grammer.grammer.size())
                {
                    //添加规约操作
                    edge e;
                    e.start = i;
                    e.end = -1;
                    e.sign = grammer.sign;
                    e.action = "r";
                    e.followTokens = vector<string>(item.next_sign.begin(),item.next_sign.end());
                    e.grammer = grammer;
                    actionTable.push_back(e);
                }
            }
        }

        return {actionTable, gotoTable};
    }
};
#pragma once