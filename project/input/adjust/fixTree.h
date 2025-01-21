#include"../../grammarAnalyzer/analyzer/analyzer.h"
#include <set>
#include <algorithm>
namespace std
{
    set<string> ignoreSigns = {"space", "tab", "enter", "(", ")", ";", "{", "}"};
    set<string> ops = {"+", "-", "*", "/", ">", "<", "=", "^", "%", "<=", ">=", "==", "!="};


} // namespace std

