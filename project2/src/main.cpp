#include "analyzer/analyzer.h"
#include "iostream"


int main(){
    analyzer a("sourceCode.tny","ignore.txt");
    a.run();
    return 0;
}