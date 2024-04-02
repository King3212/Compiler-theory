#include"../include/scanner.h"
#include<QString>
#include<QWidget>
#pragma once
#pragma execution_character_set("utf-8")

vector<string> readFile(string filename,QWidget *widget);

QString intoQstring(vector <pair<string,TOKEN>> result);

QString getError(ERROR error);
