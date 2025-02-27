#pragma execution_character_set("utf-8")
/**
 * @file scanner.cpp
 * @brief 扫描器模块的实现文件
 * 
 * @version 1.0
 * @date 2024-4-28
 * @auther 20222131044
 * 
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-4-28 | 20222131044 | 初始版本
 * 1.1 | 2025-1-16 | 20222131044 | 修改正则表达式的处理方式
 */
#include<vector>
#include<string>
#include"scanner.h"
#include<map>


/**
 * @brief 扫描所有的句子
 * 
 * @param lines 文件内容
 * @return std::vector<scanData*> 扫描数据
 * 
 * @example 
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
        if(line == "") continue;
        bool once = true;
        oneData = new scanData(); 
        int pos = 0;
        startPos = 0;
        oneData->needToScan = false;
        while (true)
        {
            if (line[pos] == ' ' || line[pos] == '\t')
            {
                pos++;
            }else if(startPos == 0 && once){
                once = false;
                startPos = pos;
                if (line[pos] == '_')
                {
                    oneData->needToScan = true;
                }
                pos++;
            }else if(line[pos] == '='){
                oneData->name = line.substr(startPos,pos-startPos);
                oneData->re = line.substr(pos+1);


                pos = oneData->name.find_first_of(" \t");
                oneData->name = oneData->name.substr(0,pos);

                pos = oneData->re.find_first_not_of(" \t");
                oneData->re = oneData->re.substr(pos);
                if (!oneData->re.empty() && (oneData->re.back() == '\r'|| oneData->re.back() == '\n'))
                {
                    oneData->re.erase(oneData->re.size() - 1);
                }
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
 * @brief 替换正则表达式中的标识符
 * 
 * @param reExpresses 扫描数据
 * @return std::vector<finalData*> 最终数据
 * 
 * @example 
 * input:
 * >>> result:{
 *     name = "number"
 *     needToScan = true
 *     re = "[0-9]"
 * }
 * output:
 * >>> result:{
 *     name = "number"
 *     reExpress = "((0|1|2|3|4|5|6|7|8|9))"
 * }
 */
std::vector<finalData*>* replaceRe(std::vector<scanData*> *reExpresses) {
    // 创建一个映射，将标识符与其对应的正则表达式关联起来
    std::map<std::string, std::string> definitions;
    
    // 遍历扫描到的正则表达式，将其标识符及定义存储到映射中
    for (scanData* scanDataPtr : *reExpresses) {
        if(!scanDataPtr->needToScan) definitions[scanDataPtr->name] = scanDataPtr->re;
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


/**
 * @brief 基础替换
 * 
 * @param reExpresses 最终数据
 * @return std::vector<finalData*> 最终数据
 * 
 * @example 
 * input:
 * >>> result:{
 *     name = "number"
 *     reExpress = "[0-9]"
 * }
 * output:
 * >>> result:{
 *     name = "number"
 *     reExpress = "((0|1|2|3|4|5|6|7|8|9))"
 * }
 */
std::vector<finalData*>* baseRe(std::vector<finalData*>* reExpresses){
    int pos = 0;
    int end = 0;
    std::string replaceStr = "";
    for (finalData* data : *reExpresses)//取出数据
    {
        pos = 0;
        
        while (pos < data->reExpress.size())//处理每一行
        {
            end = 0;
            replaceStr = "(";
            if (data->reExpress[pos] == '[' && (pos == 0 || data->reExpress[pos-1] != '\\'))//搜索到"["
            {
                end = data->reExpress.find_first_of(']',pos);
                while (data->reExpress[end-1] == '\\')
                {
                    end = data->reExpress.find_first_of(']',end+1);
                }
                
                for (int i = pos; i < end; i++)//替换
                {
                    if (data->reExpress[i] == '-' &&  (pos == 0 || data->reExpress[pos-1] != '\\'))
                    {
                        for (char j = data->reExpress[i-1]; j <= data->reExpress[i+1]; j++)
                        {
                            replaceStr.push_back(j);
                            replaceStr.push_back('|');
                        }
                        
                    }
                    
                }
                //去除替换最后一个|并加括号
                replaceStr.pop_back();
                replaceStr+=")";
                //替换
                data->reExpress.replace(pos,end-pos+1,replaceStr);
                pos += replaceStr.size();
            }else pos++;
            
        }
        
    }
    return reExpresses;
}

std::vector<std::string> split(std::string str,std::string pattern){
    std::string::size_type pos;
    std::vector<std::string> result;
    str+=pattern;
    int size=str.size();
    for(int i=0; i<size; i++){
        pos=str.find(pattern,i);
        if(pos<size){
            std::string s=str.substr(i,pos-i);
            result.push_back(s);
            i=pos+pattern.size()-1;
        }
    }
    return result;
}
/**
 * @brief 扫描器
 * 
 * @param lines 文件内容
 * @return std::vector<finalData*> 最终数据
 */
std::vector<finalData*>* scanner(std::vector<std::string> lines){
    if (lines.size() == 0)
    {
        return nullptr;
    }
    // 在此处进行预处理，将keywords和signs的定义转出来
    /**
     * @todo 
     * keywords 1000= if else ...
     * signs 500=+ - ...
     * _open_comment = \{
     * _close_comment = \}
     * identifier = letter(letter|digit)*
     * number = digit+
     * 
     * @output
     * letter = [a-zA-Z]
     * digit = [0-9]
     * _1000 = if
     * _1001 = else
     * ...
     * _500 = +
     * _501 = -
     * ...
     * 
     */
    std::vector<std::string> tempLines;
    tempLines = lines;
    lines.clear();
    lines.push_back("letter = [a-zA-Z]");
    lines.push_back("digit = [0-9]");

    for(auto line : tempLines){
        std::vector <std::string> temp;
        if(line == "") continue;
        temp = split(line," ");
        if (temp[0] == ">>") continue;
        if(temp[0][0] != '_'){
            int start = std::stoi(temp[1]);
            for(int i = 3; i < temp.size(); i++){
                lines.push_back("_" + std::to_string(start) + " = " + temp[i]);
                start++;
            }
        }
        else lines.push_back(line);
    }

    std::vector<scanData*> *datas;
    datas = scanAll(lines);
    return baseRe(replaceRe(datas));
}
