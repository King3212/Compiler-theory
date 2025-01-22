/**
 * @file globle.h
 * @brief 分析器的函数的实现
 * 
 * @version 1.0
 * @date 2024-9-30
 * @author 20222131044
 * 
 * @history
 * 版本 | 作者 | 日期 | 说明
 * ------|------|------|------
 * 1.0 | 20222131044 | 2024-9-30 | 初始版本
 */

#include "analyzer.h"
#include "sstream"
// 去除字符串两端空格
std::string trim(const std::string& str) {
    // 找到第一个非空格字符
    size_t start = str.find_first_not_of(" \t\n\r");
    // 找到最后一个非空格字符
    size_t end = str.find_last_not_of(" \t\n\r");
    // 如果字符串全是空格，直接返回空字符串
    return (start == std::string::npos) ? "" : str.substr(start, end - start + 1);
}
// 获取边
Edge Parser::getEdge(int from, string sign)
{
    for(auto edge : edges){
        if(edge.from == from && edge.sign == sign){
            return edge;
        }
    }
    cout << "error, no edge found" << endl;
    Edge error;
    error.type = ERROR;
    return error;
}
// 显示符号栈
string Parser::showSignStack()
{

    vector<string> temp;
    while (!signStack.empty())
    {
        temp.push_back(signStack.top());
        signStack.pop();
    }
    reverse(temp.begin(), temp.end());
    string result = "";
    result += "SignStack: \n";
    for (auto sign : temp)
    {
        result += sign + " ";
        signStack.push(sign);
    }
    return result;
}
// 读取边
void Parser::readEdges(string path)
{
    vector<string> lines = readFile(path);
    cout << lines.size() << endl;
    int i = 0;
    while(i < lines.size()){
        Edge edge;
        if (trim(lines[i]) == "Edge:")
        {
            i+=2;
            edge.from = stoi(trim(lines[i]));
            i+=2;
            edge.to = stoi(trim(lines[i]));
            i+=2;
            edge.sign = trim(lines[i]);
            i+=2;
            edge.type = (ActionType)stoi(trim(lines[i]));
            i+=4;
            Grammar g;
            g.left = trim(lines[i]);
            i+=2;
            string right = trim(lines[i]);
            stringstream ss(right);
            string temp;
            while (ss >> temp)
            {
                g.right.push_back(temp);
            }
            edge.reduceProduction = g;
            edges.insert(edge);

            i+=2;
            
        }else{
            i++;
        }
        
    }
        
}

// 构造函数
Parser::Parser(string path, vector<string> ignoreSigns, string signMapPath)
{
    readEdges(path);
    for(auto sign : ignoreSigns){
        this->ignoreSigns.insert(sign);
    }
    vector<string> lines = readFile(signMapPath);
    for(auto line : lines){
        stringstream ss(line);
        string sign;
        int code;
        ss >> code;
        while(ss >> sign){
            signMap[code] = sign;
            code ++;
        }
    }
}

// 获取日志
string Parser::getLog()
{
    return log;
}

// 获取语法树
Tree *Parser::getTree()
{
    return root;
}

// 解析
bool Parser::parse(string path)
{
    log = "";
    tokens = new Tokens(path);
    stateStack.push(0);
    while (true)
    {
        ActionType ac = action();
        if (ac == ACCEPT)
        {
            return true;
        }else if(ac == ERROR){
            log += "\n\nERROR\n\n";
            return false;
        }
    }
    return false;
}

// 动作
ActionType Parser::action()
{
    int state = stateStack.top();
    log += "state: " + to_string(state) + "\n";
    token oneToken = tokens->getToken();
    if (!(oneToken.type == "space" || oneToken.type == "enter" || oneToken.type == "tab" || oneToken.type == "$"))
    {
        oneToken.type = signMap[atoi(oneToken.type.c_str())];

    }
    while (ignoreSigns.contains(oneToken.type)) // 忽略符号
    {
        tokens->advanceToken();
        oneToken = tokens->getToken();
    }
    log += "token: " + oneToken.type + " " + oneToken.value + "\n";
    Edge edge = getEdge(state, oneToken.type);
    if (edge.type == SHIFT) // 移入
    {
        stateStack.push(edge.to);
        signStack.push(oneToken.type);
        Tree *t = new Tree();
        t->sign = oneToken.type;
        t->value = oneToken.value;
        treeStack.push(t);
        tokens->advanceToken();
        log += "shift\n"+ showSignStack() + "\n\n";
        return SHIFT;
    }else if(edge.type == REDUCE){ // 规约
        Grammar g = edge.reduceProduction;
        vector<Tree *> children;
        if (g.right[0] != "@"){
            for (int i = 0; i < g.right.size(); i++)
            {
                stateStack.pop();
                signStack.pop();
                Tree *t = treeStack.top();
                treeStack.pop();
                children.push_back(t);
            }
            reverse(children.begin(), children.end());
            Tree *t = new Tree();
            t->sign = g.left;
            t->children = children;
            treeStack.push(t);
        }else{
            Tree *t = new Tree();
            t->sign = g.left;
            t->value = "";
            treeStack.push(t);
            signStack.push(g.left);
        }
        // goto
        log += "reduce " + g.toString() + "\n" + showSignStack() + "\n\n";
        state = stateStack.top();
        Edge newEdge = getEdge(state, g.left);
        stateStack.push(newEdge.to);
        signStack.push(g.left);
        log += "goto: " + to_string(newEdge.to) + "\n" + showSignStack() + "\n\n"; 
        return REDUCE;
    }else if(edge.type == ACCEPT){ // 接受
        root = treeStack.top();
        log += "Accept\n";
        return ACCEPT;
    }
    return ERROR; // 错误
}
