#pragma execution_character_set("utf-8")
#include<string>
#include<vector>
#include<stack>
#include"scanner.h"
#include<unordered_set>
#include<map>
#include<algorithm>
#pragma once

enum sign{
    OR,
    AND,
    CL,//闭包
    PCL,//正闭包
    LQ,//左括号
    RQ,//右括号
    QM//选择
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
    std::string toString(){
        return std::to_string(begin) + "--- \'" + express + "\' -->" + std::to_string(end);
    }
    // 定义相等运算符
    bool operator==(const edge& other) const {
        return begin == other.begin && end == other.end && calEx == other.calEx && express == other.express;
    }

};
namespace std {
    template <>
    struct hash<edge> {
        std::size_t operator()(const edge& e) const {
            // 组合成员变量的哈希值
            std::size_t hashBegin = std::hash<int>()(e.begin);
            std::size_t hashEnd = std::hash<int>()(e.end);
            std::size_t hashCalEx = std::hash<bool>()(e.calEx);
            std::size_t hashExpress = std::hash<std::string>()(e.express);
            
            // 结合哈希值，生成最终的哈希值
            std::size_t hashCombined = hashBegin ^ (hashEnd << 1) ^ (hashCalEx << 2) ^ (hashExpress << 3);
            return hashCombined;
        }
    };
}

/**gragh
 * 这个数据结构储存着一个图的起始点以及规模
 * 还储存着这个图的所有边
*/
struct gragh
{
    int start;
    int end;
    int size;
    std::unordered_set<int>finalNodes;
    std::vector<edge> *edges;
    gragh(){
        this->edges = new std::vector<edge>();
        size = 0;
    }
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

    void aNewEdge(std::string x);
    void makeG(std::unordered_set<int> start,std::unordered_set<std::string>jumps, gragh G, std::unordered_set<edge> &result,std:: vector<std::unordered_set<int>> &nodeVec);
    void andConnet();
    void orConnet();
    void qmConnet();
    void closure();
    void positive_closure();

public:
    std::string reExpress;
public:
    void process(std::string reExpress){
        inGragh = new gragh();
        toNFA(reExpress);
    }
    void toDFA();
    void compressDFA();
    gragh getGragh(){
        return *inGragh;
    }
    ~Gragh(){
        delete inGragh;
    }
    std::string toString(){
        std::string result;
        for (auto e : *inGragh->edges){
            std::string str = "";
            if(inGragh->start == e.begin){
                str += "- ";
            }else{
                str += "  ";
            }//检查是否为入口
            if (inGragh->finalNodes.size() == 0 && e.begin == inGragh->end)
            {
                str += "+ ";
            }else if(inGragh->finalNodes.find(e.begin) != inGragh->finalNodes.end()){
                str += "+ ";
            }else{
                str += "  ";
            }//检查是否为出口
            //检查起点

            str += e.toString();
            //转换边
            
            if(inGragh->start == e.end){
                str += " -";
            }else{
                str += "  ";
            }//检查是否为入口
            if (inGragh->finalNodes.size() == 0 && e.end == inGragh->end)
            {
                str += " +";
            }else if(inGragh->finalNodes.find(e.end) != inGragh->finalNodes.end()){
                str += " +";
            }else{
                str += "  ";
            }//检查是否为出口
            //检查终点
            result += str;
            result.push_back('\n');
        }
        return result;
    }
    
};


