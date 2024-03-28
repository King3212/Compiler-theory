#include<iostream>
#include<assert.h>
#include<string>
#include "../include/readFile.h"
#include "../include/scanner.h"
using namespace std;

void testFile(string filename, TOKEN test) {
    vector<string> lines = readFile(filename);
    vector<pair<string, TOKEN>> result;
    for (string i : lines) {
        assert(readLine(i, result) == NoError);
    }
    for (auto i : result) {
        assert(i.second == test);
    }
}

void testFile(string filename) {
    vector<string> lines = readFile(filename);
    vector<pair<string, TOKEN>> result;
    for (string i : lines) {
        assert(readLine(i, result) == NoError);
    }
    for (auto i : result) {
        cout << i.first << " " << getToken(i.second) << endl;
    }
}

void testLongFile(string filename) {
    vector<string> lines = readFile(filename);
    vector<pair<string, TOKEN>> *result = new vector<pair<string, TOKEN>>();
    for (string i : lines) {
        for (int j = 0; j < 1e5; j++) {
            assert(readLine(i, *result) == NoError);
        }
    }
    assert(result->size() == lines.size() * 1e5);
    delete result;
}

int charToInt(char x) {
    assert(isdigit(x));
    return x - '0';
}

int main(int argc, char *argv[]) {
    assert(argc <= 2);

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
            "testIntegerData.txt", "testStringData.txt",
            "testFloatData.txt", "testCommentData.txt",
            "testSpecial_symbolData.txt", "testCharData.txt"
        };

        for (int i = 0; i < testTarget.size(); i++) {
            string filename = "./test/testData/" + testTarget[i];
            testFile(filename, static_cast<TOKEN>(i));
        }

        cout << "Union test pass!\n";
        string filename = "./test/testData/testdata.txt";
        testFile(filename);
        cout << "Normal test pass!\n";
        testLongFile(filename);
        cout << "Long test pass!\n";
    }

    return 0;
}
