#ifndef GLOBLE_H
#define GLOBLE_H



#include <string>
#include <unordered_set>
#include <vector>

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

struct graghForWA
{
    int start;
    int end;
    int size;
    std::unordered_set<int>finalNodes;
    std::vector<edgeForWA> *edges;
    std::string name;
    graghForWA(){
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

#endif // GLOBLE_H
