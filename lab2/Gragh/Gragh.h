#include<string>
#include<vector>
#include<scanner.h>
#pragma once
struct edge
{
    int begin;
    int end;
    std::string express;
};

struct result
{
    std::string name;
    Gragh DFA;
};

struct gragh
{
    int start;
    int end;
    int size;
    std::vector<edge> edges;
};

class Gragh
{
private:
    gragh *inGragh;

private:
    void toNFA(std::string re);
    void toDFA();
    void compressDFA();
public:
    gragh process(std::string reExpress){
        inGragh = new gragh();
        toNFA(reExpress);
        toDFA;
        compressDFA();
        return *inGragh;
    }
    ~Gragh(){
        delete inGragh;
    }
};


