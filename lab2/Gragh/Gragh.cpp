#include<Gragh.h>
#include<stack>



bool isSign(char x){
    for (auto i : "*+()|")
    {
        if(i == x) return true;
    }
    return false;
}

sign dealSign(char sign)
{
    if (sign == '*'){
        return CL;
    }else if(sign == '+'){
        return PCL;
    }else if(sign == '('){
        return LQ;
    }else if(sign == ')'){
        return RQ;
    }else if(sign == '|'){
        return OR;
    }
}



/**
 * 这个函数输入一个正则表达式，返回一个NFA图
*/
void Gragh::toNFA(std::string re){
    
    std::vector<edge>*edges = this->inGragh->edges;
    int pos = 0;
    bool lastOneIsSign = false;//判断是否加入AND
    bool turn;//判断是否转义
    while (pos < re.size())
    {
        turn = false;
        if (re[pos] == '\\')
        {
            turn = true;
            pos++;
        }
        if (!turn && isSign(re[pos]))//正常符号识别
        {
            lastOneIsSign = true;
            sign thisSign = dealSign(re[pos]);
            //得到目前情况
            if (thisSign == RQ || (thisSign == OR && signs.top() == AND))
            {
                sign one;
                bool thisLQ = thisSign == RQ;
                while (!signs.empty())
                {
                    one = signs.top();
                    signs.pop();
                    
                    if (one == LQ)
                    {
                        if (thisLQ)
                        {
                            thisLQ = false;
                            continue;
                        }else break;
                    }else if (one == OR)
                    {
                        orConnet();
                    }else if (one == AND){
                        andConnet();
                    }
                }
                if (thisSign == OR)
                {
                    signs.push(thisSign);
                }
            }//出栈
            else if(thisSign == CL){
                closure();
            }else if(thisSign == PCL){
                positive_closure();
            }else if(thisSign == LQ || thisSign == OR){
                signs.push(thisSign);
            }
            //检查出栈情况

            pos++;
        }else//当作元素处理
        {
            lastOneIsSign = false;
            if (!lastOneIsSign)
            {
                signs.push(AND);
            }
            aNewEdge(re.substr(pos,1));
            //添加新边
            pos++;
        }
    }
    sign one;
    while (!signs.empty())
    {
        one = signs.top();
        signs.pop();

        if (one == OR)
        {
            orConnet();
        }else if (one == AND){
            andConnet();
        }
    }
    //出栈
}

std::vector<std::vector<char>> GraghIntoMatrix();

/**
 * 这个函数输入一个DFA图，返回一个最小化的DFA图
*/
void Gragh::compressDFA(){
    
}

void Gragh::aNewEdge(std::string x)
{
    int start = this->inGragh->size;
    (this->inGragh->size)++;
    int end = this->inGragh->size;
    (this->inGragh->size)++;
    //取新节点
    this->inGragh->edges->push_back(edge(start,end,true,x));
    //添加条件并压栈
}

void Gragh::makeGraph()
{

}

void Gragh::andConnet()
{
    edge first,second;
    first = this->subG.top();
    this->subG.pop();
    second = subG.top();
    this->subG.pop();
    //取出栈中前两个元素
    this->inGragh->edges->push_back(edge(first.end,second.begin));
    //添加空边
    subG.push(edge(first.begin,second.end));
    //压栈
}

void Gragh::orConnet()
{
    edge first,second;
    first = this->subG.top();
    this->subG.pop();
    second = subG.top();
    this->subG.pop();
    //取出栈中前两个元素
    int start = this->inGragh->size;
    (this->inGragh->size)++;
    int end = this->inGragh->size;
    (this->inGragh->size)++;
    //取新节点
    this->inGragh->edges->push_back(edge(start,first.begin));
    this->inGragh->edges->push_back(edge(start,second.begin));
    this->inGragh->edges->push_back(edge(first.end,end));
    this->inGragh->edges->push_back(edge(second.end,end));
    //添加空边
    subG.push(edge(start,end,false));
    //压栈
}

void Gragh::closure()
{
    edge ele;
    ele = this->subG.top();
    this->subG.pop();
    //取出栈中一个元素
    int start = this->inGragh->size;
    (this->inGragh->size)++;
    int end = this->inGragh->size;
    (this->inGragh->size)++;
    //取新节点
    this->inGragh->edges->push_back(edge(start,ele.begin));
    this->inGragh->edges->push_back(edge(start,end));
    this->inGragh->edges->push_back(edge(ele.end,ele.begin));
    this->inGragh->edges->push_back(edge(ele.end,end));
    //添加空边
    subG.push(edge(start,end,false));
    //压栈
}

void Gragh::positive_closure()
{
    edge ele;
    ele = this->subG.top();
    this->subG.pop();
    //取出栈中一个元素
    int start = this->inGragh->size;
    (this->inGragh->size)++;
    int end = this->inGragh->size;
    (this->inGragh->size)++;
    //取新节点
    this->inGragh->edges->push_back(edge(start,ele.begin));
    this->inGragh->edges->push_back(edge(ele.end,ele.begin));
    this->inGragh->edges->push_back(edge(ele.end,end));
    //添加空边
    subG.push(edge(start,end,false));
    //压栈
}

/**
 * 这个函数从starts出发,寻找所有的str闭包
 * 将str闭包添加到starts中
 * 返回所有可能从starts跳转条件
*/
std::unordered_set<std::string> eclosure(std::unordered_set<int> &starts,gragh &G){
    std::unordered_set<std::string> jump;
    std::unordered_set<int> add;
    for(int start : starts){
        for(edge e: *(G.edges)){
            if (e.begin == start && e.calEx == true)
            {
                if (e.express == "")
                {
                    add.insert(e.end);
                }else{
                    jump.insert(e.express);
                }
                
                
            }
            
        }
    }
    for(auto elem : eclosure(add,G)){
        jump.insert(elem);
    }
    for(auto elem : add){
        starts.insert(elem);
    }
}

/**
 * 这个函数从起点开始调用eclosure函数
 * 开出一个jump大的vector数组jumps
 * 遍历图,得到满足jump
*/


/**
 * 这个函数输入一个NFA图，返回一个DFA图
*/
void Gragh::toDFA(){
    gragh *oldG = this->inGragh;

    this->inGragh = new gragh();


}





