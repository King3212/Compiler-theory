/**
 * @file LALR1.h
 * @brief LALR1分析表生成模块的头文件
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
#include"LR1.h"

using namespace std;
// LALR1 类
class LALR1:public LR1
{
private:
    bool sameCore(State s1, State s2); // 判断两个状态的核心是否相同
    void rebuild(); // 重构
    IndexedSet<State> newStates; // 新状态集合
public:
   LALR1(vector<Grammar> grammars):LR1(grammars){ // 构造函数
       genDFA(); // 生成DFA
       rebuild(); // 重构
   }
};

