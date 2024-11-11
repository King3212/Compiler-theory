#include <vector>
#include <string>
#include "../tokens/tokens.h"
#include <iostream>
#include "../File/File.h"
#include "../grammar/LALR1.h"
#pragma once

using namespace std;

enum _action{
    shift,
    reduce,
    accept,
    error
};

vector<vector<edge>> readTables(string path);

struct tree
{
    string sign;
    vector<tree *> children;
};



class analyzer
{
private:
    Tokens *tokens;
    tree* syntaxTree;
    stack<int> stateStack;
    stack<string> signStack;
    stack<tree *> treeStack;
    vector<edge> gotoTable;
    vector<edge> actionTable;
    
public:
    analyzer(string path);
    ~analyzer();
private:
    void getEdges(string path);
    tree *analyzeSyntax();
    edge fromGotoTableFindEdge(int state, string sign);
    edge fromActionTableFindEdge(int state, string sign);
    _action analyze();
};

analyzer::analyzer(string path)
{
    tokens = new Tokens(path);
    vector<vector<edge>> tables = readTables("tables.txt");
    actionTable = tables[0];
    gotoTable = tables[1];
}

analyzer::~analyzer()
{
    delete tokens;
    delete syntaxTree;
}



_action analyzer::analyze()
{
    if(tokens->getToken() == "$" && stateStack.top() == 0 && signStack.size() == 1)
    {
        return accept;
    }
    int state = 0;
    state = stateStack.top();
    string sign = tokens->getToken();
    edge action = fromActionTableFindEdge(state, sign);
    if(action.action == "s") //移进,将当前token移入分析栈
    {
        stateStack.push(action.end);
        signStack.push(sign);
        tree *node = new tree();
        node->sign = sign;
        treeStack.push(node);
        tokens->advanceToken();
        printf("移进:%s\n", sign.c_str());
        return shift;
    }
    if (action.action == "r")//规约
    {
        Grammer grammer = action.grammer;
        vector<string> followTokens = action.followTokens;
        vector<tree *> children;
        for (int i = 0; i < grammer.grammer.size(); i++)
        {
            stateStack.pop();
            signStack.pop();
            tree *node = treeStack.top();
            treeStack.pop();
            children.push_back(node);
        }
        tree *node = new tree();
        node->sign = grammer.sign;
        node->children = children;
        treeStack.push(node);
        state = stateStack.top();
        edge gotoEdge = fromGotoTableFindEdge(state, grammer.sign);
        stateStack.push(gotoEdge.end);
        signStack.push(grammer.sign);
        printf("规约:%s\n", grammer.sign.c_str());
        return reduce;
    }
    
}