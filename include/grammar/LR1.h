/**
 * @file LR1.h
 * @brief LR1分析表生成模块的头文件
 * 
 * @version 1.0
 * @date 2024-9-30
 * @auther 20222131044
 *  
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-9-30 | 20222131044 | 初始版本
 * 
 * 
 */

#include"globle.h"
#include<map>
#include<set>
#include<iostream>
using namespace std;
#pragma once
class LR1
{
protected:
    Grammar virtualGrammar;  // 虚拟产生式
    vector<Grammar> grammars;  // 文法
    map<string, vector<Grammar>> grammarMap;  // 文法映射
    map<string, IndexedSet<string>> First;  // First 集合
    map<string, IndexedSet<string>> Follow;  // Follow 集合
    IndexedSet<State> states;  // 状态集合
    IndexedSet<string> signs; // 符号集合
    IndexedSet<string> nonTerminals; // 非终结符集合
    IndexedSet<Edge> edges; // 边集合
    map<string,bool> nullable; // 可空集合
public:
    LR1(vector<Grammar> grammars) // 构造函数
    {
        this->grammars = grammars;
        this->First = map<string, IndexedSet<string>>();
        this->Follow = map<string, IndexedSet<string>>();
        this->states = IndexedSet<State>();
        this->signs = IndexedSet<string>();
        this->nonTerminals = IndexedSet<string>();
        this->edges = IndexedSet<Edge>();
        this->nullable = map<string,bool>();

        for(auto &g: grammars){
            grammarMap[g.left].push_back(g);
            nonTerminals.insert(g.left);
            for(auto sign : g.right){
                signs.insert(sign);
            }
            signs.insert(g.left);
        }

        genNullable();
        genFirst();
        genFollow();

    }

    State gotoState(State state, string sign);  // 计算状态转移

    void genDFA();  // 生成DFA

    void printEdge();  // 打印边

    void printState();  // 打印状态

    string toGraph();  // 生成图

    string toString();  // 生成字符串

    string getFirstFollow();  // 获取FirstFollow集合
private:
    void genFirst();  // 生成First集合

    void genFollow();  // 生成Follow集合

    void genNullable();  // 生成Nullable集合

    void closure(Item item, IndexedSet<Item> &result);  // 闭包

    IndexedSet<string> getFirstSet(vector<string> remainingSymble,IndexedSet<string> oldLookahead);  // 获取First集合

    IndexedSet<string> getJumpSet(State &state);  // 获取跳转集合

    void genDFArec(State &state);  // 生成DFA
};