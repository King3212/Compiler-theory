#include<vector>
#include<unordered_set>
#include<stack>
#include<string>
#include<iostream>
#include<IndexedSet.hh>
#include"globle.hh"
using namespace std;

enum _op{
    s,j,g
};

struct operation
{
    _op op;
    int n;
};

struct Item{
    int grammer;
    int dot;
};

struct Statu
{
    IndexedSet<Item> items;
};




class LR1
{
private:
    int SetsSize;
    int SignSize;
    stack<int> notRead;
    IndexedSet<Statu> status;
    vector<vector<operation>> *map;
    vector<string> *NTsigns;
    IndexedSet<Grammer> grammers; // 文法

public:
    void inputGrammers(IndexedSet<Grammer> grammers)
    {
        this->grammers = grammers;
        delete NTsigns;
        delete map;
        NTsigns = new vector<string>();
        for (auto grammer : grammers)
        {
            NTsigns->push_back(grammer.sign);
        }
    }
private:
    /*closure function*/
    vector<Item> getNewItems(string sign){
        vector<Item> result;
        Item one;
        for (int i = 0; i < NTsigns->size(); i++)
        {
            if (sign == (*NTsigns)[i])
            {
                one.dot = 0;
                one.grammer = i;
                result.push_back(one);
            }
        }
        return result;
    }
    void closure(Statu &statu)
    {
        bool conti = true;
        Grammer grammer;
        while (conti)
        {
            conti = false;
            for (auto item : statu.items)
            {
                grammer = grammers.getElement(item.grammer);
                for(auto i : getNewItems(grammer.grammer[item.dot])){
                    if(!statu.items.contains(i)){
                        statu.items.insert(i);
                        conti = true;
                    }
                }
            }
        }
    }
private:
    /*make gragh function*/
    vector
};

