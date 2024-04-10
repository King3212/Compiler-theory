#include<Gragh.h>
#include<stack>

edge singleExpressIntoEdge(char singleExpress,int &size);

edge andConnet(edge first, edge second, int &size);

edge orConnet(edge first, edge second, int &size);

edge closePackage(edge data,int &size);



/**
 * 这个函数输入一个正则表达式，返回一个NFA图
*/
void Gragh::toNFA(std::string re){
    std::stack<edge> edges;
    std::stack<char> signal;
    Gragh result;
    int pos = 0;
    int size = 0;
    bool IsSignal = false;
    bool hasQ = false;
    edge tempEdge;
    while (pos < re.size())
    {
        if (re[pos] == '*')
        {
            
        }else if (re[pos == '|']){
            
        }else if (re[pos == '(']){
            
        }else if (re[pos == ')']){

        }else if (!IsSignal){
            
        }else{
            IsSignal = false;
            tempEdge = singleExpressIntoEdge(re[pos],size);
            // result.edges.push_back(tempEdge);
            if (re[pos+1] == '*')
            {
                edges.push(closePackage(tempEdge,size));
                result.edges.push_back(edges.top());
                pos++;
            }
        }
        
    }
    
}





