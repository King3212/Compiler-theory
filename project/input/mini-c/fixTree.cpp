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
 * 1.0 | 2024-11-30 | 20222131044 | 初始版本
 * 
 * 
 */
#include "fixTree.h"
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
            if (tree->children.size() > 5 && tree->children[0]->sign == "if"){
                int hasElse = 0;
                for (; hasElse < tree->children.size(); hasElse++){
                    if (tree->children[hasElse]->sign == "else"){
                        break;
                    }
                }
                tree->children[0]->sign = "if+";
                Tree* condition;
                Tree* ifPart;
                Tree* elsePart;
                condition->value = "condition";
                ifPart->value = "ifPart";
                elsePart->value = "elsePart";
                condition->children.push_back(tree->children[2]);
                for (int i = 4; i < hasElse; i++){
                    ifPart->children.push_back(tree->children[i]);
                }
                if (hasElse < tree->children.size()){
                    for (int i = hasElse + 1; i < tree->children.size(); i++){
                        elsePart->children.push_back(tree->children[i]);
                    }
                    tree->children[0]->children.push_back(elsePart);
                }
                tree->children[0]->children.push_back(condition);
                tree->children[0]->children.push_back(ifPart);
            }

            // while
            if (tree->children.size() > 5 && tree->children[0]->sign == "while"){
                tree->children[0]->sign = "while+";
                Tree* condition;
                Tree* whilePart;
                condition->value = "condition";
                whilePart->value = "whilePart";
                condition->children.push_back(tree->children[2]);
                for (int i = 4; i < tree->children.size(); i++){
                    whilePart->children.push_back(tree->children[i]);
                }
                tree->children[0]->children.push_back(condition);
                tree->children[0]->children.push_back(whilePart);
            }

            // do-while
            if (tree->children.size() > 5 && tree->children[0]->sign == "do"){
                tree->children[0]->sign = "do+";
                Tree* condition;
                Tree* doPart;
                condition->value = "condition";
                doPart->value = "doPart";
                for (int i = 2; i < tree->children.size() - 2; i++){
                    doPart->children.push_back(tree->children[i]);
                }
                condition->children.push_back(tree->children[tree->children.size() - 2]);
                tree->children[0]->children.push_back(doPart);
                tree->children[0]->children.push_back(condition);
            }

            // for
            if (tree->children.size() > 7 && tree->children[0]->sign == "for"){
                tree->children[0]->sign = "for+";
                Tree* condition;
                Tree* forPart;
                condition->value = "condition";
                forPart->value = "forPart";
                for (int i = 2; i < 4; i++){
                    condition->children.push_back(tree->children[i]);
                }
                for (int i = 6; i < tree->children.size(); i++){
                    forPart->children.push_back(tree->children[i]);
                }
                tree->children[0]->children.push_back(condition);
                tree->children[0]->children.push_back(forPart);
            }

            // return
            if (tree->children.size() > 2 && tree->children[0]->sign == "return"){
                tree->children[0]->sign = "return+";
                Tree* returnValue;
                returnValue->value = "returnValue";
                for (int i = 2; i < tree->children.size(); i++){
                    returnValue->children.push_back(tree->children[i]);
                }
                tree->children[0]->children.push_back(returnValue);
            }

            // assign
            if (tree->children.size() > 2 && tree->children[1]->sign == "="){
                tree->children[1]->sign = "assign";
                Tree* leftValue;
                Tree* rightValue;
                leftValue->value = "leftValue";
                rightValue->value = "rightValue";
                leftValue->children.push_back(tree->children[0]);
                rightValue->children.push_back(tree->children[2]);
                tree->children[1]->children.push_back(leftValue);
                tree->children[1]->children.push_back(rightValue);
            }

            // define
            if (tree->children.size() > 2 && types.find(tree->children[0]->sign) != types.end()){
                tree->children[0]->sign = "define";
                Tree* type;
                Tree* name;
                type->value = "type";
                name->value = "name";
                type->children.push_back(tree->children[0]);
                if (tree->children[1]->sign == "["){
                    type->children[0]->value+= "[]";
                    type->children.push_back(tree->children[2]);
                    name->children.push_back(tree->children[4]);
                }
                name->children.push_back(tree->children[1]);

                tree->children[0]->children.push_back(type);
                tree->children[0]->children.push_back(name);
                for (int i = 1; i < tree->children.size(); i++){
                    tree->children.erase(tree->children.begin() + i);
                }
            }



            // 删除应该被忽略的符号
            // 符号定义于fixTree.h
            
            for (auto child : tree->children){
                if (ignoreSigns.find(child->sign) == ignoreSigns.end()){
                    newChildren.push_back(child);
                }
            }
            tree->children = newChildren;

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
        }
    }
}