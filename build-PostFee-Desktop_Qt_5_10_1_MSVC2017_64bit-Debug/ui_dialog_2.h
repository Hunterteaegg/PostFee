/********************************************************************************
** Form generated from reading UI file 'dialog_2.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_2_H
#define UI_DIALOG_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog_2
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Dialog_2)
    {
        if (Dialog_2->objectName().isEmpty())
            Dialog_2->setObjectName(QStringLiteral("Dialog_2"));
        Dialog_2->resize(703, 285);
        textBrowser = new QTextBrowser(Dialog_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 20, 651, 251));

        retranslateUi(Dialog_2);

        QMetaObject::connectSlotsByName(Dialog_2);
    } // setupUi

    void retranslateUi(QDialog *Dialog_2)
    {
        Dialog_2->setWindowTitle(QApplication::translate("Dialog_2", "\347\251\272\350\277\220\346\260\264\351\231\206\345\257\204\350\276\276\345\233\275\345\256\266\345\210\206\347\273\204", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog_2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" align=\"center\" width=\"560\" cellspacing=\"0\" cellpadding=\"0\">\n"
"<tr>\n"
"<td colspan=\"4\" style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><span style=\" font-family:'Microsoft YaHei'; font-size:13px; color:#666666;\">\347\251\272\350\277\220\346\260\264\351\231\206\350\267\257\345\207\275\344\273\266\345\257\204\350\276\276\345\233\275\345\256\266\345\222\214\345\234\260\345\214\272\345\210\206\347\273\204\357\274\232<br />\347\254\254\344\270\200\347"
                        "\273\204\357\274\2101\344\270\252\357\274\211\357\274\232\346\240\274\351\262\201\345\220\211\344\272\232\357\274\233<br />\347\254\254\344\272\214\347\273\204\357\274\21040\344\270\252\357\274\211\357\274\232\351\230\277\345\241\236\346\213\234\347\226\206\343\200\201\351\237\251\345\233\275\343\200\201\346\227\245\346\234\254\343\200\201\351\230\277\345\260\224\345\267\264\345\260\274\344\272\232\343\200\201\347\210\261\345\260\224\345\205\260\343\200\201\347\210\261\346\262\231\345\260\274\344\272\232\343\200\201\345\245\245\345\234\260\345\210\251\343\200\201\347\231\275\344\277\204\347\275\227\346\226\257\343\200\201\344\277\235\345\212\240\345\210\251\344\272\232\343\200\201\346\257\224\345\210\251\346\227\266\343\200\201\345\206\260\345\262\233\343\200\201\346\263\242\345\205\260\343\200\201\344\270\271\351\272\246\343\200\201\345\276\267\345\233\275\343\200\201\346\263\225\345\233\275\343\200\201\350\212\254\345\205\260\343\200\201\350\215\267\345\205\260\343\200\201\346\215\267\345\205\213\343\200\201"
                        "\345\205\213\347\275\227\345\234\260\344\272\232\343\200\201\346\213\211\350\204\261\347\273\264\344\272\232\343\200\201\347\253\213\351\231\266\345\256\233\343\200\201\345\215\242\346\243\256\345\240\241\343\200\201\347\275\227\351\251\254\345\260\274\344\272\232\343\200\201\351\251\254\350\200\263\344\273\226\343\200\201\346\221\251\345\260\224\345\244\232\347\223\246\343\200\201\346\214\252\345\250\201\343\200\201\350\221\241\350\220\204\347\211\231\343\200\201\347\221\236\345\205\270\343\200\201\345\241\236\345\260\224\347\273\264\344\272\232\343\200\201\346\226\257\346\264\233\344\274\220\345\205\213\343\200\201\346\226\257\346\264\233\346\226\207\345\260\274\344\272\232\343\200\201\344\271\214\345\205\213\345\205\260\343\200\201\350\245\277\347\217\255\347\211\231\343\200\201\345\270\214\350\205\212\343\200\201\345\214\210\347\211\231\345\210\251\343\200\201\346\204\217\345\244\247\345\210\251\343\200\201\350\213\261\345\233\275\343\200\201\345\212\240\346\213\277\345\244\247\343\200\201\347\276\216\345\233"
                        "\275\343\200\201\346\276\263\345\244\247\345\210\251\344\272\232\357\274\233<br />\347\254\254\344\270\211\347\273\204\357\274\232\357\274\21029\344\270\252\357\274\211\344\277\204\347\275\227\346\226\257\343\200\201\351\230\277\346\235\276\346\243\256\343\200\201\347\247\221\346\221\251\347\275\227\343\200\201\345\234\243\345\244\232\347\276\216\345\222\214\346\231\256\346\236\227\350\245\277\346\257\224\343\200\201\350\216\261\347\264\242\346\211\230\343\200\201\345\256\211\345\234\255\346\213\211\343\200\201\345\267\264\346\213\211\345\234\255\343\200\201\345\267\264\350\245\277\343\200\201\347\231\276\346\205\225\345\244\247\343\200\201\346\263\242\345\244\232\351\273\216\345\220\204\343\200\201\347\216\273\345\210\251\347\273\264\344\272\232\343\200\201\346\240\274\351\231\265\345\205\260\343\200\201\347\276\216\345\261\236\347\273\264\345\260\224\344\272\254\343\200\201\345\234\243\347\232\256\345\237\203\345\260\224\345\222\214\345\257\206\345\205\213\351\232\206\343\200\201\345\256\211\351\201\223\345\260"
                        "\224\343\200\201\346\263\242\351\273\221\343\200\201\346\263\225\347\275\227\347\276\244\345\262\233\343\200\201\346\242\265\350\222\202\345\206\210\343\200\201\351\273\221\345\261\261\343\200\201\345\210\227\346\224\257\346\225\246\345\243\253\347\231\273\343\200\201\351\251\254\345\205\266\351\241\277\343\200\201\346\221\251\347\272\263\345\223\245\343\200\201\347\221\236\345\243\253\343\200\201\345\234\243\351\251\254\345\212\233\350\257\272\343\200\201\344\272\232\351\200\237\345\260\224\345\222\214\351\251\254\345\276\267\346\213\211\347\276\244\345\262\233\343\200\201\347\233\264\345\270\203\347\275\227\351\231\200\343\200\201\345\241\236\346\265\246\350\267\257\346\226\257\343\200\201\344\272\232\347\276\216\345\260\274\344\272\232\343\200\201\347\211\271\351\207\214\346\226\257\350\276\276\345\272\223\345\260\274\344\272\232\343\200\202<br /></span></p></td></tr>\n"
"<tr>\n"
"<td colspan=\"4\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">\302\240</span></p></td></tr></table></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_2: public Ui_Dialog_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_2_H