#include<iostream>
#include<assert.h>
#include<string>
#include "../include/readFile.h"
#include "../include/scanner.h"
using namespace std;

void testFile(string filename,TOKEN test){
    vector<string> lines = readFile(filename);
    vector<pair<string,TOKEN>> result;
    for(string i : lines){
        assert(readLine(i,result) == NoError);
    }
    for (auto i : result)
    {
        assert(i.second == test);
        cout << i.first << " " << getToken(i.second) << endl;
    }
    
}
int charToInt(char x){
    assert(isdigit(x));
    return x-'0';
}
int main(int argc, char *argv[]){
    assert(argc == 1);

    vector<string> testTarget = {"testCommentData.cpp","testKeywordData.cpp","testIntergerData.cpp","testStringData.cpp"};
    string filename = "testData/"+testTarget[charToInt(argv[0][0])];
    testFile(filename,TOKEN(charToInt(argv[0][0])));
    
}
