#include "LALR1.h"

/**
 * @file LALR1.cpp
 * @brief LALR1分析表生成模块的实现文件
 * 
 * @version 1.0
 * @date 2024-9-28
 * @auther 20222131044
 * 
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2023-9-28 | 20222131044 | 初始版本
 */
// 判断两个状态的核心是否相同
bool LALR1::sameCore(State s1, State s2) 
{
    if (s1.items.size() != s2.items.size())
    {
        return false;
    }
    for (auto item1 : s1.items)
    {
        bool find = false;
        for (auto item2 : s2.items)
        {
            if (item1.production == item2.production && item1.dot == item2.dot)
            {
                find = true;
                break;
            }
        }
        if (!find)
        {
            return false;
        }
    }
    return true;
}

// 重构
void LALR1::rebuild()
{
    map<int,int> indexMap;
    vector<bool> visited(states.size(), false);
    IndexedSet<int> visiting;
    while(true){
        int i  = 0;
        while (visited[i] == true && i < states.size())
        {
            i ++;
        }
        if (i == states.size())
        {
            break;
        }
        visiting.clear();
        visiting.insert(i);
        visited[i] = true;
        State newState = states.getElement(i);
        for (int j = i+1; j < states.size(); j++) // 寻找核心相同的状态
        {
            if(visited[j]){
                continue;
            }
            if(sameCore(newState, states.getElement(j))){
                visiting.insert(j);
                visited[j] = true;
            }
        }
        
        // 构建新状态，合并lookahead
        IndexedSet<Item> newItems;
        for (auto item : newState.items){
            Item newItem;
            newItem.dot = item.dot;
            newItem.production = item.production;
            for(auto sign: item.lookahead){
                newItem.lookahead.insert(sign);
            }
            for (int index: visiting){
                for (auto item2: states.getElement(index).items){
                    if (item2.production == item.production && item2.dot == item.dot){
                        for(auto sign: item2.lookahead){
                            newItem.lookahead.insert(sign);
                        }
                    }
                }
            }
            newItems.insert(newItem);
        }
        newState = State();
        newState.items = newItems;
        int newIndex = newStates.insert(newState);

        for (int index: visiting){
            indexMap[index] = newIndex;
        }
    }
    states.clear();
    // 更新状态
    for (auto state: newStates){
        states.insert(state);
    }
    newStates.clear();
    indexMap[-1] = -1;
    IndexedSet<Edge> newEdges;
    // 更新边
    for (auto edge: edges){
        Edge newEdge;
        newEdge.from = indexMap[edge.from];
        newEdge.to = indexMap[edge.to];
        newEdge.sign = edge.sign;
        newEdge.type = edge.type;
        newEdge.reduceProduction = edge.reduceProduction;
        newEdges.push_back(newEdge);
    }
    edges.clear();
    edges = newEdges;
}