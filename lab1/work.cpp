#include<stdlib.h>
#include<vector>
#include<string>
#include<map>

enum WORD{
    IDENTIFIER, KEYWORD, NUMBER, STRING, NOTE, DELIMITER, OPERATOR, SPECIA_SYMBLE
};

std::vector<std::pair<std::string,WORD>> workLine(std::string oneline, bool isComments);

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


std::vector<std::pair<std::string,WORD>> workLine(std::string oneline){
    std::vector<std::pair<std::string,WORD>> result;
    for (int i = 0; i < oneline.size(); i++)
    {
        
    }
    
}