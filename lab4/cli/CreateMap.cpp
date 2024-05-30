#include<vector>
#include<unordered_set>
#include<stack>
#include<string>
#include<iostream>
using namespace std;

enum _op{
    s,j,g
};

struct operation
{
    _op op;
    int n;
};


class LR1
{
private:
    int size;
    vector<vector<operation>> *map;
    vector<
public:
    LR1(){
        map = new vector<vector<operation>>();
    }
    ~LR1();
};

