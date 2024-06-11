#include "operationtime.h"
#include "ui_operationtime.h"

extern QString style1;
extern QString head;
QString styleForOpe="";
QString headForOpe="";

operationTime::operationTime(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::operationTime)
{
    ui->setupUi(this);

    ui->routePlanning->setFixedSize(164,35);
    ui->realTime->setFixedSize(164,35);
    ui->operationTime_2->setFixedSize(164,35);
    ui->historyRoute->setFixedSize(164,35);
    ui->hotPlace->setFixedSize(164,35);

    ui->scrollArea->viewport()->setStyleSheet("background:transparent;");
    QString scrollstyle="QScrollArea{border:none;}"
                           "QScrollArea QScrollBar:vertical{width: 12px;background:rgb(240,240,240);border-radius:6px;}"
                           "QScrollArea QScrollBar::handle:vertical{background:rgb(211,211,211);border-radius:6px;}"
                           "QScrollArea QScrollBar::sub-line:vertical{border:none;}"
                           "QScrollArea QScrollBar::add-line:vertical{border:none;}"
                           "QScrollArea QScrollBar::handle:vertical:hover{background:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(31, 212, 175, 255), stop:1 rgba(0, 204, 102, 255));}";
    ui->scrollArea->setStyleSheet(scrollstyle);
    ui->Line2_2->setVisible(0);
    ui->Line3_2->setVisible(0);
    ui->Line4_2->setVisible(0);
    ui->Line5_2->setVisible(0);
    ui->Line6_2->setVisible(0);
    ui->Line7_2->setVisible(0);
    ui->Line8_2->setVisible(0);
    ui->Line11_2->setVisible(0);
    ui->Line16_2->setVisible(0);
    ui->Line19_2->setVisible(0);
    ui->LineYangLuo_2->setVisible(0);

    ui->line1Time->setVisible(0);
    ui->line2Time->setVisible(0);
    ui->line3Time->setVisible(0);
    ui->line4Time->setVisible(0);
    ui->line5Time->setVisible(0);
    ui->line6Time->setVisible(0);
    ui->line7Time->setVisible(0);
    ui->line8Time->setVisible(0);
    ui->line11Time->setVisible(0);
    ui->line16Time->setVisible(0);
    ui->line19Time->setVisible(0);
    ui->lineYangLuoTime->setVisible(0);
}

void operationTime::receiveUsername(QString data)
{
    ui->username->setText(data);
}

operationTime::~operationTime()
{
    delete ui;
}

void operationTime::on_routePlanning_clicked()
{
    this->hide();
    emit showRoutePlanning();
}

void operationTime::receiveRoutePlanning(){
    style1.replace("secondWidget","operationTime");
    if(styleForOpe!=style1){
        this->setStyleSheet(style1);
        styleForOpe=style1;
    }
    if(headForOpe!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForOpe=head;
    }
    this->show();
}

void operationTime::receiveHistoryRoute()
{
    style1.replace("historyRoute","operationTime");
    if(styleForOpe!=style1){
        this->setStyleSheet(style1);
        styleForOpe=style1;
    }
    if(headForOpe!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForOpe=head;
    }
    this->show();
}

void operationTime::receiveRealTime()
{
    style1.replace("realTime","operationTime");
    if(styleForOpe!=style1){
        this->setStyleSheet(style1);
        styleForOpe=style1;
    }
    if(headForOpe!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForOpe=head;
    }
    this->show();
}

void operationTime::receiveHotPlace()
{
    style1.replace("hotPlace","operationTime");
    if(styleForOpe!=style1){
        this->setStyleSheet(style1);
        styleForOpe=style1;
    }
    if(headForOpe!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForOpe=head;
    }
    this->show();
}

void operationTime::receiveCloth()
{
    style1.replace("cloth","operationTime");
    if(styleForOpe!=style1){
        this->setStyleSheet(style1);
        styleForOpe=style1;
    }
    if(headForOpe!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForOpe=head;
    }
    this->show();
}

void operationTime::on_realTime_clicked()
{
    this->hide();
    emit showRealTime();
}

void operationTime::on_hotPlace_clicked()
{
    this->hide();
    emit showHotPlace();
}


void operationTime::on_historyRoute_clicked()
{
    this->hide();
    emit showHistoryRoute();
}


void operationTime::on_Line1_clicked()
{
    ui->line1Time->setVisible(1);

    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}

void operationTime::on_Line2_clicked()
{
    ui->Line2_2->setVisible(1);
    ui->line2Time->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}

