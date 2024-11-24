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
void process(vector<Grammar> grammars, string outputDir){
    LR1 lr1 = LR1(grammars);
    lr1.genDFA();
    fstream file = fstream(outputDir+"/LR1Edge.txt", ios::out);
    file << lr1.toString();
    file.close();

    LALR1 lalr1 = LALR1(grammars);
    file = fstream(outputDir+"/LALR1Edge.txt", ios::out);
    file << lalr1.toString();
    file.close();

    file = fstream(outputDir+"/FirstFollow.txt", ios::out);
    file << lr1.getFirstFollow();
    file.close();
}

int main(int argc, char const *argv[]){
    if (argc != 3){
        cerr << "Usage: " << argv[0] << " <grammar file>"<< "<output dir>" << endl;
        return 1;
    }
    vector<Grammar> grammars = getGrammarFromFile(argv[1]);
    process(grammars, argv[2]);
    return 0;
}