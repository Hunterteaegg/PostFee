/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QTabWidget *localChoose_Bar;
    QWidget *tab_domesitc;
    QGroupBox *groupBox;
    QRadioButton *button_mail;
    QRadioButton *button_postcard;
    QGroupBox *groupBox_2;
    QTextEdit *textbox_weight;
    QPushButton *button_cal;
    QGroupBox *groupBox_3;
    QTextEdit *textbox_result;
    QGroupBox *groupBox_4;
    QRadioButton *botton_inside;
    QRadioButton *botton_outside;
    QWidget *tab_autonomous;
    QGroupBox *groupBox_5;
    QRadioButton *button_mail_2;
    QRadioButton *button_postcard_2;
    QGroupBox *groupBox_6;
    QTextEdit *textbox_weight_2;
    QPushButton *button_cal_2;
    QGroupBox *groupBox_7;
    QTextEdit *textbox_result_2;
    QWidget *tab_international;
    QGroupBox *groupBox_8;
    QRadioButton *button_mail_3;
    QRadioButton *button_postcard_3;
    QGroupBox *groupBox_9;
    QTextEdit *textbox_weight_3;
    QGroupBox *groupBox_10;
    QGroupBox *groupBox_11;
    QPushButton *button_cal_3;
    QGroupBox *groupBox_12;
    QTextEdit *textbox_result_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(675, 349);
        widget = new QWidget(MainWindow);
        widget->setObjectName(QStringLiteral("widget"));
        localChoose_Bar = new QTabWidget(widget);
        localChoose_Bar->setObjectName(QStringLiteral("localChoose_Bar"));
        localChoose_Bar->setGeometry(QRect(0, 0, 671, 351));
        tab_domesitc = new QWidget();
        tab_domesitc->setObjectName(QStringLiteral("tab_domesitc"));
        groupBox = new QGroupBox(tab_domesitc);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 120, 80));
        button_mail = new QRadioButton(groupBox);
        button_mail->setObjectName(QStringLiteral("button_mail"));
        button_mail->setGeometry(QRect(10, 20, 89, 16));
        button_postcard = new QRadioButton(groupBox);
        button_postcard->setObjectName(QStringLiteral("button_postcard"));
        button_postcard->setGeometry(QRect(10, 50, 89, 16));
        groupBox_2 = new QGroupBox(tab_domesitc);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 10, 241, 81));
        textbox_weight = new QTextEdit(groupBox_2);
        textbox_weight->setObjectName(QStringLiteral("textbox_weight"));
        textbox_weight->setGeometry(QRect(20, 20, 201, 51));
        button_cal = new QPushButton(tab_domesitc);
        button_cal->setObjectName(QStringLiteral("button_cal"));
        button_cal->setGeometry(QRect(580, 50, 75, 23));
        groupBox_3 = new QGroupBox(tab_domesitc);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(49, 139, 541, 141));
        textbox_result = new QTextEdit(groupBox_3);
        textbox_result->setObjectName(QStringLiteral("textbox_result"));
        textbox_result->setGeometry(QRect(20, 30, 511, 91));
        groupBox_4 = new QGroupBox(tab_domesitc);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(160, 10, 120, 80));
        botton_inside = new QRadioButton(groupBox_4);
        botton_inside->setObjectName(QStringLiteral("botton_inside"));
        botton_inside->setGeometry(QRect(20, 20, 89, 16));
        botton_outside = new QRadioButton(groupBox_4);
        botton_outside->setObjectName(QStringLiteral("botton_outside"));
        botton_outside->setGeometry(QRect(20, 50, 89, 16));
        localChoose_Bar->addTab(tab_domesitc, QString());
        tab_autonomous = new QWidget();
        tab_autonomous->setObjectName(QStringLiteral("tab_autonomous"));
        groupBox_5 = new QGroupBox(tab_autonomous);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 20, 120, 80));
        button_mail_2 = new QRadioButton(groupBox_5);
        button_mail_2->setObjectName(QStringLiteral("button_mail_2"));
        button_mail_2->setGeometry(QRect(10, 20, 89, 16));
        button_postcard_2 = new QRadioButton(groupBox_5);
        button_postcard_2->setObjectName(QStringLiteral("button_postcard_2"));
        button_postcard_2->setGeometry(QRect(10, 50, 89, 16));
        groupBox_6 = new QGroupBox(tab_autonomous);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(170, 20, 241, 81));
        textbox_weight_2 = new QTextEdit(groupBox_6);
        textbox_weight_2->setObjectName(QStringLiteral("textbox_weight_2"));
        textbox_weight_2->setGeometry(QRect(20, 20, 201, 51));
        button_cal_2 = new QPushButton(tab_autonomous);
        button_cal_2->setObjectName(QStringLiteral("button_cal_2"));
        button_cal_2->setGeometry(QRect(470, 50, 75, 23));
        groupBox_7 = new QGroupBox(tab_autonomous);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(60, 140, 541, 141));
        textbox_result_2 = new QTextEdit(groupBox_7);
        textbox_result_2->setObjectName(QStringLiteral("textbox_result_2"));
        textbox_result_2->setGeometry(QRect(20, 30, 511, 91));
        localChoose_Bar->addTab(tab_autonomous, QString());
        tab_international = new QWidget();
        tab_international->setObjectName(QStringLiteral("tab_international"));
        groupBox_8 = new QGroupBox(tab_international);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 20, 120, 80));
        button_mail_3 = new QRadioButton(groupBox_8);
        button_mail_3->setObjectName(QStringLiteral("button_mail_3"));
        button_mail_3->setGeometry(QRect(10, 20, 89, 16));
        button_postcard_3 = new QRadioButton(groupBox_8);
        button_postcard_3->setObjectName(QStringLiteral("button_postcard_3"));
        button_postcard_3->setGeometry(QRect(10, 50, 89, 16));
        groupBox_9 = new QGroupBox(tab_international);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(140, 20, 241, 81));
        textbox_weight_3 = new QTextEdit(groupBox_9);
        textbox_weight_3->setObjectName(QStringLiteral("textbox_weight_3"));
        textbox_weight_3->setGeometry(QRect(20, 20, 201, 51));
        groupBox_10 = new QGroupBox(tab_international);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(390, 20, 120, 81));
        groupBox_11 = new QGroupBox(tab_international);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(530, 20, 120, 80));
        button_cal_3 = new QPushButton(tab_international);
        button_cal_3->setObjectName(QStringLiteral("button_cal_3"));
        button_cal_3->setGeometry(QRect(290, 120, 75, 23));
        groupBox_12 = new QGroupBox(tab_international);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(70, 150, 541, 141));
        textbox_result_3 = new QTextEdit(groupBox_12);
        textbox_result_3->setObjectName(QStringLiteral("textbox_result_3"));
        textbox_result_3->setGeometry(QRect(20, 30, 511, 91));
        localChoose_Bar->addTab(tab_international, QString());
        MainWindow->setCentralWidget(widget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        localChoose_Bar->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PostFee Calculor", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\351\202\256\344\273\266\347\261\273\345\236\213", nullptr));
        button_mail->setText(QApplication::translate("MainWindow", "\344\277\241\344\273\266", nullptr));
        button_postcard->setText(QApplication::translate("MainWindow", "\346\230\216\344\277\241\347\211\207", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\351\207\215\351\207\217", nullptr));
        button_cal->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\347\273\223\346\236\234", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\234\260\345\214\272", nullptr));
        botton_inside->setText(QApplication::translate("MainWindow", "\346\234\254\345\270\202", nullptr));
        botton_outside->setText(QApplication::translate("MainWindow", "\345\244\226\345\270\202", nullptr));
        localChoose_Bar->setTabText(localChoose_Bar->indexOf(tab_domesitc), QApplication::translate("MainWindow", "\345\233\275\345\206\205\350\265\204\350\264\271", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\351\202\256\344\273\266\347\261\273\345\236\213", nullptr));
        button_mail_2->setText(QApplication::translate("MainWindow", "\344\277\241\344\273\266", nullptr));
        button_postcard_2->setText(QApplication::translate("MainWindow", "\346\230\216\344\277\241\347\211\207", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\351\207\215\351\207\217", nullptr));
        button_cal_2->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\347\273\223\346\236\234", nullptr));
        localChoose_Bar->setTabText(localChoose_Bar->indexOf(tab_autonomous), QApplication::translate("MainWindow", "\345\217\260\346\270\257\346\276\263\350\265\204\350\264\271", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\351\202\256\344\273\266\347\261\273\345\236\213", nullptr));
        button_mail_3->setText(QApplication::translate("MainWindow", "\344\277\241\344\273\266", nullptr));
        button_postcard_3->setText(QApplication::translate("MainWindow", "\346\230\216\344\277\241\347\211\207", nullptr));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\351\207\215\351\207\217", nullptr));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\345\234\260\345\214\272\345\210\206\347\273\204", nullptr));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\350\277\220\350\276\223\346\226\271\345\274\217", nullptr));
        button_cal_3->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "\347\273\223\346\236\234", nullptr));
        localChoose_Bar->setTabText(localChoose_Bar->indexOf(tab_international), QApplication::translate("MainWindow", "\345\233\275\351\231\205\350\265\204\350\264\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
