#include"globals.h"
#include"util.h"
#include"getTree.h"

int main()
{
    TreeNode *SyntaxTree = getSyntaxTree("./testfile/SAMPLE.TNY");
    printTree(SyntaxTree);
}