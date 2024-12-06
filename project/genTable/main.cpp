/**
 * @file main.cpp
 * @brief 定义了图的数据结构和处理图的类
 * 
 * @version 1.0
 * @date 2024-9-25
 * @author 20222131044
 * 
 * @history
 * 版本 | 作者 | 日期 | 说明
 * ------|------|------|------
 * 1.0 | 20222131044 | 2024-9-25 | 初始版本
 */

#include"../include/grammar/LALR1.h"
#include"../include/grammar/LR1.h"
#include"../include/grammar/globle.h"
#include"../include/grammar/initGrammar.h"
#include<vector>
#include<string>
#include<map>
#include<fstream>
#include"../include/File/File.h"



using namespace std;
// 处理文法
void process(vector<Grammar> grammars, string outputDir){

    // 输出LR1 DFA
    LR1 lr1 = LR1(grammars);
    lr1.genDFA();
    ofstream file(outputDir+"/LR1DFA.dot");
    if (file.fail()){
        cerr << "Failed to open file: " << outputDir+"/LR1DFA.dot" << endl;
        return;
    }
    file << lr1.toGraph();
    file.close();

    // 输出LALR1 分析表
    LALR1 lalr1 = LALR1(grammars);
    file = ofstream(outputDir+"/LALR1Edge.txt");
    if (file.fail()){
        cerr << "Failed to open file: " << outputDir+"/LALR1Edge.txt" << endl;
        return;
    }
    file << lalr1.toString();
    file.close();

    // 输出LALR1 DFA
    file = ofstream(outputDir+"/LALR1DFA.dot");
    if (file.fail()){
        cerr << "Failed to open file: " << outputDir+"/LALR1DFA.dot" << endl;
        return;
    }
    file << lalr1.toGraph();
    file.close();

    // 输出FirstFollow集合
    file = ofstream(outputDir+"/FirstFollow.txt");
    if (file.fail()){
        cerr << "Failed to open file: " << outputDir+"/FirstFollow.txt" << endl;
        return;
    }
    file << lr1.getFirstFollow();
    file.close();
    cout <<"edgeOutputDIR: "+outputDir << endl;


}
// 从文件中读取文法，返回文法集合
int main(int argc, char const *argv[]){
    if (argc != 3){
        cerr << "Usage: " << argv[0] << " <grammar file>"<< "<output dir>" << endl;
        return 1;
    }
    
    vector<Grammar> grammars = getGrammarFromFile(argv[1]);
    process(grammars, argv[2]);
    return 0;
}