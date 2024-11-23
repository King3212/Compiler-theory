#include "analyzer/analyzer.h"
#include "iostream"


int main(){
    vector<string> ignoreSigns = readFile("./input/ignore.txt");
    Parser a = Parser("./input/edge.txt",ignoreSigns);
    printf("finish reading edges\n");
    a.parse("./input/program.prm");
    return 0;
}