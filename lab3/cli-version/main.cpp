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
#include <cstdlib> // for std::atoi

namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
    std::vector<std::string> testfiles;
    std::string directory = "./testfile/"; // 目录路径

    // 遍历目录，将文件名存入testfiles向量中
    for (const auto &entry : fs::directory_iterator(directory))
    {
        if (fs::is_regular_file(entry.path()))
        {
            testfiles.push_back(entry.path().filename().string());
        }
    }

    std::vector<std::string> selectedTestfiles;

    if (argc > 1)
    {
        // 获取命令行参数
        int testIndex = std::atoi(argv[1]);

        // 检查参数是否在有效范围内
        if (testIndex >= 0 && testIndex < testfiles.size())
        {
            selectedTestfiles.push_back(testfiles[testIndex]);
        }
        else
        {
            std::cerr << "Invalid test index. Please provide an index between 0 and " << testfiles.size() - 1 << std::endl;
            return 1; // 非正常退出
        }
    }
    else
    {
        // 如果没有提供参数，测试所有文件
        selectedTestfiles = testfiles;
    }

    // 遍历测试文件
    for (const auto &filename : selectedTestfiles)
    {
        std::cout << "\n\n\n>>> " + filename + "\n";
        TreeNode *SyntaxTree = getSyntaxTree((char *)(directory + filename).c_str());
        printTree(SyntaxTree);
    }

    return 0;
}
