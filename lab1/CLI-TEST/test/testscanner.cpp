#include<iostream>
#include<assert.h>
#include<string>
#include "../include/readFile.h"
#include "../include/scanner.h"
using namespace std;



#include <fstream> // 包含文件流操作头文件

// 将扫描结果写入文件，并按文件名进行格式化
void writeResultsToFile(const string& filename, const vector<pair<string, TOKEN>>& results) {
    ofstream outputFile("result.txt", ios::app); // 创建输出文件流对象，以追加模式打开

    if (outputFile.is_open()) { // 检查文件是否成功打开
        outputFile << "Results for file: " << filename << endl; // 将文件名写入文件
        for (const auto& pair : results) {
            outputFile << pair.first << " " << getToken(pair.second) << endl; // 将结果写入文件
        }
        outputFile << "---------------------------------------------" << endl; // 添加分隔行
        outputFile.close(); // 关闭文件流
        cout << "Results for " << filename << " written to result.txt" << endl; // 输出成功写入文件的消息
    } else {
        cerr << "Error: Unable to open result.txt for writing" << endl; // 输出打开文件失败的消息
    }
}




void testFile(string filename, TOKEN test, bool writeResult) {
    vector<string> lines = readFile(filename);
    vector<pair<string, TOKEN>> result;
    for (string i : lines) {
        assert(readLine(i, result) == NoError);
    }
    for (auto i : result) {
        assert(i.second == test);
    }
    if (writeResult)
    {
        writeResultsToFile(filename,result);
    }
}

void testFile(string filename, bool writeResult) {
    vector<string> lines = readFile(filename);
    vector<pair<string, TOKEN>> result;
    for (string i : lines) {
        assert(readLine(i, result) == NoError);
    }
    for (auto i : result) {
        cout << i.first << " " << getToken(i.second) << endl;
    }
    if (writeResult)
    {
        writeResultsToFile(filename,result);
    }
}

void testLongFile(string filename) {
    int repeatTimes = 1e4;
    vector<string> lines = readFile(filename);
    vector<pair<string, TOKEN>> *result = new vector<pair<string, TOKEN>>();
    for (string i : lines) {
        for (int j = 0; j < repeatTimes; j++) {
            assert(readLine(i, *result) == NoError);
        }
    }
    delete result;
}

int charToInt(char x) {
    assert(isdigit(x));
    return x - '0';
}











int main(int argc, char *argv[]) {
    assert(argc <= 2);
    bool writeResult = false;
    if (argc == 2) {
        int testIndex = charToInt(argv[1][0]);
        assert(testIndex >= 0 && testIndex < 10); // Assuming there are 10 different tests

        string filename = "./test/testData/test" + to_string(testIndex) + ".txt";
        testFile(filename, static_cast<TOKEN>(testIndex));
    } else {
        // Run all tests
        vector<string> testTarget = {
            "testKeywordData.txt", "testDelimiterData.txt",
            "testIdentifierData.txt", "testOperatorData.txt",
            "testIntergerData.txt", "testStringData.txt",
            "testFloatData.txt", "testCommentData.txt",
            "testSpecial_symbolData.txt", "testCharData.txt"
        };

        for (int i = 0; i < testTarget.size(); i++) {
            string filename = "./test/testData/" + testTarget[i];
            testFile(filename, static_cast<TOKEN>(i),writeResult);
        }

        cout << "Union test pass!\n";
        string filename = "./test/testData/testdata.txt";

        testFile(filename,writeResult);
        cout << "Normal test pass!\n";
        testLongFile(filename);
        cout << "Long test pass!\n";
    }

    return 0;
}
