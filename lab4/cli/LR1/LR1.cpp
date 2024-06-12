#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <stack>
#include <string>
#include <iostream>
#include "IndexedSet.h"
#include "globle.h"
#include <fstream>

using namespace std;

enum _op
{
    s,
    j,
    g
};

struct operation
{
    _op op;
    int n;
    string next_sign;
};

struct Item
{
    int grammer;
    int dot;

    Item() : grammer(0), dot(0) {}
    Item(int grammer, int dot) : grammer(grammer), dot(dot) {}

    bool operator==(const Item &other) const
    {
        return grammer == other.grammer && dot == other.dot;
    }
};

namespace std
{
    template <>
    struct hash<Item>
    {
        size_t operator()(const Item &item) const
        {
            return hash<int>()(item.grammer) ^ (hash<int>()(item.dot) << 1);
        }
    };
}

struct Statu
{
    IndexedSet<Item> items;

    bool operator==(const Statu &other) const
    {
        return items == other.items;
    }

    Statu() : items(IndexedSet<Item>()) {}
};

namespace std
{
    template <>
    struct hash<Statu>
    {
        size_t operator()(const Statu &state) const
        {
            size_t hash_value = 0;
            for (const auto &item : state.items.elements)
            {
                hash_value ^= std::hash<Item>()(item) + 0x9e3779b9 + (hash_value << 6) + (hash_value >> 2);
            }
            return hash_value;
        }
    };
    template <>
    struct hash<pair<int, int>>
    {
        size_t operator()(const pair<int, int> &p) const
        {
            return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
        }
    };
}

class LR1
{
private:
    int SetsSize;
    int SignSize;

    IndexedSet<Statu> status;                                                     // 状态集合
    unordered_map<pair<int, int>, vector<operation>, hash<pair<int, int>>> table; // 生成的表
    IndexedSet<string> *NTsigns;                                                  // 非终结符集合
    IndexedSet<Grammer> grammers;                                                 // 文法
    IndexedSet<string> *signs;                                                    // 符号集合

public:
    void inputGrammers(IndexedSet<Grammer> grammers)
    {
        this->grammers = grammers;
        delete NTsigns;
        NTsigns = new IndexedSet<string>();
        for (auto grammer : grammers)
        {
            NTsigns->push_back(grammer.sign);
            signs->push_back(grammer.sign);
            for (auto i : grammer.grammer){
                signs->push_back(i);
            }
        }
        SignSize = signs->size();
    }

private:
    vector<Item> getNewItems(string sign)
    {
        vector<Item> result;
        Item one;
        for (int i = 0; i < NTsigns->size(); i++)
        {
            if (sign == (*NTsigns).getElement(i))
            {
                one.dot = 0;
                one.grammer = i;
                result.push_back(one);
            }
        }
        return result;
    }

