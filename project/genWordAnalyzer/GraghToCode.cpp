/**
 * @file GrahpToCode.cpp
 * @brief 将正则表达式转换为词法分析器的代码
 * 
 * @version 1.0
 * @date 2024-10-02
 * @author 20222131044
 * 
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-10-02 | 20222131044 | 初始版本
 */
#include "../include/Gragh/Gragh.h"
#include "../include/File/File.h"
#include <iostream>
/**
 * @brief 将正则表达式转换为图
 * 
 * @param reLines 正则表达式
 * @return std::vector<gragh*> 图
 */

// 打印图
void printGragh(std::vector<gragh> *Gs,std::string name)
{
    std::fstream file;
    file.open("../input/" + name + ".gh", std::ios::out);
    for (auto g : *Gs)
    {
        file << g.toString() << std::endl;
    }
    file.close();
}
// 将正则表达式转换为图
std::vector<gragh *>* textsToGraghs(std::vector<std::string> reLines)
{
    std::vector<gragh *> *Gs = new std::vector<gragh *>();
    std::vector<gragh> *NFA = new std::vector<gragh>();
    std::vector<gragh> *DFA = new std::vector<gragh>();
    std::vector<gragh> *miniDFA = new std::vector<gragh>();
    Gragh *P_G = nullptr;

    std::vector<finalData *> *reData = scanner(reLines);

    for (int i = 0; i < reData->size(); i++)
    {
        gragh *g = new gragh();
        P_G = new Gragh();

        P_G->process((*reData)[i]->reExpress);
        *g = P_G->getGragh();
        g->name = (*reData)[i]->name;
        NFA->push_back(*g);

        P_G->toDFA();
        *g = P_G->getGragh();
        g->name = (*reData)[i]->name;
        DFA->push_back(*g);

        P_G->compressDFA();
        *g = P_G->getGragh();
        g->name = (*reData)[i]->name;
        miniDFA->push_back(*g);
        
        Gs->push_back(g);
    }
    printGragh(NFA, "NFA");
    printGragh(DFA, "DFA");
    printGragh(miniDFA, "miniDFA");
    return Gs;
}
/**
 * @brief 将图转换为代码
 * 
 * @param g 图
 */
void buildFunction(gragh *g)
{
    // 打印函数头
    printf("bool %s(Input *input){\n", g->name.c_str());

    // 初始化 finalNodes 为一个包含所有终止节点的向量
    printf("    std::vector<int> finalNodes = {");
    bool first = true;
    for (int node : g->finalNodes) // 遍历 g 的 finalNodes
    {
        if (!first)
            printf(", ");
        printf("%d", node);
        first = false;
    }
    printf("};\n");

    // 后续处理的代码，例如状态机等
    printf("    int state = %d; // 初始状态\n", g->start);
    printf("    while(true) {\n");
    printf("        char letter = (input->getInput())[0];\n");
    printf("        switch(state) {\n");

    // 根据边的定义生成状态转换逻辑
    for (int i = 0; i < g->size; i++)
    {
        printf("            case %d: \n", i);
        printf("                switch(letter) {\n");

        // 遍历图的边，生成状态转换
        for (auto e : *g->edges)
        {
            if (e.begin == i)
            {
                printf("                    case '%s': state = %d; break;\n", e.express.c_str(), e.end);
            }
        }

        printf("                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();\n");
        printf("                }\n");
        printf("                break;\n");
    }

    // 结束状态判断，是否在终止节点
    printf("            default: break;\n");
    printf("        }\n");
    printf("    }\n");
    printf("    return false;\n");
    printf("}\n");
}

