#include<vector>
#include<string>
#include"scanner.h"
#include<map>

/**
 * 这里扫描所有的句子
 * 
 * 将等号前面与等号后面的部分做扫描
 * 获取标识符以及一一对应的正则表达式
 *
 *  例如:
 * 
 * input:
 * >>> number = [0-9]
 * output:
 * >>> result:{
 *     name = "number"
 *     needToScan = true
 *     re = "[0-9]"
 * }
*/
std::vector<scanData*> *scanAll(std::vector<std::string> lines){

    std::vector<scanData*> *result = new std::vector<scanData*>();
    scanData *oneData = nullptr;
    int startPos = 0;

    for (std::string line : lines)
    {
        oneData = new scanData(); 
        int pos = 0;
        startPos = 0;
        oneData->needToScan = false;
        while (true)
        {
            if (line[pos] == ' ' || line[pos] == '\t')
            {
                pos++;
            }else if(startPos == 0){
                startPos = pos;
                if (line[pos] == '_')
                {
                    oneData->needToScan = true;
                }
                pos++;
            }else if(line[pos] == '='){
                oneData->name = line.substr(startPos,pos-startPos);
                oneData->re = line.substr(pos+1);
                break;
            }else{
                pos++;
            }

        }
        result->push_back(oneData);
    }
    return result;
}

/**
 * 此函数进行替换扫描
 * 从最后一行开始往前搜索所有字符串是否被定义
 * 如果被定义就替换为相应的正则表达式
 * 
 * 例如：
 * 
 * input:
 * >>> number = [0-9]
 * >>> _numbers = number*
 * output:
 * >>> _numbers = ([0-9])*
*/
std::vector<finalData> replaceRe(std::vector<scanData*> reExpresses){

}