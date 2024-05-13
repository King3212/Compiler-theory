#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QFileDialog>
#include <QString>
#include <QFileSystemModel>
#include <QTreeView>
#include <QStandardItem>
#include <QStandardItemModel>
#include "globals.h"
#include "getTree.h"


void displaySyntaxTree(TreeNode* tree, QStandardItem* parentItem);

// 声明槽函数
void openFileAndDisplaySyntaxTree(QTreeView *treeView);

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // 主窗口
    QMainWindow mainWindow;
    mainWindow.setWindowTitle("CLI Program in Qt");

    // 创建目录树
    QFileSystemModel *fileSystemModel = new QFileSystemModel(&mainWindow);
    QTreeView *treeView = new QTreeView(&mainWindow);
    treeView->setModel(fileSystemModel);
    treeView->setRootIndex(fileSystemModel->index(QDir::currentPath()));

    // 创建按钮
    QPushButton *openFileButton = new QPushButton("Open File and Display Syntax Tree", &mainWindow);

    // 创建布局
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(openFileButton);
    layout->addWidget(treeView);

    // 设置主窗口的布局
    QWidget *centralWidget = new QWidget(&mainWindow);
    centralWidget->setLayout(layout);
    mainWindow.setCentralWidget(centralWidget);

    // 显示主窗口
    mainWindow.show();

    // 连接按钮的点击事件
    QObject::connect(openFileButton, &QPushButton::clicked, [&](){
        openFileAndDisplaySyntaxTree(treeView);
    });

    return app.exec();
}

// 打开文件并显示语法树
void openFileAndDisplaySyntaxTree(QTreeView *treeView) {
    QString fileName = QFileDialog::getOpenFileName(nullptr, "Open File", QString(), "Tiny Language Files (*.TNY)");
    if (!fileName.isEmpty()) {
        TreeNode *SyntaxTree = getSyntaxTree((char*)(fileName.toStdString().c_str()));
        if (SyntaxTree != nullptr) {
            // 清空目录树
            QStandardItemModel *model = new QStandardItemModel;
            QStandardItem *rootItem = model->invisibleRootItem();
            rootItem->setText(fileName);

            // 显示语法树
            displaySyntaxTree(SyntaxTree, rootItem);
            //printTree(SyntaxTree);
            // 设置目录树的模型
            treeView->setModel(model);
        }
    }
}

// 递归地将语法树显示为目录树
void displaySyntaxTree(TreeNode* tree, QStandardItem* parentItem) {
    if (tree == nullptr) return;

    QStandardItem *item = new QStandardItem;
    parentItem->appendRow(item);

    if (tree->nodekind == StmtK) {
        switch (tree->kind.stmt) {
        case IfK:
            item->setText("If");
            break;
        case RepeatK:
            item->setText("Repeat");
            break;
        case AssignK:
            item->setText(QString("Assign to: %1").arg(tree->attr.name));
            break;
        case ReadK:
            item->setText(QString("Read: %1").arg(tree->attr.name));
            break;
        case WriteK:
            item->setText("Write");
            break;
        default:
            item->setText("Unknown StmtNode kind");
            break;
        }
    } else if (tree->nodekind == ExpK) {
        switch (tree->kind.exp) {
        case OpK:
            item->setText(QString("Op: %1").arg(tree->attr.op));
            break;
        case ConstK:
            item->setText(QString("Const: %1").arg(tree->attr.val));
            break;
        case IdK:
            item->setText(QString("Id: %1").arg(tree->attr.name));
            break;
        default:
            item->setText("Unknown ExpNode kind");
            break;
        }
    } else {
        item->setText("Unknown node kind");
    }

    for (int i = 0; i < 3; ++i) {
        displaySyntaxTree(tree->child[i], item);
    }
    displaySyntaxTree(tree->sibling, parentItem);
}
