#include<stdlib.h>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

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
*/
enum TOKEN{
    KEYWORD,DELIMITER,IDENTIFIER,OPERATOR,INTERGER,STRING,FLOAT,COMMENT,SPECIAL_SYMBOL
};

/**Error Code
 * 单引号内有多个字符 Error_char
 * 字符串右引号缺失 Error_string
 * 以数字开头的标识符 Error_identifier
*/
enum ERROR{
    Error_char,Error_string,Error_identifier
};


/**
 * 寻找字符串结尾
*/
int findStringEnd(string line){

    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == '"')
        {
            if (line[i-1] == '\\')
            {
                continue;
            }else{
                return i;
            }
            
        }
        
    }
    return -1;
    
}

int fineCommentEnd(string line){
    for (int i = 0; i < line.size(); i++)
    {
        if(line[i] == '/'){
            if (i-1 >= 0&&line[i-1] == '*')
            {
                if (i-2 < 0 && line[i-2] != '\\')
                {
                    return i;
                }
                
            }
        }
    }
    return -1;

}

int word(string line, vector<pair<string,TOKEN>> &result){
    string _word_ = "";
    for (int i = 1; i < line.size(); i++)
    {
        if (isalpha(line[i])||line[i] == '_'||isdigit(line[i]))
        {
            _word_.append(line.substr(0,1));
        }
        
    }
    result.emplace_back(pair<string,TOKEN>(_word_,IDENTIFIER));
}

int number(string line, vector<pair<string,TOKEN>> &result){

}

int isKeyword(string word){
    static const vector<string> keywords = {"alignas", "alignof", "and", "and_eq", "asma", "auto", "bitand", "bitor", "bool", "break", "case", "catch", "char", "char8_t", "char16_t", "char32_t", "class", "compl", "concept", "const", "const_cast", "consteval", "constexpr", "constinit", "continue", "co_await", "co_return", "co_yield", "decltype", "default", "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit", "export", "extern", "false", "float", "for", "friend", "goto", "if", "inline", "int", "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or", "or_eq", "private", "protected", "public", "register", "reinterpret_cast", "requires", "return", "short", "signed", "sizeof", "static", "static_assert", "static_cast", "struct", "switch", "template", "this", "thread_local", "throw", "true", "try", "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual", "void", "volatile", "wchar_t", "while", "xor", "xor_eq"};
    for(string keyword : keywords){
        if (word == keyword)
        {
            return 1;
        }
    }
    return 0;
    
}

int isDelimiter(string x){
    static const vector<string> Delimiters = {"(",")","{","}",";","#"};
    for (string Delimiter : Delimiters)
    {
        if (x == Delimiter)
        {
            return 1;
        }
        
    }
    return 0;
}

bool isOperator(char x){
    string op = string(1,x);
    vector<string>singleCharOperator = {"?", ">", "=", "<", "+", "|", "^", "!", "&", "%", ".", "/", "*", ":", "-"};
    return find(singleCharOperator.begin(),singleCharOperator.end(),op) != singleCharOperator.end();
}

int Operator(string line, vector<pair<string,TOKEN>> &result){
    vector<string>doubleCharOperator = {"--", "::", "!=", "++", "==", "&&", ">=", ">>", "<=", "<<", "||", "%=", "->", "/=", "*=", "-=", "+="};
    int size = 2;
    string thisOperator = line.substr(0,size);
    if (find(doubleCharOperator.begin(),doubleCharOperator.end(),thisOperator) != doubleCharOperator.end())
    {
        result.emplace_back(pair<string,TOKEN>(thisOperator,OPERATOR));
        return size;
    }
    result.emplace_back(pair<string,TOKEN>(string(1,line[0]),OPERATOR));
    return 1;
}

void readLine(string line, vector<pair<string,TOKEN>> &result)//读取一行代码
{   
    static bool longComment = false; 
    static bool longString = false;
    int CommentStartPos = 0;
    int StringStartPos = 0;
    int pos = 0;

    while (pos < line.size())
    {
        if(longString){
            while (line[pos] < line.size())
            {
                if (line[pos] == '"'&& (pos == 0 || line[pos] != '\\'))
                {
                    pos++;
                    result[result.size()-1].first.append(line.substr(StringStartPos,pos-StringStartPos));
                    longString = false;
                    break;
                }
                pos ++;
            }
            if (line[pos] == '\\' && pos == line.size()-1 && longString)
            {
                result[result.size()-1].first.append(line.substr(StringStartPos,pos-StringStartPos));
            }
            
        }

        else if (longComment)
        {
            while (line[pos] < line.size()-1)
            {
                if (line[pos] == '*' && line[pos+1] == '/' )
                {
                    longComment = false;
                    result.emplace_back(pair<string,TOKEN>(line.substr(CommentStartPos,pos+1-CommentStartPos),COMMENT));
                    break;
                }
                pos++;
            }
            if(longComment)result.emplace_back(pair<string,TOKEN>(line.substr(CommentStartPos,pos-CommentStartPos),COMMENT));
        }
        else if (line[pos] == ' ' || line[pos] == '\t')//是空格或Tab
        {
            pos++;
        }
        else if (isdigit(line[pos]) || (line[pos] == '0' && pos+1 < line.size() &&line[pos] == 'x'))//是数字（细分整数和浮点数）
        {
            pos += number(line.substr(pos),result);
            continue;
        }else if(isalpha(line[pos]) || line[pos] == '_')//是标识符或关键字
        {
            pos += word(line.substr(pos),result);
            if (isKeyword (result[result.size()-2].first))
            {
                result[result.size()-2].second = KEYWORD;
            }
            
        }else if(isDelimiter(string(1,line[pos])))//是分隔符
        {
            result.emplace_back(pair<string,TOKEN>(string(1,line[pos]),DELIMITER));
            pos++;
        }else if(!result.empty() && result[result.size()-1].first == "include" && (line[pos] == '"'|| line[pos] == '<'))//是头文件（特殊符号）
        {
            int start = pos;
            if (line[pos] == '<')
            {
                while (line[pos] != '>' && pos < line.size())
                {
                    pos++;
                }
                result.push_back(pair<string,TOKEN>(line.substr(start,pos-start),SPECIAL_SYMBOL));
                
            }else if (line[pos] == '"')
            {
                while (line[pos] != '"' && pos < line.size())
                {
                    pos++;
                }
                result.push_back(pair<string,TOKEN>(line.substr(start,pos-start),SPECIAL_SYMBOL));
            }
            pos++;
        }else if(line[pos] == '/' && pos+1 < line.size())//注释
        {
            if (line[pos+1] == '/')
            {
                result.emplace_back(pair<string,TOKEN>(line.substr(pos),COMMENT));
                break;
            }else if(line[pos+1] == '*'){
                longComment = false;
                CommentStartPos = pos;
                pos += 2;
                continue;
            }
        }
        
        else if(isOperator(line[pos]))//是运算符号
        {
            pos += Operator(line.substr(pos),result);
        }else if(line[pos] == '"')//是字符串
        {
            longString = true;//无法区别分行和不分行的字符串
            continue;
        }
    }
    
    
    
    
}



