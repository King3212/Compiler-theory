#include<iostream>
#include<assert.h>
#include "../include/readFile.hh"
#include "../include/scanner.hh"
using namespace std;

/*test string*/
void testString(){
    cout << "test string start\n";

    cout << "testPoint1 short string" << endl;
    string line1 = "\"I have a apple\"";//one line
    string line2 = "\"I have a apple, \\";
    string line3 = "I have a pen.\n\"";
    vector<pair<string,TOKEN>> result;
    assert(readLine(line1,result) == NoError);
    assert(result[0].first == line1 && result.size() == 1 && result[0].second == STRING);
    result.clear();
    cout << endl;

    cout << "testPoint2 long string" << endl;
    assert(readLine(line2,result) == NoError);
    assert(readLine(line3,result) == NoError);
    assert(result[0].first == "\"I have a apple, I have a pen.\n\"" && result.size() == 1 && result[0].second == STRING);
    result.clear();
    cout << endl;


    cout << "test finish\n\n\n";
}

void testComment(){
    cout << "test Comment start\n\n";
    cout << "testPoint1 type //" << endl;
    vector<string> lines = {"//I have a apple","/*I have a apple*/","/*I have a apple,","I have a ruler,","I have a pen.*/"};
    vector<pair<string,TOKEN>> result;
    assert(readLine(lines[0],result) == NoError);
    assert(result[0].first == lines[0] && result.size() == 1 && result[0].second == COMMENT);
    result.clear();
    cout << endl;

    cout << "testPoint2 type short /**/ " << endl;
    assert(readLine(lines[1],result) == NoError);
    assert(result[0].first == lines[1] && result.size() == 1 && result[0].second == COMMENT);
    result.clear();
    cout << endl;

    cout << "testPoint3 type long /**/ " << endl;
    for (int i = 0; i < 3; i++)
    {
        assert(readLine(lines[2+i],result) == NoError);
        assert(result[i].first ==  lines[2+i] && result[i].second == COMMENT);
    }
    assert(result.size() == 3 );
    result.clear();
    cout << endl;
    
    cout << "testPoint4 // after /**/ " << endl;
    assert(readLine(lines[1]+lines[0],result) == NoError);
    assert(result.size() == 2);
    assert(result[0].first == lines[1] && result[0].second == COMMENT);
    assert(result[1].first == lines[0] && result[1].second == COMMENT);
    result.clear();
    cout << endl;

    cout << "test finish\n";
}

void testNumber(){
    vector<pair<string,TOKEN>> result;

    vector<string>lines = {"12345","0xffff","0xabcdef","0123","123.145","10e6","12.2e2"};
    for (int i = 0; i < 4; i++)
    {
        cout << "testPoint" << i << " :" << lines[i] << endl;
        assert(readLine(lines[i],result) == NoError);
        assert(result[i].first ==  lines[i] && result[i].second == INTERGER);
    }
    for (int i = 4; i < 7; i++)
    {
        cout << "testPoint" << i << " :" << lines[i] << endl;
        assert(readLine(lines[i],result) == NoError);
        assert(result[i].first ==  lines[i] && result[i].second == FLOAT);
    }
    
}

void testIdentifier(){
    vector<pair<string,TOKEN>> result;

    vector<string>lines = {"apple","bad_apple","_apple","apple3212"};
    for (int i = 0; i < 4; i++)
    {
        cout << "testPoint" << i << " :" << lines[i] << endl;
        assert(readLine(lines[i],result) == NoError);
        assert(result[i].first ==  lines[i] && result[i].second == IDENTIFIER);
    }
    
}

void testKeyword(){
    vector<pair<string,TOKEN>> result;

    vector<string>lines = {"if","for","include","switch"};
    for (int i = 0; i < 4; i++)
    {
        cout << "testPoint" << i << " :" << lines[i] << endl;
        assert(readLine(lines[i],result) == NoError);
        assert(result[i].first ==  lines[i] && result[i].second == KEYWORD);
    }
    
}

void testFile(string filename){
    vector<string> lines = readFile(filename);
    vector<pair<string,TOKEN>> result;
    for(string i : lines){
        assert(readLine(i,result) == NoError);
    }
    for (auto i : result)
    {
        cout << i.first << " " << getToken(i.second) << endl;
    }
    
}


int main(int argc, char *argv[]){
    //testString();
    //testComment();
    //testNumber();
    //testIdentifier();
    //testKeyword();
    string filename = "/home/mirror/Downloads/2024 编译原理/Compiler-theory/build-Lab1-Desktop-Release/qrc_qmake_qmake_qm_files.cpp";
    testFile(filename);
    
}
