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
    string next_sign;
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
    
    /*这是一个记录所有状态的数组*/
    IndexedSet<Statu> status;
    /*这是目标生成的表*/
    vector<vector<vector<operation>>> *map;
    /*非终结符号集合*/
    IndexedSet<string> *NTsigns;
    /*这是所有文法*/
    IndexedSet<Grammer> grammers; // 文法

public:
    /*这个函数接受处理好的文法*/
    void inputGrammers(IndexedSet<Grammer> grammers)
    {
        this->grammers = grammers;
        delete NTsigns;
        delete map;
        NTsigns = new IndexedSet<string>();
        for (auto grammer : grammers)
        {
            NTsigns->push_back(grammer.sign);
        }
    }
private:
    /*这两个函数做闭包操作，调用closure即可*/
    
    /*这个函数读入一个符号sign,在文法中搜索它生成的所有文法，并生成item*/
    vector<Item> getNewItems(string sign){
        vector<Item> result;
        Item one;
        for (int i = 0; i < NTsigns->size(); i++)
        {
            if (sign == (*NTsigns).getElement(i))
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
        bool have_change = true;
        Grammer grammer;
        while (have_change)//如果没有更改就结束
        {
            have_change = false;
            for (auto item : statu.items)//对statu中的每个项
            {
                grammer = grammers.getElement(item.grammer);//获得文法
                if (item.dot == grammer.grammer.size())//如果是到达终点的
                {
                    continue;//什么都不要做
                }
                
                string sign = grammer.grammer[item.dot];
                if (NTsigns->contains(sign))//如果是非终结符号
                {
                    for (auto i : getNewItems(sign))//生成一个item
                    {
                        if (!statu.items.contains(i))//查看是否存在相同的项
                        {
                            statu.items.insert(i);//不存在则插入
                            have_change = true;//说明有更改
                        }
                    }
                }
                else{
                    continue;
                }
                
            }
        }
    }
private:
    /*这是处理的主函数*/
    void work(){
        /*这是一个栈，管理所有没有被处理的状态*/
        stack<int> notRead;
        /*虚构出开始状态S'->.S$*/

        /*添加到栈顶*/
        
        while(!notRead.empty()){/*循环，栈为空结束*/
            /*取栈顶元素*/
            int top_one = notRead.top();
            notRead.pop();
            Statu this_statu = status.getElement(top_one);
            /*搜索所有*/
            for (auto item : this_statu.items){
                Grammer this_grammer = grammers.getElement(item.grammer);
                if (this_grammer.grammer.size() == item.dot)
                {
                    (*map)[top_one][]
                }
                
                if (item.grammer)
                {
                    
                }
                
            }
        }
        /*查看是否结束*/
    }
};
