/**
 * @file LR1.cpp
 * @brief LR1分析表生成模块的实现文件
 * 
 * @version 1.0
 * @date 2024-9-30
 * @auther 20222131044
 *  
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-9-30 | 20222131044 | 初始版本
 * 
 * 
 */

#include "LR1.h"

// 生成可空集合
State LR1::gotoState(State state, string sign) {
    State newState;
    IndexedSet<Item> items;

    for (auto& item : state.items) {
        // 如果点在产生式最后，无法移进
        if (item.dot == item.production.right.size()) {
            continue;
        }

        // 如果点后符号与 sign 匹配
        if (item.production.right[item.dot] == sign) {
            // 对 item 进行移进，并计算闭包
            Item advancedItem = item;
            advancedItem.dot++; // 点右移
            items.insert(advancedItem);
            IndexedSet<Item> closureItems;
            closure(advancedItem, closureItems);
            for (auto& closureItem : closureItems) {
                items.insert(closureItem);
            }
        }
    }

    // 更新新状态的项集
    newState.items = items;
    return newState;
}

// 生成DFA
void LR1::genDFA()
{
    // 添加虚拟产生式
    virtualGrammar.left = "S'";
    if(signs.contains("S'")){
        virtualGrammar.left+="'";
    }
    virtualGrammar.right.push_back(grammars[0].left);
    grammars.push_back(virtualGrammar);
    grammarMap[virtualGrammar.left].push_back(virtualGrammar);
    nonTerminals.insert(virtualGrammar.left);
    signs.insert(virtualGrammar.left);

    // 初始化状态
    State startState;
    IndexedSet<Item> items;
    for(auto g : grammarMap[virtualGrammar.left]){
        Item item;
        item.production = g;
        item.dot = 0;
        item.lookahead.insert("$");
        items.insert(item);
        IndexedSet<Item> closureItems;
        closure(item, closureItems);
        for(auto closureItem : closureItems){
            items.insert(closureItem);
        }
    }
    startState.items = items;
    states.insert(startState);
    // 递归生成DFA
    genDFArec(startState);
}

// 这个函数打印边
void LR1::printEdge()
{
    for(auto edge : edges){
        cout << edge.toString() << endl;
    }
}

// 这个函数打印状态信息
void LR1::printState()
{
    int i = 0;
    for(auto state : states){
        cout << "State: " << i << endl;
        for(auto item : state.items){
            cout << item.toString() << endl;
        }
        i++;
    }
}

// 生成.dot格式的图，使用graphviz生成图
string LR1::toGraph() {
    string result;
    result += "digraph G {\n";
    result += "    node [shape=box, style=rounded, color=lightblue, fontsize=12];\n";

    int stateId = 0;
    for (const auto& state : this->states) {
        result += "    State" + std::to_string(stateId) + " [label=<\n";
        result += "        <table border='0' cellborder='1' cellspacing='0' cellpadding='4'>\n"; // 增加单元格边距
        result += "            <tr><td bgcolor='lightgray'><b>State " + std::to_string(stateId) + "</b></td></tr>\n";

        for (const auto& item : state.items) {
            result += "            <tr><td align='left' cellpadding='2'>\n";
            result += "                <i>dot:</i> " + std::to_string(item.dot) + "<br align='left'/>\n";
            result += "                <i>production:</i> <br align='left'/>\n";
            result += "                &nbsp;&nbsp;&nbsp;&nbsp;<i>left:</i> " + item.production.left + "<br align='left'/>\n";
            string right = "";
            for(auto r : item.production.right)
            {
                right += r + " ";
            }
            result += "                &nbsp;&nbsp;&nbsp;&nbsp;<i>right:</i> " + right + "<br align='left'/>\n";
            string lookahead = "";
            for(auto l : item.lookahead)
            {
                lookahead += l + " ";
            }
            result += "                <i>lookahead:</i> " + lookahead + "\n";
            result += "            </td></tr>\n";
        }

        result += "        </table>>];\n";
        stateId++;
    }

    for (const auto& edge : this->edges) {
        if (edge.type == SHIFT || edge.type == GOTO) {
            result += "    State" + std::to_string(edge.from) + " -> State" + std::to_string(edge.to) + " [label=\"" + edge.sign + "\", fontsize=10];\n";
        }
    }

    result += "}\n";
    return result;
}