    void closure(Statu &statu)
    {
        bool have_change = true;
        Grammer grammer;
        while (have_change)
        {
            have_change = false;
            for (auto item : statu.items)
            {
                grammer = grammers.getElement(item.grammer);
                if (item.dot == grammer.grammer.size())
                {
                    continue;
                }

                string sign = grammer.grammer[item.dot];
                if (NTsigns->contains(sign))
                {
                    for (auto i : getNewItems(sign))
                    {
                        if (!statu.items.contains(i))
                        {
                            statu.items.insert(i);
                            have_change = true;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
        }
    }
public:
    void work()
    {
        stack<int> notRead;    // 栈，用于存储尚未处理的状态
        Statu startStatu;      // 起始状态
        Item startItem;        // 起始项目
        startItem.grammer = 0; // S'->.S
        startItem.dot = 0;
        startStatu.items.insert(startItem); // 将起始项目插入到起始状态中
        closure(startStatu);                // 对起始状态进行闭包运算

        int startId = status.insert(startStatu); // 将起始状态插入到状态集合中，返回起始状态的ID
        notRead.push(startId);                   // 将起始状态ID压入栈中

        while (!notRead.empty())
        {
            int top_one = notRead.top();                   // 获取栈顶状态ID
            notRead.pop();                                 // 弹出栈顶状态ID
            Statu this_statu = status.getElement(top_one); // 获取对应的状态

            unordered_map<string, Statu> gotoMap; // GOTO映射，用于存储从当前状态通过某符号到达的新状态

            // 遍历当前状态中的每个项目
            for (auto item : this_statu.items)
            {
                Grammer this_grammer = grammers.getElement(item.grammer); // 获取项目对应的文法规则
                if (this_grammer.grammer.size() == item.dot)
                { // 如果点号在文法规则的末尾
                    operation op;
                    op.op = g;                                                          // 归约操作
                    op.n = item.grammer;                                                // 归约的文法规则ID
                    table[{top_one, (*NTsigns).find(this_grammer.sign)}].push_back(op); // 将归约操作添加到表中
                }
                else
                {                                                     // 点号不在文法规则的末尾
                    string nextSign = this_grammer.grammer[item.dot]; // 点号后的符号
                    Item nextItem = {item.grammer, item.dot + 1};     // 移动点号后的新项目
                    if (gotoMap.find(nextSign) == gotoMap.end())
                    { // 如果GOTO映射中不存在该符号
                        Statu newStatu;
                        gotoMap[nextSign] = newStatu; // 创建新的状态
                    }
                    gotoMap[nextSign].items.insert(nextItem); // 将新项目插入到新状态中
                }
            }

            // 遍历GOTO映射，处理每个符号对应的新状态
            for (auto &entry : gotoMap)
            {
                closure(entry.second);                   // 对新状态进行闭包运算
                int newId = status.insert(entry.second); // 将新状态插入到状态集合中，返回新状态的ID
                if (newId == status.size() - 1)
                {                        // 如果新状态是新插入的状态
                    notRead.push(newId); // 将新状态ID压入栈中
                }

                operation op;
                op.op = s;                                                  // 移入操作
                op.n = newId;                                               // 移入的新状态ID
                vector<operation> temp;
                
                auto it = table.find({top_one, (*signs).find(entry.first)});
                if (it != table.end())
                {
                    // 键存在，可以安全地访问对应的值
                    it->second.push_back(op);
                    // 进行进一步的操作
                }
                else
                {
                    temp = vector<operation>();
                    table[{top_one, (*signs).find(entry.first)}] = temp;
                    table[{top_one, (*signs).find(entry.first)}].push_back(op);
                }
                        }
        }
    }

public:
    LR1()
    {
        SetsSize = 100; // 假设最多有100个状态，可以根据实际情况调整
        SignSize = 10;  // 假设符号集合大小为10，可以根据实际情况调整
        NTsigns = new IndexedSet<std::string>();
        signs = new IndexedSet<std::string>();
    }
    void generateDFA(const string &filename)
    {
        ofstream file(filename);
        if (!file.is_open())
        {
            cerr << "Unable to open file: " << filename << endl;
            return;
        }

        file << "digraph DFA {" << endl;
        file << "    rankdir=LR;" << endl; // 从左到右的方向

        // 绘制状态节点
        for (int i = 0; i < status.size(); i++)
        {
            file << "    state" << i << " [label=\"";
            // 添加状态编号
            file << "S" << i << "\\n";

            // 添加状态中包含的项目信息
            for (const auto &item : status.getElement(i).items)
            {
                const Grammer &grammer = grammers.getElement(item.grammer);
                file << grammer.sign << " -> ";
                for (int j = 0; j < grammer.grammer.size(); j++)
                {
                    if (j == item.dot)
                        file << ".";
                    file << grammer.grammer[j] << " ";
                }
                if (item.dot == grammer.grammer.size())
                    file << ".";
                file << "\\n";
            }

            // 添加规约操作信息到到达文法末端的状态节点中
            bool is_end_state = true;
            for (const auto &item : status.getElement(i).items)
            {
                const Grammer &grammer = grammers.getElement(item.grammer);
                if (item.dot != grammer.grammer.size())
                {
                    is_end_state = false;
                    break;
                }
            }

            if (is_end_state)
            {
                file << "\\n规约操作 :\\n";
                for (const auto &from : table)
                {
                    int from_state = from.first.first;
                    int sign_id = from.first.second;
                    if (from_state == i)
                    {
                        for (const auto &op : from.second)
                        {
                            if (op.op == g)
                            {
                                const Grammer &grammer = grammers.getElement(op.n);
                                file << "用文法： " << grammer.sign << " -> ";
                                for (const auto &s : grammer.grammer)
                                {
                                    file << s << " ";
                                }
                                file << "规约\\n";
                            }
                        }
                    }
                }
            }

            file << "\"];" << endl;
        }

        // 绘制转换边
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
                if (op.op == s)
                {
                    file << "    state" << from_state << " -> " << "state" << op.n << " [label=\"" << sign << "\"];" << endl;
                }
            }
        }

        file << "}" << endl;
        file.close();
    }
};

int main()
{
    LR1 parser;

    // 定义文法规则
    IndexedSet<Grammer> grammers;
    grammers.insert({"S'", {"S"}});
    grammers.insert({"S", {"A", "+", "S"}});
    grammers.insert({"S", {"A"}});
    grammers.insert({"A", {"number", "*", "A"}});
    grammers.insert({"A", {"B"}});

    // 输入文法
    parser.inputGrammers(grammers);
    parser.work();
    // 执行解析器生成
    parser.generateDFA("DFA.gv");

    return 0;
}