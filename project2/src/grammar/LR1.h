#pragma execution_character_set("utf-8")
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <stack>
#include <string>
#include <iostream>
#include "IndexedSet.h"
#include "globle.h"
#include <fstream>
#include "First_Follow.h"
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
    IndexedSet<string> next_sign;
};

struct Item
{
    int grammer;
    int dot;
    bool is_epsilon; // 是否是空串

    Item() : grammer(0), dot(0), is_epsilon(false) {}
    Item(int grammer, int dot, bool is_epsilon = false) : grammer(grammer), dot(dot), is_epsilon(is_epsilon) {}

    IndexedSet<string> next_sign;

    bool operator==(const Item &other) const
    {
        return grammer == other.grammer && dot == other.dot && is_epsilon == other.is_epsilon;
    }
};

namespace std
{
    template <>
    struct hash<Item>
    {
        size_t operator()(const Item &item) const
        {
            size_t hash_value = 0;
            hash_value ^= hash<int>()(item.grammer) + 0x9e3779b9 + (hash_value << 6) + (hash_value >> 2);
            hash_value ^= hash<int>()(item.dot) + 0x9e3779b9 + (hash_value << 6) + (hash_value >> 2);

            for (const auto &sign : item.next_sign)
            {
                hash_value ^= hash<string>()(sign) + 0x9e3779b9 + (hash_value << 6) + (hash_value >> 2);
            }

            return hash_value;
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

namespace std
{
    template <>
    struct hash<IndexedSet<string>>
    {
        size_t operator()(const IndexedSet<string> &iset) const
        {
            size_t hash_value = 0;
            for (const auto &elem : iset.elements)
            {
                hash_value ^= hash<string>()(elem) + 0x9e3779b9 + (hash_value << 6) + (hash_value >> 2);
            }
            return hash_value;
        }
    };

    template <>
    struct hash<IndexedSet<Item>>
    {
        size_t operator()(const IndexedSet<Item> &set) const
        {
            size_t hash_value = 0;
            for (const auto &item : set.elements)
            {
                hash_value ^= std::hash<Item>()(item) + 0x9e3779b9 + (hash_value << 6) + (hash_value >> 2);
            }
            return hash_value;
        }
    };
}

class LR1
{
protected:
    int SetsSize;
    int SignSize;
    Grammer virtualGram;                                                          // 虚拟文法
    IndexedSet<Statu> status;                                                     // 状态集合
    unordered_map<pair<int, int>, vector<operation>, hash<pair<int, int>>> table; // 生成的表
    IndexedSet<string> *NTsigns;                                                  // 非终结符集合
    IndexedSet<Grammer> grammers;                                                 // 文法
    IndexedSet<string> *signs;                                                    // 符号集合
    map<string, vector<string>> FirstSet;                                         // First集合
    
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
            for (auto i : grammer.grammer)
            {
                signs->push_back(i);
            }
        }
        SignSize = signs->size();
    }

protected:
    vector<Item> getNewItems(string sign)
    {
        vector<Item> result;
        Item one;
        for (int i = 0; i < grammers.size(); i++)
        {
            if (sign == grammers.getElement(i).sign)
            {
                one = Item();
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
        while (have_change)
        {
            have_change = false;
            unordered_set<Item> new_items;
            for (const auto &item : statu.items)
            {
                const Grammer &grammer = grammers.getElement(item.grammer);
                if (item.dot == grammer.grammer.size())
                {
                    continue; // 忽略已经到达末尾的项目
                }

                const string &sign = grammer.grammer[item.dot];
                if (NTsigns->contains(sign))
                {
                    vector<Item> items_to_add = getNewItems(sign);
                    for (auto &new_item : items_to_add)
                    {
                        // 如果是空串，标记为是空串的项目
                        bool is_epsilon = (grammer.grammer.size() == 1 && grammer.grammer[0] == "@");
                        new_item.is_epsilon = is_epsilon;

                        // 传递后继查看符号
                        for (const auto &next_sign : item.next_sign)
                        {
                            new_item.next_sign.insert(next_sign);
                        }

                        if (!statu.items.contains(new_item))
                        {
                            new_items.insert(new_item);
                            have_change = true;
                        }
                    }
                }
            }
            for (const auto &new_item : new_items)
            {
                statu.items.insert(new_item);
            }
        }
    }

public:
    void work()
    {
        // 初始化状态
        stack<int> notRead;
        Statu startStatu;
        Item startItem;
        // 添加一个虚拟开始文法
        // S' -> S
        // 如果文法开始符号是S'，则继续添加S'' -> S'，以此类推
        // 如果规约到S'，且缓冲区无内容，则接受
        virtualGram.grammer.push_back(grammers.getElement(0).sign);
        virtualGram.sign = "S'";
        while (NTsigns->contains(virtualGram.sign))
        {
            virtualGram.sign += "'";
        }
        NTsigns->push_back(virtualGram.sign);
        signs->push_back(virtualGram.sign);
        startItem.grammer = grammers.insert(virtualGram);
        startItem.dot = 0;
        startItem.next_sign.insert("$"); // 初始化后继查看符号

        // 如果文法开始符号的产生式右侧是空串，特殊处理
        if (virtualGram.grammer.size() == 1 && virtualGram.grammer[0] == "@")
        {
            startItem.is_epsilon = true;
        }

        startStatu.items.insert(startItem);
        closure(startStatu);
        calNextSign(startStatu);
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
                if (item.dot == this_grammer.grammer.size())
                {
                    operation op;
                    op.op = g;
                    op.n = item.grammer;
                    table[{top_one, (*NTsigns).find(this_grammer.sign)}].push_back(op);
                }
                else
                {
                    string nextSign = this_grammer.grammer[item.dot];
                    Item nextItem = {item.grammer, item.dot + 1};
                    nextItem.next_sign = item.next_sign;
                    nextItem.is_epsilon = item.is_epsilon; // 传递是否是空串的信息

                    // 处理空串对状态转移的影响
                    if (nextItem.is_epsilon)
                    {
                        operation op;
                        op.op = j;
                        op.n = top_one;
                        table[{top_one, (*signs).find(nextSign)}].push_back(op);
                    }
                    else
                    {
                        if (gotoMap.find(nextSign) == gotoMap.end())
                        {
                            Statu newStatu;
                            gotoMap[nextSign] = newStatu;
                        }
                        gotoMap[nextSign].items.insert(nextItem);
                    }
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
                vector<operation> temp;

                auto it = table.find({top_one, (*signs).find(entry.first)});
                if (it != table.end())
                {
                    it->second.push_back(op);
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

    void calNextSign(Statu &one)
    {
        Statu oldOne;
        do
        {
            oldOne = one;
            for (auto &item : one.items)
            {

                string thisword = grammers.getElement(item.grammer).sign;
                for (auto &findItem : one.items)
                {
                    Grammer tempGram = grammers.getElement(findItem.grammer);
                    for (int i = 0; i < tempGram.grammer.size(); ++i)
                    {
                        if (i == tempGram.grammer.size() - 1)
                        {
                            // 从最后一个元素是这个元素的项中继承超前查看符号
                            if (tempGram.grammer[i] == thisword)
                            {
                                for (auto &nextSign : findItem.next_sign)
                                {
                                    item.next_sign.insert(nextSign);
                                }
                            }
                        }
                        else
                        {
                            // 在项中的位置
                            if (tempGram.grammer[i] == thisword)
                            {
                                // 对first集合求并集
                                for (auto &First : FirstSet[tempGram.grammer[i + 1]])
                                {
                                    item.next_sign.insert(First);
                                }
                            }
                        }
                    }
                }
            }

        } while (!(oldOne == one));
    }

    void setFirst(map<string, set<string>> firstSet)
    {
        for (auto &i : firstSet)
        {
            vector<string> temp = vector<string>();
            for (auto &first : i.second)
            {
                temp.push_back(first);
            }
            FirstSet[i.first] = temp;
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
        file << "    rankdir=TB;" << endl; // 从上到下的方向
        file << "    node [shape=box, style=filled, \
         fillcolor=white, fontname=\"Arial\", fontsize=12];"
             << endl;

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
                file << "  {";
                for (auto it = item.next_sign.begin(); it != item.next_sign.end(); ++it)
                {
                    file << *it;
                    if (std::next(it) != item.next_sign.end())
                    {
                        file << ", ";
                    }
                }
                file << "}";
                file << "\\n";
            }

            // 添加规约操作信息到到达文法末端的状态节点中
            bool is_end_state = false;
            for (const auto &item : status.getElement(i).items)
            {
                const Grammer &grammer = grammers.getElement(item.grammer);
                if (item.dot == grammer.grammer.size())
                {
                    is_end_state = true;
                    break;
                }
            }

            if (is_end_state)
            {
                file << "\\n规约操作 :\\n";
                for (const auto &from : table)
                {
                    int from_state = from.first.first;
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
