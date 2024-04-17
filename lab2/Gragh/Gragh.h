#include<string>
#include<vector>
#include<stack>
#include<scanner.h>
#pragma once

enum sign{
    OR,
    AND,
    CL,
    PCL,
    LQ,
    RQ,
};

/**edge
 * 这个数据结构记录着这条跳转边的起始点和跳转条件
 * express == "" 代表无条件边
 * calEx == false 代表不是计算边，用作子图的记录
 * 默认是空边
*/
struct edge
{
    int begin;
    int end;
    bool calEx;//是否为判定条件
    std::string express;
    edge(int begin = 0, int end = 0, bool calEx = true, std::string express = ""){
        this->begin = begin;
        this->end = end;
        this->calEx = calEx;
        this->express = express;
    }
};

/**result
 * 这个数据结构储存着一个正则表达式DFA图和它的正则表达式
 * 作为结果DFA图返回
*/
struct result
{
    std::string name;
    Gragh DFA;
};

/**gragh
 * 这个数据结构储存着一个图的起始点以及规模
 * 还储存着这个图的所有边
*/
struct gragh
{
    int start;
    int end;
    int size;
    std::vector<edge> *edges;
};

/**
 * 这个类储存着图
 * 提供处理图的函数
*/
class Gragh
{
private:
    gragh *inGragh;
    std::stack<edge> subG;
    std::stack<sign> signs;
    
private:
    void toNFA(std::string re);
    void toDFA();
    void compressDFA();

    void aNewEdge(std::string x);

    void andConnet();
    void orConnet();
    void closure();
    void positive_closure();
public:
    void process(std::string reExpress){
        inGragh = new gragh();
        toNFA(reExpress);
        toDFA;
        compressDFA();
    }
    gragh getGragh(){
        return *inGragh;
    }
    ~Gragh(){
        delete inGragh;
    }
};