void buildHead(){
    printf("#include \"getInput.h\" \n");
    printf("#include <iostream> \n");
    printf("#include <vector> \n");
    printf("#include <string> \n");
    printf("#include <algorithm>\n");
    printf("using namespace std; \n");
    printf("#include <map> \n");
    printf("struct token{ \n");
    printf("    string name; \n");
    printf("    string value; \n");
    printf("}; \n");
    printf("\n\n\n");
}
// 生成 token 函数
void buildtoken(std::vector<gragh *> *Gs)
{
    // 函数头
    printf("std::vector<token> getTokens(std::string filename){ \n");
    printf("    Input *input = new Input(filename); \n");
    printf("    std::vector<token> tokens;  \n");
    printf("    while(!input->getInput().empty()){ \n"); // 如果输入不为空
    // 处理多行注释
    printf("        if (!tokens.empty() && tokens.back().name == \"_open_comment\")\n");
    printf("        { \n");
    printf("            if (!_close_comment(input)){input->goBackOneChar(); continue;} \n");
    printf("            else{token newtoken; newtoken.name = \"_comment\"; tokens.push_back(newtoken); newtoken.name = \"_close_comment\"; tokens.push_back(newtoken); input->goBackOneChar(); continue;}\n");
    printf("        }\n");

    //获取字符
    printf("        int tokenSize = tokens.size();\n");
    printf("        input->goBackOneChar(); \n");
    printf("        char c = (input->getInput())[0]; \n");

    // 处理单行注释
    printf("         if(!tokens.empty() && tokens.back().name == \"_oneLine_comment_open\")\n");
    printf("         { \n");
    printf("             if (c != '\\n'){ continue;} \n");
    printf("             else{token newtoken; newtoken.name = \"_comment\"; tokens.push_back(newtoken); continue;}\n");
    printf("         }\n");

    // 处理空格 回车 制表符
    printf("        if(c == ' ') { token newtoken; newtoken.name = \"_space\"; tokens.push_back(newtoken); continue;} \n");
    printf("        else if(c == '\\t') { token newtoken; newtoken.name = \"_tab\"; tokens.push_back(newtoken); continue;} \n");
    printf("        else if(c == '\\n') {token newtoken; newtoken.name = \"_enter\"; tokens.push_back(newtoken); continue;} \n");
    printf("        input->goBackOneChar();\n");

    // 为每个 gragh 对象生成相应的词法分析调用
    printf("        int pos = input->getPos();\n");
    for (auto g : *Gs)
    {
        printf("        if(%s(input)) {token newtoken; newtoken.name = \"%s\"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  \n", g->name.c_str(), g->name.c_str());
        printf("        else input->goBack(pos);\n");
    }

    // 错误处理
    printf("        if (tokens.size() == tokenSize) {\n");
    printf("            std::cerr << \"Error: Unexpected words\" << std::endl; \n");
    printf("            break;\n");
    printf("        }\n");
    printf("    } \n");

    // 返回 token 向量
    printf("    return tokens;\n");
    printf("}\n");
}
// 主函数
void buildMain(){
    printf("int main(int argc,char* argv[]){ \n");
    printf("    std::vector<token> tokens = getTokens(argv[1]); \n");
    printf("    for (auto t : tokens){ \n");
    printf("        if (t.name == \"_open_comment\" || t.name == \"_close_comment\" || t.name == \"_oneLine_comment_open\") continue; \n");
    printf("        std::cout << t.name.substr(1) << \" \" << t.value << std::endl; \n");
    printf("    } \n");
    printf("    return 0; \n");
    printf("} \n");
}


void buildProgram(std::string path)
{
    std::vector<std::string> reLines = readFile(path);
    std::vector<std::string> tokens;
    buildHead();

    std::vector<gragh *> *Gs = textsToGraghs(reLines);
    for (auto g : *Gs)
    {
        buildFunction(g);
    }
    buildtoken(Gs);
}

int main(int argc, char *argv[]){
    if(argc != 2){
        std::cerr << "Usage: " << argv[0] << " <path>" << std::endl;
        return 1;
    }
    buildProgram(argv[1]);
    buildMain();
    return 0;
}