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
    ofstream file(outputDir+"/LR1Edge.txt");
    if (file.fail()){
        cerr << "Failed to open file: " << outputDir+"/LR1Edge.txt" << endl;
        return;
    }
    file << lr1.toString();
    file.close();


    LALR1 lalr1 = LALR1(grammars);
    file = ofstream(outputDir+"/LALR1Edge.txt");
    if (file.fail()){
        cerr << "Failed to open file: " << outputDir+"/LALR1Edge.txt" << endl;
        return;
    }
    file << lalr1.toString();
    file.close();

    file = ofstream(outputDir+"/FirstFollow.txt");
    if (file.fail()){
        cerr << "Failed to open file: " << outputDir+"/FirstFollow.txt" << endl;
        return;
    }
    file << lr1.getFirstFollow();
    file.close();
    cout <<"edgeOutputDIR: "+outputDir << endl;
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