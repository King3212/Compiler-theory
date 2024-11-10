/**
 * @file File.cpp
 * @brief 实现文件读取功能
 * 
 * @version 1.0
 * @date 2023-10-05
 * @author 20222131044
 * 
 * @history
 * 版本 | 作者 | 日期 | 说明
 * ------|------|------|------
 * 1.0 | 20222131044 | 2023-10-05 | 初始版本
 */

#include <fstream>
#include <vector>
#include <string>
#include "File.h"


/**
 * @brief 读取指定路径的文件内容
 * 
 * @param path 文件路径
 * @return std::vector<std::string> 包含文件每一行内容的向量
 * 
 * @note 如果文件无法打开，将调用Error函数并返回空向量
 */
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

void writeEdgesToFile(const std::string &filename, const std::vector<std::vector<edge>> &edges)
{
    std::ofstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Unable to open file: " << filename << std::endl;
        return;
    }

    for (const auto &table : edges)
    {
        for (const auto &e : table)
        {
            file << e.start << " " << e.end << " " << e.sign << " " << e.action;
            for (const auto &token : e.followTokens)
            {
                file << " " << token;
            }
            file << std::endl;
        }
        file << "---" << std::endl; // 用于分隔不同的表
    }

    file.close();
}

std::vector<std::vector<edge>> readEdgesFromFile(const std::string &filename)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Unable to open file: " << filename << std::endl;
        return {};
    }

    std::vector<std::vector<edge>> edges(2); // 假设有两个表：actionTable 和 gotoTable
    std::string line;
    int tableIndex = 0;

    while (getline(file, line))
    {
        if (line == "---")
        {
            tableIndex++;
            continue;
        }

        std::istringstream iss(line);
        edge e;
        iss >> e.start >> e.end >> e.sign >> e.action;
        std::string token;
        while (iss >> token)
        {
            e.followTokens.push_back(token);
        }
        edges[tableIndex].push_back(e);
    }

    file.close();
    return edges;
}