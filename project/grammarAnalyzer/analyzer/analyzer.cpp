#include "analyzer.h"
#include "sstream"
std::string trim(const std::string& str) {
    // 找到第一个非空格字符
    size_t start = str.find_first_not_of(" \t\n\r");
    // 找到最后一个非空格字符
    size_t end = str.find_last_not_of(" \t\n\r");
    // 如果字符串全是空格，直接返回空字符串
    return (start == std::string::npos) ? "" : str.substr(start, end - start + 1);
}

Edge Parser::getEdge(int from, string sign)
{
    for(auto edge : edges){
        if(edge.from == from && edge.sign == sign){
            return edge;
        }
    }
    cout << "error, no edge found" << endl;
    exit(1);
}

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

void Parser::readEdges(string path)
{
    vector<string> lines = readFile(path);
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

Parser::Parser(string path, vector<string> ignoreSigns)
{
    readEdges(path);
    for(auto sign : ignoreSigns){
        this->ignoreSigns.insert(sign);
    }
}

string Parser::getLog()
{
    return log;
}

Tree *Parser::getTree()
{
    return root;
}
void Parser::parse(string path)
{
    log = "";
    tokens = new Tokens(path);
    stateStack.push(0);
    while (true)
    {
        ActionType ac = action();
        if (ac == ACCEPT)
        {
            break;
        }else if(ac == ERROR){
            log += "\n\nERROR\n\n";
            break;
        }
    }
    log += "Accept\n";
}

ActionType Parser::action()
{
    int state = stateStack.top();
    log += "state: " + to_string(state) + "\n";
    token oneToken = tokens->getToken();
    while (ignoreSigns.contains(oneToken.type))
    {
        tokens->advanceToken();
        oneToken = tokens->getToken();
    }
    log += "token: " + oneToken.type + " " + oneToken.value + "\n";
    Edge edge = getEdge(state, oneToken.type);
    
    if (edge.type == SHIFT)
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
    }else if(edge.type == REDUCE){
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
            t->value = "@";
            treeStack.push(t);
            signStack.push(g.left);
        }
        log += "reduce:\t" + g.toString() + "\n" + showSignStack() + "\n\n";
        state = stateStack.top();
        Edge newEdge = getEdge(state, g.left);
        stateStack.push(newEdge.to);
        signStack.push(g.left);
        log += "goto: " + to_string(newEdge.to) + "\n" + showSignStack() + "\n\n";
        return REDUCE;
    }else if(edge.type == ACCEPT){
        root = treeStack.top();
        return ACCEPT;
    }
    return ERROR;
}
