#include<vector>
#include<string>
#include<iostream>
#include<cstdlib>
#include<sstream>
#include"../../include/File/File.h"
using namespace std;
#pragma once

struct token
{
    string type;
    string value;
};


class Tokens
{
private:
    int line = 0;
    int pos = 0;
    vector<vector<token> *> *tokens;
public:
    Tokens(string path)
    {
        system("pwd");
        if (system(("./build/getTokens "+path+" > token.txt").c_str())){
            cerr << "Error: getTokens failed" << endl;
            exit(1);
        }
        vector<string> lines = readFile("token.txt");
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
            if (tokens->back()->back().type == "_enter"){
                tokens->push_back(new vector<token>());
            }
        }
        
    }
    ~Tokens()
    {
        for (auto lineTokens : *tokens)
        {
            delete lineTokens;
        }
        delete tokens;
    }

    token getToken()
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

    void advanceToken()
    {
        pos++;
        if (pos == tokens->at(line)->size())
        {
            line++;
            pos = 0;
        }
    }

    vector<token> *getTokens(int line)
    {
        return tokens->at(line);
    }
    
    bool isEmtpy()
    {
        return (line == tokens->size() && pos == tokens->at(line)->size());
    }
};

