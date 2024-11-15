#include <vector>
#include <string>
#include <iostream>
#include <stack>
#include <algorithm>
#include "../tokens/tokens.h"
#include "../File/File.h"
#include "../globle.h"
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
    analyzer(string path, string ignorePath,string tablePath = "../inputFiles/tables.txt");
    ~analyzer();
    void run();
private:
    void getEdges(string path);
    edge fromGotoTableFindEdge(int state, string sign);
    edge fromActionTableFindEdge(int state, string sign);
    _action analyze();
};
