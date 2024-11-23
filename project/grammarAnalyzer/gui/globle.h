#ifndef GLOBLE_H
#define GLOBLE_H



#include <string>
#include <unordered_set>
#include <vector>

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
        std::string result;
        result += std::to_string(begin) + " ";
        result += std::to_string(end) + " ";
        result += express;
        result += "\n";
        return result;
    }
    // 定义相等运算符
    bool operator==(const edge& other) const {
        return begin == other.begin && end == other.end && calEx == other.calEx && express == other.express;
    }

};

struct gragh
{
    int start;
    int end;
    int size;
    std::unordered_set<int>finalNodes;
    std::vector<edge> *edges;
    std::string name;
    gragh(){
        this->edges = new std::vector<edge>();
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

#endif // GLOBLE_H