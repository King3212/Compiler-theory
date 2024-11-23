#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <string>
#include <vector>
#include <QMessageBox>
#include <QProgressDialog>
#include <QTimer>
#include <unordered_set>
#include <fstream>
#include <sstream>
#include "tableforgragh.h"
#include "globle.h"
#include <QVBoxLayout>
#include <cmath>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE









class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_saveSrc_clicked();

    void on_pushButton_load_word_rul_clicked();

    void on_plainTextEdit_textChanged();

    void on_pushButton_Word_NFA_clicked();

    void on_pushButton_word_DFA_clicked();

    void on_pushButton_word_miniDFA_clicked();

private:
    Ui::MainWindow *ui;
    QString srcPath;
    QString ignorePath;
    QString wordRulPath;
    vector<gragh> NFA;
    vector<gragh> DFA;
    vector<gragh> miniDFA;

    void showAGragh(gragh g);
};
#endif // MAINWINDOW_H
