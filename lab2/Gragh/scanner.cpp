#include<vector>
#include<string>
#include<map>
/**
 * 这里扫描所有的句子
 * 
 * 将等号前面与等号后面的部分做扫描
 * 确定一一对应的正则表达式标识符
*/
std::vector<std::pair<std::string,std::string>> preScanner(std::vector<std::string> lines){
    for (auto line : lines)
    {
        int pos = 0;
        while (true)
        {
            if (line[pos] == ' ' || line[pos] == '\t')
            {
                pos++;
            }else{
                
            }
            
        }
        
    }
    
    
}