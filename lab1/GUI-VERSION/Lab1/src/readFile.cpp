#include"../include/readFile.h"
#include<fstream>
#include<QMessageBox>
#include<QWidget>
#include<assert.h>
#pragma execution_character_set("utf-8")

vector<string> readFile(string filename,QWidget *widget){
    vector<string> lines;
    ifstream file(filename);

    if(!file.is_open()){
        QMessageBox::critical(widget, "错误", "无法打开文件！\n");
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}



QString intoQstring(vector <pair<string,TOKEN>> result){
    QString Qresult = "";
    static const QString tokens[10] = {"关键字","分界符号", "标识符", "运算符号", "整数", "字符串", "浮点数", "注释", "特殊符号","字符"};
    for(pair<string,TOKEN> i : result){
        Qresult.append(QString::fromStdString(i.first + "\t"));
        Qresult.append(tokens[i.second]);
        Qresult.append("\n");
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
QString getError(ERROR error){
    QString errors[10] = {"单引号内有多个字符","字符串右引号缺失","以数字开头的标识符","无法解析"};
    return errors[error-1];
}
