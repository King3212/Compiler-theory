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
#include <cstdlib> // 包含 system 函数所需的头文件
#include <vector>
#include <string>

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>
#include <QScrollArea>

class MessageWindow : public QWidget
{
public:
    MessageWindow(const QString &title, const QString &imagePath, QWidget *parent = nullptr)
        : QWidget(parent)
    {
        setWindowTitle(title);

        QVBoxLayout *layout = new QVBoxLayout(this);

        // 加载图片
        QPixmap pixmap(imagePath);

        // 设置最大宽度，并调整图片大小以保持比例
        int maxWidth = 600; // 限制宽度为600像素
        QPixmap scaledPixmap = pixmap.scaledToWidth(maxWidth, Qt::SmoothTransformation);

        QLabel *label = new QLabel(this);
        label->setPixmap(scaledPixmap);

        // 添加滚动条以保持图片比例
        QScrollArea *scrollArea = new QScrollArea(this);
        scrollArea->setWidget(label);
        scrollArea->setWidgetResizable(true);

        layout->addWidget(scrollArea);
        setLayout(layout);
    }
};



class MainWindow : public QWidget
{
public:
    MainWindow(QWidget *parent = nullptr)
        : QWidget(parent),
        textEdit(new QTextEdit),
        button1(new QPushButton("打开文法文件")),
        button2(new QPushButton("保存文法文件")),
        button3(new QPushButton("查看LR(1)DFA")),
        button4(new QPushButton("查看LALR(1)状态表")),
        button5(new QPushButton("查看FIRST FOLLOW集合")),
        button6(new QPushButton("查看LALR()状态表")),
        button7(new QPushButton("生成"))
    {
        setWindowTitle("文法分析器");
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
        // 创建并显示自定义消息窗口
        MessageWindow *window = new MessageWindow("查看LR(1)DFA", "./LR1DFA.png");
        window->show();
    }

    void viewFirstFollow()
    {
        // 创建并显示自定义消息窗口
        MessageWindow *window = new MessageWindow("查看FIRST FOLLOW集合", "./FFTable.png");
        window->show();
    }

    void viewLALRTable()
    {
        // 创建并显示自定义消息窗口
        MessageWindow *window = new MessageWindow("查看LALR状态表", "./LALR1Table.png");
        window->show();
    }

    void viewLALR1DFA()
    {
        // 创建并显示自定义消息窗口
        MessageWindow *window = new MessageWindow("查看LALR状态表", "./LALRDFA.png");
        window->show();
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
        vector<string> Grammers = textVector;
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
        parser.generateDFA("LR1DFA.gv");

        // 执行解析器生成
        LALR1 newparser;
        newparser.inputGrammers(grammers);
        newparser.setFirst(FF.getFirst());
        newparser.work();
        newparser.generateDFA("LALRDFA.gv");
        newparser.printStateTable("LALR1Table.gv");

        // 执行第一条命令,生成LR1DFA
        system("dot -Tpng LR1DFA.gv -o ./LR1DFA.png -Gdpi=600");

        // 执行第二条命令,生成LALR1DFA
        system("dot -Tpng LALRDFA.gv -o ./LALRDFA.png -Gdpi=600");

        // 执行第三条命令,生成LALR1状态表
        system("dot -Tpng LALR1Table.gv -o ./LALR1Table.png -Gdpi=600");

        // 执行第四条命令,生成FIRST和FOLLOW表
        system("dot -Tpng FFTable.gv -o ./FFTable.png -Gdpi=600");

        // 启用按钮3到按钮6
        button3->setEnabled(true);
        button4->setEnabled(true);
        button5->setEnabled(true);
        button6->setEnabled(true);
    }

    void onTextChanged()
    {
        // 禁用按钮3到按钮6
        button3->setEnabled(false);
        button4->setEnabled(false);
        button5->setEnabled(false);
        button6->setEnabled(false);
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

        // Connect the text edit change signal to the slot
        connect(textEdit, &QTextEdit::textChanged, this, &MainWindow::onTextChanged);

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
