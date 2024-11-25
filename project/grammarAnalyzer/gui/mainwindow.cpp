#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    grammarAnalyzed = false;
    wordAnalyzed = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initSource()
{
    QFile file("../input/Sources.txt");
    if (file.open(QIODevice::ReadOnly|QIODevice::Text)){
        QTextStream in(&file);
        QString fileContent = in.readLine();
        if (fileContent.isEmpty()){
            fileContent = "无";
        }else{
            wordRulPath = fileContent;
        }
        ui->label_Word_source->setText("当前词法来源："+fileContent);
        fileContent = in.readLine();
        if (fileContent.isEmpty()){
            fileContent = "无";
        }else{
            BNFPath = fileContent;
        }
        ui->label_Grammar_source->setText("当前文法来源："+fileContent);
        file.close();
    }
}

void MainWindow::setSource()
{
    QFile file("../input/Sources.txt");
    if (file.open(QIODevice::WriteOnly|QIODevice::Text)){
        QTextStream out(&file);
        out << wordRulPath+"\n";
        out << BNFPath+"\n";
        file.close();
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
    QString filePath = QFileDialog::getOpenFileName(
        this,
        tr("选择文件"),                  // 窗口标题
        "",                              // 初始目录
        tr("规则文件 (*.rul);;所有文件 (*)") // 文件类型过滤器
    );

    // 检查用户是否选择了文件
    if (!filePath.isEmpty()) {
        wordRulPath = filePath;
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
            QFile file = QFile("../input/Sources.txt");
            setSource();
            initSource();
        });

    }else{
        qDebug() << "无法打开文件";
    }
}


#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <string>
#include <iostream>

std::vector<graghForWA> getGraghFromFile(const std::string& path) {
    std::vector<graghForWA> graphs; // 存储多个图
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
            graghForWA g;
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
                edgeForWA one;
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

void MainWindow::showAGragh(graghForWA g){
    tableForGragh *table = new tableForGragh(this);
    table->initTable(g);
    table->show();
}


IndexedSet<Edge> MainWindow::getEdgesFromFile(string path)
{
    IndexedSet<Edge> edges;
    vector<string> lines = readFile(path);
    int i = 0;
    while(i < lines.size()){
        Edge edge;
        if (trim(lines[i]) == "Edge:")
        {
            i+=2;
            edge.from = stoi(trim(lines[i]));
            i+=2;
            edge.to = stoi(trim(lines[i]));
            i+=2;
            edge.sign = trim(lines[i]);
            i+=2;
            edge.type = (ActionType)stoi(trim(lines[i]));
            i+=4;
            Grammar g;
            g.left = trim(lines[i]);
            i+=2;
            string right = trim(lines[i]);
            stringstream ss(right);
            string temp;
            while (ss >> temp)
            {
                g.right.push_back(temp);
            }
            edge.reduceProduction = g;

            edges.insert(edge);

            i+=2;
            
        }else{
            i++;
        }
    }
    return edges;
}

void MainWindow::compressTree(Tree* node) {
    if (!node->value.empty()) {
        return;
    }
    // 递归压缩所有子节点
    for (auto it = node->children.begin(); it != node->children.end();) {
        compressTree(*it);
        ++it;
    }
    // 如果当前节点只有一个子节点,进行合并
    if (node->children.size() == 1) {
        Tree* child = node->children[0];
        node->sign = child->sign;
        node->value = child->value;
        node->children = child->children;
        delete child;
    }

    // 进一步优化：根据实际需求，可以添加其他合并规则，例如忽略某些特定的语法符号
}

void MainWindow::on_pushButton_Word_NFA_clicked() // 显示NFA
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



void MainWindow::on_pushButton_word_DFA_clicked()// 显示DFA
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


void MainWindow::on_pushButton_word_miniDFA_clicked() // 显示最小化DFA
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


void MainWindow::on_pushButton_Word_Analyze_clicked()
{
    QString src = ui->plainTextEdit->toPlainText();
    if(src == ""){
        QMessageBox::information(this, "提示", "请先输入源代码");
        return;
    }
    QString tempSRC = "../input/tempSRC.prm";
    QFile file(tempSRC);
    if (file.open(QIODevice::WriteOnly|QIODevice::Text)){
        QTextStream out(&file);
        out << src;
        file.close();
    }
    Tokens tokens(tempSRC.toStdString());
    this->tokens = tokens.getTokens()[0];
    QMessageBox::information(this, "提示", "词法分析完成");
}


void MainWindow::on_pushButton_openSrc_clicked() // 打开源代码
{
     // 打开文件资源浏览器，选择文件并获取路径
    QString filePath = QFileDialog::getOpenFileName(this, tr("选择文件"), "", tr("所有文件 (*)"));

    // 检查用户是否选择了文件
    if (!filePath.isEmpty()) {
        // 创建 QFile 对象
        QFile file(filePath);

        // 打开文件
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            // 使用 QTextStream 读取文件内容
            QTextStream in(&file);
            QString fileContent = in.readAll();  // 读取文件的所有内容

            // 设置 QPlainTextEdit 的内容
            ui->plainTextEdit->setPlainText(fileContent);

            // 关闭文件
            file.close();
        } else {
            // 如果文件无法打开，输出错误信息
            qDebug() << "无法打开文件!";
        }
    }
}




