#include"globle.h"
#include<map>
#include<set>
#include<iostream>
using namespace std;
#pragma once
class LR1
{
protected:
    Grammar virtualGrammar;
    vector<Grammar> grammars;
    map<string, vector<Grammar>> grammarMap;
    map<string, IndexedSet<string>> First;
    map<string, IndexedSet<string>> Follow;
    IndexedSet<State> states;
    IndexedSet<string> signs;
    IndexedSet<string> nonTerminals;
    IndexedSet<Edge> edges;
    map<string,bool> nullable;
public:
    LR1(vector<Grammar> grammars)
    {
        this->grammars = grammars;
        this->First = map<string, IndexedSet<string>>();
        this->Follow = map<string, IndexedSet<string>>();
        this->states = IndexedSet<State>();
        this->signs = IndexedSet<string>();
        this->nonTerminals = IndexedSet<string>();
        this->edges = IndexedSet<Edge>();
        this->nullable = map<string,bool>();

        for(auto &g: grammars){
            grammarMap[g.left].push_back(g);
            nonTerminals.insert(g.left);
            for(auto sign : g.right){
                signs.insert(sign);
            }
            signs.insert(g.left);
        }

        genNullable();
        genFirst();
        genFollow();

    }

    State gotoState(State state, string sign);

    void genDFA();

    void printEdge();

    void printState();

    string toGraph();

    string toString();

    string getFirstFollow();
private:
    void genFirst();

    void genFollow();

    void genNullable();

    void closure(Item item, IndexedSet<Item> &result);

    IndexedSet<string> getFirstSet(vector<string> remainingSymble,IndexedSet<string> oldLookahead);

    IndexedSet<string> getJumpSet(State &state);

    void genDFArec(State &state);
};