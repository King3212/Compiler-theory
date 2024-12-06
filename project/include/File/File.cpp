/**
 * @file File.cpp
 * @brief 实现文件读取功能
 * 
 * @version 1.0
 * @date 2024-4-28
 * @author 20222131044
 * 
 * @history
 * 版本 | 作者 | 日期 | 说明
 * ------|------|------|------
 * 1.0 | 20222131044 | 2024-4-28 | 初始版本
 */

#include "File.h" // 包含文件读取模块的头文件
using namespace std;

/**
 * @brief 读取指定路径的文件内容
 * 
 * @param path 文件路径
 * @return vector<string> 包含文件每一行内容的向量
 * 
 * @note 如果文件无法打开，将调用Error函数并返回空向量
 */
vector<string> readFile(string path) {
    vector<string> lines; // 创建一个存储字符串的向量

    // 打开文件
    ifstream file(path);
    if (!file.is_open()) { // 检查文件是否成功打开
        // 如果文件无法打开，向用户报告错误并返回空向量
        Error(0);
        return lines;
    }

    // 逐行读取文件内容
    string line;
    while (getline(file, line)) {
        lines.push_back(line); // 将读取的每一行添加到向量中
    }

    // 关闭文件
    file.close();

    return lines; // 返回包含文件内容的向量
}


