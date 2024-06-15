#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QLabel>
#include "LALR1.h"
#include <cstdlib>
#include <cstdlib> // 包含 system 函数所需的头文件
#include <iostream> // 用于输出信息

#ifdef _WIN32
#include <direct.h> // 用于 Windows 平台的 mkdir 函数
#define mkdir _mkdir
#else
#include <sys/stat.h> // 用于 Linux 和 macOS 的 mkdir 函数
#endif

bool createDirectory(const char* path) {
    // 使用 mkdir 函数创建目录
    int result = mkdir(path);

    // 检查 mkdir 调用结果
    if (result == 0) {
        std::cout << "创建目录成功：" << path << std::endl;
        return true;
    } else {
        std::cerr << "创建目录失败：" << path << std::endl;
        return false;
    }
}

class MainWindow : public QWidget
{
public:
    MainWindow(QWidget *parent = nullptr)
        : QWidget(parent),
        textEdit(new QTextEdit),
        button1(new QPushButton("打开文法文件")),
        button2(new QPushButton("保存文法文件")),
        button3(new QPushButton("查看LR(1)DFA")),
        button4(new QPushButton("查看LR(1)DFA")),
        button5(new QPushButton("查看FIRST FOLLOW集合")),
        button6(new QPushButton("查看LALR状态表")),
        button7(new QPushButton("生成"))
    {
        setWindowTitle("Qt 界面示例");
        setupUi();
    }
private:
    bool isTextChanged() const
    {
        // 判断文本框内容是否有更改
        // 实际应用中可以根据需求进一步扩展
        return textEdit->document()->isModified();
    }
private slots:
    void openGrammarFile()
    {
        // 实现打开文法文件的槽函数
        if (isTextChanged()) {
            int ret = QMessageBox::question(this, "提示", "文本框内容已更改，是否保存？",
                                            QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel,
                                            QMessageBox::Save);
            if (ret == QMessageBox::Save) {
                saveGrammarFile();
            } else if (ret == QMessageBox::Cancel) {
                return; // 取消打开文件操作
            }
        }

        QString fileName = QFileDialog::getOpenFileName(this, "打开文件", QDir::homePath(), "文本文件 (*.txt);;所有文件 (*.*)");

        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);
                textEdit->setPlainText(in.readAll());
                file.close();
            } else {
                QMessageBox::critical(this, "错误", "无法打开文件");
            }
        }
    }

    void saveGrammarFile()
    {
        // 实现保存文法文件的槽函数
        QString fileName = QFileDialog::getSaveFileName(this, "保存文件", QDir::homePath(), "文本文件 (*.txt);;所有文件 (*.*)");

        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << textEdit->toPlainText();
                file.close();
            } else {
                QMessageBox::critical(this, "错误", "无法保存文件");
            }
        }
    }

    void viewLR1DFA()
    {
        // 实现查看LR(1)DFA的槽函数
        // 加载图片文件
        QString imagePath = "./tempFile/LR1DFA.png";
        QPixmap pixmap(imagePath);

        // 设置最大宽度，并调整图片大小以保持比例
        int maxWidth = 600; // 限制宽度为600像素
        QPixmap scaledPixmap = pixmap.scaledToWidth(maxWidth, Qt::SmoothTransformation);

        // 创建 QMessageBox
        QMessageBox msgBox;
        msgBox.setWindowTitle("查看LR(1)DFA");
        msgBox.setIconPixmap(scaledPixmap);
        msgBox.setText("LR(1)DFA 图片");

        // 添加滚动条以保持图片比例
        if (pixmap.width() > maxWidth) {
            QScrollArea *scrollArea = new QScrollArea(&msgBox);
            scrollArea->setWidgetResizable(true);
            scrollArea->setWidget(new QLabel(msgBox.text(), &msgBox));
            msgBox.layout()->addWidget(scrollArea);
        }

        msgBox.exec();
    }

    void viewFirstFollow()
    {
        // 加载图片文件
        QString imagePath = "./tempFile/FFTable.png";
        QPixmap pixmap(imagePath);

        // 设置最大宽度，并调整图片大小以保持比例
        int maxWidth = 600; // 限制宽度为600像素
        QPixmap scaledPixmap = pixmap.scaledToWidth(maxWidth, Qt::SmoothTransformation);

        // 创建 QMessageBox
        QMessageBox msgBox;
        msgBox.setWindowTitle("查看FIRST FOLLOW集合");
        msgBox.setIconPixmap(scaledPixmap);
        msgBox.setText("FIRST FOLLOW集合 图片");

        // 添加滚动条以保持图片比例
        if (pixmap.width() > maxWidth) {
            QScrollArea *scrollArea = new QScrollArea(&msgBox);
            scrollArea->setWidgetResizable(true);
            scrollArea->setWidget(new QLabel(msgBox.text(), &msgBox));
            msgBox.layout()->addWidget(scrollArea);
        }

        msgBox.exec();
    }

    void viewLALRTable()
    {
        // 加载图片文件
        QString imagePath = "./tempFile/LALRTable.png";
        QPixmap pixmap(imagePath);

        // 设置最大宽度，并调整图片大小以保持比例
        int maxWidth = 600; // 限制宽度为600像素
        QPixmap scaledPixmap = pixmap.scaledToWidth(maxWidth, Qt::SmoothTransformation);

        // 创建 QMessageBox
        QMessageBox msgBox;
        msgBox.setWindowTitle("查看LALR状态表");
        msgBox.setIconPixmap(scaledPixmap);
        msgBox.setText("LALR状态表 图片");

        // 添加滚动条以保持图片比例
        if (pixmap.width() > maxWidth) {
            QScrollArea *scrollArea = new QScrollArea(&msgBox);
            scrollArea->setWidgetResizable(true);
            scrollArea->setWidget(new QLabel(msgBox.text(), &msgBox));
            msgBox.layout()->addWidget(scrollArea);
        }

        msgBox.exec();
    }

    void viewLALR1DFA()
    {
        // 加载图片文件
        QString imagePath = "./tempFile/LALRDFA.png";
        QPixmap pixmap(imagePath);

        // 设置最大宽度，并调整图片大小以保持比例
        int maxWidth = 600; // 限制宽度为600像素
        QPixmap scaledPixmap = pixmap.scaledToWidth(maxWidth, Qt::SmoothTransformation);

        // 创建 QMessageBox
        QMessageBox msgBox;
        msgBox.setWindowTitle("查看LALR状态表");
        msgBox.setIconPixmap(scaledPixmap);
        msgBox.setText("LALR状态表 图片");

        // 添加滚动条以保持图片比例
        if (pixmap.width() > maxWidth) {
            QScrollArea *scrollArea = new QScrollArea(&msgBox);
            scrollArea->setWidgetResizable(true);
            scrollArea->setWidget(new QLabel(msgBox.text(), &msgBox));
            msgBox.layout()->addWidget(scrollArea);
        }

        msgBox.exec();
    }


    void generate()
    {
        // 获取文本框中的文本
        QString text = textEdit->toPlainText();

        // 将文本按换行符分割成字符串列表
        QStringList lines = text.split("\n", Qt::SkipEmptyParts);

        // 转换为 std::vector<std::string>
        std::vector<std::string> textVector;
        for (const auto& line : lines) {
            textVector.push_back(line.toStdString());
        }

        // 调用处理函数，这里假设您有一个名为 processTextVector 的函数来处理这个 vector
        processTextVector(textVector);
    }

    // 示例的处理函数，实际应用中需要根据具体需求实现
    void processTextVector(const std::vector<std::string>& textVector)
    {
        LR1 parser;
        First_Follow FF;
        vector<string> Grammers = {
            "S->A + S | A",
            "A->number * A | number",
        };
        FF.init(Grammers);
        FF.outputToFile("FFTable.gv");
        // 定义文法规则
        IndexedSet<Grammer> grammers;
        for (auto &gram : FF.getGrammer())
        {
            Grammer one = Grammer();
            one.sign = gram[0];
            one.grammer = vector<string>(gram.begin() + 1, gram.end());
            grammers.insert(one);
        }

        // 输入文法
        parser.inputGrammers(grammers);
        parser.setFirst(FF.getFirst());
        parser.work();
        parser.generateDFA("DFA.gv");
        // 执行解析器生成
        LALR1 newparser;
        newparser.inputGrammers(grammers);
        newparser.setFirst(FF.getFirst());
        newparser.work();
        newparser.generateDFA("NewDFA.gv");
        newparser.printStateTable("table.dot");

        int result = system("");

        // 检查命令执行结果
        if (result == 0) {
            // 成功执行
        } else {
            // 执行失败
        }
    }

