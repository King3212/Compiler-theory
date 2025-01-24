/**
 * @file fixTree.cpp
 * @brief 修正分析树为语法树
 * 
 * @version 1.0
 * @date 2024-11-30
 * @auther 20222131044
 *  
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2025-01-21 | 20222131044 | 初始版本
 * 
 * 
 */

#include"../../grammarAnalyzer/analyzer/analyzer.h"
#include <set>
#include <algorithm>
namespace std
{
    set<string> ignoreSigns = {"space", "tab", "enter", "(", ")", ";", "{", "}", "[", "]"};
    
    set<string> ops = {"+", "-", "*", "/", ">", "<", "^", "%", "<=", ">=", "==", "!="};

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

            // function
            if (tree->sign == "call"){
                tree->value = tree->children[0]->value;
                tree->children.erase(tree->children.begin());

            }

            // if
            if (tree->sign == "condition-stmt"){


                // save if and remove if from children
                tree->value = tree->children[0]->value;
                tree->children.erase(tree->children.begin());
                // find else
                int elseIndex = -1;
                for (int i = 0; i < tree->children.size(); i++){
                    if (tree->children[i]->sign == "else"){
                        elseIndex = i;
                        break;
                    }
                }
                // if else exists
                if (elseIndex != -1){
                    tree->children[elseIndex]->children = tree->children[elseIndex+1]->children;
                    
                    tree->children.erase(tree->children.begin()+elseIndex+1);
                }
            }

            // return
            if (tree->sign == "return-stmt"){
                tree->value = tree->children[0]->value;
                tree->children.erase(tree->children.begin());
            }

            // while
            if (tree->sign == "while-stmt"){
                tree->value = tree->children[0]->value;
                tree->children.erase(tree->children.begin());
            }

            // do-while
            if (tree->sign == "do-while-stmt"){
                tree->value = tree->children[1]->value;
                tree->children.erase(tree->children.begin()+1);

                int whileIndex = -1;
                for (int i = 0; i < tree->children.size(); i++){
                    if (tree->children[i]->sign == "while"){
                        whileIndex = i;
                        break;
                    }
                }
                for (int i = 0; i < tree->children.size(); i++){
                    if (tree->children[i]->sign == "expression"){
                        tree->children[whileIndex]->children.push_back(tree->children[i]);
                        tree->children.erase(tree->children.begin()+i);
                        break;
                    }
                }
            }

            // expression
            if (tree->sign == "expression" && tree->children.size() == 3){
                tree->value = tree->children[0]->value; // name
                
                tree->children[0]->value = "";
                tree->children[1]->value = "";
                return;
            }

            // function definition
            if (tree->sign == "function-definition"){
                tree->sign += "+";
                tree->value = tree->children[1]->value;
                tree->children[1]->value = "";
            }

            // variable definition
            if (tree->sign == "variable-definition"){

                tree->value = tree->children[1]->value;
                tree->children[1]->value = "";
            }

            //variable
            if (tree->sign == "variable"){
                tree->value = tree->children[0]->value;
                tree->children[0]->value = "";
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