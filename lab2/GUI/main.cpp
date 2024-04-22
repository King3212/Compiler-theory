#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QScrollArea>
#include <QFileDialog> // 添加新的头文件
#include "../Gragh/scanner.h"
#include "../Gragh/Gragh.h"
// 新增的头文件
#include <QString>
#include <QTextStream>
#include <QIODevice>
#include <vector>
#include <string>
#include <fstream>

class MainWindow : public QWidget {
public:
    MainWindow(QWidget *parent = nullptr) : QWidget(parent) {
        setWindowTitle("Qt应用程序");

        // 创建文本框
        textEdit1 = new QTextEdit(this);
        textEdit2 = new QTextEdit(this);
        textEdit3 = new QTextEdit(this);
        textEdit4 = new QTextEdit(this);

        // 设置文本框宽度
        textEdit1->setFixedWidth(200); // 至少25个字符的宽度
        textEdit2->setFixedWidth(200);
        textEdit3->setFixedWidth(200);
        textEdit4->setFixedWidth(200);

        // 设置文本框高度
        textEdit1->setFixedHeight(200); // 至少15行的高度
        textEdit2->setFixedHeight(200);
        textEdit3->setFixedHeight(200);
        textEdit4->setFixedHeight(200);

        // 启用自动换行
        textEdit1->setWordWrapMode(QTextOption::WordWrap);
        textEdit2->setWordWrapMode(QTextOption::WordWrap);
        textEdit3->setWordWrapMode(QTextOption::WordWrap);
        textEdit4->setWordWrapMode(QTextOption::WordWrap);

        // 创建标签
        QLabel *label1 = new QLabel("正则表达式", this);
        QLabel *label2 = new QLabel("NFA", this);
        QLabel *label3 = new QLabel("DFA", this);
        QLabel *label4 = new QLabel("最小化的DFA", this);

        // 创建按钮
        button1 = new QPushButton("打开文件", this);
        button2 = new QPushButton("保存文件", this);
        button3 = new QPushButton("生成图", this); // 新增的按钮

        // 创建滚动区域
        QScrollArea *scrollArea1 = new QScrollArea(this);
        QScrollArea *scrollArea2 = new QScrollArea(this);
        QScrollArea *scrollArea3 = new QScrollArea(this);
        QScrollArea *scrollArea4 = new QScrollArea(this);

        // 将文本框和标签放置在垂直布局中
        QVBoxLayout *layout1 = new QVBoxLayout;
        QVBoxLayout *layout2 = new QVBoxLayout;
        QVBoxLayout *layout3 = new QVBoxLayout;
        QVBoxLayout *layout4 = new QVBoxLayout;

        layout1->addWidget(textEdit1);
        layout1->addWidget(label1);
        layout2->addWidget(textEdit2);
        layout2->addWidget(label2);
        layout3->addWidget(textEdit3);
        layout3->addWidget(label3);
        layout4->addWidget(textEdit4);
        layout4->addWidget(label4);

        // 设置滚动区域的布局
        QWidget *widget1 = new QWidget;
        QWidget *widget2 = new QWidget;
        QWidget *widget3 = new QWidget;
        QWidget *widget4 = new QWidget;

        widget1->setLayout(layout1);
        widget2->setLayout(layout2);
        widget3->setLayout(layout3);
        widget4->setLayout(layout4);

        scrollArea1->setWidget(widget1);
        scrollArea2->setWidget(widget2);
        scrollArea3->setWidget(widget3);
        scrollArea4->setWidget(widget4);

        // 设置布局
        QGridLayout *mainLayout = new QGridLayout(this);

        mainLayout->addWidget(scrollArea1, 0, 0); // 第一行第一列
        mainLayout->addWidget(scrollArea2, 0, 1); // 第一行第二列
        mainLayout->addWidget(scrollArea3, 1, 0); // 第二行第一列
        mainLayout->addWidget(scrollArea4, 1, 1); // 第二行第二列
        mainLayout->addWidget(button1, 2, 0); // 按钮1
        mainLayout->addWidget(button2, 2, 1); // 按钮2
        mainLayout->addWidget(button3, 3, 0, 1, 2); // 按钮3，占据两列

        setLayout(mainLayout);

        connect(button3, &QPushButton::clicked, this, &MainWindow::updateTextBoxes);
        connect(button2, &QPushButton::clicked, this, &MainWindow::saveFile);
        connect(button1, &QPushButton::clicked, this, &MainWindow::openFile); // 连接新的按钮
    }

private slots:

    std::vector<std::string> getTextEditContent(QTextEdit *textEdit) {
        std::vector<std::string> content;
        QString text = textEdit->toPlainText();
        QStringList lines = text.split("\n");
        for (const QString &line : lines) {
            content.push_back(line.toStdString());
        }
        return content;
    }

    void updateTextBoxes() {
        // 在这里执行你想要的操作
        // 这里是示例，你可以调用任何函数来更新文本框的内容
        std::vector<std::string> text = getTextEditContent(textEdit1);
        std::vector<finalData*> *data = scanner(text);
        QString newText1 = "在图中:\n \'-\' 代表入口, \'+\' 代表出口";
        QString newText2 = "在图中:\n \'-\' 代表入口, \'+\' 代表出口";
        QString newText3 = "在图中:\n \'-\' 代表入口, \'+\' 代表出口";
        for (unsigned long i = 0; i < data->size(); i++)
        {
            Gragh g;
            QString temp = "\n\n\n***-------------------***\n正则表达式:" + QString::fromStdString((*data)[i]->reExpress) + "\n名称:" + QString::fromStdString((*data)[i]->name) + "\n\n";
            g.process((*data)[i]->reExpress);
            newText1 += temp + QString::fromStdString(g.toString());
            g.toDFA();
            newText2 += temp + QString::fromStdString(g.toString());
            g.compressDFA();
            newText3 += temp + QString::fromStdString(g.toString());


        }
        textEdit2->setPlainText(newText1);
        textEdit3->setPlainText(newText2);
        textEdit4->setPlainText(newText3);
    }

    void saveFile() {
        QString filePath = QFileDialog::getSaveFileName(this, "保存文件", "", "文本文件 (*.txt)");
        if (!filePath.isEmpty()) {
            QFile file(filePath);
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << textEdit1->toPlainText();
                file.close();
            }
        }
    }

    void openFile() {
        QString filePath = QFileDialog::getOpenFileName(this, "打开文件", "", "文本文件 (*.txt)");
        if (!filePath.isEmpty()) {
            std::vector<std::string> lines = readFile(filePath.toStdString());
            QString content;
            for (const auto &line : lines) {
                content += QString::fromStdString(line) + "\n";
            }
            textEdit1->setPlainText(content);
        }
    }

    std::vector<std::string> readFile(const std::string &path) {
        std::vector<std::string> lines;
        std::ifstream file(path);
        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                lines.push_back(line);
            }
            file.close();
        }
        return lines;
    }

private:
    // 成员变量用于存储文本框和按钮
    QTextEdit *textEdit1;
    QTextEdit *textEdit2;
    QTextEdit *textEdit3;
    QTextEdit *textEdit4;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3; // 新增的按钮
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}