void operationTime::on_backButton_clicked()
{
    ui->line1Time->setVisible(0);
    ui->line2Time->setVisible(0);
    ui->line3Time->setVisible(0);
    ui->line4Time->setVisible(0);
    ui->line5Time->setVisible(0);
    ui->line6Time->setVisible(0);
    ui->line7Time->setVisible(0);
    ui->line8Time->setVisible(0);
    ui->line11Time->setVisible(0);
    ui->line16Time->setVisible(0);
    ui->line19Time->setVisible(0);
    ui->lineYangLuoTime->setVisible(0);

    ui->Line2_2->setVisible(0);
    ui->Line3_2->setVisible(0);
    ui->Line4_2->setVisible(0);
    ui->Line5_2->setVisible(0);
    ui->Line6_2->setVisible(0);
    ui->Line7_2->setVisible(0);
    ui->Line8_2->setVisible(0);
    ui->Line11_2->setVisible(0);
    ui->Line16_2->setVisible(0);
    ui->Line19_2->setVisible(0);
    ui->LineYangLuo_2->setVisible(0);

    ui->Line1->setVisible(1);
    ui->Line2->setVisible(1);
    ui->Line3->setVisible(1);
    ui->Line4->setVisible(1);
    ui->Line5->setVisible(1);
    ui->Line6->setVisible(1);
    ui->Line7->setVisible(1);
    ui->Line8->setVisible(1);
    ui->Line11->setVisible(1);
    ui->Line16->setVisible(1);
    ui->Line19->setVisible(1);
    ui->LineYangLuo->setVisible(1);
}



void operationTime::on_Line3_clicked()
{
    ui->line3Time->setVisible(1);
    ui->Line3_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_Line4_clicked()
{
    ui->line4Time->setVisible(1);
    ui->Line4_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_Line5_clicked()
{
    ui->line5Time->setVisible(1);
    ui->Line5_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_Line6_clicked()
{
    ui->line6Time->setVisible(1);
    ui->Line6_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_Line7_clicked()
{
    ui->line7Time->setVisible(1);
    ui->Line7_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_Line8_clicked()
{
    ui->line8Time->setVisible(1);
    ui->Line8_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_Line11_clicked()
{
    ui->line11Time->setVisible(1);
    ui->Line11_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_Line16_clicked()
{
    ui->line16Time->setVisible(1);
    ui->Line16_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_Line19_clicked()
{
    ui->line19Time->setVisible(1);
    ui->Line19_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_LineYangLuo_clicked()
{
    ui->lineYangLuoTime->setVisible(1);
    ui->LineYangLuo_2->setVisible(1);

    ui->Line1->setVisible(0);
    ui->Line2->setVisible(0);
    ui->Line3->setVisible(0);
    ui->Line4->setVisible(0);
    ui->Line5->setVisible(0);
    ui->Line6->setVisible(0);
    ui->Line7->setVisible(0);
    ui->Line8->setVisible(0);
    ui->Line11->setVisible(0);
    ui->Line16->setVisible(0);
    ui->Line19->setVisible(0);
    ui->LineYangLuo->setVisible(0);
}


void operationTime::on_exit_button_clicked()
{
    this->close();
    emit showMain();
}


void operationTime::on_cloth_button_clicked()
{
    this->close();
    emit showCloth();
}

void operationTime::receiveBlackFont()
{
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_image.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_image.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon.png"));
    ui->operationTime_2->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon.png"));
    QString blackfontstyle="color: rgba(0, 0, 0, 150);font: 13pt Simhei;background: transparent;";
    QString blackfontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(0, 0, 0, 150);} QPushButton:hover{background-color: rgba(0,0,0,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->exit_button->setStyleSheet(blackfontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(blackfontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime,ui->historyRoute,ui->operationTime_2,ui->hotPlace,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(blackfontstyle1);
    }
    QString blacktitle="font: 700 9pt Microsoft YaHei UI;color: rgb(136, 136, 136);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(blacktitle);
    }
    QString back="QPushButton {background:transparent;border-width:0;border-style:outset;font: 16pt Simhei;\
border-color: rgba(0,0,0,50);border-width:1px 1px;border-style:solid;border-radius: 8px;color: rgba(0,0,0,150);}\
        QPushButton:hover {background-color: rgba(0,0,0,20);border-radius: 8px;}";
    ui->backButton->setStyleSheet(back);
    ui->operationTime_2->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(0,0,0, 70);");
}

void operationTime::receiveWhiteFont()
{
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon_active.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_white.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_white.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon_active.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon_active.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon_active.png"));
    ui->operationTime_2->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon_active.png"));
    QString whitefontstyle="color: rgba(255, 255, 255, 150);font: 13pt Simhei;background: transparent;";
    QString whitefontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(255, 255, 255, 150);} QPushButton:hover{background-color: rgba(255,255,255,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->exit_button->setStyleSheet(whitefontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(whitefontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime,ui->historyRoute,ui->operationTime_2,ui->hotPlace,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(whitefontstyle1);
    }
    QString whitetitle="font: 700 9pt Microsoft YaHei UI;color: rgb(255, 255, 255);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(whitetitle);
    }
    QString back="QPushButton {background:transparent;border-width:0;border-style:outset;font: 16pt Simhei;\
                   border-color: rgba(255,255,255,50);border-width:1px 1px;border-style:solid;border-radius: 8px;color: rgba(255,255,255,150);}\
    QPushButton:hover {background-color: rgba(255,255,255,20);border-radius: 8px;}";
    ui->backButton->setStyleSheet(back);
    ui->operationTime_2->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(255,255,255, 70);");
}