// 生成字符串
string LR1::toString()
{
    string result = "";
    for(auto edge : edges){
        result += edge.toString() + "\n";
    }
    return result;
}

// 获取FirstFollow集合
string LR1::getFirstFollow()
{
    string result = "";
    for(auto sign : nonTerminals){
        result += "\n\n[" + sign + "]\n\n";
        result += "First: ";
        for(auto firstSign : First[sign]){
            result += firstSign + " ";
        }
        result += "\n\n";
        result += "Follow: ";
        for(auto followSign : Follow[sign]){
            result += followSign + " ";
        }
        result += "\n";
    }
    return result;
}

// 这个函数生成 First 集合，需要先生成 nullable
// 存放在类的 First 成员中
void LR1::genFirst()
{

    for(auto sign : signs){
        if(nonTerminals.contains(sign)){
            First[sign] = IndexedSet<string>();
        }else{
            First[sign] = IndexedSet<string>();
            First[sign].insert(sign);
        }
    }
    bool updated = true;
    while(updated){
        updated = false;
        for(auto g : grammars){
            for(auto sign : g.right){
                for(auto firstSign : First[sign]){
                    if (First[g.left].contains(firstSign)){
                        continue;
                    }else{
                        First[g.left].insert(firstSign);
                        updated = true;
                    }
                }
                if(!nullable[sign]){
                    if (First[g.left].contains(sign)){
                        break;
                    }
                    First[g.left].insert(sign);
                    break;
                }
            }
        }
    }
}

// 这个函数生成 Follow 集合，需要先生成 First
// 存放在类的 Follow 成员中
void LR1::genFollow()
{
    for(auto sign : nonTerminals){
        Follow[sign] = IndexedSet<string>();
    }
    Follow[virtualGrammar.left].insert("$");
    bool updated = true;
    while(updated){
        updated = false;
        for(auto g : grammars){
            for(int i = 0; i < g.right.size(); i++){
                if(nonTerminals.contains(g.right[i])){
                    for(int j = i + 1; j < g.right.size(); j++){
                        for(auto firstSign : First[g.right[j]]){
                            if (Follow[g.right[i]].contains(firstSign)){
                                continue;
                            }else{
                                Follow[g.right[i]].insert(firstSign);
                                updated = true;
                            }
                        }
                        if(!nullable[g.right[j]]){
                            break;
                        }
                    }
                    if (i == g.right.size() - 1){
                        for(auto followSign : Follow[g.left]){
                            if (Follow[g.right[i]].contains(followSign)){
                                continue;
                            }else{
                                Follow[g.right[i]].insert(followSign);
                                updated = true;
                            }
                        }
                    }
                }
            }
        }
    }
}

// 这个函数生成 nullable 集合
// 存放在类的 nullable 成员中
void LR1::genNullable()
{
    for(auto sign : signs){
        nullable[sign] = false;
    }
    for(auto g : grammars){
        if(g.right[0] == "@"){
            nullable[g.left] = true;
        }
    }
    bool updated = true;
    while(updated){
        updated = false;
        for(auto g : grammars){
            if(nullable[g.left]){
                continue;
            }
            bool flag = true;
            for(auto sign : g.right){
                if(nullable[sign]){
                    continue;
                }else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                nullable[g.left] = true;
                updated = true;
            }
        }
    }
}

