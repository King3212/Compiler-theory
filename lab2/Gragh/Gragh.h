#include<string>
#include<vector>
#include<scanner.h>
#pragma once

/**
 * 这是一颗计算树
*/
struct tree
{
    tree* l;
    tree* r;
    char op;
    bool singleOp;
};


/**edge
 * 这个数据结构记录着这条跳转边的起始点和跳转条件
 * express = "" 代表无条件边
*/
struct edge
{
    int begin;
    int end;
    std::string express;
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
    std::vector<edge> edges;
};

/**
 * 这个类储存着
*/
class Gragh
{
private:
    gragh *inGragh;

private:
    void toNFA(std::string re);
    void toDFA();
    void compressDFA();
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


