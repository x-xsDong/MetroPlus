#include "realtime.h"
#include "ui_realtime.h"

extern QString style1;
extern QString head;
QString styleForReal="";
QString headForReal="";

realTime::realTime(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::realTime)
{
    ui->setupUi(this);

    ui->routePlanning->setFixedSize(164,35);
    ui->realTime_2->setFixedSize(164,35);
    ui->operationTime->setFixedSize(164,35);
    ui->historyRoute->setFixedSize(164,35);
    ui->hotPlace->setFixedSize(164,35);

    QPalette pa = ui->realTimeScrollArea->palette();
    pa.setBrush(QPalette::Window, Qt::transparent);
    ui->realTimeScrollArea->setPalette(pa);

    //滚动条样式
    QString scrollstyle="QScrollArea {border:none;}"
                        "QScrollArea QScrollBar:horizontal{height: 12px;background:rgb(240,240,240);border-radius:6px;}"
                        "QScrollArea QScrollBar::handle:horizontal{background:rgb(211,211,211);border-radius:6px;}"
                        "QScrollArea QScrollBar::sub-line:horizontal{border:none;}"
                        "QScrollArea QScrollBar::add-line:horizontal{border:none;}"
                        "QScrollArea QScrollBar::handle:horizontal:hover{background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(31, 212, 175, 255), stop:1 rgba(0, 204, 102, 255));}";
    ui->realTimeScrollArea->setStyleSheet(scrollstyle);
    ui->realTimeScrollArea->viewport()->setStyleSheet("background:transparent;");

    QString scrollstyle1="QScrollArea {border:none;}"
                          "QScrollArea QScrollBar:vertical{width: 5px;background:rgb(240,240,240);border-radius:2px;}"
                          "QScrollArea QScrollBar::handle:vertical{background:rgb(211,211,211);border-radius:2px;}"
                          "QScrollArea QScrollBar::sub-line:vertical{border:none;}"
                          "QScrollArea QScrollBar::add-line:vertical{border:none;}"
                          "QScrollArea QScrollBar::handle:vertical:hover{background:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(31, 212, 175, 255), stop:1 rgba(0, 204, 102, 255));}";
    ui->line1ScrollArea->setStyleSheet(scrollstyle1);
    ui->line2ScrollArea->setStyleSheet(scrollstyle1);
    ui->line3ScrollArea->setStyleSheet(scrollstyle1);
    ui->line4ScrollArea->setStyleSheet(scrollstyle1);
    ui->line5ScrollArea->setStyleSheet(scrollstyle1);
    ui->line6ScrollArea->setStyleSheet(scrollstyle1);
    ui->line7ScrollArea->setStyleSheet(scrollstyle1);
    ui->line8ScrollArea->setStyleSheet(scrollstyle1);
    ui->line11ScrollArea->setStyleSheet(scrollstyle1);
    ui->line16ScrollArea->setStyleSheet(scrollstyle1);
    ui->line19ScrollArea->setStyleSheet(scrollstyle1);
    ui->lineYangLuoScrollArea->setStyleSheet(scrollstyle1);

}

realTime::~realTime()
{
    delete ui;
}

void realTime::receiveRoutePlanning()
{
    style1.replace("secondWidget","realTime");
    if(styleForReal!=style1){
        this->setStyleSheet(style1);
        styleForReal=style1;
    }
    if(headForReal!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForReal=head;
    }
    this->show();
}

void realTime::receiveOperationTime()
{
    style1.replace("operationTime","realTime");
    if(styleForReal!=style1){
        this->setStyleSheet(style1);
        styleForReal=style1;
    }
    if(headForReal!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForReal=head;
    }
    this->show();
}

void realTime::receiveHistoryRoute()
{
    style1.replace("historyRoute","realTime");
    if(styleForReal!=style1){
        this->setStyleSheet(style1);
        styleForReal=style1;
    }
    if(headForReal!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForReal=head;
    }
    this->show();
}

void realTime::receiveCloth()
{
    style1.replace("cloth","realTime");
    if(styleForReal!=style1){
        this->setStyleSheet(style1);
        styleForReal=style1;
    }
    if(headForReal!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForReal=head;
    }
    this->show();
}

void realTime::receiveHotPlace()
{
    style1.replace("hotPlace","realTime");
    if(styleForReal!=style1){
        this->setStyleSheet(style1);
        styleForReal=style1;
    }
    if(headForReal!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForReal=head;
    }
    this->show();
}

void realTime::on_hotPlace_clicked()
{
    this->hide();
    emit showHotPlace();
}

void realTime::on_routePlanning_clicked()
{
    this->hide();
    emit showRoutePlanning();
}


void realTime::on_historyRoute_clicked()
{
    this->hide();
    emit showHistoryRoute();
}


void realTime::on_operationTime_clicked()
{
    this->hide();
    emit showOperationTime();
}



void realTime::on_line7button_clicked()
{
    ui->realTimeScrollArea->setVisible(true);
}


void realTime::on_exit_button_clicked()
{
    this->close();
    emit showMain();
}

void realTime::receiveUsername(QString data)
{
    ui->username->setText(data);
}

void realTime::on_cloth_button_clicked()
{
    this->close();
    emit showCloth();
}

void realTime::receiveBlackFont()
{
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_image.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_image.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon.png"));
    ui->realTime_2->setIcon(QIcon(":/new/prefix1/image/realTimeIcon.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon.png"));
    QString blackfontstyle="color: rgba(0, 0, 0, 150);font: 13pt Simhei;background: transparent;";
    QString blackfontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(0, 0, 0, 150);} QPushButton:hover{background-color: rgba(0,0,0,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->exit_button->setStyleSheet(blackfontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(blackfontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime_2,ui->historyRoute,ui->operationTime,ui->hotPlace,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(blackfontstyle1);
    }
    QString blacktitle="font: 700 9pt Microsoft YaHei UI;color: rgb(136, 136, 136);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(blacktitle);
    }
    ui->realTime_2->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(0,0,0, 70);");
}

void realTime::receiveWhiteFont()
{
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon_active.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_white.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_white.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon_active.png"));
    ui->realTime_2->setIcon(QIcon(":/new/prefix1/image/realTimeIcon_active.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon_active.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon_active.png"));
    QString whitefontstyle="color: rgba(255, 255, 255, 150);font: 13pt Simhei;background: transparent;";
    QString whitefontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(255, 255, 255, 150);} QPushButton:hover{background-color: rgba(255,255,255,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->exit_button->setStyleSheet(whitefontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(whitefontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime_2,ui->historyRoute,ui->operationTime,ui->hotPlace,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(whitefontstyle1);
    }
    QString whitetitle="font: 700 9pt Microsoft YaHei UI;color: rgb(255, 255, 255);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(whitetitle);
    }
    ui->realTime_2->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(255,255,255, 70);");
}


