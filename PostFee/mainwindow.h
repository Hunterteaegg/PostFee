#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;

    enum Status{MAIL,POSTCARD};
    Status status;
    enum Area{INSIDE,OUTSIDE};
    Area area;

    double weight;
    double postfee;
};

#endif // MAINWINDOW_H
