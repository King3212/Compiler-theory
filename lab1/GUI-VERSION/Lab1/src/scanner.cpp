#include"../include/scanner.h"
#include<string>
#include<algorithm>
#pragma execution_character_set("utf-8")

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
    string _word_ = line.substr(0,1);
    int pos = 1;
    for (; pos < line.size(); pos++)
    {
        if (isalpha(line[pos])||line[pos] == '_'||isdigit(line[pos]))
        {
            _word_.append(line.substr(pos,1));
        }else{
            break;
        }

    }
    result.emplace_back(pair<string,TOKEN>(_word_,IDENTIFIER));
    return pos;
}




int isKeyword(string word){
    static const vector<string> keywords = {"alignas", "alignof", "and", "and_eq", "asma", "auto", "bitand", "bitor", "bool", "break", "case", "catch", "char", "char8_t", "char16_t", "char32_t", "class", "compl", "concept", "const", "const_cast", "consteval", "constexpr", "constinit", "continue", "co_await", "co_return", "co_yield", "decltype", "default", "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit", "export", "extern", "false", "float", "for", "friend", "goto", "if", "inline", "include", "int", "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or", "or_eq", "private", "protected", "public", "register", "reinterpret_cast", "requires", "return", "short", "signed", "sizeof", "static", "static_assert", "static_cast", "struct", "switch", "template", "this", "thread_local", "throw", "true", "try", "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual", "void", "volatile", "wchar_t", "while", "xor", "xor_eq"};
    for(string keyword : keywords){
        if (word == keyword)
        {
            return 1;
        }
    }
    return 0;

}

