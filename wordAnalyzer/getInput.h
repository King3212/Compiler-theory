/**
 * @file getInput.h
 * @brief 定义了输入类
 * 
 * @version 1.0
 * @date 2024-6-30
 * @auther 20222131044
 *  
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-6-30 | 20222131044 | 初始版本
 * 
 * 
 */

#include <fstream>
#include <iostream>
#include <string>

#pragma once
class Input
{
private:
    std::string filename; // 文件名
    std::ifstream file;   // 输入文件流

public:
    Input(std::string filename); // 构造函数，打开文件
    ~Input();                    // 析构函数，关闭文件
    std::string getInput();      // 获取下一个字符
    void goBack(int pos);        // 回退到指定位置
    int getPos();                // 获取当前位置
    void goBackOneChar();        // 回退一个字符
    std::string getTokenWord(int pos);// 获取一个单词
    
};

namespace std
{
    void addEnter(std::string filename){ // 在文件末尾添加一个换行符{
        // 打开文件查看文件末尾是否有换行符
        ifstream file1(filename, ios::in);
        file1.seekg(-1, ios::end);
        char c;
        file1.get(c);
        file1.close();
        if (c != '\n' || c != 'd') // 如果文件末尾没有换行符
        {
            ofstream file2(filename, ios::app);
            file2 << "\n"; // 在文件末尾添加一个换行符
            file2.close();
        }
    
    }
} // namespace std



// 构造函数，打开文件
Input::Input(std::string filename) : filename(filename)
{
    addEnter(filename);
    file.open(filename, std::ifstream::in); // 打开文件
    if (!file.is_open())
    {
        std::cerr << "无法打开文件: " << filename << std::endl;
    }
}

// 析构函数，关闭文件
Input::~Input()
{
    if (file.is_open())
    {
        file.close(); // 关闭文件
    }
}

// 获取下一个字符，并返回为字符串形式
std::string Input::getInput()
{
    char c;
    if (file.get(c)) // 从文件中获取下一个字符
    {
        return std::string(1, c); // 将字符转换为字符串并返回
    }
    else
    {
        return ""; // 文件读取结束或出错时返回空字符串
    }
}

// 回退到指定位置
void Input::goBack(int pos)
{
    file.clear();    // 清除错误标志
    file.seekg(pos); // 回退到指定的文件位置
}

// 获取当前文件读取位置
int Input::getPos()
{
    return file.tellg(); // 返回当前文件位置
}

// 回退一个字符
void Input::goBackOneChar()
{
    // 获取当前文件的位置
    int currentPos = file.tellg();

    // 如果当前位置大于 0，回退一个字符
    if (currentPos > 0)
    {
        file.seekg(currentPos - 1);
    }

    // 清除错误标志，确保文件状态正常
    file.clear();
}

inline std::string Input::getTokenWord(int pos)
{
    // 获取当前文件的位置
    int currentPos = file.tellg();
    
    // 单词字符串
    std::string word = "";
    
    // 回退到指定位置
    file.seekg(pos);

    // 读取单词
    while (file.tellg() < currentPos - 1)
    {
        word += getInput();
    }
    getInput();
    return word;
}
