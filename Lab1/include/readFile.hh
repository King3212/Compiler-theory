#include"../include/scanner.hh"
#include<QString>
#pragma once

vector<string> readFile(string filename);

string getToken(TOKEN token);

QString intoQstring(vector <pair<string,TOKEN>> result);

string getError(ERROR error);
