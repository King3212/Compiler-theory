/**
 * @file error.cpp
 * @brief 实现错误处理函数
 * 
 * @version 1.0
 * @date 2023-10-05
 * @author 20222131044
 * 
 * @history
 * 版本 |     作者    |     日期    |   说明
 * ----|-------------|------------|--------
 * 1.0 | 20222131044 | 2023-10-05 | 初始版本
 */

#include "error.h"

/**
 * @brief 处理错误信息并记录到日志文件
 * 
 * @param x 错误代码索引
 * 
 * @note 错误代码索引应在错误文件的范围内
 */
void Error(int x)
{
    std::vector<std::string> errors; // 创建一个存储字符串的向量

    // 打开文件
    std::ifstream file("./Error/error.txt");

    // 逐行读取文件内容
    std::string line;
    while (std::getline(file, line)) {
        errors.push_back(line); // 将读取的每一行添加到向量中
    }

    // 关闭文件
    file.close();

    // 记录错误信息到日志文件
    std::ofstream log("./Error/error.log", std::ios::app);
    log << errors[x] << std::endl;
    std::cerr << errors[x] << std::endl;
    log.close();
}