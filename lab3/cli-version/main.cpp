#include"globals.h"
#include"util.h"
#include <vector>
#include"getTree.h"
#include<string>
#include<iostream>
using namespace std;

#include <iostream>
#include <filesystem>
#include <vector>
#include <string>

namespace fs = std::filesystem;

int main()
{
    // std::vector<std::string> testfiles = {"SAMPLE.TNY"};
    std::vector<std::string> testfiles;
    std::string directory = "./testfile/"; // 目录路径

    // // 遍历目录，将文件名存入testfiles向量中
    for (const auto &entry : fs::directory_iterator(directory))
    {
        if (fs::is_regular_file(entry.path()))
        {
            testfiles.push_back(entry.path().filename().string());
        }
    }

    // 遍历测试文件
    for (const auto &filename : testfiles)
    {
        std::cout << "\n\n\n>>> " + filename + "\n";
        TreeNode *SyntaxTree = getSyntaxTree((char *)(directory + filename).c_str());
        printTree(SyntaxTree);
    }

    return 0;
}
