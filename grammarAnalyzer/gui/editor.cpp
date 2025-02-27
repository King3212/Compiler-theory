#include "editor.h"
#include "ui_editor.h"
#include "mainwindow.h"
editor::editor( QString *path, QString targetPath,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editor)
    , path(path)
    , targetPath(targetPath)
    , parent((MainWindow *)parent)
{
    ui->setupUi(this);
    ui->plainTextEdit->setLineWrapMode(QPlainTextEdit::WidgetWidth);

    QFile file(*path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::information(this, "提示", "无法打开文件");
        return;
    }
    QTextStream in(&file);
    QString fileContent = in.readAll();
    ui->plainTextEdit->setPlainText(fileContent);
    file.close();
    
    
}

editor::~editor()
{
    delete ui;
}

void editor::on_pushButton_exit_clicked()
{
    this->close();
}


void editor::on_pushButton_save_clicked()
{
    // 保存编辑框中的内容到path
    QFile file(*path);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << ui->plainTextEdit->toPlainText();
        file.close();
        // 保存成功
    }else{
        QMessageBox::information(this, "提示", "无法保存文件");
    }

    if (targetPath.isEmpty()) {
        return;
    }
    
    // 进行编译到.so文件
    QString cmd = "g++ -shared -fPIC -g -o " + targetPath + " " + *path;
    if (system(cmd.toStdString().c_str()) == 0) {
        QMessageBox::information(this, "提示", "保存成功,语义函数已更新");
    } else {
        QMessageBox::information(this, "提示", "保存失败");
    }

    
}


void editor::on_pushButton_to_clicked()
{
    // 新建文件
    QString filePath = QFileDialog::getSaveFileName(this, tr("保存文件"), "", tr("所有文件 (*)"));
    if (filePath.isEmpty()) {
        return;
    }
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << ui->plainTextEdit->toPlainText();
        file.close();
        
        

        // 进行编译到.so文件
        QString cmd = "g++ -shared -fPIC -g -o " + targetPath + " " + *path;

        if (system(cmd.toStdString().c_str()) == 0) {
            QMessageBox::information(this, "提示", "保存成功,语义函数已更新");
            this->path = new QString(filePath);
            parent->setSource();
            parent->initSource();
        } else {
            QMessageBox::information(this, "提示", "保存失败\n"+cmd);
        }
        
    } else {
        QMessageBox::information(this, "提示", "无法保存文件");
    }
}

