#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool cmp(string a, string b){
    return a.size() < b.size();
}


int main(){
    vector<string>Operators = {"+","+=","-","-=","*","*=","/","/=","->","%","%=","&","!","^","|","||","&&","<","<<","<=",">",">>",">=","=","==","++","--",".","::","!=",":","?"};
    sort(Operators.begin(),Operators.end(),cmp);
    for (auto i : Operators)
    {
        cout << "\"" << i << "\", ";
    }
    
}