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
vector<Grammar> getGrammarFromFile(string filename, map<string, int> &signs){
    /**
     * 文件输入格式
     * == token ==
     * 1000 if else ...
     * 500 + - ...
     * 
     * 
     * == grammar ==
     * E -> E + T | T
     * T -> T * F | F
     * 
     * output:
     * E -> E + T | T
     * T -> T * F | F
     */



    cout << filename << endl;
    vector<Grammar> grammars;
    vector<string> lines;
    lines = readFile(filename);
    signs.clear();
    // 读取终结符编码，并记录下文法开始的位置
    int start = 0;
    for(int i = 0; i < lines.size(); i++){
        if (lines[i] == "") continue;
        if (lines[i] == "== grammar =="){
            start = i;
            break;
        }
        stringstream ss(lines[i]);
        string sign;
        int code;
        ss >> code;
        while(ss >> sign){
            signs[sign] = code;
            code ++;
        }
    }
    lines.erase(lines.begin(), lines.begin() + start + 1);


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