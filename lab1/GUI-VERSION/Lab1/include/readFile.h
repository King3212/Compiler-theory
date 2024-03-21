#include"../include/scanner.h"
#include<QString>
#pragma once
#pragma execution_character_set("utf-8")

vector<string> readFile(string filename);

QString intoQstring(vector <pair<string,TOKEN>> result);

QString getError(ERROR error);
