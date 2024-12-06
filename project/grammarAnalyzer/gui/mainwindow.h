


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
#include "QDesktopServices"
#include "globle.h"
#include <QVBoxLayout>
#include <cmath>
#include <QTreeWidgetItem>
#include <QRadioButton>
#include "../tokens/tokens.h"
#include "../analyzer/analyzer.h"
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
    void initSource();
    void setSource();

private slots:
    void on_pushButton_saveSrc_clicked();

    void on_pushButton_load_word_rul_clicked();

    void on_pushButton_Word_NFA_clicked();

    void on_pushButton_word_DFA_clicked();

    void on_pushButton_word_miniDFA_clicked();

    void on_pushButton_Word_Analyze_clicked();

    void on_pushButton_openSrc_clicked();

    void on_pushButton_show_result_WA_clicked();

    void on_pushButton_load_BNF_clicked();

    void on_pushButton_GA_run_clicked();

    void on_pushButton_show_log_clicked();

    void on_pushButton_show_Analyze_Tree_clicked();

    void on_pushButton_show_FirstFollow_clicked();

    void on_pushButton_show_code_clicked();

    void on_pushButton_LALR1Table_clicked();

    void on_pushButton_show_LR1_DFA_clicked();

    void on_pushButton_show_LALR_DFA_clicked();

    void on_checkBox_Program_stateChanged(int arg1);

    void on_checkBox_Re_stateChanged(int arg1);

    void on_checkBox_BNF_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QString srcPath;
    QString ignorePath;
    QString wordRulPath;
    QString BNFPath;
    QString LR1Path;
    QString LALR1Path;
    vector<graghForWA> NFA;
    vector<graghForWA> DFA;
    vector<graghForWA> miniDFA;
    vector<token> tokens;
    IndexedSet<Edge> LR1edges;
    IndexedSet<Edge> LALR1edges;
    Tree *tree;
    QString AnalyzeLog;
    Parser *parser;
    QString FirstFollow;
    QString program;
    QString bnf;
    QString re;
    bool wordAnalyzed;
    bool grammarAnalyzed;
    bool genSuccess;
    IndexedSet<string> ignoreSigns;
    void showAGragh(graghForWA g);
    IndexedSet<Edge> getEdgesFromFile(string path);
    vector<QString> split(QString str, QString pattern);
    void loadTreeIgnore();
    void loadTreeFuc();
    void compressTree(Tree *node);
    void fixTree(Tree *node);
    bool lr1DFAgened;
    bool lalr1DFAgened;
    vector<IndexedSet<string>> ops;
};

#endif // MAINWINDOW_H
