/**
 * @file error.h
 * @brief 错误处理模块的头文件
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

#pragma once

#include <fstream>
#include <vector>
#include <string>
#include <iostream>

/**
 * @brief 处理错误信息并记录到日志文件
 * 
 * @param x 错误代码索引
 * 
 * @note 错误代码索引应在错误文件的范围内
 */
void Error(int x);
