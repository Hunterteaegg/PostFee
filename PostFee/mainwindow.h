#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "dialog_2.h"

enum Group{FIRST,SECOND,THIRD};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_button_cal_clicked();

    void on_button_mail_clicked();

    void on_button_postcard_clicked();

    void on_botton_inside_clicked();

    void on_botton_outside_clicked();

    void on_button_cal_2_clicked();

    void on_button_mail_2_clicked();

    void on_button_postcard_2_clicked();

    void on_button_cal_3_clicked();

    void on_pushButton_clicked();

    void on_button_mail_3_clicked();

    void on_button_postcard_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    enum Status{MAIL,POSTCARD};
    Status status;
    enum Area{INSIDE,OUTSIDE};
    Area area;
    enum Transform_type{AIR,AIR_SHIP,SHIP};
    Transform_type transform_type;
    Group group;

    double weight;
    double postfee;
};

#endif // MAINWINDOW_H
