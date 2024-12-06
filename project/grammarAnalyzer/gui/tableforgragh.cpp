/**
 * @file tableforgragh.cpp
 * @brief 展示表格的类的实现
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

#include "tableforgragh.h"
#include "./ui_tableforgragh.h"

tableForGragh::tableForGragh(QWidget *parent) 
    : QWidget(parent)
    , ui(new Ui::tableForGragh)
{
    ui->setupUi(this);
}

tableForGragh::~tableForGragh()
{
    delete ui;
}
// 初始化表格
void tableForGragh::initTable(graghForWA oneGragh)
{
    ui->label_name->setText(QString::fromStdString("name: " + oneGragh.name));
    ui->label_start->setText(QString::fromStdString("start: " + std::to_string(oneGragh.start)));
    ui->label_size->setText(QString::fromStdString("size: " + std::to_string(oneGragh.size)));
    ui->label_end->setText("ends");
    if (oneGragh.finalNodes.empty())
        ui->textBrowser_ends->append(QString::fromStdString(std::to_string((oneGragh.size -1)) + " "));
    else{
        for (auto e : oneGragh.finalNodes) // 遍历终止节点, 添加到文本框
        {
            ui->textBrowser_ends->append(QString::fromStdString(std::to_string(e) + " "));
        }
    }


    IndexedSet<string> expressions;//存储所有表达式
    for (auto e : *oneGragh.edges)
    {
        expressions.insert(e.express);
    }

    // 初始化表格
    ui->tableWidget->setColumnCount(expressions.size());//设置列数
    ui->tableWidget->setRowCount(oneGragh.size);//设置行数
    // 遍历边集，将边添加到表格中
    for (auto e : *(oneGragh.edges))
    {
        ui->tableWidget->setItem(e.begin,expressions.find(e.express), new QTableWidgetItem(QString::fromStdString(std::to_string(e.end))));
    }
    // 设置表头
    for (auto e : expressions)
    {
        ui->tableWidget->setHorizontalHeaderItem(expressions.find(e), new QTableWidgetItem(QString::fromStdString(e)));
    }
    // 设置行头
    for (int i = 0; i < oneGragh.size; i++)
    {
        ui->tableWidget->setVerticalHeaderItem(i, new QTableWidgetItem(QString::fromStdString(std::to_string(i))));
    }
}

// 初始化表格
void tableForGragh::initTable(IndexedSet<Edge> edges,QString name)
{
    IndexedSet<string> signs;
    int max = 0;
    for (auto e : edges)
    {
        signs.insert(e.sign);
        max = std::max(max, e.from);
    }
    ui->tableWidget->setColumnCount(signs.size());
    ui->tableWidget->setRowCount(max + 1);
    // 遍历边集，将边添加到表格中
    for (auto e : edges)
    {
        if (e.type == SHIFT)
            ui->tableWidget->setItem(e.from, signs.find(e.sign), new QTableWidgetItem(QString::fromStdString("s " + std::to_string(e.to))));
        else if (e.type == REDUCE)
            ui->tableWidget->setItem(e.from, signs.find(e.sign), new QTableWidgetItem(QString::fromStdString("r")));
        else if (e.type == ACCEPT){
            ui->tableWidget->setItem(e.from, signs.find(e.sign), new QTableWidgetItem("acc"));
        }
        else if (e.type == GOTO)
            ui->tableWidget->setItem(e.from, signs.find(e.sign), new QTableWidgetItem(QString::fromStdString("g " + std::to_string(e.to))));
    }
    // 设置表头
    for (auto s : signs)
    {
        ui->tableWidget->setHorizontalHeaderItem(signs.find(s), new QTableWidgetItem(QString::fromStdString(s)));
    }
    // 设置行头
    for (int i = 0; i < max + 1; i++)
    {
        ui->tableWidget->setVerticalHeaderItem(i, new QTableWidgetItem(QString::fromStdString(std::to_string(i))));
    }
    // 设置其他信息
    ui->label_name->setText("name: " + name);
    ui->label_start->setText("start: 0");
    ui->label_size->setText("size: " + QString::fromStdString(std::to_string(max + 1)));

}
