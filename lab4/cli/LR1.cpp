#include <vector>
#include <unordered_set>
#include <stack>
#include <string>
#include <iostream>
#include "IndexedSet.h"
#include "globle.hh"
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

    // 默认构造函数
    Item() : grammer(0), dot(0) {}

    // 带参数的构造函数
    Item(int grammer, int dot) : grammer(grammer), dot(dot) {}

    // 重载 == 运算符以便于在unordered_map中使用
    bool operator==(const Item &other) const
    {
        return grammer == other.grammer && dot == other.dot;
    }
};

// 自定义哈希函数以便于在unordered_map中使用Item
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

    // 重载 == 运算符
    bool operator==(const Statu &other) const
    {
        return items == other.items;
    }
};

class LR1
{
private:
    int SetsSize;
    int SignSize;

    IndexedSet<Statu> status;               // 状态集合
    vector<vector<vector<operation>>> *table; // 生成的表
    IndexedSet<string> *NTsigns;            // 非终结符集合
    IndexedSet<Grammer> grammers;           // 文法
    IndexedSet<string> *signs;              // 符号集合

public:
    void inputGrammers(IndexedSet<Grammer> grammers)
    {
        this->grammers = grammers;
        delete NTsigns;
        delete table;
        NTsigns = new IndexedSet<string>();
        for (auto grammer : grammers)
        {
            NTsigns->push_back(grammer.sign);
        }
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

    void work()
    {
        stack<int> notRead;
        Statu startStatu;
        Item startItem;
        startItem.grammer = 0; // S'->.S
        startItem.dot = 0;
        startStatu.items.insert(startItem);
        closure(startStatu);

        int startId = status.insert(startStatu);
        notRead.push(startId);

        while (!notRead.empty())
        {
            int top_one = notRead.top();
            notRead.pop();
            Statu this_statu = status.getElement(top_one);

            unordered_map<string, Statu> gotoMap;

            for (auto item : this_statu.items)
            {
                Grammer this_grammer = grammers.getElement(item.grammer);
                if (this_grammer.grammer.size() == item.dot)
                {
                    operation op;
                    op.op = g;
                    op.n = item.grammer;
                    (*table)[top_one][(*NTsigns).find(this_grammer.sign)].push_back(op);
                }
                else
                {
                    string nextSign = this_grammer.grammer[item.dot];
                    Item nextItem = {item.grammer, item.dot + 1};
                    if (gotoMap.find(nextSign) == gotoMap.end())
                    {
                        Statu newStatu;
                        gotoMap[nextSign] = newStatu;
                    }
                    gotoMap[nextSign].items.insert(nextItem);
                }
            }

            for (auto &entry : gotoMap)
            {
                closure(entry.second);
                int newId = status.insert(entry.second);
                if (newId == status.size() - 1)
                {
                    notRead.push(newId);
                }

                operation op;
                op.op = s;
                op.n = newId;
                (*table)[top_one][(*signs).find(entry.first)].push_back(op);
            }
        }
    }
public:
    LR1()
    {
        table = new std::vector<std::vector<std::vector<operation>>>();
        NTsigns = new IndexedSet<std::string>();
        signs = new IndexedSet<std::string>();
    }

    /* 析构函数 */
    ~LR1()
    {
        delete table;
        delete NTsigns;
        delete signs;
    }

    vector<vector<vector<operation>>> getTable(){
        return *table;
    }
};

// 生成 .gv 文件并调用 Graphviz 工具绘制 DFA 图
void generateDFA(const std::vector<std::vector<std::vector<operation>>> &table, const std::string &filename)
{
    // 打开 .gv 文件
    std::fstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    // 写入 .gv 文件的内容
    file << "digraph DFA {" << std::endl;
    file << "    rankdir=LR;" << std::endl;
    file << "    node [shape=circle];" << std::endl;
    file << "    start [shape=point];" << std::endl;
    file << "    start -> S0;" << std::endl;

    // 添加 DFA 图的节点和边
    for (size_t i = 0; i < table.size(); ++i)
    {
        for (size_t m = 0; m < table[i].size(); ++m)
        {
            for (const auto &op : table[i][m])
            {
                std::string op_str;
                switch (op.op)
                {
                case s:
                    op_str = "shift";
                    break;
                case j:
                    op_str = "jump";
                    break;
                case g:
                    op_str = "goto";
                    break;
                default:
                    op_str = "unknown";
                    break;
                }
                file << "    S" << i << " -> S" << op.n;
                if (!op.next_sign.empty())
                {
                    file << " [label=\"" << op.next_sign << ", " << op_str << "\"];" << std::endl;
                }
                else
                {
                    file << " [label=\"" << op_str << "\"];" << std::endl;
                }
            }
        }
    }

    // 添加接受状态
    file << "    S" << table.size() - 1 << " [shape=doublecircle];" << std::endl;

    // 关闭文件
    file << "}" << std::endl;
    file.close();

    // 调用 Graphviz 工具将 .gv 文件转换为图形文件
    std::string command = "dot -Tpng " + filename + " -o " + filename + ".png";
    int result = system(command.c_str());
    if (result != 0)
    {
        std::cerr << "Error: Failed to generate DFA image." << std::endl;
    }
    else
    {
        std::cout << "DFA image generated successfully: " << filename << ".png" << std::endl;
    }
}

int main()
{
    LR1 parser;

    // 定义文法规则
    IndexedSet<Grammer> grammers;
    grammers.insert({"S'", {"S"}});
    grammers.insert({"S", {"A"}});
    grammers.insert({"A", {"a", "A"}});
    grammers.insert({"A", {"b"}});

    // 输入文法
    parser.inputGrammers(grammers);

    // 执行解析器生成
    generateDFA(parser.getTable(),"DFA");

    // 输出生成的解析表或其他结果
    // 假设有一个方法可以打印解析表
    // parser.printParsingTable();

    return 0;
}


