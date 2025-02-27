/**
 * @file File.h
 * @brief 文件读取模块的头文件
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

#pragma execution_character_set("utf-8") // 设置执行字符集为UTF-8
#include "../Error/error.h" // 包含错误处理模块的头文件
#include <vector> // 包含向量模块
#include <string> // 包含字符串模块
#include <iostream> // 包含输入输出模块
#include <fstream> // 包含文件流模块
#pragma once // 防止头文件重复包含

/**
 * @brief 读取指定路径的文件内容
 * 
 * @param path 文件路径
 * @return std::vector<std::string> 包含文件每一行内容的向量
 * 
 * @note 如果文件无法打开，将调用Error函数并返回空向量
 */
std::vector<std::string> readFile(std::string path);