void MainWindow::on_pushButton_show_result_WA_clicked() // 显示词法分析结果
{
    QWidget *window = new QWidget();
    window->setWindowTitle("Token Viewer");
    window->resize(400, 300);
    
    QPlainTextEdit *textEdit = new QPlainTextEdit(window);
    QString result = "";
    if (tokens.empty()){
        QMessageBox::information(this, "提示", "请先进行词法分析");
        return;
    }
    for (auto t : tokens){
        if (t.type == "_open_comment"){
            continue;
        }
        result += QString::fromStdString(t.toString());
        result += "\n";
    }
    textEdit->setPlainText(result);
    textEdit->setReadOnly(true);
    textEdit->setGeometry(10, 10, 380, 280); // 边距为 10


    window->show();

}


void MainWindow::on_pushButton_load_BNF_clicked()
{
     // 打开文件资源浏览器，选择文件并获取路径
    QString filePath = QFileDialog::getOpenFileName(
        this,
        tr("选择文件"),                  // 窗口标题
        "",                              // 初始目录
        tr("规则文件 (*.grm);;所有文件 (*)") // 文件类型过滤器
    );

    // 检查用户是否选择了文件
    if (!filePath.isEmpty()) {
        QString currentPath = QDir::currentPath();

        QString command = "./genTable " + filePath + " " + currentPath; // 生成图
        system(command.toStdString().c_str());
        BNFPath = filePath;
        setSource();
        initSource();

    } else {
        // 如果文件无法打开，输出错误信息
        qDebug() << "无法打开文件!";
    }
}



void MainWindow::on_pushButton_GA_run_clicked()
{
    QString tempSRC = ui->plainTextEdit->toPlainText();
    if (tempSRC.isEmpty()){
        QMessageBox::information(this, "提示", "请先输入源代码");
        return;
    }
    QString tempPath = "../input/tempSRC.prm";
    QFile tempFile(tempPath);
    if (tempFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&tempFile);
        out << tempSRC;
        tempFile.close();
    }
    on_pushButton_Word_Analyze_clicked(); // 词法分析
    if (BNFPath.isEmpty()){
        QMessageBox::information(this, "提示", "请先加载文法");
        return;
    }else{
        QString currentPath = QDir::currentPath();
        vector<string> ignoreSigns = readFile((currentPath+"/../input/ignore.txt").toStdString());
        parser = new Parser((currentPath+"/LALR1Edge.txt").toStdString(),ignoreSigns);
    }
    parser->parse(tempPath.toStdString());
    AnalyzeLog = QString::fromStdString(parser->getLog());
    tree = parser->getTree();
    grammarAnalyzed = true;
    QMessageBox::information(this, "提示", "语法分析完成");

    

}


void MainWindow::on_pushButton_LR1DFA_clicked()
{
    QString currentPath = QDir::currentPath();
    this->LR1edges = getEdgesFromFile((currentPath+"/LR1Edge.txt").toStdString());
    tableForGragh *table = new tableForGragh();
    table->initTable(LR1edges,"LR(1)");
    table->show();
}


