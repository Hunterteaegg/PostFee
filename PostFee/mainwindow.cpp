#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>

#pragma execution_character_set("utf-8")

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_cal_clicked()
{
    QString temp_weight=this->ui->textbox_weight->document()->toPlainText();

    weight=temp_weight.toDouble();


    if(status==POSTCARD)
    {
        ui->textbox_result->document()->setPlainText("邮费为0.8元 ");
    }
    else if(status==MAIL)
    {
        if(area==INSIDE)
        {
            if(weight<=20)
            {
                postfee=0.8;
            }
            else if(weight>20&&weight<=100)
            {
                postfee=0.8+((int)(((weight-20)/20)+1))*0.8;
            }
            else
            {
                postfee=8+((int)(((weight-100)+1)/100))*1.2;
            }
            QString text;
            text.append("邮费为");
            text.append(QString::number(postfee));
            text.append("元");

            ui->textbox_result->document()->setPlainText(text);
        }
    }
}

void MainWindow::on_button_mail_clicked()
{
    status=MAIL;
}

void MainWindow::on_button_postcard_clicked()
{
    status=POSTCARD;
}

void MainWindow::on_botton_inside_clicked()
{
    area=INSIDE;
}

void MainWindow::on_botton_outside_clicked()
{
    area=OUTSIDE;
}
