#pragma execution_character_set("utf-8")
/**
 * @file scanner.h
 * @brief 扫描器模块的头文件
 * 
 * @version 1.0
 * @date 2024-4-28
 * @author 20222131044
 * 
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-4-28 | 20222131044 | 初始版本
 */
#include<string>
#include<vector>
#pragma once

/**
 * @brief 扫描数据
 * 
 * @param needToScan 是否需要扫描
 * @param name 名称
 * @param re 正则表达式
 */
struct scanData
{
    bool needToScan;
    std::string name;
    std::string re;
};

/**
 * @brief 最终数据
 * 
 * @param name 名称
 * @param reExpress 正则表达式
 */
struct finalData
{
    std::string name;
    std::string reExpress;
};


/**
 * @brief 扫描器
 * 
 * @param lines 文件内容
 * @return std::vector<scanData*> 扫描数据
 */
std::vector<finalData*> *scanner(std::vector<std::string> lines);
