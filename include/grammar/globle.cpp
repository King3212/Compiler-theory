/**
 * @file globle.cpp
 * @brief 语法分析器的全局变量和函数的实现
 * 
 * @version 1.0
 * @date 2024-4-30
 * @auther 20222131044
 *  
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-4-30 | 20222131044 | 初始版本
 * 
 * 
 */

#include "globle.h"
// 去除字符串两端的空格
string Grammar::toString() 
{
    string result = "Grammar:\n";
    result += "left: \n" + left + "\n";
    result += "right: \n";
    for(auto sign : right){
        result += sign + " ";
    }
    result += "\n";
    return result;
}

bool Grammar::operator==(const Grammar &other) const
{
    return left == other.left && right == other.right;
}

bool Grammar::operator<(const Grammar &other) const
{
    return left < other.left || right < other.right;
}

bool Item::operator==(const Item &other) const
{
    return dot == other.dot && production == other.production && lookahead == other.lookahead;
}

// 将 Item 转为字符串
string Item::toString()
{
    string result = "Item:\n";
    result += "dot: \n" + to_string(dot) + "\n";
    result += "production: \n" + production.toString() + "\n";
    result += "lookahead: \n";
    for(auto sign : lookahead){
        result += sign + " ";
    }
    result += "\n";
    return result;
}

bool Item::operator<(const Item &other) const
{
    return dot < other.dot || production < other.production || lookahead < other.lookahead;
}

string Edge::toString()
{
    string result = "Edge:\n";
    result += "from: \n" + to_string(from) + "\n";
    result += "to: \n" + to_string(to) + "\n";
    result += "sign: \n" + sign + "\n";
    result += "type: \n" + to_string((int)(type)) + "\n";
    result += "reduceProduction: \n" + reduceProduction.toString() + "\n";
    return result;
}

bool Edge::operator==(const Edge &other) const
{
    return from == other.from && to == other.to && sign == other.sign && type == other.type && reduceProduction == other.reduceProduction;
}

bool State::operator==(const State &other) const
{
    return items == other.items;
}

bool State::operator<(const State &other) const
{
    return items < other.items;
}
