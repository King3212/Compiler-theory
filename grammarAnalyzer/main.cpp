#include "analyzer/analyzer.h"
#include "iostream"


int main(){
    vector<string> ignoreSigns = readFile("./input/adjust/ignore.txt");
    Parser a = Parser("./input/edge.txt",ignoreSigns,"./input/signMap.txt");
    printf("finish reading edges\n");
    a.parse("./input/program.prm");
    return 0;
}