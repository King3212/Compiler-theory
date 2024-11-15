#include "analyzer/analyzer.h"
#include "iostream"


int main(){
    analyzer a("sourceCode.tny","ignore.txt");
    printf("finish reading tables\n");
    a.run();
    return 0;
}