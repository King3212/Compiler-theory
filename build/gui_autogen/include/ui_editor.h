/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editor
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_save;
    QPushButton *pushButton_to;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *editor)
    {
        if (editor->objectName().isEmpty())
            editor->setObjectName("editor");
        editor->resize(400, 300);
        horizontalLayoutWidget = new QWidget(editor);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 391, 281));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(horizontalLayoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout->addWidget(plainTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton_save = new QPushButton(horizontalLayoutWidget);
        pushButton_save->setObjectName("pushButton_save");

        verticalLayout->addWidget(pushButton_save);

        pushButton_to = new QPushButton(horizontalLayoutWidget);
        pushButton_to->setObjectName("pushButton_to");

        verticalLayout->addWidget(pushButton_to);

        pushButton_exit = new QPushButton(horizontalLayoutWidget);
        pushButton_exit->setObjectName("pushButton_exit");

        verticalLayout->addWidget(pushButton_exit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(editor);

        QMetaObject::connectSlotsByName(editor);
    } // setupUi

    void retranslateUi(QDialog *editor)
    {
        editor->setWindowTitle(QCoreApplication::translate("editor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("editor", "\347\274\226\350\276\221\345\231\250", nullptr));
        pushButton_save->setText(QCoreApplication::translate("editor", "\344\277\235\345\255\230", nullptr));
        pushButton_to->setText(QCoreApplication::translate("editor", "\345\217\246\345\255\230\344\270\272", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("editor", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editor: public Ui_editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
