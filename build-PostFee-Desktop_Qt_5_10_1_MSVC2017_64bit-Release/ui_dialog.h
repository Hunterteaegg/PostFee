/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(705, 224);
        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(25, 11, 651, 191));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\350\210\252\347\251\272\345\257\204\350\276\276\345\233\275\345\256\266\345\210\206\347\273\204", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei'; font-size:13px; color:#666666;\">\350\210\252\347\251\272\345\207\275\344\273\266\345\257\204\350\276\276\345\233\275\345\256\266\345\222\214\345\234\260\345\214\272\345\210\206\347\273\204\357\274\232 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei'; font-size:13px; color:#666666;\">\347\254\254\344\270\200\347\273\204\357\274\21021\344\270\252\357\274\211\357\274\232\351\230\277\350\201\224"
                        "\351\205\213\343\200\201\351\230\277\346\233\274\343\200\201\345\267\264\345\237\272\346\226\257\345\235\246\343\200\201\345\267\264\346\236\227\343\200\201\350\217\262\345\276\213\345\256\276\343\200\201\346\240\274\351\262\201\345\220\211\344\272\232\343\200\201\346\237\254\345\237\224\345\257\250\343\200\201\345\215\241\345\241\224\345\260\224\343\200\201\347\247\221\345\250\201\347\211\271\343\200\201\350\200\201\346\214\235\343\200\201\351\251\254\345\260\224\344\273\243\345\244\253\343\200\201\351\251\254\346\235\245\350\245\277\344\272\232\343\200\201\345\255\237\345\212\240\346\213\211\345\233\275\343\200\201\347\274\205\347\224\270\343\200\201\345\260\274\346\263\212\345\260\224\343\200\201\346\226\257\351\207\214\345\205\260\345\215\241\343\200\201\346\263\260\345\233\275\343\200\201\346\226\207\350\216\261\343\200\201\346\226\260\345\212\240\345\235\241\343\200\201\345\215\260\345\272\246\343\200\201\345\215\260\345\272\246\345\260\274\350\245\277\344\272\232\357\274\233 </span></p>\n"
"<p style=\" "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei'; font-size:13px; color:#666666;\">\347\254\254\344\272\214\347\273\204\357\274\21052\344\270\252\357\274\211\357\274\232\351\230\277\345\241\236\346\213\234\347\226\206\343\200\201\346\234\235\351\262\234\343\200\201\345\223\210\350\220\250\345\205\213\346\226\257\345\235\246\343\200\201\351\237\251\345\233\275\343\200\201\345\220\211\345\260\224\345\220\211\346\226\257\346\226\257\345\235\246\343\200\201\350\222\231\345\217\244\343\200\201\346\227\245\346\234\254\343\200\201\345\241\224\345\220\211\345\205\213\346\226\257\345\235\246\343\200\201\345\234\237\350\200\263\345\205\266\343\200\201\345\234\237\345\272\223\346\233\274\346\226\257\345\235\246\343\200\201\344\271\214\345\205\271\345\210\253\345\205\213\346\226\257\345\235\246\343\200\201\344\274\212\346\213\211\345\205\213\343\200\201\347\272\246\346\227\246\343\200\201\350\266\212\345\215\227\343\200"
                        "\201\351\230\277\345\260\224\345\267\264\345\260\274\344\272\232\343\200\201\347\210\261\345\260\224\345\205\260\343\200\201\347\210\261\346\262\231\345\260\274\344\272\232\343\200\201\345\245\245\345\234\260\345\210\251\343\200\201\347\231\275\344\277\204\347\275\227\346\226\257\343\200\201\344\277\235\345\212\240\345\210\251\344\272\232\343\200\201\346\257\224\345\210\251\346\227\266\343\200\201\345\206\260\345\262\233\343\200\201\346\263\242\345\205\260\343\200\201\344\270\271\351\272\246\343\200\201\345\276\267\345\233\275\343\200\201\346\263\225\345\233\275\343\200\201\350\212\254\345\205\260\343\200\201\350\215\267\345\205\260\343\200\201\346\215\267\345\205\213\343\200\201\345\205\213\347\275\227\345\234\260\344\272\232\343\200\201\346\213\211\350\204\261\347\273\264\344\272\232\343\200\201\347\253\213\351\231\266\345\256\233\343\200\201\345\215\242\346\243\256\345\240\241\343\200\201\347\275\227\351\251\254\345\260\274\344\272\232\343\200\201\351\251\254\350\200\263\344\273\226\343\200\201\346\221\251\345"
                        "\260\224\345\244\232\347\223\246\343\200\201\346\214\252\345\250\201\343\200\201\350\221\241\350\220\204\347\211\231\343\200\201\347\221\236\345\205\270\343\200\201\345\241\236\345\260\224\347\273\264\344\272\232\343\200\201\346\226\257\346\264\233\344\274\220\345\205\213\343\200\201\346\226\257\346\264\233\346\226\207\345\260\274\344\272\232\343\200\201\344\271\214\345\205\213\345\205\260\343\200\201\350\245\277\347\217\255\347\211\231\343\200\201\345\270\214\350\205\212\343\200\201\345\214\210\347\211\231\345\210\251\343\200\201\346\204\217\345\244\247\345\210\251\343\200\201\350\213\261\345\233\275\343\200\201\345\212\240\346\213\277\345\244\247\343\200\201\347\276\216\345\233\275\343\200\201\346\276\263\345\244\247\345\210\251\344\272\232\343\200\201\346\226\260\350\245\277\345\205\260\357\274\233 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei'; font-size:13px; color:#666666"
                        ";\">\347\254\254\344\270\211\347\273\204\357\274\232\345\205\266\344\273\226\345\233\275\345\256\266\345\222\214\345\234\260\345\214\272\343\200\202</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H