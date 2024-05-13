#include <QApplication>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QFileDialog>
#include <QString>
#include <QFileSystemModel>
#include <QTreeView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QPlainTextEdit>
#include <QScrollArea>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "globals.h"
#include "getTree.h"
#include <iostream>
#include <fstream>
void displaySyntaxTree(TreeNode* tree, QStandardItem* parentItem);

// 声明槽函数
void analyzeAndDisplaySyntaxTree(QTreeView *treeView, QPlainTextEdit *programTextEdit, QPlainTextEdit *vectorTextEdit);

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // 主窗口
    QMainWindow mainWindow;
    mainWindow.setWindowTitle("CLI Program in Qt");
    mainWindow.setMinimumSize(800, 600); // 设置最小窗口大小
    mainWindow.resize(1000, 800); // 设置初始窗口大小

    // 创建文本框和树形视图
    QPlainTextEdit *programTextEdit = new QPlainTextEdit(&mainWindow);
    QTreeView *treeView = new QTreeView(&mainWindow);
    QPlainTextEdit *vectorTextEdit = new QPlainTextEdit(&mainWindow);
    vectorTextEdit->setReadOnly(true);

    // 创建按钮
    QPushButton *analyzeButton = new QPushButton("Analyze", &mainWindow);

    // 创建可滚动区域和文本框
    QScrollArea *codeScrollArea = new QScrollArea(&mainWindow);
    QScrollArea *errorScrollArea = new QScrollArea(&mainWindow);

    // 将文本框放置在可滚动区域中
    codeScrollArea->setWidget(programTextEdit);
    codeScrollArea->setWidgetResizable(true); // 设置可滚动区域大小自适应文本框大小

    errorScrollArea->setWidget(vectorTextEdit);
    errorScrollArea->setWidgetResizable(true); // 设置可滚动区域大小自适应文本框大小
    errorScrollArea->setFixedHeight(10 * vectorTextEdit->fontMetrics().lineSpacing());
    // 设置只读文本框的高度

    // 创建布局
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(analyzeButton);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addLayout(buttonLayout);
    leftLayout->addWidget(codeScrollArea);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(treeView);

    QVBoxLayout *bottomLayout = new QVBoxLayout;
    bottomLayout->addWidget(errorScrollArea);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);

    QVBoxLayout *finalLayout = new QVBoxLayout;
    finalLayout->addLayout(mainLayout);
    finalLayout->addLayout(bottomLayout);

    // 设置主窗口的布局
    QWidget *centralWidget = new QWidget(&mainWindow);
    centralWidget->setLayout(finalLayout);
    mainWindow.setCentralWidget(centralWidget);

    // 显示主窗口
    mainWindow.show();

    // 连接按钮的点击事件
    QObject::connect(analyzeButton, &QPushButton::clicked, [&]() {
        analyzeAndDisplaySyntaxTree(treeView, programTextEdit, vectorTextEdit);
    });

    return app.exec();
}

std::vector<std::string> readFileToVector(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    } else {
        return{"Unable to open file: "+filename};
    }

    return lines;
}

std::vector<std::string> ErrorVec(){
    return readFileToVector("error.log");
}


// 分析文本框中的内容并显示语法树
void analyzeAndDisplaySyntaxTree(QTreeView *treeView, QPlainTextEdit *programTextEdit, QPlainTextEdit *vectorTextEdit) {
    QString programText = programTextEdit->toPlainText();
    QString tempFileName = QDir::temp().absoluteFilePath("temp.tny");
    QFile tempFile(tempFileName);
    if (tempFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&tempFile);
        out << programText;
        tempFile.close();

        TreeNode *SyntaxTree = getSyntaxTree((char*)(tempFileName.toStdString().c_str()));
        if (SyntaxTree != nullptr) {
            // 清空目录树
            QStandardItemModel *model = new QStandardItemModel;
            QStandardItem *rootItem = model->invisibleRootItem();
            rootItem->setText("Syntax Tree");

            // 显示语法树
            displaySyntaxTree(SyntaxTree, rootItem);

            // 设置目录树的模型
            treeView->setModel(model);

            std::vector<std::string> vec = ErrorVec();
            QString vecText;
            for(const auto& str : vec) {
                vecText += QString::fromStdString(str) + "\n";
            }
            vectorTextEdit->setPlainText(vecText);
        }
    } else {
        qDebug() << "Failed to create temporary file!";
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
