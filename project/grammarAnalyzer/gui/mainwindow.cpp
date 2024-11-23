#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // 打开文件资源浏览器，选择文件并获取路径
    QString filePath = QFileDialog::getOpenFileName(this, tr("选择文件"), "", tr("所有文件 (*)"));

    // 检查用户是否选择了文件
    if (!filePath.isEmpty()) {
        this->srcPath = filePath;
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly|QIODevice::Text)){
            QTextStream in(&file);
            QString fileContent = in.readAll();

            ui->plainTextEdit->setPlainText(fileContent);

            file.close();
        }

    }else{
        qDebug() << "无法打开文件";
    }
}

void MainWindow::on_pushButton_saveSrc_clicked()
{
    // 打开文件资源浏览器，选择文件并获取路径
    QString filePath = QFileDialog::getSaveFileName(this, tr("保存文件"), "", tr("所有文件 (*)"));

    // 检查用户是否选择了文件
    if (!filePath.isEmpty()) {
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly|QIODevice::Text)){
            QTextStream out(&file);
            out << ui->plainTextEdit->toPlainText();
            file.close();
        }

    }else{
        qDebug() << "无法打开文件";
    }
}


void MainWindow::on_pushButton_load_word_rul_clicked()
{
    // 打开文件资源浏览器，选择文件并获取路径
    QString filePath = QFileDialog::getOpenFileName(this, tr("选择文件"), "", tr("所有文件 (*)"));

    // 检查用户是否选择了文件
    if (!filePath.isEmpty()) {
        QString wordRulPath = filePath;
        QString command = "./GWA " + wordRulPath + " > ../wordAnalyzer/code.cpp";
        qDebug() << command;
        
        // 创建消息框
        QMessageBox* msgBox = new QMessageBox(this);
        msgBox->setText("正在生成词法分析器，请稍候...");
        msgBox->setWindowTitle("提示");
        msgBox->setStandardButtons(QMessageBox::NoButton); // 去掉按钮
        msgBox->show();
        
        // 启动异步执行
        QTimer::singleShot(1000, this, [=]() {
            // 执行命令
            system(command.toStdString().c_str());
            
            QString compileCommand = "g++ ../wordAnalyzer/code.cpp -o ./getTokens";
            system(compileCommand.toStdString().c_str());
            
            // 关闭消息框
            msgBox->close();
            msgBox->deleteLater();
            
            // 生成完成提示
            QMessageBox::information(this, "提示", "词法分析器生成成功");
        });

    }else{
        qDebug() << "无法打开文件";
    }
}


void MainWindow::on_plainTextEdit_textChanged()
{

}


#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <string>
#include <iostream>

std::vector<gragh> getGraghFromFile(const std::string& path) {
    std::vector<gragh> graphs; // 存储多个图
    std::ifstream file(path); // 打开文件

    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << path << std::endl;
        return graphs;
    }

    std::string line;
    while (std::getline(file, line)) {
        // 跳过空行
        if (line.empty()) {
            continue;
        }

        // 读取每个图的信息
        if (line == "Gragh: ") {
            gragh g;
            // 读取图的基本信息
            std::getline(file, line); // 跳过 "name start size"
            std::stringstream ss(line);
            string start, size;
            ss >> g.name >> start >> size;
            g.start = std::stoi(start);
            g.size = std::stoi(size);
            // 读取最终节点
            std::getline(file, line); // "ends:"
            std::getline(file, line); // 节点列表
            std::stringstream nodeStream(line);
            string node;
            while (nodeStream >> node) {
                g.finalNodes.insert(std::stoi(node));
            }

            // 读取边的信息
            std::getline(file, line); // "edges:"
            while (std::getline(file, line)) {
                // 如果读到空行或新的图的开始，停止读取边信息
                if (line.empty() || line == "Gragh:") {
                    break;
                }
                std::stringstream edgeStream(line);
                string begin, end;
                std::string express;
                edgeStream >> begin >> end;
                std::getline(edgeStream, express); // 读取表达式
                
                // 移除前导空格
                if (!express.empty() && express[0] == ' ') {
                    express.erase(0, 1);
                }
                
                // 创建边并加入图的边列表
                edge one;
                one.begin = std::stoi(begin);
                one.end = std::stoi(end);
                one.express = express;

                g.edges->push_back(one);
            }

            // 将图加入图的容器
            graphs.push_back(g);
        }
    }

    file.close(); // 关闭文件
    return graphs;
}

