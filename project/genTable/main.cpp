#include"../include/grammar/LALR1.h"
#include"../include/grammar/LR1.h"
#include"../include/grammar/globle.h"
#include"../include/grammar/First_Follow.h"
#include<vector>
#include<string>
#include"../include/File/File.h"


void writeTables(vector<vector<edge>> edges, string path); // 写入表格到文件

using namespace std;
void process(vector<string> grammars){
    LR1 parser;
    First_Follow FF;
    FF.init(grammars);
    IndexedSet<Grammer> grammers;
    for (auto &gram : FF.getGrammer())
    {
        Grammer one = Grammer();
        one.sign = gram[0];
        one.grammer = vector<string>(gram.begin() + 1, gram.end());
        grammers.insert(one);
    }

    // 执行LR1生成
    parser.inputGrammers(grammers);
    parser.setFirst(FF.getFirst());
    parser.work();

    // 执行LALR1生成
    LALR1 newparser;
    newparser.inputGrammers(grammers);
    newparser.setFirst(FF.getFirst());
    newparser.work();

    // 输出表
    vector<vector<edge>>edges = newparser.getEdges();
    writeTables(edges,"./input/tables.txt");
}

int main(){
    vector<string> grammars = readFile("./input/grammer.txt");
    process(grammars);
    return 0;
}

void writeTables(vector<vector<edge>> edges, string path) {
    ofstream file(path); // 打开文件
    if (!file.is_open()) { // 检查文件是否成功打开
        // 如果文件无法打开，向用户报告错误并返回空向量
        Error(0);
    }
    vector<edge> actionTable; // action表,存放移进和规约操作
    vector<edge> gotoTable;   // goto表,存放状态转移操作
    actionTable = edges[0];
    gotoTable = edges[1];
    for(auto &e: actionTable){
        file << e.toString() << endl;
    }
    file << "----------------------" << endl;
    for(auto &e: gotoTable){
        file << e.toString() << endl;
    }

}