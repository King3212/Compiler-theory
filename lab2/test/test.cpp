#include"test.h"
using namespace std;
void run(string path = "./test/test.txt"){
    vector<string> read = readFile(path);
    std::vector<finalData*> *data = scanner(read);
    Gragh g;
    for (int i = 0; i < data->size(); i++)
    {
        g.process((*data)[i]->reExpress);
        cout <<"***----------------------------------------------***"<< endl;
        cout <<"***-------\"+\"代表出口----------\"-\"代表入口-------***" << endl;
        cout << "***    " <<"Gragh "<< (*data)[i]->name << ": "<< (*data)[i]->reExpress << "    ***" << endl;
        for(auto i : g.toString()){
            cout << i << endl;
        }
    }
    
}

int main(){
    run();
    return 0;

}