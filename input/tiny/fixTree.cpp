/**
 * @file fixTree.cpp
 * @brief 修正分析树为语法树
 * 
 * @version 1.0
 * @date 2025-01-22
 * @auther 20222131044
 *  
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2025-01-22 | 20222131044 | 初始版本
 * 
 * 
 */

#include"../../grammarAnalyzer/analyzer/analyzer.h"
#include <set>
#include <algorithm>
namespace std
{
    set<string> ignoreSigns = {"space", "tab", "enter", "(", ")", ";", "[", "]"};
    
    set<string> ops = {"+", "-", "*", "/", ">", "<", "^", "%", "<=", ">=", "=", "<>"};

}
namespace std{
    extern "C" {
        void fixTree(Tree * tree){
            if (tree->children.empty()){
                return;
            }
            for (auto child : tree->children){
                fixTree(child);
            }

            vector<Tree*> newChildren;
            

            // 对特定符号进行处理
            // exp
            if (tree->children.size() == 3 && ops.find(tree->children[1]->sign) != ops.end()){
                tree->value = tree->children[1]->value;
                tree->children[1]->value = "";
            }

            // if
            if (tree->sign == "if-stmt"){
                tree->value = tree->children[0]->value;
                tree->children[0]->value = "";
                tree->children[2]->children.push_back(tree->children[3]);
                if(tree->children[4]->sign == "else"){
                    tree->children[4]->children.push_back( tree->children[5]);
                    tree->children.erase(tree->children.begin()+5);
                    tree->children[6]->value = "";
                }
                tree->children.erase(tree->children.begin()+3);

            }

            // repeat
            if (tree->sign == "repeat-stmt"){
                tree->value = tree->children[0]->value;
                tree->children[0]->value = "";
                tree->children[2]->children = tree->children[3]->children;
                tree->children[3]->value = "";
            }

            // read
            if (tree->sign == "read-stmt"){
                tree->value = tree->children[0]->value;
                tree->children[0]->value = "";
            }

            // write
            if (tree->sign == "write-stmt"){
                tree->value = tree->children[0]->value;
                tree->children[0]->value = "";
            }

            // assign
            if (tree->sign == "assign-stmt"){
                tree->value = tree->children[0]->value;
                tree->children[0]->value = "";
                tree->children[1]->value = "";
            }

            

            // 删除应该被忽略的符号
            
            for (auto child : tree->children){
                if (ignoreSigns.find(child->sign) == ignoreSigns.end()){
                    newChildren.push_back(child);
                }
            }
            tree->children = newChildren;

            // 将只有一个子节点且节点值为空的符号合并
            if (tree->children.size() == 1 && tree->value == ""){
                tree->sign = tree->children[0]->sign;
                tree->value = tree->children[0]->value;
                tree->children = tree->children[0]->children;
            }

            // 删除value为空的符号
            newChildren.clear();
            for (auto child : tree->children){
                if (!(child->value == "")){
                    newChildren.push_back(child);
                }else{
                    for (auto c : child->children){
                        newChildren.push_back(c);
                    }
                }
            }
            tree->children = newChildren;
            
        }
    }
}
