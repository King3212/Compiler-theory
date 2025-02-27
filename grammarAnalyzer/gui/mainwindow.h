#pragma once
/**
 * @file globle.h
 * @brief 实现了主界面的类
 * 
 * @version 1.0
 * @date 2024-9-25
 * @author 20222131044
 * 
 * @history
 * 版本 | 作者 | 日期 | 说明
 * ------|------|------|------
 * 1.0 | 20222131044 | 2024-9-25 | 初始版本
 */

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
#include <dlfcn.h>
#include <QTreeWidgetItem>
#include <QRadioButton>
#include "../tokens/tokens.h"
#include "../analyzer/analyzer.h"
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
class editor;
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

    // 源文件
    void on_pushButton_saveSrc_clicked();  // 另存源文件
    void on_pushButton_save_program_clicked(); // 保存源代码
    void on_pushButton_openSrc_clicked();  // 打开待分析源代码

    // 词法分析
    void on_pushButton_load_word_rul_clicked();  // 加载词法规则
    
    void on_pushButton_Word_NFA_clicked();  // 生成NFA

    void on_pushButton_word_DFA_clicked();  // 生成DFA

    void on_pushButton_word_miniDFA_clicked();  // 生成最小化DFA

    void on_pushButton_Word_Analyze_clicked();  // 词法分析

    void on_pushButton_show_result_WA_clicked();  // 显示词法分析结果

    void on_pushButton_show_code_clicked();  // 显示词法分析器代码

    // 语法分析
    void on_pushButton_load_BNF_clicked();  // 加载BNF

    void on_pushButton_GA_run_clicked();  // 语法分析

    void on_pushButton_show_log_clicked();  // 显示分析日志

    void on_pushButton_show_Analyze_Tree_clicked();  // 显示分析树

    void on_pushButton_show_FirstFollow_clicked();  // 显示FirstFollow集合
 
    void on_pushButton_LALR1Table_clicked();  // 显示LALR1分析表

    void on_pushButton_show_LR1_DFA_clicked();  // 显示LR1DFA

    void on_pushButton_show_LALR_DFA_clicked();  // 显示LALR1DFA

    void on_pushButton_GrmTreeFunc_clicked();  // 导入语义函数

    

    void on_pushButton_edit_fixTree_clicked(); // 编辑语义函数

    void on_pushButton_edit_grm_clicked(); // 编辑BNF

    void on_pushButton_edit_rul_clicked();  // 编辑词法规则

private:

    Ui::MainWindow *ui;  // 主界面

    // 文件路径
    QString srcPath;  // 源文件路径
    QString wordRulPath;  // 词法规则路径
    QString BNFPath;  // BNF路径
    QString fixTreePath;  // 修正树路径
    QString LR1Path;  // LR1路径
    QString LALR1Path;  // LALR1路径

    // 词法数据
    vector<graghForWA> NFA;  // NFA图
    vector<graghForWA> DFA;  // DFA图
    vector<graghForWA> miniDFA;  // 最小化DFA图
    vector<token> tokens;  // 词法分析结果

    // 语法数据
    Parser *parser;  // 语法分析器
    QString bnf;  // BNF
    IndexedSet<Edge> LR1edges;  // LR1边
    IndexedSet<Edge> LALR1edges;  // LALR1边
    QString FirstFollow;  // FirstFollow集合
    Tree *tree;  // 分析树
    QString AnalyzeLog;  // 分析日志

    // 待分析数据
    QString program;  // 源代码
    QString re;  // 正则表达式

    // 状态
    bool wordAnalyzed;  // 是否进行过词法分析
    bool grammarAnalyzed;   // 是否进行过语法分析
    bool genSuccess;  // 语法树是否生成成功
    bool lr1DFAgened;  // 是否生成LR1DFA
    bool lalr1DFAgened;  // 是否生成LALR1DFA
    bool treeShowed;  // 是否显示过语法树

    // 函数
    void showAGragh(graghForWA g);  // 显示图
    IndexedSet<Edge> getEdgesFromFile(string path);  // 从文件中获取分析表
    vector<QString> split(QString str, QString pattern);  // 分割字符串

};

#endif // MAINWINDOW_H
