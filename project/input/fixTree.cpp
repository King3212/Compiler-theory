#include"../grammarAnalyzer/gui/mainwindow.h"

#define MAX_FIX_TYPE 3  //定义FixTree模式类型数

//这个函数将分析树进一步修正为语法树
void MainWindow::fixTree(Tree *node)
{
    if (node->children.size() == 0){
        return;
    }
    for (auto child : node->children){
        fixTree(child);
    }

    if(!node->value.empty()){
        return;
    }
    // 对类型一进行处理
    if (node->children.size() == 3){
        if(ops[0].contains(node->children[1]->value) && node->children[1]->children.size() == 0){
            node->value = node->children[1]->value;
            node->sign = node->children[1]->sign;
            node->children.erase(node->children.begin()+1);
        }
    }
    // 对类型二进行处理
    if (node->children.size() == 3){
        if (ops[1].contains(node->children[1]->value) && node->children[1]->children.size() == 0 && node->children[0]->children.size() == 0)
        {
            node->value = node->children[0]->value;
            node->sign = node->children[0]->sign;
            node->children.erase(node->children.begin());
            node->children.erase(node->children.begin());
        }
    }
    // 对类型三进行处理
    if (node->children.size() == 2){
        if (ops[2].contains(node->children[0]->value) && node->children[0]->children.size() == 0)
        {
            node->value = node->children[0]->value;
            node->sign = node->children[0]->sign;
            node->children.erase(node->children.begin());
        }
    }
    // 可以添加或对前面的处理进行修改，如要添加，请记得修改宏 MAX_FIX_TYPE
    // 修改之后请重新编译这一部分，编译命令为：make gui
}

// 这个函数获取fix的参数
void MainWindow::loadTreeFuc()
{
    QString path = QDir::currentPath() + "/../input/fixTree.txt";
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::information(this, "提示", "无法打开文件");
        return;
    }
    IndexedSet<string> temp;

    for (int i = 0; i < MAX_FIX_TYPE; i++)
    {
        file.readLine();
        QString line = file.readLine();
        for(auto op: split(line," ")){
            temp.push_back(op.toStdString());
        }
        ops.push_back(temp);
        temp.clear();
    }

}