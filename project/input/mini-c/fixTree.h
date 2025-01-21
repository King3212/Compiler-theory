#include"../../grammarAnalyzer/analyzer/analyzer.h"
#include <set>
#include <algorithm>
namespace std
{
    set<string> ignoreSigns = {"space", "tab", "enter", "(", ")", ";", "{", "}", "[", "]"};
    
    set<string> ops = {"+", "-", "*", "/", ">", "<", "^", "%", "<=", ">=", "==", "!="};

    set<string> types = {"int", "float", "double", "void"};

} // namespace std

