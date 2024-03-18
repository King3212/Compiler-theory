#include<vector>
#include<string>
#pragma once
using namespace std;

/**需要识别的符号：
 * 关键字KEYWORD
 * 分界符号DELIMITER
 * 标识符IDENTIFIER
 * 运算符号OPERATOR
 * 整数INTERGER
 * 字符串STRING
 * 浮点数FLOAT
 * 注释COMMENT
 * 特殊符号SPECIAL_SYMBOL
 * 字符CHAR
*/
enum TOKEN{
    KEYWORD,DELIMITER,IDENTIFIER,OPERATOR,INTERGER,STRING,FLOAT,COMMENT,SPECIAL_SYMBOL,CHAR
};

/**Error Code
 * 无错误NoError
 * 单引号内有多个字符 Error_char
 * 字符串右引号缺失 Error_string
 * 以数字开头的标识符 Error_identifier
 * 无法解析Error_bad_char
*/
enum ERROR{
    NoError,Error_char,Error_string,Error_identifier,Error_bad_char
};

ERROR readLine(string line, vector<pair<string,TOKEN>> &result);


