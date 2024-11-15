#include "analyzer/analyzer.h"
#include "iostream"


int main(){
    analyzer a("./input/tinyProgram.tny","./input/ignore.txt","./input/tables.txt");
    printf("finish reading tables\n");
    a.run();
    return 0;
}