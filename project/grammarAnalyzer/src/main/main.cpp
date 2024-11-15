#include "../analyzer/analyzer.h"
#include "iostream"


int main(){
    analyzer a("../inputFiles/sourceCode.tny","../inputFiles/ignore.txt");
    printf("finish reading tables\n");
    a.run();
    return 0;
}