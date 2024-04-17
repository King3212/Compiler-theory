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
 * 从第一行开始往后搜索所含字符串是否被定义
 * 如果被定义就进行替换修改为相应的正则表达式
 * 
 * 例如：
 * 
 * input:
 * >>> number = [0-9]
 * >>> _numbers = number*
 * output:
 * >>> _numbers = ([0-9])*
*/
std::vector<finalData*>* replaceRe(std::vector<scanData*> *reExpresses) {
    // 创建一个映射，将标识符与其对应的正则表达式关联起来
    std::map<std::string, std::string> definitions;
    
    // 遍历扫描到的正则表达式，将其标识符及定义存储到映射中
    for (scanData* scanDataPtr : *reExpresses) {
        definitions[scanDataPtr->name] = scanDataPtr->re;
    }

    // 替换每个正则表达式中的标识符
    for (scanData* data : *reExpresses) {
        std::string& re = data->re;
        
        // 在正则表达式中查找标识符的位置并替换为其定义
        size_t pos = 0;
        while ((pos = re.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", pos)) != std::string::npos) {
            // 找到标识符的结束位置
            size_t endPos = re.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", pos + 1);
            if (endPos == std::string::npos){
                endPos = re.length();
            }
            // 提取标识符并查找其定义
            std::string identifier = re.substr(pos, endPos - pos);
            auto it = definitions.find(identifier);
            if (it != definitions.end()) {
                // 将标识符替换为其定义
                re.replace(pos, endPos - pos, it->second);
            }
            
            // 移动到下一个标识符位置
            pos = endPos;
        }
    }
    std::vector<finalData*> *temp = new std::vector<finalData*>();
    finalData *one = nullptr;
    for (int i = 0; i < reExpresses->size(); i++)
    {
        
        if ((*reExpresses)[i]->needToScan)
        {
            one = new finalData();
            one->name = (*reExpresses)[i]->name;
            one->reExpress = (*reExpresses)[i]->re;
            temp->push_back(one);
        }
        delete (*reExpresses)[i];
        
    }
    delete reExpresses;
    return temp;
}


std::vector<finalData*>* scanner(std::vector<std::string> lines){
    if (lines.size() == 0)
    {
        return nullptr;
    }
    std::vector<scanData*> *datas;
    datas = scanAll(lines);
    return replaceRe(datas);
}