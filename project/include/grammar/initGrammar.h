/**
 * @file initGrammar.h
 * @brief 从文件中读取文法
 * 
 * @version 1.0
 * @date 2024-6-30
 * @auther 20222131044
 *  
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-6-30 | 20222131044 | 初始版本
 * 
 * 
 */

#include"globle.h"
#include"../File/File.h"
#include<sstream>
using namespace std;


// 从文件中读取文法
vector<Grammar> getGrammarFromFile(string filename){
    cout << filename << endl;
    vector<Grammar> grammars;
    vector<string> lines;
    lines = readFile(filename);
    for(auto line : lines){
        Grammar grammar;
        stringstream ss(line);
        ss >> grammar.left;
        string temp;
        while(ss >> temp){
            if (temp == "->")
            {
                continue;
            }
            else if (temp == "|")
            {
                grammars.push_back(grammar);
                grammar.right.clear();
            }
            else
            {
                grammar.right.push_back(temp);
            }
            
        }
        grammars.push_back(grammar);
    }
    return grammars;
}