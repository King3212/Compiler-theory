#include<string>
#include<vector>
struct edge
{
    int begin;
    int end;
    std::string express;
};




class Gragh
{
private:
    
public:
    std::vector<edge> edges;
    int start;
    int end;
};

Gragh NFA(std::string re);

