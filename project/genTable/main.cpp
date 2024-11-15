#include"../include/grammar/LALR1.h"
#include"../include/grammar/LR1.h"
#include"../include/grammar/globle.h"
#include"../include/grammar/First_Follow.h"
#include<vector>
#include<string>
#include"../include/File/File.h"
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
    writeTables(edges,"tables.txt");
}

int main(){
    vector<string> grammars = readFile("grammer.txt");
    process(grammars);
    return 0;
}