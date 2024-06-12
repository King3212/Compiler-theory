#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
#include "IndexedSet.h"
using namespace std;

std::string removeSpacesAndTabs(const std::string &str)
{
    std::string result;
    std::remove_copy_if(str.begin(), str.end(), std::back_inserter(result),
                        [](char c)
                        { return c == ' ' || c == '\t'; });
    return result;
}

class First_Follow
{
private:
    map<string,set<string>> First;
    map<string,set<string>> Follow;
    vector<vector<string>> grammers;
    map<string, bool> nullable;
    /*处理文法，得到全为递归模式的文法*/
    void scan(){
        vector<vector<string>> newGrammers;
        for(auto rule : grammers[0]){
            int arrowPos = rule.find("->");
            string rightPart = rule.substr(arrowPos + 2);
            string leftPart = removeSpacesAndTabs(rule.substr(0, arrowPos));
            stringstream ss(rightPart);
            vector<string> grammerTemp;

            First.insert(pair<string, set<string>>(leftPart, set<string>()));
            Follow.insert(pair<string, set<string>>(leftPart, set<string>()));
            nullable.insert(pair<string, bool>(leftPart, false));

            grammerTemp.push_back(leftPart);
            string symbol;
            while (ss >> symbol)
            {
                if (symbol == "|")
                {
                    if (grammerTemp.size() >= 2){
                        newGrammers.push_back(grammerTemp);
                        grammerTemp.clear();
                        grammerTemp.push_back(leftPart);
                    }
                    grammerTemp.clear();
                }else if(symbol == "@"){
                    nullable[leftPart] = true;
                }
                else{
                    grammerTemp.push_back(symbol);
                }
            }
            if (grammerTemp.size() >= 2)
            {
                newGrammers.push_back(grammerTemp);
                grammerTemp.clear();
            }
        }
        grammers.clear();
        grammers = newGrammers;
    }

    void genSets(){
        scan();
        gen();
    }
    void gen()
    {
        bool haveChange = true;
        while (haveChange)
        {
            haveChange = false;

            for (const auto &grammar : grammers)
            {
                bool firstAllNullable = true;

                for (int i = 1; i < grammar.size(); i++)
                {
                    if (firstAllNullable)
                    {
                        if (nullable.count(grammar[i]))
                        { // 非终结符
                            int size = First[grammar[0]].size();
                            First[grammar[0]].insert(First[grammar[i]].begin(), First[grammar[i]].end());

                            if (size != First[grammar[0]].size())
                            {
                                haveChange = true;
                            }

                            if (!nullable[grammar[i]])
                            { // 如果该符号不可空
                                firstAllNullable = false;
                            }
                        }
                        else
                        { // 终结符
                            firstAllNullable = false;
                            First[grammar[0]].insert(grammar[i]);
                            break;
                        }
                    }

                    bool secondAllNullable = true;

                    for (int j = i + 1; j < grammar.size(); j++)
                    {
                        if (secondAllNullable)
                        {
                            if (nullable.count(grammar[j]))
                            { // 非终结符
                                int size = Follow[grammar[i]].size();
                                Follow[grammar[i]].insert(First[grammar[j]].begin(), First[grammar[j]].end());

                                if (size != Follow[grammar[i]].size())
                                {
                                    haveChange = true;
                                }

                                if (!nullable[grammar[j]])
                                { // 如果该符号不可空
                                    secondAllNullable = false;
                                    break;
                                }
                            }
                            else
                            { // 终结符
                                secondAllNullable = false;
                                Follow[grammar[i]].insert(grammar[j]);
                                break;
                            }
                        }
                    }

                    if (secondAllNullable)
                    {
                        int size = Follow[grammar[i]].size();
                        Follow[grammar[i]].insert(Follow[grammar[0]].begin(), Follow[grammar[0]].end());

                        if (size != Follow[grammar[i]].size())
                        {
                            haveChange = true;
                        }
                    }
                }

                if (firstAllNullable)
                {
                    if (!nullable[grammar[0]])
                    {
                        nullable[grammar[0]] = true;
                        haveChange = true;
                    }
                }
            }
        }
    }

public:
    void init(vector<string> grammers){
        this->grammers = vector<vector<string>>();
        this->grammers.push_back(grammers);
        genSets();
    }
    map<string, set<string>> getFirst()
    {
        return First;
    }
    map<string, set<string>> getFollow()
    {
        return Follow;
    }
};
