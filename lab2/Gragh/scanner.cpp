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
                oneData->name = line.substr(startPos,pos-startPos-1);
                oneData->re = line.substr(pos+1);
                pos = oneData->re.find_first_not_of(" \t");
                oneData->re = oneData->re.substr(pos);
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
 * 此函数进行基础化替换
 * 除去[]运算
 * 只含有"*" "+" "|" "(" ")" "\"符号（以及省略的连接符）
 * 
 * 例如：
 * 
 * input:
 * >>> _numbers = ([0-9])*
 * output:
 * >>> _numbers = ((0|1|2|3|4|5|6|7|8|9))*
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


std::vector<finalData*>* scanner(std::vector<std::string> lines){
    if (lines.size() == 0)
    {
        return nullptr;
    }
    std::vector<scanData*> *datas;
    datas = scanAll(lines);
    return baseRe(replaceRe(datas));
}
