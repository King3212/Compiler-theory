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
    string value;
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
    vector<string> ignoreSigns;
public:
    analyzer(string path, string ignorePath,string tablePath = "tables.txt");
    ~analyzer();
    void run();
private:
    void getEdges(string path);
    tree *analyzeSyntax();
    edge fromGotoTableFindEdge(int state, string sign);
    edge fromActionTableFindEdge(int state, string sign);
    _action analyze();
};

analyzer::analyzer(string path, string ignorePath, string tablePath = "tables.txt")
{
    tokens = new Tokens(path);
    ignoreSigns = readFile(ignorePath);
    vector<vector<edge>> tables = readTables(tablePath);
    actionTable = tables[0];
    gotoTable = tables[1];
}

analyzer::~analyzer()
{
    delete tokens;
    delete syntaxTree;
}

inline void analyzer::run()
{
    while (true)
    {
        _action action = analyze();
        if (action == error)
        {
            cout << "Error" << endl;
            break;
        }
        if (action == accept)
        {
            cout << "Accept" << endl;
            break;
        }
    }
}

inline edge analyzer::fromGotoTableFindEdge(int state, string sign)
{
    for(auto &edge: gotoTable){
        if(edge.start == state && edge.sign == sign){
            return edge;
        }
    }
    return edge();
}

inline edge analyzer::fromActionTableFindEdge(int state, string sign)
{
    for(auto &edge: actionTable){
        if(edge.start == state && edge.sign == sign){
            return edge;
        }
    }
    return edge();
}

_action analyzer::analyze()
{
    if(tokens->getToken().type == "$" && stateStack.top() == 0 && signStack.size() == 1)
    {
        return accept;
    }
    int state = 0;
    state = stateStack.top();
    string sign = tokens->getToken().type;

    //忽略需要忽略的符号
    while (find(ignoreSigns.begin(), ignoreSigns.end(), sign) != ignoreSigns.end())
    {
        tokens->advanceToken();
        sign = tokens->getToken().type;
    }
    
    edge action = fromActionTableFindEdge(state, sign);
    if(action.action == "s") //移进,将当前token移入分析栈
    {
        stateStack.push(action.end);
        signStack.push(sign);
        tree *node = new tree();
        node->sign = sign;
        node->value = tokens->getToken().value;
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