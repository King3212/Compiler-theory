#include <QApplication>
#include <QWidget>
#include <QTextEdit>
#include <QScrollArea>
#include <QPushButton>
#include <QFileDialog>
#include <QVBoxLayout>
#include "include/readFile.hh"
#include "include/scanner.hh"
class MyWidget : public QWidget
{
public:
    MyWidget(QWidget *parent = nullptr) : QWidget(parent)
    {
        // 设置窗口标题
        setWindowTitle("C++单词拼装分类器");

        // 创建一个按钮，并设置按钮文本
        QPushButton *button = new QPushButton("选择文件", this);

        QVBoxLayout *layout = new QVBoxLayout(this);

        // 连接按钮的点击事件到槽函数
        connect(button, &QPushButton::clicked, this, &MyWidget::openFile);

        textEdit = new QTextEdit;
        textEdit->setPlainText(message);
        textEdit->setReadOnly(true);
        QScrollArea *scrollArea = new QScrollArea;
        scrollArea->setWidget(textEdit);

        layout->addWidget(button);
        layout->addWidget(scrollArea);
    }

private slots:
    // 槽函数，用于打开文件对话框并获取所选文件的路径
    void openFile()
    {
        // 创建文件对话框对象
        QString filePath = QFileDialog::getOpenFileName(this, "选择文件", "/path/to/default/directory", "All Files (*)");
        filename = filePath.toStdString();
        processFile();
    }

private:
    QTextEdit *textEdit;
    std::string filename;
    QString message;
    // 点击按钮后显示消息框
    void processFile()
    {
        vector <pair<string,TOKEN>> result;
        for(auto i: readFile(filename)){
            assert(readLine(i,result) == NoError);
        }
        message = intoQstring(result);
        textEdit->setPlainText(message);
        textEdit->adjustSize();
        textEdit->repaint();
    }
};

int main(int argc, char *argv[])
{

    // 创建Qt应用程序对象
    QApplication app(argc, argv);

    // 创建自定义窗口对象
    MyWidget window;

    // 显示窗口
    window.show();

    // 运行应用程序事件循环
    return app.exec();
}
