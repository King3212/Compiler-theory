/**
 * @file tokens.h
 * @brief 词法分析器的词法分析结果的数据结构
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

#include<vector>
#include<string>
#include<iostream>
#include<cstdlib>
#include<sstream>
#include"../../include/File/File.h"
using namespace std;
#pragma once
// 词法分析器的词法分析结果的数据结构
struct token
{
    string type;
    string value;
    string toString()
    {
        return type + " " + value;
    }
};

// 词法分析器读取词法分析结果的数据结构
class Tokens
{
private:
    int line = 0; // 当前行
    int pos = 0; // 当前列
    vector<vector<token> *> *tokens; // 词法分析结果
public:
    Tokens(string path) // 构造函数
    {   
        cout << "running dir: ";
        system("pwd");
        cout << endl;
        if (system(("./getTokens "+path+" > token.lex").c_str())){
            cerr << "Error: getTokens failed" << endl;
            exit(1);
        }
        vector<string> lines = readFile("token.lex");
        tokens = new vector<vector<token> *>();
        tokens->push_back(new vector<token>());
        for(auto line : lines){
            istringstream ss(line);
            string type;
            string value;
            while(ss >> type >> value){
                token t;
                t.type = type;
                t.value = value;
                tokens->back()->push_back(t);
            }
            if (!tokens->back()->empty() && tokens->back()->back().type == "enter"){
                tokens->push_back(new vector<token>());
            }
        }

    }
    ~Tokens() // 析构函数
    {
        for (auto lineTokens : *tokens)
        {
            delete lineTokens;
        }
        delete tokens;
    }
 
    token getToken() // 获取当前 token
    {
        if (isEmtpy())
        {
            token result;
            result.type = "$";
            result.value = "";
            return result;
        }
        
        token result = tokens->at(line)->at(pos);
        return result;
    }

    void advanceToken() // 移动到下一个 token
    {
        pos++;
        if (pos == tokens->at(line)->size())
        {
            line++;
            pos = 0;
        }
    }

    vector<vector<token>> getTokens() // 获取所有 token
    {
        vector<vector<token>> result;
        for (auto lineTokens : *tokens)
        {
            result.push_back(*lineTokens);
        }
        return result;
    }
    
    bool isEmtpy() // 判断是否为空
    {
        return (line == (*tokens).size());
    }
};

