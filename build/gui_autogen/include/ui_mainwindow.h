/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QLabel *label_Word_source;
    QLabel *label_Grammar_source;
    QLabel *fixTreeSource;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_openSrc;
    QPushButton *pushButton_save_program;
    QPushButton *pushButton_saveSrc;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_edit_fixTree;
    QPushButton *pushButton_edit_grm;
    QPushButton *pushButton_edit_rul;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_load_word_rul;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_Word_Analyze;
    QPushButton *pushButton_show_result_WA;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_Word_NFA;
    QPushButton *pushButton_word_DFA;
    QPushButton *pushButton_word_miniDFA;
    QPushButton *pushButton_show_code;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QPushButton *pushButton_load_BNF;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_GA_run;
    QPushButton *pushButton_show_log;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_GrmTreeFunc;
    QPushButton *pushButton_show_Analyze_Tree;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_show_LALR_DFA;
    QPushButton *pushButton_show_LR1_DFA;
    QPushButton *pushButton_LALR1Table;
    QPushButton *pushButton_show_FirstFollow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(878, 662);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font.setPointSize(12);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_3);

        label_Word_source = new QLabel(centralwidget);
        label_Word_source->setObjectName("label_Word_source");
        label_Word_source->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(label_Word_source);

        label_Grammar_source = new QLabel(centralwidget);
        label_Grammar_source->setObjectName("label_Grammar_source");
        label_Grammar_source->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(label_Grammar_source);

        fixTreeSource = new QLabel(centralwidget);
        fixTreeSource->setObjectName("fixTreeSource");

        verticalLayout_7->addWidget(fixTreeSource);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_7->addWidget(plainTextEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_openSrc = new QPushButton(centralwidget);
        pushButton_openSrc->setObjectName("pushButton_openSrc");
        pushButton_openSrc->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(pushButton_openSrc);

        pushButton_save_program = new QPushButton(centralwidget);
        pushButton_save_program->setObjectName("pushButton_save_program");

        horizontalLayout_4->addWidget(pushButton_save_program);

        pushButton_saveSrc = new QPushButton(centralwidget);
        pushButton_saveSrc->setObjectName("pushButton_saveSrc");
        pushButton_saveSrc->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(pushButton_saveSrc);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_edit_fixTree = new QPushButton(centralwidget);
        pushButton_edit_fixTree->setObjectName("pushButton_edit_fixTree");

        horizontalLayout->addWidget(pushButton_edit_fixTree);

        pushButton_edit_grm = new QPushButton(centralwidget);
        pushButton_edit_grm->setObjectName("pushButton_edit_grm");

        horizontalLayout->addWidget(pushButton_edit_grm);

        pushButton_edit_rul = new QPushButton(centralwidget);
        pushButton_edit_rul->setObjectName("pushButton_edit_rul");

        horizontalLayout->addWidget(pushButton_edit_rul);


        verticalLayout_7->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        pushButton_load_word_rul = new QPushButton(centralwidget);
        pushButton_load_word_rul->setObjectName("pushButton_load_word_rul");
        pushButton_load_word_rul->setStyleSheet(QString::fromUtf8("background-color: rgb(160, 160, 160);"));

        verticalLayout_2->addWidget(pushButton_load_word_rul);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_Word_Analyze = new QPushButton(centralwidget);
        pushButton_Word_Analyze->setObjectName("pushButton_Word_Analyze");
        pushButton_Word_Analyze->setStyleSheet(QString::fromUtf8("background-color: rgb(160, 160, 160);"));

        verticalLayout_2->addWidget(pushButton_Word_Analyze);

        pushButton_show_result_WA = new QPushButton(centralwidget);
        pushButton_show_result_WA->setObjectName("pushButton_show_result_WA");
        pushButton_show_result_WA->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_2->addWidget(pushButton_show_result_WA);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_Word_NFA = new QPushButton(centralwidget);
        pushButton_Word_NFA->setObjectName("pushButton_Word_NFA");
        pushButton_Word_NFA->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_2->addWidget(pushButton_Word_NFA);

        pushButton_word_DFA = new QPushButton(centralwidget);
        pushButton_word_DFA->setObjectName("pushButton_word_DFA");
        pushButton_word_DFA->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_2->addWidget(pushButton_word_DFA);

        pushButton_word_miniDFA = new QPushButton(centralwidget);
        pushButton_word_miniDFA->setObjectName("pushButton_word_miniDFA");
        pushButton_word_miniDFA->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_2->addWidget(pushButton_word_miniDFA);

        pushButton_show_code = new QPushButton(centralwidget);
        pushButton_show_code->setObjectName("pushButton_show_code");
        pushButton_show_code->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_2->addWidget(pushButton_show_code);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font2.setPointSize(10);
        font2.setBold(false);
        label->setFont(font2);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        pushButton_load_BNF = new QPushButton(centralwidget);
        pushButton_load_BNF->setObjectName("pushButton_load_BNF");
        pushButton_load_BNF->setStyleSheet(QString::fromUtf8("background-color: rgb(160, 160, 160);"));

        verticalLayout_3->addWidget(pushButton_load_BNF);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        pushButton_GA_run = new QPushButton(centralwidget);
        pushButton_GA_run->setObjectName("pushButton_GA_run");
        pushButton_GA_run->setStyleSheet(QString::fromUtf8("background-color: rgb(160, 160, 160);"));

        verticalLayout_3->addWidget(pushButton_GA_run);

        pushButton_show_log = new QPushButton(centralwidget);
        pushButton_show_log->setObjectName("pushButton_show_log");
        pushButton_show_log->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_3->addWidget(pushButton_show_log);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_GrmTreeFunc = new QPushButton(centralwidget);
        pushButton_GrmTreeFunc->setObjectName("pushButton_GrmTreeFunc");
        pushButton_GrmTreeFunc->setStyleSheet(QString::fromUtf8("background-color: rgb(160, 160, 160);"));

        verticalLayout_3->addWidget(pushButton_GrmTreeFunc);

        pushButton_show_Analyze_Tree = new QPushButton(centralwidget);
        pushButton_show_Analyze_Tree->setObjectName("pushButton_show_Analyze_Tree");
        pushButton_show_Analyze_Tree->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_3->addWidget(pushButton_show_Analyze_Tree);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        pushButton_show_LALR_DFA = new QPushButton(centralwidget);
        pushButton_show_LALR_DFA->setObjectName("pushButton_show_LALR_DFA");
        pushButton_show_LALR_DFA->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_3->addWidget(pushButton_show_LALR_DFA);

        pushButton_show_LR1_DFA = new QPushButton(centralwidget);
        pushButton_show_LR1_DFA->setObjectName("pushButton_show_LR1_DFA");
        pushButton_show_LR1_DFA->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_3->addWidget(pushButton_show_LR1_DFA);

        pushButton_LALR1Table = new QPushButton(centralwidget);
        pushButton_LALR1Table->setObjectName("pushButton_LALR1Table");
        pushButton_LALR1Table->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_3->addWidget(pushButton_LALR1Table);

        pushButton_show_FirstFollow = new QPushButton(centralwidget);
        pushButton_show_FirstFollow->setObjectName("pushButton_show_FirstFollow");
        pushButton_show_FirstFollow->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        verticalLayout_3->addWidget(pushButton_show_FirstFollow);


        horizontalLayout_3->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 878, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\257\221\345\216\237\347\220\206\351\241\271\347\233\256", nullptr));
        label_Word_source->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\257\215\346\263\225\346\235\245\346\272\220\357\274\232", nullptr));
        label_Grammar_source->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\257\255\346\263\225\346\235\245\346\272\220\357\274\232", nullptr));
        fixTreeSource->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\257\255\344\271\211\345\207\275\346\225\260\346\235\245\346\272\220\357\274\232", nullptr));
        pushButton_openSrc->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\272\220\347\250\213\345\272\217\346\226\207\344\273\266\345\210\260\347\274\226\350\276\221\346\241\206", nullptr));
        pushButton_save_program->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        pushButton_saveSrc->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
        pushButton_edit_fixTree->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\257\255\344\271\211\345\207\275\346\225\260", nullptr));
        pushButton_edit_grm->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\257\255\346\263\225\346\226\207\344\273\266", nullptr));
        pushButton_edit_rul->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\257\215\346\263\225\346\226\207\344\273\266", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\257\215\346\263\225", nullptr));
        pushButton_load_word_rul->setText(QCoreApplication::translate("MainWindow", "\350\275\275\345\205\245\350\257\215\346\263\225\346\255\243\345\210\231\346\226\207\344\273\266", nullptr));
        pushButton_Word_Analyze->setText(QCoreApplication::translate("MainWindow", "\350\257\215\346\263\225\345\210\206\346\236\220", nullptr));
        pushButton_show_result_WA->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\257\215\346\263\225\345\210\206\346\236\220\347\273\223\346\236\234", nullptr));
        pushButton_Word_NFA->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\257\215\346\263\225NFA", nullptr));
        pushButton_word_DFA->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\257\215\346\263\225DFA", nullptr));
        pushButton_word_miniDFA->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\257\215\346\263\225\346\234\200\345\260\217\345\214\226\347\232\204DFA", nullptr));
        pushButton_show_code->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\257\215\346\263\225\345\210\206\346\236\220\345\231\250\344\273\243\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\263\225", nullptr));
        pushButton_load_BNF->setText(QCoreApplication::translate("MainWindow", "\350\275\275\345\205\245BNF\350\257\255\346\263\225\346\226\207\344\273\266", nullptr));
        pushButton_GA_run->setText(QCoreApplication::translate("MainWindow", "\350\257\255\346\263\225\345\210\206\346\236\220", nullptr));
        pushButton_show_log->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\345\210\206\346\236\220\350\277\207\347\250\213", nullptr));
        pushButton_GrmTreeFunc->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\350\257\255\344\271\211\345\207\275\346\225\260", nullptr));
        pushButton_show_Analyze_Tree->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\257\255\346\263\225\346\240\221", nullptr));
        pushButton_show_LALR_DFA->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213LALR1DFA", nullptr));
        pushButton_show_LR1_DFA->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213LR(1)DFA", nullptr));
        pushButton_LALR1Table->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213LALR(1)\345\210\206\346\236\220\350\241\250", nullptr));
        pushButton_show_FirstFollow->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213First/Follow\351\233\206\345\220\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
