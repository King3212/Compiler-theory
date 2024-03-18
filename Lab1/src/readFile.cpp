#include"../include/readFile.hh"

vector<string> readFile(string filename){
    vector<string> lines;
    ifstream file(filename);

    assert(file.is_open());
    
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}

string getToken(TOKEN token){
    string tokens[10] = {"关键字","分界符号", "标识符", "运算符号", "整数", "字符串", "浮点数", "注释", "特殊符号"};
    return tokens[token];
}
