#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <math.h>
#include "dialog.h"

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

    int weight=(int)ceil(temp_weight.toDouble());


    if(status==POSTCARD)
    {
        ui->textbox_result->document()->setPlainText("邮费为0.8元 ");
    }
    else if(status==MAIL)
    {
        if(area==INSIDE)
        {
            if(weight<=100)
            {
                postfee=(weight/20)*0.8;

                if(weight%20!=0)
                {
                    postfee+=0.8;
                }
            }
            else
            {
                postfee=4+((weight-100)/100)*1.2;

                if((weight-100)%100!=0)
                {
                    postfee+=1.2;
                }
            }
        }
        else if(area==OUTSIDE)
        {
            if(weight<=100)
            {
                postfee=(weight/20)*1.2;

                if(weight%20!=0)
                {
                    postfee+=1.2;
                }
            }
            else
            {
                postfee=6+(weight-100/100)*2;

                if((weight-100)%100!=0)
                {
                    postfee+=2;
                }
            }
        }

        QString text;
        text.append("邮费为");
        text.append(QString::number(postfee));
        text.append("元");
        ui->textbox_result->document()->setPlainText(text);
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

void MainWindow::on_button_cal_2_clicked()
{
    int weight=(int)ceil(this->ui->textbox_weight_2->document()->toPlainText().toDouble());

    if(status==MAIL)
    {
        if(weight<=20)
        {
            postfee=3.5;
        }
        else
        {
            postfee=3.5+((weight-20)/10)*1.5;
        }
    }
    else if(status==POSTCARD)
    {
        postfee=3.5;
    }

    QString text;
    text.append("邮费为");
    text.append(QString::number(postfee));
    text.append("元");

    ui->textbox_result_2->document()->setPlainText(text);

}


void MainWindow::on_button_mail_2_clicked()
{
    status=MAIL;
}



void MainWindow::on_button_postcard_2_clicked()
{
    status=POSTCARD;
}

void MainWindow::on_button_cal_3_clicked()
{
    ;
}

void MainWindow::on_pushButton_clicked()
{
    Dialog *d = new Dialog(this);

    d->show();
}
