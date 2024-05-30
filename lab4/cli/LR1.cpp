#include<vector>
#include<unordered_set>
#include<stack>
#include<string>
#include<iostream>
#include"globle.h"
using namespace std;

enum _op{
    s,j,g
};

struct operation
{
    _op op;
    int n;
};

struct item{
    int grammer;
    int dot;
    string sign_forward;
};

struct statu
{
    unordered_set<item> items;
};




class LR1
{
private:
    int SetsSize;
    int SignSize;
    stack<statu> notRead;
    vector<statu> status;
    vector<vector<operation>> *map;
    vector<string> signs;
    vector<vector<string>>grammers; //文法
public:
    LR1(vector<vector<string>>grammers){
        map = new vector<vector<operation>>();
        this->grammers = grammers;
    }
    void closure();
};

