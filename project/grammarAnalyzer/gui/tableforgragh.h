/**
 * @file tableforgragh.h
 * @brief 展示表格的类的声明
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

#ifndef TABLEFORGRAGH_H
#define TABLEFORGRAGH_H

#include <QWidget>
#include "globle.h"
#include "../../include/grammar/IndexedSet.h"
#include "../../include/grammar/globle.h"
using namespace std;
namespace Ui {
class tableForGragh;
}

class tableForGragh : public QWidget
{
    Q_OBJECT

public:
    explicit tableForGragh(QWidget *parent = nullptr); // 构造函数
    ~tableForGragh(); // 析构函数
    void initTable(graghForWA oneGragh); // 初始化表格
    void initTable(IndexedSet<Edge> edges,QString name); // 初始化表格
private:
    Ui::tableForGragh *ui;
    
};

#endif // TABLEFORGRAGH_H
