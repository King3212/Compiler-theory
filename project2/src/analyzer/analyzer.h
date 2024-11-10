#include <vector>
#include <string>
#include "../tokens/tokens.h"
#include <iostream>
#include "../File/File.h"
#include "../grammar/LALR1.h"
using namespace std;

struct tree
{
    string sign;
    vector<tree *> children;
};

class analyzer
{
private:
    Tokens *tokens;
    vector<edge> *edges;
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
    int fromGotoTableFindState(int state, string sign);
    int fromActionTableFindState(int state, string sign);

};

analyzer::analyzer(string path)
{
    tokens = new Tokens(path);
    
}

analyzer::~analyzer()
{
    delete tokens;
    delete edges;
    delete syntaxTree;
}

inline void analyzer::getEdges(string path)
{
    vector<vector<edge>> a = readEdgesFromFile(path);
    gotoTable = a[1];
    actionTable = a[0];
}



inline tree *analyzer::analyzeSyntax()
{
    
    
}