int isDelimiter(string x){
    static const vector<string> Delimiters = {"(",")","{","}",";","#",",","[","]"};
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


int number(string line, vector<pair<string,TOKEN>> &result){
    bool isHex = false;
    bool hasE = false;
    bool hasDot = false;
    int pos = 0;
    string num = "";
    while (pos < line.size())
    {
        if (line[pos] == 'e')
        {
            if (hasE)
            {
                return -2;//e出现了两次
            }else if(isHex){
                //nothing happen
            }else hasE = true;
        }else if(line[pos] == '.')
        {
            if (hasDot)
            {
                return -3;//.出现了两次
            }if (hasE)
            {
                return -4;//e后面必须为整数
            }

            hasDot = true;
        }else if('a'<=line[pos] && 'f' >= line[pos] && isHex){
            //do nothing
        }
        else if(line[pos] == 'x'){
            if (line[pos-1] != '0')
            {
                return -1;//非十六进制数字内出现字母
            }else{
                isHex = true;
            }
        }else if (line[pos] == ' ' || line[pos] == '\t' || isOperator(line[pos]) || isDelimiter(string(1,line[pos])))
        {
            break;
        }
        else if(isdigit(line[pos])){
            //do nothing
        }
        else{
            return -1;//同上
        }

        num.append(string(1,line[pos]));
        pos++;
    }
    if (hasDot || hasE)
    {
        if(result.size() > 0 && result[result.size()-1].first == "-" && (result.size()-2 >= 0 &&(result[result.size()-2].second == OPERATOR) || result.size()-2 < 0)){
            result[result.size()-1] = pair<string,TOKEN>("-"+num,FLOAT);
        }else{
            result.emplace_back(pair<string,TOKEN>(num,FLOAT));
        }

    }else{
        if(result.size() > 0 && result[result.size()-1].first == "-" && (result.size()-2 >= 0 &&(result[result.size()-2].second == OPERATOR) || result.size()-2 < 0)){
            result[result.size()-1] = pair<string,TOKEN>("-"+num,INTERGER);
        }else{
            result.emplace_back(pair<string,TOKEN>(num,INTERGER));
        }
    }
    return pos;

}



ERROR readLine(string line, vector<pair<string,TOKEN>> &result)//读取一行代码
{
    static bool longComment = false;
    static bool longString = false;
    int CommentStartPos = 0;
    int StringStartPos = 0;
    int pos = 0;

    while (pos < line.size())
    {
        if(!result.empty() && result[result.size()-1].first == "include" && (line[pos] == '"'|| line[pos] == '<'))//是头文件（特殊符号）
        {
            int start = pos;
            if (line[pos] == '<')
            {
                while (line[pos] != '>' && pos < line.size())
                {
                    pos++;
                }
                result.push_back(pair<string,TOKEN>(line.substr(start,pos+1-start),SPECIAL_SYMBOL));

            }else if (line[pos] == '"')
            {
                pos++;
                while (line[pos] != '"' && pos < line.size())
                {
                    pos++;
                }
                result.push_back(pair<string,TOKEN>(line.substr(start,pos-start),SPECIAL_SYMBOL));
            }
            pos++;
        }else if(longString || line[pos] == '"'){
            if (!longString)
            {
                StringStartPos = pos;
                result.emplace_back(pair<string,TOKEN>("",STRING));
                pos++;
            }


            while (pos < line.size())
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
            if (line[pos-1] == '\\' && pos == line.size())
            {
                result[result.size()-1].first.append(line.substr(StringStartPos,pos-StringStartPos-1));
                longString = true;
            }

        }else if (longComment)
        {
            while (pos < line.size()-1)
            {
                if (line[pos] == '*' && line[pos+1] == '/' )
                {
                    pos+=2;
                    longComment = false;
                    result.emplace_back(pair<string,TOKEN>(line.substr(CommentStartPos,pos-CommentStartPos),COMMENT));
                    break;
                }
                pos++;
            }
            if(longComment)
            {
                result.emplace_back(pair<string,TOKEN>(line.substr(CommentStartPos,pos+1-CommentStartPos),COMMENT));
                pos++;
            }
        }
        else if (line[pos] == ' ' || line[pos] == '\t')//是空格或Tab
        {
            pos++;
        }
        else if (isdigit(line[pos]))//是数字（细分整数和浮点数）
        {
            pos += number(line.substr(pos),result);
            continue;
        }else if(isalpha(line[pos]) || line[pos] == '_')//是标识符或关键字
        {
            pos += word(line.substr(pos),result);
            if (isKeyword (result[result.size()-1].first))
            {
                result[result.size()-1].second = KEYWORD;
            }else if(result.size() -2 >= 0 && result[result.size()-2].first == "~"){
                result[result.size()-2].first += result[result.size()-1].first;
                result[result.size()-2].second = IDENTIFIER;
                result.pop_back();
            }

        }else if(isDelimiter(string(1,line[pos])))//是分隔符
        {
            result.emplace_back(pair<string,TOKEN>(string(1,line[pos]),DELIMITER));
            pos++;
        }else if(line[pos] == '/' && pos+1 < line.size())//注释
        {
            if (line[pos+1] == '/')
            {
                result.emplace_back(pair<string,TOKEN>(line.substr(pos),COMMENT));
                break;
            }else if(line[pos+1] == '*'){
                longComment = true;
                CommentStartPos = pos;
                pos += 2;
                continue;
            }
        }
        else if(isOperator(line[pos]))//是运算符号
        {
            pos += Operator(line.substr(pos),result);
        }else if(line[pos] == '\\' && pos == line.size()-1){
            pos ++;
            continue;
        }else if(line[pos] == '~'){
            result.emplace_back(pair<string,TOKEN>(line.substr(pos,1),SPECIAL_SYMBOL));
            pos++;
        }else if (line[pos] == '\'' && (pos-1 < 0 || line[pos-1] != '\\'))//是字符
        {
            if(line[pos+1] == '\\' && line[pos+3] == '\''){
                result.emplace_back(pair<string,TOKEN>(line.substr(pos,4),CHAR));
                pos += 4;
            }
            else if (line[pos+2] == '\'')
            {
                result.emplace_back(pair<string,TOKEN>(line.substr(pos,3),CHAR));
                pos += 3;
            }else{
                return Error_char;
            }
            
        }else//错误退出
        {
            return Error_bad_char;
        }
    }
    return NoError;
}
