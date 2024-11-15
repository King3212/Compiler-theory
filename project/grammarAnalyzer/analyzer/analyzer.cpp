#include "analyzer.h"
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


analyzer::analyzer(string path, string ignorePath, string tablePath)
{
    tokens = new Tokens(path);
    ignoreSigns = readFile(ignorePath);
    if (ignoreSigns.size() == 0)
    {
        printf("ignore.txt is empty\n");
    }
    
    vector<vector<edge>> tables = readTables(tablePath);
    if (tables.size() != 2)
    {
        printf("tables.txt is not correct\n");
    }
    
    actionTable = tables[0];
    gotoTable = tables[1];
}

analyzer::~analyzer()
{
    delete tokens;
    delete syntaxTree;
}

void analyzer::run()
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