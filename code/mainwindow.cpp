#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QVBoxLayout>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSize size = QSize(30, 30);
    ui->user->setTextMargins(size.width(), 1, 1 , 1);
    ui->password->setTextMargins(size.width(), 1, 1 , 1);
    ui->user_signup->setTextMargins(size.width(), 1, 1 , 1);
    ui->password_signup->setTextMargins(size.width(), 1, 1 , 1);
    ui->password_signup_2->setTextMargins(size.width(), 1, 1 , 1);
    ui->email_signup->setTextMargins(size.width(), 1, 1 , 1);

    ui->user_signup->setVisible(0);
    ui->password_signup->setVisible(0);
    ui->email_signup->setVisible(0);
    ui->signup_ready->setVisible(0);
    ui->signup_title->setVisible(0);
    ui->password_signup_2->setVisible(0);
    ui->signuptologin->setVisible(0);

    QString signup_str =QString("<font color=#797979>还没有账号？</font>")+QString("<font color=#00cc66>去注册Sign up free!</font>");
    ui->signup_label->setText(signup_str);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    QString user, password;
    qDebug("push button is click");
    user=ui->user->text(); // 获取帐号框的内容
    password=ui->password->text();

    ifstream accountFile("C:\\Users\\25423\\Documents\\metroPlus\\account.txt");
    ifstream accountFile1("C:\\Users\\25423\\Documents\\metroPlus\\account.txt");
    int n=0;
    bool isEnd = false;
    string tmp,tmp1,tmp2,tmp3;
    while (getline(accountFile, tmp, '\n'))
        n++;
    for (int i=0; i<n/3; i++) {
        if (i+1 >= n/3)
            isEnd = true;
        getline(accountFile1,tmp1);
        getline(accountFile1,tmp2);
        getline(accountFile1,tmp3);
        string str_user = user.toStdString();
        string str_password = password.toStdString();
        if (str_user==tmp1 && str_password==tmp2) {
            emit sendUsername(user);
            this->hide(); // 关闭当前界面
            ui->user->clear();
            ui->password->clear();
            emit showRoutePlanning();
        }
        else if (isEnd) {
            if (str_user=="" || str_password=="")
                QMessageBox::information(this,"提示","用户名或帐号不能为空！");
            else
                QMessageBox::information(this,"提示","密码错误 请重新输入");
        }
    }
}

void MainWindow::on_signup_clicked()
{
    ui->signup->setVisible(0);
    ui->logo->setVisible(0);
    ui->user->setVisible(0);
    ui->password->setVisible(0);
    ui->forget->setVisible(0);
    ui->login->setVisible(0);
    ui->signup_label->setVisible(0);
    ui->user_signup->setVisible(1);
    ui->password_signup->setVisible(1);
    ui->email_signup->setVisible(1);
    ui->signup_ready->setVisible(1);
    ui->signup_title->setVisible(1);
    ui->password_signup_2->setVisible(1);
    ui->signuptologin->setVisible(1);
}

void MainWindow::on_signup_ready_clicked()
{
    QString a = ui->user_signup->text();
    QString b = ui->password_signup->text();
    QString c = ui->password_signup_2->text();
    QString d = ui->email_signup->text();
    string stra = a.toStdString();
    string strb = b.toStdString();
    string strd = d.toStdString();
    if(a=="")
        QMessageBox::information(this,"提示","用户名不能为空！");
    else if(b=="")
        QMessageBox::information(this,"提示","密码不能为空！");
    else if(d=="")
        QMessageBox::information(this,"提示","邮箱不能为空！");
    else if(c=="")
        QMessageBox::information(this,"提示","请再次输入密码！");
    else if(b!=c)
        QMessageBox::information(this,"提示","两次密码不同 请重新输入");
    else{
        if(stra.size()>20)
            QMessageBox::information(this,"提示","用户名不能超过20个字符！");
        else if(strb.size()>20)
            QMessageBox::information(this,"提示","密码不能超过20个字符！");
        else if(strb.size()<6)
            QMessageBox::information(this,"提示","密码不能少于6个字符！");
        else{
            fstream accountFile("C:\\Qt\\metroPlus\\account.txt", ios_base::out|ios_base::app);
            accountFile<< stra << endl;
            accountFile<< strb << endl;
            accountFile<< strd << endl;
            accountFile.close();
            emit sendUsername(a);
            this->hide(); //关闭当前界面
            ui->user_signup->clear();
            ui->password_signup->clear();
            ui->password_signup_2->clear();
            ui->email_signup->clear();
            emit showRoutePlanning();
        }
    }
}

void MainWindow::receiveOperationTime()
{
    back_to_login();
    this->show();
}

void MainWindow::receiveRoutePlanning()
{
    back_to_login();
    this->show();
}

void MainWindow::receiveHistoryRoute()
{
    back_to_login();
    this->show();
}

void MainWindow::receiveRealTime()
{
    back_to_login();
    this->show();
}

void MainWindow::receiveCloth()
{
    back_to_login();
    this->show();
}

void MainWindow::receiveHotPlace()
{
    back_to_login();
    this->show();
}

void MainWindow::back_to_login()
{
    ui->user_signup->setVisible(0);
    ui->password_signup->setVisible(0);
    ui->email_signup->setVisible(0);
    ui->signup_ready->setVisible(0);
    ui->signup_title->setVisible(0);
    ui->password_signup_2->setVisible(0);
    ui->signuptologin->setVisible(0);

    ui->logo->setVisible(1);
    ui->login->setVisible(1);
    ui->password->setVisible(1);
    ui->signup_label->setVisible(1);
    ui->signup->setVisible(1);
    ui->forget->setVisible(1);
    ui->user->setVisible(1);
}

void MainWindow::on_signuptologin_clicked()
{
    back_to_login();
}

