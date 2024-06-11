#include "hotplace.h"
#include "ui_hotplace.h"

extern QString style1;
extern QString head;
QString styleForHot="";
QString headForHot="";

hotPlace::hotPlace(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::hotPlace)
{
    ui->setupUi(this);
    ui->routePlanning->setFixedSize(164,35);
    ui->realTime->setFixedSize(164,35);
    ui->operationTime->setFixedSize(164,35);
    ui->historyRoute->setFixedSize(164,35);
    ui->hotPlace_2->setFixedSize(164,35);

    QString scrollstyle="QScrollArea{border:none;}"
                          "QScrollArea QScrollBar:vertical{width: 12px;background:transparent;border-radius:6px;}"
                          "QScrollArea QScrollBar::handle:vertical{background:rgb(211,211,211);border-radius:6px;}"
                          "QScrollArea QScrollBar::sub-line:vertical{border:none;}"
                          "QScrollArea QScrollBar::add-line:vertical{border:none;}"
                          "QScrollArea QScrollBar::handle:vertical:hover{background:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(31, 212, 175, 255), stop:1 rgba(0, 204, 102, 255));}";
    ui->scrollArea->setStyleSheet(scrollstyle);
    ui->scrollArea_2->setStyleSheet(scrollstyle);

    ui->scrollArea->viewport()->setStyleSheet("background:transparent;");
    ui->scrollArea_2->viewport()->setStyleSheet("background:transparent;");
}

hotPlace::~hotPlace()
{
    delete ui;
}

void hotPlace::receiveBlackFont()
{
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_image.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_image.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon.png"));
    ui->hotPlace_2->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon.png"));
    QString blackfontstyle="color: rgba(0, 0, 0, 150);font: 13pt Simhei;background: transparent;";
    QString blackfontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(0, 0, 0, 150);} QPushButton:hover{background-color: rgba(0,0,0,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->exit_button->setStyleSheet(blackfontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(blackfontstyle);
    }
    QPushButton* button[]={ui->hotPlace_2,ui->routePlanning,ui->realTime,ui->historyRoute,ui->operationTime,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(blackfontstyle1);
    }
    QString blacktitle="font: 700 9pt Microsoft YaHei UI;color: rgb(136, 136, 136);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(blacktitle);
    }
    ui->hotPlace_2->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(0,0,0, 70);");
}

void hotPlace::receiveWhiteFont()
{
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_white.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_white.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon_active.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon_active.png"));
    ui->hotPlace_2->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon_active.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon_active.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon_active.png"));
    QString whitefontstyle="color: rgba(255, 255, 255, 150);font: 13pt Simhei;background: transparent;";
    QString whitefontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(255, 255, 255, 150);} QPushButton:hover{background-color: rgba(255,255,255,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->exit_button->setStyleSheet(whitefontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(whitefontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime,ui->historyRoute,ui->operationTime,ui->hotPlace_2,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(whitefontstyle1);
    }
    QString whitetitle="font: 700 9pt Microsoft YaHei UI;color: rgb(255, 255, 255);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(whitetitle);
    }
    ui->hotPlace_2->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(255,255,255, 70);");
}

void hotPlace::on_operationTime_clicked()
{
    this->hide();
    emit showOperationTime();
}

void hotPlace::on_realTime_clicked()
{
    this->hide();
    emit showRealTime();
}

void hotPlace::on_routePlanning_clicked()
{
    this->hide();
    emit showRoutePlanning();
}

void hotPlace::on_historyRoute_clicked()
{
    this->hide();
    emit showHistoryRoute();
}

void hotPlace::on_cloth_button_clicked()
{
    this->close();
    emit showCloth();
}

void hotPlace::receiveRoutePlanning()
{
    style1.replace("secondWidget","hotPlace");
    if(styleForHot!=style1){
        this->setStyleSheet(style1);
        styleForHot=style1;
    }
    if(headForHot!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHot=head;
    }
    this->show();
}

void hotPlace::receiveCloth()
{
    style1.replace("cloth","hotPlace");
    if(styleForHot!=style1){
        this->setStyleSheet(style1);
        styleForHot=style1;
    }
    if(headForHot!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHot=head;
    }
    this->show();
}

void hotPlace::receiveRealTime()
{
    style1.replace("realTime","hotPlace");
    if(styleForHot!=style1){
        this->setStyleSheet(style1);
        styleForHot=style1;
    }
    if(headForHot!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHot=head;
    }
    this->show();
}

void hotPlace::receiveOperationTime()
{
    style1.replace("operationTime","hotPlace");
    if(styleForHot!=style1){
        this->setStyleSheet(style1);
        styleForHot=style1;
    }
    if(headForHot!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHot=head;
    }
    this->show();
}

void hotPlace::receiveHistoryRoute()
{
    style1.replace("historyRoute","hotPlace");
    if(styleForHot!=style1){
        this->setStyleSheet(style1);
        styleForHot=style1;
    }
    if(headForHot!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHot=head;
    }
    this->show();
}

void hotPlace::receiveUsername(QString data)
{
    ui->username->setText(data);
}

void hotPlace::on_exit_button_clicked()
{
    this->close();
    emit showMain();
}

