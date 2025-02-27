/**
 * @file Gragh.h
 * @brief 定义了图的数据结构和处理图的类
 * 
 * @version 1.0
 * @date 2024-10-05
 * @author 20222131044
 * 
 * @history
 * 版本 | 作者 | 日期 | 说明
 * ------|------|------|------
 * 1.0 | 20222131044 | 2024-10-05 | 初始版本
 */


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


/**
 * @brief 边
 * 
 * @param begin 起始点
 * @param end 终点
 * @param calEx 是否为判定条件
 * @param express 跳转条件
 */
struct edgeForWA
{
    int begin;
    int end;
    bool calEx;//是否为判定条件
    std::string express;
    edgeForWA(int begin = 0, int end = 0, bool calEx = true, std::string express = ""){
        this->begin = begin;
        this->end = end;
        this->calEx = calEx;
        this->express = express;
    }
    std::string toString(){
        std::string result;
        result += std::to_string(begin) + " ";
        result += std::to_string(end) + " ";
        result += express;
        result += "\n";
        return result;
    }
    // 定义相等运算符
    bool operator==(const edgeForWA& other) const {
        return begin == other.begin && end == other.end && calEx == other.calEx && express == other.express;
    }

};
namespace std {
    template <>
    struct hash<edgeForWA> {
        std::size_t operator()(const edgeForWA& e) const {
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

/**
 * @brief 图
 * 
 * @param start 起始点
 * @param end 终点
 * @param size 节点数
 * @param finalNodes 终点集合
 * @param edges 边集
 * @param name 图名
 */
struct gragh
{
    int start;
    int end;
    int size;
    std::unordered_set<int>finalNodes;
    std::vector<edgeForWA> *edges;
    std::string name;
    gragh(){
        this->edges = new std::vector<edgeForWA>();
        size = 0;
    }
    std::string toString(){
        std::string result;
        result += "Gragh: \n";
        result += name + " ";
        result += std::to_string(start) + " ";
        result += std::to_string(size) + "\n";
        result += "ends: \n";
        for (auto e : finalNodes){
            result += std::to_string(e) + " ";
        }
        result += "\nedges: \n";
        for (auto e : *edges){
            result += e.toString();
        }
        result += "\n";
        return result;
    }
};


/**
 * @brief 图处理类
 */
class Gragh
{
private:
    gragh *inGragh;
    std::stack<edgeForWA> subG;
    std::stack<sign> signs;
    
private:
    void toNFA(std::string re);
    void aNewEdge(std::string x);
    void makeG(std::unordered_set<int> start,std::unordered_set<std::string>jumps, gragh G, std::unordered_set<edgeForWA> &result,std:: vector<std::unordered_set<int>> &nodeVec);
    void andConnet();
    void orConnet();
    void qmConnet();
    void closure();
    void positive_closure();

public:
    std::string reExpress;
public:
    /**
     * @brief 处理正则表达式
     * 
     * @param reExpress 正则表达式
     */
    void process(std::string reExpress){
        inGragh = new gragh();
        toNFA(reExpress);
    }
    void toDFA();
    void compressDFA();

    /**
     * @brief 获取图
     */
    gragh getGragh(){
        return *inGragh;
    }
    /**
     * @brief 获取图
     */
    ~Gragh(){
        delete inGragh;
    }

    /**
     * @brief 转换为字符串
     * 
     * @return std::string 字符串
     */
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


