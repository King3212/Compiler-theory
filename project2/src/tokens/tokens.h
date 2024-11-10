#include<vector>
#include<string>
#include<iostream>
#include<cstdlib>
#include<sstream>
#include"../File/File.h"
using namespace std;
#pragma once


class Tokens
{
private:
    vector<vector<string> *> *tokens;
public:
    Tokens(string path);
    ~Tokens();
    string getToken();
    void advanceToken();
    vector<string> *getTokens(int line);
    int line = 0;
    int pos = 0;
    bool isEmtpy()
    {
        return (line == tokens->size() && pos == tokens->at(line)->size());
    }
};

Tokens::Tokens(string path)
{
    if (system(("./getTokens "+path+" > token.txt").c_str())){
        cerr << "Error: getTokens failed" << endl;
        exit(1);
    }
    string line = readFile("token.txt")[0];
    istringstream ss(line);
    string token;
    vector<string> *lineTokens = new vector<string>();
    while (ss >> token)
    {
        lineTokens->push_back(token);
        if (token == "_enter")
        {
            tokens->push_back(lineTokens);
            lineTokens = new vector<string>();
        }
        
    }
}

Tokens::~Tokens()
{
    for (auto lineTokens : *tokens)
    {
        delete lineTokens;
    }
    delete tokens;
}

inline string Tokens::getToken()
{
    if (isEmtpy())
    {
        return "$";
    }
    
    string result = tokens->at(line)->at(pos);
    return result;
}

inline void Tokens::advanceToken()
{
    pos++;
    if (pos == tokens->at(line)->size())
    {
        line++;
        pos = 0;
    }
}

inline vector<string> *Tokens::getTokens(int line)
{
    return tokens->at(line);
}
