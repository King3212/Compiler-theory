/********************************************************************************
** Form generated from reading UI file 'tableforgragh.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEFORGRAGH_H
#define UI_TABLEFORGRAGH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tableForGragh
{
public:
    QLabel *label_name;
    QLabel *label_size;
    QLabel *label_start;
    QLabel *label_end;
    QTextBrowser *textBrowser_ends;
    QTableWidget *tableWidget;

    void setupUi(QWidget *tableForGragh)
    {
        if (tableForGragh->objectName().isEmpty())
            tableForGragh->setObjectName("tableForGragh");
        tableForGragh->resize(400, 300);
        label_name = new QLabel(tableForGragh);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(20, 10, 201, 24));
        label_size = new QLabel(tableForGragh);
        label_size->setObjectName("label_size");
        label_size->setGeometry(QRect(20, 40, 76, 24));
        label_start = new QLabel(tableForGragh);
        label_start->setObjectName("label_start");
        label_start->setGeometry(QRect(20, 70, 76, 24));
        label_end = new QLabel(tableForGragh);
        label_end->setObjectName("label_end");
        label_end->setGeometry(QRect(240, 10, 101, 24));
        textBrowser_ends = new QTextBrowser(tableForGragh);
        textBrowser_ends->setObjectName("textBrowser_ends");
        textBrowser_ends->setGeometry(QRect(150, 40, 211, 41));
        tableWidget = new QTableWidget(tableForGragh);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 100, 361, 192));

        retranslateUi(tableForGragh);

        QMetaObject::connectSlotsByName(tableForGragh);
    } // setupUi

    void retranslateUi(QWidget *tableForGragh)
    {
        tableForGragh->setWindowTitle(QCoreApplication::translate("tableForGragh", "Form", nullptr));
        label_name->setText(QCoreApplication::translate("tableForGragh", "name", nullptr));
        label_size->setText(QCoreApplication::translate("tableForGragh", "size", nullptr));
        label_start->setText(QCoreApplication::translate("tableForGragh", "start", nullptr));
        label_end->setText(QCoreApplication::translate("tableForGragh", "ends:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tableForGragh: public Ui_tableForGragh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEFORGRAGH_H
