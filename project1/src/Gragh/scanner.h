#pragma execution_character_set("utf-8")

#include<string>
#include<vector>
#pragma once

struct scanData
{
    bool needToScan;
    std::string name;
    std::string re;
};

struct finalData
{
    std::string name;
    std::string reExpress;
};


/** * 这个函数处理一个文件中的所有正则表达式
 * 对定义的临时变量进行替换
 * 最终返回需要转换DFA的名称及其正则表达式
*/
std::vector<finalData*> *scanner(std::vector<std::string> lines);