void MainWindow::on_pushButton_LALR1DFA_clicked()
{
    QString currentPath = QDir::currentPath();
    this->LALR1edges = getEdgesFromFile((currentPath+"/LALR1Edge.txt").toStdString());
    tableForGragh *table = new tableForGragh();
    table->initTable(LALR1edges,"LALR(1)");
    table->show();
}


void MainWindow::on_pushButton_show_log_clicked()
{
    if (AnalyzeLog.isEmpty() || !grammarAnalyzed){
        QMessageBox::information(this, "提示", "没有可用的分析日志");
        return;
    }
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Analyze Log");
    dialog->resize(400, 300);
    
    QPlainTextEdit *textEdit = new QPlainTextEdit(dialog);
    textEdit->setPlainText(AnalyzeLog);
    textEdit->setReadOnly(true);
    textEdit->setGeometry(10, 10, 380, 280); // 边距为 10

    dialog->show();
}


void populateTreeWidget(QTreeWidgetItem *parentItem, Tree *tree) {
    if (!tree) return;

    // 创建当前节点
    QString text = QString::fromStdString(tree->sign + ": " + tree->value);
    QTreeWidgetItem *currentItem = new QTreeWidgetItem(parentItem, QStringList(text));
    parentItem->addChild(currentItem);

    // 遍历子节点
    for (auto child : tree->children) {
        populateTreeWidget(currentItem, child);
    }
}

void MainWindow::on_pushButton_show_Analyze_Tree_clicked()
{
    if (!tree || grammarAnalyzed == false) {
        QMessageBox::information(this, "提示", "没有可用的语法树");
        return;
    }

    // 创建新窗口
    QWidget *window = new QWidget();
    window->setWindowTitle("语法树");
    window->resize(600, 400);

    // 创建 QTreeWidget
    QTreeWidget *treeWidget = new QTreeWidget(window);
    treeWidget->setHeaderLabel("语法树");

    // 创建根节点
    QTreeWidgetItem *rootItem = new QTreeWidgetItem(treeWidget, QStringList("根节点"));
    treeWidget->addTopLevelItem(rootItem);
    compressTree(tree);
    // 填充分析树
    populateTreeWidget(rootItem, tree);

    // 展开所有节点
    treeWidget->expandAll();

    // 使用布局管理器将 treeWidget 添加到窗口
    QVBoxLayout *layout = new QVBoxLayout(window);
    layout->addWidget(treeWidget);
    window->setLayout(layout);

    // 显示窗口
    window->show();
}


void MainWindow::on_pushButton_show_FirstFollow_clicked()
{
    QString currentPath = QDir::currentPath();
    QString FFPath = currentPath + "/FirstFollow.txt";
    QFile file(FFPath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::information(this, "提示", "无法打开文件");
        return;
    }
    FirstFollow = file.readAll();
    file.close();

    QDialog *dialog = new QDialog();
    dialog->setWindowTitle("First & Follow");
    dialog->resize(400, 300);
    
    QPlainTextEdit *textEdit = new QPlainTextEdit(dialog);
    textEdit->setPlainText(FirstFollow);
    textEdit->setReadOnly(true);
    textEdit->setGeometry(10, 10, 380, 280); // 边距为 10

    dialog->show();
}


void MainWindow::on_pushButton_show_code_clicked()
{
    QString Path = QDir::currentPath() + "/../wordAnalyzer/code.cpp";
    QFile file(Path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::information(this, "提示", "无法打开文件");
        return;
    }
    QString code = "[wordAnalyzer/code.cpp]\n\n";
    code += file.readAll();
    file.close();

    Path = QDir::currentPath() + "/../wordAnalyzer/getInput.h";
    file.setFileName(Path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::information(this, "提示", "无法打开文件");
        return;
    }
    code += "\n\n\n\n[wordAnalyzer/getInput.h]\n\n";
    code += file.readAll();
    file.close();


    QDialog *dialog = new QDialog();
    dialog->setWindowTitle("词法分析器代码");
    dialog->resize(400, 300);

    QPlainTextEdit *textEdit = new QPlainTextEdit(dialog);
    textEdit->setPlainText(code);
    textEdit->setReadOnly(true);
    textEdit->setGeometry(10, 10, 380, 280); // 边距为 10

    dialog->show();
}

