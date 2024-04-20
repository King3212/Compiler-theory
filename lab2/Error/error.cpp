#include"error.h"

void Error(int x)
{
    std::vector<std::string> errors; // 创建一个存储字符串的向量

    // 打开文件
    std::ifstream file("./Error/error.txt");

    // 逐行读取文件内容
    std::string line;
    while (std::getline(file, line)) {
        errors.push_back(line); // 将读取的每一行添加到向量中
    }

    // 关闭文件
    file.close();

    std::ofstream log("./Error/error.log",std::ios::app);
    log << errors[x] << std::endl;
    std::cerr << errors[x] << std::endl;
    log.close();
}