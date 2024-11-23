#include"LR1.h"

using namespace std;

class LALR1:public LR1
{
private:
    bool sameCore(State s1, State s2);
    void rebuild();
    IndexedSet<State> newStates;
public:
   LALR1(vector<Grammar> grammars):LR1(grammars){
       genDFA();
       rebuild();
   }
};

