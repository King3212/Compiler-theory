#include <fstream>
#include <vector>
#include <string>
#include "File.h"

std::vector<std::string> readFile(std::string path) {
    std::vector<std::string> lines; // 创建一个存储字符串的向量

    // 打开文件
    std::ifstream file(path);
    if (!file.is_open()) { // 检查文件是否成功打开
        // 如果文件无法打开，向用户报告错误并返回空向量
        Error(0);
        return lines;
    }

    // 逐行读取文件内容
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line); // 将读取的每一行添加到向量中
    }

    // 关闭文件
    file.close();

    return lines; // 返回包含文件内容的向量
}
