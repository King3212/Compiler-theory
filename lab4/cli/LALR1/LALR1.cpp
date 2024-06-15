#include "LALR1.h"

int main()
{
    LR1 parser;
    First_Follow FF;
    vector<string> Grammers = {
        "S->A + S | A",
        "A->number * A | number",
    };
    FF.init(Grammers);
    // 定义文法规则
    IndexedSet<Grammer> grammers;
    for (auto &gram : FF.getGrammer())
    {
        Grammer one = Grammer();
        one.sign = gram[0];
        one.grammer = vector<string>(gram.begin() + 1, gram.end());
        grammers.insert(one);
    }

    // 输入文法
    parser.inputGrammers(grammers);
    parser.setFirst(FF.getFirst());
    parser.work();
    parser.generateDFA("DFA.gv");
    // 执行解析器生成
    LALR1 newparser;
    newparser.inputGrammers(grammers);
    newparser.setFirst(FF.getFirst());
    newparser.work();
    newparser.generateDFA("NewDFA.gv");
    newparser.printStateTable("table.dot");
    return 0;
}