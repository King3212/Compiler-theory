#pragma execution_character_set("utf-8")
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
#include "IndexedSet.h"

// 定义 Grammer 结构体
struct Grammer
{
    std::string sign; // 文法符号
    std::vector<std::string> grammer; // 文法产生式

    // 重载 == 运算符
    bool operator==(const Grammer &other) const
    {
        return sign == other.sign && grammer == other.grammer;
    }
    Grammer() {
        sign = "";
        grammer = std::vector<std::string>();
    }
};

// 为 Grammer 特化 std::hash
namespace std
{
    template <>
    struct hash<Grammer>
    {
        size_t operator()(const Grammer &g) const
        {
            size_t h1 = hash<string>()(g.sign);
            size_t h3 = 0;
            for (const auto &s : g.grammer)
            {
                h3 ^= hash<string>()(s) + 0x9e3779b9 + (h3 << 6) + (h3 >> 2);
            }
            return h1 ^ h3;
        }
    };
}
using namespace std;
struct edge
{
    int start; // 起始状态
    int end; // 如果是shift操作，end是目标状态；如果是reduce操作，end是-1
    string sign; // 超前查看符号
    string action; // 动作
    vector<string> followTokens; // 规约时的后继符号
    Grammer grammer; // 规约时的文法
    
    string toString(){
        string res = "{ ";
        res += to_string(start) + ", ";
        res += to_string(end) + ", ";
        res += sign + ", ";
        res += action + ", ";
        res += "{ ";
        for(auto &s: followTokens){
            res += s + ", ";
        }
        res += "}, ";
        res += "{ ";
        res += grammer.sign + ", ";
        res += "{ ";
        for(auto &s: grammer.grammer){
            res += s + ", ";
        }
        res += "}";
        res += " }";

        return res;

    }
};

#pragma once