#include"Gragh.h"
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
    this->subG = std::stack<edge>();
    int pos = 0;
    bool lastOneIsSign = true;//判断是否加入AND(真就不加)
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
            sign thisSign = dealSign(re[pos]);
            if (lastOneIsSign == false && thisSign == LQ)
            {
                signs.push(AND);
            }
            lastOneIsSign = true;
            
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
            if (!lastOneIsSign)
            {
                signs.push(AND);
            }
            lastOneIsSign = false;
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
    this->inGragh->start =  this->subG.top().begin;
    this->inGragh->end =  this->subG.top().end;
    this->reExpress = re;
    //检查边栈栈顶
}

void Gragh::aNewEdge(std::string x)
{
    int start = this->inGragh->size;
    (this->inGragh->size)++;
    int end = this->inGragh->size;
    (this->inGragh->size)++;
    //取新节点
    this->inGragh->edges->push_back(edge(start,end,true,x));
    this->subG.push(edge(start,end,true,x));
    //添加条件并压栈
}




void Gragh::andConnet()
{
    edge first,second;
    second = this->subG.top();
    this->subG.pop();
    first = subG.top();
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
 * 这个函数从starts出发,寻找所有的e闭包
*/
std::unordered_set<std::string> eclosure(std::unordered_set<int> &starts,gragh &G){
    std::unordered_set<std::string> jump;
    std::unordered_set<int> add;
    for(int start : starts){
        for(edge &e: *(G.edges)){
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
    if (add.size() != 0)
    {
        for(auto elem : eclosure(add,G)){
            jump.insert(elem);
        }
        for(auto elem : add){
            starts.insert(elem);
        }
    }
    
    return jump;
    
}
/**
 * 这个函数返回转换状态的终点闭包
*/
std::unordered_set<int> strJump(gragh G, std::string str, std::unordered_set<int> start){
    std::unordered_set<int> end;
    for (auto i : start)
    {
        for (auto e : *G.edges)
        {
            if (e.begin == i && str == e.express)
            {
                end.insert(e.end);
            }
            
        }
        
    }
    return end;
}

int search(std:: vector<std::unordered_set<int>> &nodeVec, std::unordered_set<int> state){
    for (int i = 0; i < nodeVec.size(); i++)
    {
        if (nodeVec[i] == state)
        {
            return i;
        }
        
    }
    return -1;
}

void Gragh::makeG(std::unordered_set<int> start,std::unordered_set<std::string>jumps, gragh G, std::unordered_set<edge> &result,std:: vector<std::unordered_set<int>> &nodeVec){
    std::unordered_set<std::string> nextjumps;
    for (auto j : jumps){
        std::unordered_set<int> finalstate = strJump(G,j,start);
        nextjumps = eclosure(finalstate,G);
        int Ne = search(nodeVec,finalstate);
        int Ns = search(nodeVec,start);
        

        if(Ne  != -1 && result.find(edge(Ns,Ne,true,j)) != result.end())//这既没有新节点也没有新边
        {
            continue;
        }else{
            if(Ne == -1){
                Ne = nodeVec.size();
                nodeVec.push_back(finalstate);

            }//结束点是新的，取点
            result.insert(edge(Ns,Ne,true,j));
            if (finalstate.find(G.end) != start.end())
            {
                inGragh->finalNodes.insert(Ne);
            }
            
            makeG(finalstate,nextjumps,G,result,nodeVec);
        }
    }
    
}

/**
 * 这个函数读入NFA图，得到一个DFA图
*/
void Gragh::toDFA(){
    gragh *oldG = this->inGragh;
    this->inGragh = new gragh();
    std::unordered_set<int> start = {oldG->start};
    std::unordered_set<std::string>jumps = eclosure(start,*oldG);
    std::unordered_set<edge> result;
    std:: vector<std::unordered_set<int>> nodeVec = {start};
    makeG(start,jumps,*oldG,result,nodeVec);
    for (auto e : result)
    {
        inGragh->edges->push_back(e);
    }
    inGragh->start = 0;
    inGragh->size = nodeVec.size();
    delete oldG;
}


bool cmpStr(const std::pair<int, std::string>& pair1, const std::pair<int, std::string>& pair2) {
    return pair1.second < pair2.second;
}

std::vector<std::vector<char>> GraghIntoMatrix();

/**
 * 这个函数输入一个DFA图，返回一个最小化的DFA图
*/
void Gragh::compressDFA(){
    std::vector<std::string> jumps; 
    //跳转集
    std::vector<std::unordered_set<int>*> closures11 = std::vector<std::unordered_set<int>*>();
    //终止状态闭包
    std::vector<std::unordered_set<int>*> closures00 = std::vector<std::unordered_set<int>*>();
    //非终止状态闭包
    std::vector<std::unordered_set<int>*> closures01 = std::vector<std::unordered_set<int>*>();
    //终止到非终止
    std::vector<std::unordered_set<int>*> closures10 = std::vector<std::unordered_set<int>*>();
    //非终止到终止


    for (auto e : *inGragh->edges){
        auto pos = std::find(jumps.begin(),jumps.end(),e.express);
        if(pos == jumps.end()){
            jumps.push_back(e.express);
            pos = std::find(jumps.begin(),jumps.end(),e.express);
            closures00.push_back(new std::unordered_set<int>());
            closures01.push_back(new std::unordered_set<int>());
            closures10.push_back(new std::unordered_set<int>());
            closures11.push_back(new std::unordered_set<int>());
        }//新出现的跳转就添加进跳转集
        if (inGragh->finalNodes.find(e.end) != inGragh->finalNodes.end() /*边的终点是终止状态*/)
        {
            if (inGragh->finalNodes.find(e.begin) != inGragh->finalNodes.end())
            {
                closures11[std::distance(jumps.begin(), pos)]->insert(e.begin);/*边的起点是终止状态*/
            }else{
                closures01[std::distance(jumps.begin(), pos)]->insert(e.begin);/*边的起点是非终止状态*/
            }
        }else/*边的终点是非终止状态*/
        {
            if (inGragh->finalNodes.find(e.begin) == inGragh->finalNodes.end() ){
                closures00[std::distance(jumps.begin(), pos)]->insert(e.begin);/*边的起点是非终止状态*/
            }else{
                closures10[std::distance(jumps.begin(), pos)]->insert(e.begin);/*边的起点是终止状态*/
            }
        }
    }
    //寻找所有闭包
    std::vector<std::pair<int,std::string>> *nodes = new std::vector<std::pair<int,std::string>>(inGragh->size);
    for (int nPos = 0; nPos < inGragh->size; nPos++)
    {
        (*nodes)[nPos].first = nPos;
        for (int jPos = 0; jPos < jumps.size(); jPos++)
        {
            if (inGragh->finalNodes.find(jPos)!= inGragh->finalNodes.end())//节点是终止状态
            {

                if (closures11[jPos]->find(nPos) != closures11[jPos]->end())
                {
                    (*nodes)[nPos].second += "1";
                }else{
                    (*nodes)[nPos].second += "0";
                }
                if (closures10[jPos]->find(nPos) != closures10[jPos]->end())
                {
                    (*nodes)[nPos].second += "1";
                }else{
                    (*nodes)[nPos].second += "0";
                }
                
                //在closure11和closure10中搜索是否在其中,结果加入二进制串
            }else{//节点是非终止状态
                if (closures01[jPos]->find(nPos) != closures01[jPos]->end())
                {
                    (*nodes)[nPos].second += "1";
                }else{
                    (*nodes)[nPos].second += "0";
                }
                if (closures00[jPos]->find(nPos) != closures00[jPos]->end())
                {
                    (*nodes)[nPos].second += "1";
                }else{
                    (*nodes)[nPos].second += "0";
                }
                //在closure01和closure00中搜索是否在其中,结果加入二进制串
            }
            
        }
        
    }
    
    //使用一个jumps.size()*2位的二进制数,标识所有结点的属性(每个跳转首位为终止,次位为非终止)

    gragh *oldG = this->inGragh;
    this->inGragh = new gragh();
    //创建新图

    std::sort(nodes->begin(),nodes->end(),cmpStr);
    std::vector<std::vector<int>> unionVec;
    std::string lastOne = "";
    for (int nPos = 0; nPos < nodes->size(); nPos++)
    {
        if ((*nodes)[nPos].second != lastOne)
        {
            if (oldG->finalNodes.find((*nodes)[nPos].first) != oldG->finalNodes.end())
            {
                inGragh->size = unionVec.size();
            }
            unionVec.push_back((std::vector<int>){(*nodes)[nPos].first});
            
            
        }else{
            unionVec[unionVec.size()-1].push_back((*nodes)[nPos].first);
        }
        
    }
    //如果属性相同,则两个节点可以合并(终止状态和非终止状态分离),得到合并集合
    
    inGragh->size = unionVec.size();
    std::unordered_set<edge> *edgeSet = new std::unordered_set<edge>(0);
    //创建节点集合数个节点和边集

    for (auto e : *oldG->edges){//遍历边
        int stB = 0;//记录开始集合
        int stE = 0;//记录结束集合
        for (auto vec : unionVec){//遍历集合
            bool Break = false;
            for (auto node: vec){
                if (e.begin == node)
                {
                    Break = true;
                    break;
                }
                
            }
            if (Break)
            {
                break;
            }else{
                stB++;
            }
            
        }
        

        for (auto vec : unionVec){//遍历集合
            bool Break = false;
            for (auto node: vec){
                if (e.end == node)
                {
                    Break = true;
                    break;
                }
                
            }
            if (Break)
            {
                break;
            }else{
                stE++;
            }
            
        }
        for (int node: unionVec[stE]){
            if (oldG->finalNodes.find(node)!= oldG->finalNodes.end())
            {
                inGragh->finalNodes.insert(stE);
            }
            
        }
        for (int node: unionVec[stB]){
            if (oldG->start== node)
            {
                inGragh->start = stB;
            }
            
        }

        edgeSet->insert(edge(stB,stE,true,e.express));
    }
    //遍历边,添加到边集中
    delete oldG;
    for (auto e : *edgeSet){
        inGragh->edges->push_back(e);
    }
    //将边集中的边添加到图中
}


