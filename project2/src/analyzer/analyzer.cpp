#include "analyzer.h"
#include <vector>
#include <string>
#include <iostream>
#include "../File/File.h"
#include "../grammar/globle.h"
using namespace std;

vector<vector<edge>> readTables(string path) {
    vector<edge> actionTable; // action表,存放移进和规约操作
    vector<edge> gotoTable;   // goto表,存放状态转移操作
    vector<string> lines = readFile(path);
    bool isAction = true;
    for(auto &line: lines){
        if(line == "----------------------"){
            isAction = false;
            continue;
        }
        edge e;
        string start, end, sign, action;
        vector<string> followTokens;
        Grammer grammer;
        int index = 0;
        while(line[index] != ','){
            start += line[index];
            index++;
        }
        index += 2;
        while(line[index] != ','){
            end += line[index];
            index++;
        }
        index += 2;
        while(line[index] != ','){
            sign += line[index];
            index++;
        }
        index += 2;
        while(line[index] != ','){
            action += line[index];
            index++;
        }
        index += 2;
        while(line[index] != '}'){
            string token;
            while(line[index] != ','){
                token += line[index];
                index++;
            }
            followTokens.push_back(token);
            index += 2;
        }
        index += 2;
        while(line[index] != '}'){
            string token;
            while(line[index] != ','){
                token += line[index];
                index++;
            }
            grammer.sign = token;
            index += 2;
            while(line[index] != '}'){
                string token;
                while(line[index] != ','){
                    token += line[index];
                    index++;
                }
                grammer.grammer.push_back(token);
                index += 2;
            }
        }
        e.start = stoi(start);
        e.end = stoi(end);
        e.sign = sign;
        e.action = action;
        e.followTokens = followTokens;
        e.grammer = grammer;
        if(isAction){
            actionTable.push_back(e);
        }else{
            gotoTable.push_back(e);
        }
    }
    vector<vector<edge>> res;
    res.push_back(actionTable);
    res.push_back(gotoTable);
    return res;
}