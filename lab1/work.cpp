#include<stdlib.h>
#include<vector>
#include<string>
#include<map>

enum WORD{
    IDENTIFIER, KEYWORD, NUMBER, STRING, NOTE, DELIMITER, OPERATOR, SPECIA_SYMBLE
};

std::vector<std::pair<std::string,WORD>> workLine(std::string oneline);

std::vector<std::pair<std::string,WORD>> Assembling_classifiers(std::vector<std::string> text){
    std::vector<std::pair<std::string,WORD>> result = std::vector<std::pair<std::string,WORD>>();

    for (std::string oneline : text)
    {
        for (std::pair<std::string,WORD> word : workLine(oneline))
        {
            result.emplace_back(word);
        }
        
    }
    return result;
    
}


/**
 * 参数1：字符串及后续的内容
 * 参数2：是否为长字符串
 * 
 * 返回：字符串的长度
 * 
 * 例子："Hello, world"
 * 传入：Hello, world"
 * 返回：13
 * 
 * 例子："Hello, \
 * world"
 * 传入：Hello, \
 * world"
 * 返回：7,6
 * 
*/
int workString(std::string oneline, bool &longString){
    int len = 0;
    for (int j = 0; j < oneline.size(); j++)
    {
        if (oneline[j] == '\\')
        {
            if (j == oneline.size()-1)
            {
                len = j;
                longString = 1;
                break;
            }else if(oneline[j+1] == '"'){
                longString = 0;
                len = j+2;
            }else{
                continue;
            }
            
        }
        
    }
    return len;
}

/**
 * 
*/
std::vector<std::pair<std::string,WORD>> workLine(std::string oneline){
    static bool longComment;
    static bool longString;
    std::vector<std::pair<std::string,WORD>> result;
    std::pair<std::string,WORD> oneResult = std::pair<std::string,WORD>();
    bool shortComment = 0;
    WORD nowWord = STRING;

    for (int i = 0; i < oneline.size(); i++)
    {


        //string
        if (longString || oneline[i] == '"')
        {
            int len = workString(oneline.substr(i+1),longString);

            if (longString)
            {
                result[result.size()-1].first.append(oneline.substr(i,len));
                break;
            }
            else{
                oneResult = std::pair<std::string,WORD>();
                oneResult.first = oneline.substr(i,len);
                oneResult.second = STRING;
                result.push_back(oneResult);
                
            }
            i += len;
        }
        // else if()
        
        
        
    }
    
}