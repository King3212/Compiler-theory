/**
 * @file globle.h
 * @brief 定义了全局变量和函数
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


#pragma execution_character_set("utf-8")
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
#include "IndexedSet.h"
#include <unordered_set>
// 定义 grammar 结构体
#pragma once
using namespace std;
enum ActionType // 动作类型
{
    SHIFT,
    GOTO,
    REDUCE,
    ACCEPT,
    ERROR
};

// 定义文法结构体
struct Grammar{
    string left;
    vector<string> right;
    string toString();
    bool operator==(const Grammar &other) const;
    bool operator<(const Grammar &other) const;
};

// Grammar 的哈希函数
template<>
struct std::hash<Grammar> {
    std::size_t operator()(const Grammar& g) const {
        std::size_t h1 = std::hash<std::string>{}(g.left);
        std::size_t h2 = 0;
        for (const auto& r : g.right) {
            h2 ^= std::hash<std::string>{}(r) + 0x9e3779b9 + (h2 << 6) + (h2 >> 2);
        }
        return h1 ^ (h2 << 1);
    }
};


struct Item{
    int dot;
    Grammar production;
    IndexedSet<string> lookahead;
    bool operator==(const Item &other) const;
    string toString();
    bool operator<(const Item &other) const;
};

// Item 的哈希函数
template<>
struct std::hash<Item> {
    std::size_t operator()(const Item& item) const {
        std::size_t h1 = std::hash<int>{}(item.dot);
        std::size_t h2 = std::hash<Grammar>{}(item.production);
        std::size_t h3 = 0;
        for (const auto& l : item.lookahead) {
            h3 ^= std::hash<std::string>{}(l) + 0x9e3779b9 + (h3 << 6) + (h3 >> 2);
        }
        return h1 ^ (h2 << 1) ^ (h3 << 2);
    }
};

// 定义边结构体
struct Edge{
    int from;
    int to;
    string sign;
    ActionType type;
    Grammar reduceProduction;
    string toString();
    bool operator==(const Edge &other) const;
};

// Edge 的哈希函数
template<>
struct std::hash<Edge> {
    std::size_t operator()(const Edge& edge) const {
        std::size_t h1 = std::hash<int>{}(edge.from);
        std::size_t h2 = std::hash<int>{}(edge.to);
        std::size_t h3 = std::hash<std::string>{}(edge.sign);
        std::size_t h4 = std::hash<int>{}(static_cast<int>(edge.type)); // 假设 ActionType 可转为整数
        std::size_t h5 = std::hash<Grammar>{}(edge.reduceProduction);
        return h1 ^ (h2 << 1) ^ (h3 << 2) ^ (h4 << 3) ^ (h5 << 4);
    }
};

// 定义状态结构体
struct State{
    IndexedSet<Item> items;
    bool operator==(const State &other) const;
    bool operator<(const State &other) const;
};

// State 的哈希函数
template<>
struct std::hash<State> {
    std::size_t operator()(const State& state) const {
        std::size_t h = 0;
        for (const auto& item : state.items) {
            h ^= std::hash<Item>{}(item) + 0x9e3779b9 + (h << 6) + (h >> 2);
        }
        return h;
    }
};

