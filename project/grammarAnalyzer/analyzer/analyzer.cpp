#include "analyzer.h"
using namespace std;


// 分割字符串的辅助函数
vector<string> splitString(const string& str, char delimiter) {
    vector<string> result;
    stringstream ss(str);
    string token;
    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}

// 去除字符串前后的空白字符
string trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\r\n");
    if (first == string::npos) return "";  // 空字符串
    size_t last = str.find_last_not_of(" \t\r\n");
    return str.substr(first, last - first + 1);
}

// 从文件中读取数据并解析为 action 和 goto 表
vector<vector<edge>> readTables(const string& path) {
    vector<edge> actionTable;
    vector<edge> gotoTable;
    ifstream file(path);
    if (!file.is_open()) {
        cerr << "Failed to open file: " << path << endl;
        return {};
    }

    string line;
    bool isAction = true;

    // 读取文件的每一行
    while (getline(file, line)) {
        line = trim(line);  // 去除前后空格

        // 判断是否是分隔符
        if (line == "----------------------") {
            isAction = false;
            continue;
        }

        // 如果是一个 JSON 对象的开始
        if (line.front() == '{') {
            edge e;

            // 解析 start
            getline(file, line);
            e.start = stoi(trim(line.substr(line.find(":") + 1)));

            // 解析 end
            getline(file, line);
            e.end = stoi(trim(line.substr(line.find(":") + 1)));

            // 解析 sign
            getline(file, line);
            e.sign = trim(line.substr(line.find(":") + 2, line.length() - 3));

            // 解析 action
            getline(file, line);
            e.action = trim(line.substr(line.find(":") + 2, line.length() - 3));

            // 解析 followTokens
            getline(file, line);
            string followStr = trim(line.substr(line.find(":") + 2));
            followStr = followStr.substr(1, followStr.length() - 2); // 去掉 "[" 和 "]"
            e.followTokens = splitString(followStr, ',');

            // 解析 grammer
            // 读取 grammer 的 sign
            getline(file, line);
            string grammerSign = trim(line.substr(line.find(":") + 2, line.length() - 3));
            e.grammer.sign = grammerSign;

            // 读取 grammer 的 grammer 数组
            getline(file, line);
            string grammerStr = trim(line.substr(line.find(":") + 2));
            grammerStr = grammerStr.substr(1, grammerStr.length() - 2); // 去掉 "[" 和 "]"
            e.grammer.grammer = splitString(grammerStr, ',');

            // 跳过最后的 "}"
            getline(file, line);

            // 添加到相应的表
            if (isAction) {
                actionTable.push_back(e);
            } else {
                gotoTable.push_back(e);
            }
        }
    }

    file.close();

    vector<vector<edge>> res = {actionTable, gotoTable};
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
    if(stateStack.size() > 0)
        state = stateStack.top();
    else 
        state = 0;
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