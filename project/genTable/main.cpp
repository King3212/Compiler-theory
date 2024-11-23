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
void process(vector<Grammar> grammars){
    LALR1 lalr1 = LALR1(grammars);
    fstream file = fstream("./input/edge.txt", ios::out);
    file << lalr1.toString();
    file.close();
}

int main(){
    vector<Grammar> grammars = getGrammarFromFile("./input/grammar.txt");
    process(grammars);
    return 0;
}