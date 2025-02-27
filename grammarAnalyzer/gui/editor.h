#ifndef EDITOR_H
#define EDITOR_H

#include <QDialog>
#include <QString>
#include <QFile>
#include <QWidget>
#include <QTextStream>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>

class MainWindow;

namespace Ui {
class editor;
}

class editor : public QDialog
{
    Q_OBJECT

public:
    explicit editor(QString *path, QString targetPath, QWidget *parent = nullptr);
    ~editor();

private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_to_clicked();

private:
    Ui::editor *ui;
    QString *path;
    QString targetPath;
    MainWindow *parent;
};

#endif // EDITOR_H
