#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

class MyWidget : public QWidget
{
public:
    MyWidget(QWidget *parent = nullptr) : QWidget(parent)
    {
        // 设置窗口标题
        setWindowTitle("Simple Qt Application");

        // 创建一个按钮，并设置按钮文本
        QPushButton *button = new QPushButton("Click me", this);

        // 将按钮放置在窗口中央
        button->setGeometry(100, 50, 100, 30);

        // 连接按钮的点击事件到槽函数
        connect(button, &QPushButton::clicked, this, &MyWidget::showMessage);
    }

private slots:
    // 点击按钮后显示消息框
    void showMessage()
    {
        QMessageBox::information(this, "Message", "Hello, Qt World!");
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
