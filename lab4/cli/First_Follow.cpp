#include "First_Follow.h"

int main(){
    First_Follow one;
    vector<string> grammers = {
        "S->E $",
        "E->E + T",
        "E->T",
        "T->a"
    };
    one.init(grammers);

    cout << "First:\n";
    for (auto i : one.getFirst())
    {
        cout << i.first << "\t";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "Follow:\n";
    for (auto i : one.getFollow())
    {
        cout << i.first << "\t";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}