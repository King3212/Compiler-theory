#include"test.h"
using namespace std;
void run(string path = "./test/test.txt"){
    vector<string> read = readFile(path);
    std::vector<finalData*> *data = scanner(read);
    Gragh g;
    for (int i = 0; i < data->size(); i++)
    {
        g.process((*data)[i]->reExpress);
        cout << string('*',3) << string('-',20) << string('*',3) << endl;
        cout << string('*',3) <<"\tGragh "<< i << "\t"<< string('*',3) << endl;
        for(auto i : g.toString()){
            cout << i << endl;
        }
    }
    
}

int main(){
    run();
    return 0;

}