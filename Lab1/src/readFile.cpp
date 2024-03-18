#include"../include/readFile.hh"
#include<fstream>
#include<assert.h>
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
    string tokens[10] = {"关键字","分界符号", "标识符", "运算符号", "整数", "字符串", "浮点数", "注释", "特殊符号","字符"};
    return tokens[token];
}


QString intoQstring(vector <pair<string,TOKEN>> result){
    QString Qresult = "";
    for(pair<string,TOKEN> i : result){
        Qresult.append(QString::fromStdString(i.first + " " + getToken(i.second)+ "\n"));
    }
    return Qresult;
}
/*
 *  * 无错误NoError
 * 单引号内有多个字符 Error_char
 * 字符串右引号缺失 Error_string
 * 以数字开头的标识符 Error_identifier
 * 无法解析Error_bad_char
 * */
string getError(ERROR error){
    string errors[10] = {"单引号内有多个字符","字符串右引号缺失","以数字开头的标识符","无法解析"};
    return errors[error-1];
}
