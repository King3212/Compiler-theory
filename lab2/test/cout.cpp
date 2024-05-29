#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
   vector<string> tests =
{
"_test0 = a",
"_test1 = ab",
"_test2 = a|b",
"_test3 = a*",
"_test4 = a+",
"_test5 = a?",
"_test6 = ab|c",
"_test7 = (a|b)c",
"_test8 = c(a|b)",
"_test9 = b(a*)",
"_test10 = a\\+?",
"_test11 = a*(b)",
"_test12 = [1-5]",
"_test13 = [1-2]c",
"_test14 = [1-2]|c",
"digit = [0-9]",
"letter = [a-zA-Z]",
"_ID = letter(letter|digit)*",
"_Exp = digit+(\\+|-)digit+"};
    for (auto i : tests)
    {
        cout << i << endl;
    }
    
}