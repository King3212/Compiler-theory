/**
 * @file globle.h
 * @brief 分析器的函数的声明
 * 
 * @version 1.0
 * @date 2024-9-25
 * @author 20222131044
 * 
 * @history
 * 版本 | 作者 | 日期 | 说明
 * ------|------|------|------
 * 1.0 | 20222131044 | 2024-9-30 | 初始版本
 */
#include <vector>
#include <string>
#include <iostream>
#include <stack>
#include <algorithm>
#include <map>
#include "../tokens/tokens.h"
#include "../../include/File/File.h"
#include "../../include/grammar/globle.h"
#pragma once

using namespace std;
struct Tree // 语法树
{
    string sign;
    string value;
    vector<Tree *> children;
};

class Parser // 分析器
{
private:
    map<int, string> signMap;  // 符号映射
    IndexedSet<Edge> edges;  // 边集合
    stack<int> stateStack;  // 状态栈
    stack<string> signStack;  // 符号栈
    stack<Tree *> treeStack;  // 语法树栈
    Tokens *tokens;  // 词法分析结果
    Tree *root;  // 语法树根节点
    IndexedSet<string> ignoreSigns;  // 忽略符号集合

    Edge getEdge(int from, string sign);  // 获取边
    string showSignStack();  // 显示符号栈
    ActionType action();  // 动作
    void readEdges(string path);  // 读取边

    
    string log;  // 日志
public:
    Parser(string edgesPath, vector<string> ignoreSigns, string signMapPath);  // 构造函数
    string getLog();  // 获取日志
    Tree *getTree();  // 获取语法树
    bool parse(string srcPath);  // 解析
};

std::string trim(const std::string& str);  // 去除字符串两端空格