#include <vector>
#include <string>
#include <iostream>
#include <stack>
#include <algorithm>

#include "../tokens/tokens.h"
#include "../../include/File/File.h"
#include "../../include/grammar/globle.h"
#pragma once

using namespace std;
struct Tree
{
    string sign;
    string value;
    vector<Tree *> children;
};

class Parser
{
private:
    IndexedSet<Edge> edges;
    stack<int> stateStack;
    stack<string> signStack;
    stack<Tree *> treeStack;
    Tokens *tokens;
    Tree *root;
    IndexedSet<string> ignoreSigns;

    Edge getEdge(int from, string sign);
    string showSignStack();
    ActionType action();
    void readEdges(string path);
public:
    Parser(string edgesPath, vector<string> ignoreSigns);
    Tree *getTree();
    vector<vector<token> *> *getTokens();
    void parse(string srcPath);
};