#include "globle.h"

string Grammar::toString()
{
    string result = "Grammar:\n";
    result += "left: \n" + left + "\n";
    result += "right: \n";
    for(auto sign : right){
        result += sign + " ";
    }
    result += "\n";
    return result;
}

bool Grammar::operator==(const Grammar &other) const
{
    return left == other.left && right == other.right;
}

bool Grammar::operator<(const Grammar &other) const
{
    return left < other.left || right < other.right;
}

bool Item::operator==(const Item &other) const
{
    return dot == other.dot && production == other.production && lookahead == other.lookahead;
}

string Item::toString()
{
    string result = "Item:\n";
    result += "dot: \n" + to_string(dot) + "\n";
    result += "production: \n" + production.toString() + "\n";
    result += "lookahead: \n";
    for(auto sign : lookahead){
        result += sign + " ";
    }
    result += "\n";
    return result;
}

bool Item::operator<(const Item &other) const
{
    return dot < other.dot || production < other.production || lookahead < other.lookahead;
}

string Edge::toString()
{
    string result = "Edge:\n";
    result += "from: \n" + to_string(from) + "\n";
    result += "to: \n" + to_string(to) + "\n";
    result += "sign: \n" + sign + "\n";
    result += "type: \n" + to_string((int)(type)) + "\n";
    result += "reduceProduction: \n" + reduceProduction.toString() + "\n";
    return result;
}

bool Edge::operator==(const Edge &other) const
{
    return from == other.from && to == other.to && sign == other.sign && type == other.type && reduceProduction == other.reduceProduction;
}

bool State::operator==(const State &other) const
{
    return items == other.items;
}

bool State::operator<(const State &other) const
{
    return items < other.items;
}
