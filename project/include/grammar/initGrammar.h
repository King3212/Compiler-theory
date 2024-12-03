#include"globle.h"
#include"../File/File.h"
#include<sstream>
using namespace std;


// 
vector<Grammar> getGrammarFromFile(string filename){
    cout << filename << endl;
    vector<Grammar> grammars;
    vector<string> lines;
    lines = readFile(filename);
    for(auto line : lines){
        Grammar grammar;
        stringstream ss(line);
        ss >> grammar.left;
        string temp;
        while(ss >> temp){
            if (temp == "->")
            {
                continue;
            }
            else if (temp == "|")
            {
                grammars.push_back(grammar);
                grammar.right.clear();
            }
            else
            {
                grammar.right.push_back(temp);
            }
            
        }
        grammars.push_back(grammar);
    }
    return grammars;
}