private:
    QTextEdit *textEdit;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;

    void setupUi()
    {
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        QScrollArea *scrollArea = new QScrollArea;
        scrollArea->setWidgetResizable(true);
        scrollArea->setWidget(textEdit);

        QVBoxLayout *topVBoxLayout = new QVBoxLayout;
        topVBoxLayout->addWidget(button1);
        topVBoxLayout->addWidget(button2);
        topVBoxLayout->addWidget(button3);
        topVBoxLayout->addWidget(button4);
        topVBoxLayout->addWidget(button5);
        topVBoxLayout->addWidget(button6);

        QHBoxLayout *hBoxLayout = new QHBoxLayout;
        hBoxLayout->addWidget(scrollArea);
        hBoxLayout->addLayout(topVBoxLayout);

        QVBoxLayout *bottomVBoxLayout = new QVBoxLayout;
        bottomVBoxLayout->addWidget(button7);

        QVBoxLayout *mainVBoxLayout = new QVBoxLayout(this);
        mainVBoxLayout->addLayout(hBoxLayout);
        mainVBoxLayout->addLayout(bottomVBoxLayout);

        // Connect signals and slots
        connect(button1, &QPushButton::clicked, this, &MainWindow::openGrammarFile);
        connect(button2, &QPushButton::clicked, this, &MainWindow::saveGrammarFile);
        connect(button3, &QPushButton::clicked, this, &MainWindow::viewLR1DFA);
        connect(button4, &QPushButton::clicked, this, &MainWindow::viewLALR1DFA);
        connect(button5, &QPushButton::clicked, this, &MainWindow::viewFirstFollow);
        connect(button6, &QPushButton::clicked, this, &MainWindow::viewLALRTable);
        connect(button7, &QPushButton::clicked, this, &MainWindow::generate);

        // Set initial button states
        button3->setEnabled(false);
        button4->setEnabled(false);
        button5->setEnabled(false);
        button6->setEnabled(false);
    }
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}

