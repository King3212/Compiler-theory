#include<Gragh.h>
#include<stack>

edge singleExpressIntoEdge(char singleExpress,int &size);

edge andConnet(edge first, edge second, int &size);

edge orConnet(edge first, edge second, int &size);

edge closePackage(edge data,int &size);


/**
 * 这个函数输入一个正则表达式，返回一棵计算树
*/
tree makeTree(std::string re){
    std::string singleops = "*?";
    std::string doubleops = "|";
    std::string specialops = "[{("
}

/**
 * 这个函数输入一个正则表达式，返回一个NFA图
*/
void Gragh::toNFA(std::string re){
    this->inGragh->edges;
    int pos = 0;
    int size = 0;
    bool IsSignal = false;
    int hasQ = 0;
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
            
        }
        
    }
    
}

std::vector<std::vector<char>> GraghIntoMatrix();

/**
 * 这个函数输入一个DFA图，返回一个最小化的DFA图
*/
void Gragh::compressDFA(){
    
}

/**
 * 这个函数输入一个NFA图，返回一个DFA图
*/
void Gragh::toDFA(){
}





