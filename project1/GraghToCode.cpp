#include "Gragh/Gragh.h"
#include "File/File.h"
#include <iostream>
std::vector<gragh *>* textsToGraghs(std::vector<std::string> reLines)
{
    std::vector<gragh *> *Gs = new std::vector<gragh *>();
    Gragh *P_G = nullptr;

    std::vector<finalData *> *reData = scanner(reLines);

    for (int i = 0; i < reData->size(); i++)
    {
        P_G = new Gragh();
        P_G->process((*reData)[i]->reExpress);
        P_G->toDFA();
        P_G->compressDFA();
        gragh *g = new gragh();
        *g = P_G->getGragh();
        g->name = (*reData)[i]->name;
        Gs->push_back(g);
    }
    return Gs;
}

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

        printf("                    default: return false;\n");
        printf("                }\n");
        printf("                break;\n");
    }

    // 结束状态判断，是否在终止节点
    printf("            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();\n");
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
    printf("using namespace std; \n");
    printf("\n\n\n");
}

void buildtoken(std::vector<gragh *> *Gs)
{
    // 函数头
    printf("std::vector<std::string> token(){ \n");
    printf("    Input *input = new Input(\"./temp.txt\"); \n");
    printf("    std::vector<std::string> tokens;  \n");
    printf("    while(!input->getInput().empty()){ \n"); // 如果输入不为空
    printf("        int tokenSize = tokens.size();\n");
    printf("        input->goBackOneChar(); \n");
    printf("        std::string c = input->getInput(); \n");
    printf("        if(c == ' ' || c == '\\n') continue; \n");
    printf("        input->goBackOneChar();\n");
    printf("        int pos = input->getPos();\n");

    // 为每个 gragh 对象生成相应的词法分析调用
    for (auto g : *Gs)
    {
        printf("        if(%s(input)) { tokens.push_back(\"%s\"); input->goBackOneChar(); continue; }  \n", g->name.c_str(), g->name.c_str());
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


void buildMain(std::string path)
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

int main(){
    buildMain("./test.txt");
}