void MainWindow::showAGragh(gragh g){
    tableForGragh *table = new tableForGragh(this);
    table->initTable(g);
    table->show();
}


void MainWindow::on_pushButton_Word_NFA_clicked()
{
    NFA = getGraghFromFile("../input/NFA.gh");
    QDialog *dialog = new QDialog(this);
    QGridLayout *layout = new QGridLayout(dialog);

    int numButtons = NFA.size();
    int numPerRow = std::ceil(std::sqrt(numButtons)); // 每行按钮数量

    int row = 0, col = 0; // 当前行和列
    for (const auto& g : NFA) {
        QPushButton *button = new QPushButton(QString::fromStdString(g.name), dialog);
        // 当按钮被点击时，显示对应的图
        connect(button, &QPushButton::clicked, [this, g]() {
            tableForGragh *table = new tableForGragh();
            table->initTable(g);  // 显示表格
            table->show();
        });

        // 将按钮添加到网格布局中
        layout->addWidget(button, row, col);

        // 更新列和行索引
        col++;
        if (col >= numPerRow) {
            col = 0; // 重置列
            row++;   // 换行
        }
    }

    // 设置对话框的布局并显示
    dialog->setLayout(layout);
    dialog->show(); // 弹出对话框
}



void MainWindow::on_pushButton_word_DFA_clicked()
{
    DFA = getGraghFromFile("../input/DFA.gh");
    QDialog *dialog = new QDialog(this);
    QGridLayout *layout = new QGridLayout(dialog);

    int numButtons = DFA.size();
    int numPerRow = std::ceil(std::sqrt(numButtons)); // 每行按钮数量

    int row = 0, col = 0; // 当前行和列
    for (const auto& g : DFA) {
        QPushButton *button = new QPushButton(QString::fromStdString(g.name), dialog);
        // 当按钮被点击时，显示对应的图
        connect(button, &QPushButton::clicked, [this, g]() {
            tableForGragh *table = new tableForGragh();
            table->initTable(g);  // 显示表格
            table->show();
        });

        // 将按钮添加到网格布局中
        layout->addWidget(button, row, col);

        // 更新列和行索引
        col++;
        if (col >= numPerRow) {
            col = 0; // 重置列
            row++;   // 换行
        }
    }

    // 设置对话框的布局并显示
    dialog->setLayout(layout);
    dialog->show(); // 弹出对话框
}


void MainWindow::on_pushButton_word_miniDFA_clicked()
{
    miniDFA = getGraghFromFile("../input/miniDFA.gh");
    QDialog *dialog = new QDialog(this);
    QGridLayout *layout = new QGridLayout(dialog);

    int numButtons = miniDFA.size();
    int numPerRow = std::ceil(std::sqrt(numButtons)); // 每行按钮数量

    int row = 0, col = 0; // 当前行和列
    for (const auto& g : miniDFA) {
        QPushButton *button = new QPushButton(QString::fromStdString(g.name), dialog);
        // 当按钮被点击时，显示对应的图
        connect(button, &QPushButton::clicked, [this, g]() {
            tableForGragh *table = new tableForGragh();
            table->initTable(g);  // 显示表格
            table->show();
        });

        // 将按钮添加到网格布局中
        layout->addWidget(button, row, col);

        // 更新列和行索引
        col++;
        if (col >= numPerRow) {
            col = 0; // 重置列
            row++;   // 换行
        }
    }

    // 设置对话框的布局并显示
    dialog->setLayout(layout);
    dialog->show(); // 弹出对话框
}