// 这个函数生成闭包
void LR1::closure(Item item, IndexedSet<Item> &result)
{
    if (item.dot == item.production.right.size())   // 点号已经到达末尾，不需要闭包
    {
        return;
    }else if(nonTerminals.contains(item.production.right[item.dot])){   // 如果点号后面是非终结符
        for(auto g : grammarMap[item.production.right[item.dot]]){  //展开非终结符
            Item newItem;
            newItem.production = g;
            if(g.right[0] == "@"){ // 如果是空产生式,则点在最后
                newItem.dot = 1;
            }else{
                newItem.dot = 0;
            }
            /**
             * A -> a.Bb, a
             * B -> b, lookahead
             * lookhead = First(ba)
             * */
            if (item.dot + 1 < item.production.right.size()) {  // 如果epsilon闭包的新项目的后面还有符号，计算lookahead
                IndexedSet<string> firstSet;
                vector<string> remainingSymbles(item.production.right.begin() + item.dot + 1, item.production.right.end());
                firstSet = getFirstSet(remainingSymbles, item.lookahead);
                for (auto firstSign : firstSet){
                    newItem.lookahead.insert(firstSign);
                }
            } else { // 如果epsilon闭包的新项目的后面没有符号,继承lookahead
                newItem.lookahead = item.lookahead;
            }
            if(result.contains(newItem)){
                continue;
            }else{
                result.insert(newItem);
                closure(newItem, result);
            }
            

            
        }
    }else{
        return;
    }
    return ;
}

/**
 * 遍历 remainingSymble 的符号：
 * 如果是 非终结符：
 * - 若该符号是可空的，将其 FIRST 集合全部插入。
 * - 若不可空，将其 FIRST 集合全部插入后直接返回。
 * 如果是 终结符，直接将该符号插入并返回。
 * 如果所有符号都为可空，将继续处理 oldLookahead。
 */
IndexedSet<string> LR1::getFirstSet(vector<string> remainingSymble, IndexedSet<string> oldLookahead)
{
    IndexedSet<string> result;
    
    for(auto sign : remainingSymble){
        if(nonTerminals.contains(sign)){
            for (auto firstSign : First[sign]){
                result.insert(firstSign);
            }
            if(!nullable[sign]){
                return result;
            }
        }else{
            string s = sign;
            result.insert(s);
            return result;
        }
    }
    for(auto sign : oldLookahead){
        result.insert(sign);
    }
    return result;
}

// 获得跳转集合
IndexedSet<string> LR1::getJumpSet(State &state)
{
    IndexedSet<string> result;
    for(auto item : state.items){
        if(item.dot == item.production.right.size()){
            continue;
        }
        result.insert(item.production.right[item.dot]);
    }
    return result;
}

// 生成DFA
void LR1::genDFArec(State &state)
{
    for (auto item : state.items)// 进行规约处理
    {
        if(item.dot == item.production.right.size()){   // 如果点在产生式最后,实现规约
            for (auto lookahead : item.lookahead)
            {
                Edge edge;
                edge.from = states.find(state);
                if(edge.from == -1){
                    cout << "error,当前项目未被插入？？？" << endl;
                    exit(1);
                }
                edge.to = -1;
                edge.sign = lookahead;
                edge.type = REDUCE;
                if(item.production.left == virtualGrammar.left && lookahead == "$"){
                    edge.type = ACCEPT;
                }
                edge.reduceProduction = item.production;
                edges.insert(edge);
            }
        }
    }
    IndexedSet<string> jumpSet = getJumpSet(state); // 获得跳转集合


    for (auto jump : jumpSet){  // 对于每一个跳转符号
        State newState;
        newState = gotoState(state, jump); // 获得新状态
        bool contains = states.contains(newState); // 判断新状态是否已经存在
        bool shift = !nonTerminals.contains(jump); // 是否是shift还是goto
        int to = states.insert(newState); // 插入新状态
        Edge edge;
        edge.from = states.find(state);
        edge.to = to;
        edge.sign = jump;
        edge.type = shift ? SHIFT : GOTO;
        edges.insert(edge);
        if(!contains){
            genDFArec(newState);
        }
    }

}