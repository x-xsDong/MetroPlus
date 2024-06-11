#include "cloth.h"
#include "ui_cloth.h"

QString style1="background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(248, 235, 226, 255), stop:0.5 rgba(250, 250, 250, 255), stop:1 rgba(250, 250, 250, 255))";
QString head=":/new/prefix1/image/head1.png";

cloth::cloth(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cloth)
{
    ui->setupUi(this);
    ui->routePlanning->setFixedSize(164,35);
    ui->realTime->setFixedSize(164,35);
    ui->operationTime->setFixedSize(164,35);
    ui->historyRoute->setFixedSize(164,35);
    ui->hotPlace->setFixedSize(164,35);
    QObject::connect(this, SIGNAL(whitefont()), this, SLOT(receiveWhiteFont()));
    QObject::connect(this, SIGNAL(blackfont()), this, SLOT(receiveBlackFont()));
}

cloth::~cloth()
{
    delete ui;
}

void cloth::on_exit_button_clicked()
{
    this->close();
    emit showMain();
}

void cloth::receiveUsername(QString data)
{
    ui->username->setText(data);
}

void cloth::receiveRoutePlanning(){
    this->show();
}

void cloth::receiveHotPlace(){
    this->show();
}

void cloth::receiveHistoryRoute()
{
    this->show();
}

void cloth::receiveRealTime()
{
    this->show();
}

void cloth::receiveOperationTime()
{
    this->show();
}

void cloth::on_routePlanning_clicked()
{
    this->hide();
    emit showRoutePlanning();
}


void cloth::on_realTime_clicked()
{
    this->hide();
    emit showRealTime();
}

void cloth::on_hotPlace_clicked()
{
    this->hide();
    emit showHotPlace();
}


void cloth::on_historyRoute_clicked()
{
    this->hide();
    emit showHistoryTime();
}


void cloth::on_operationTime_clicked()
{
    this->hide();
    emit showOperationTime();
}

void cloth::receiveBlackFont()
{
    ui->title->setStyleSheet("background:transparent;font: 600 16pt Microsoft YaHei UI;color:rgb(0,0,0);");
    ui->title_2->setStyleSheet("background:transparent;font: 600 16pt Microsoft YaHei UI;color:rgb(0,0,0);");
    QString blackfontstyle="color: rgba(0, 0, 0, 150);font: 13pt Simhei;background: transparent;";
    QString blackfontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(0, 0, 0, 150);} QPushButton:hover{background-color: rgba(0,0,0,20);border-radius: 8px;}";
    QLabel* label[13]={ui->username, ui->sk1,ui->sk1_2,ui->sk1_3,ui->sk1_4,ui->sk1_5,ui->sk1_6,ui->sk1_7,ui->sk1_8,ui->sk1_9,ui->sk1_10,ui->sk1_11,ui->sk1_12};
    ui->exit_button->setStyleSheet(blackfontstyle);
    for(int i=0;i<13;i++){
        label[i]->setStyleSheet(blackfontstyle);
    }
    QPushButton* button[]={ui->hotPlace,ui->routePlanning,ui->realTime,ui->historyRoute,ui->operationTime,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(blackfontstyle1);
    }
    QString blacktitle="font: 700 9pt Microsoft YaHei UI;color: rgb(136, 136, 136);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(blacktitle);
    }
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon.png"));
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_image.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_image.png"));
}

void cloth::receiveWhiteFont()
{
    ui->title->setStyleSheet("background:transparent;font: 600 16pt Microsoft YaHei UI;color:rgb(255,255,255);");
    ui->title_2->setStyleSheet("background:transparent;font: 600 16pt Microsoft YaHei UI;color:rgb(255,255,255);");
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_white.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_white.png"));
    QString whitefontstyle="color: rgba(255, 255, 255, 150);font: 13pt Simhei;background: transparent;";
    QString whitefontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(255, 255, 255, 150);} QPushButton:hover{background-color: rgba(255,255,255,20);border-radius: 8px;}";
    QLabel* label[13]={ui->username, ui->sk1,ui->sk1_2,ui->sk1_3,ui->sk1_4,ui->sk1_5,ui->sk1_6,ui->sk1_7,ui->sk1_8,ui->sk1_9,ui->sk1_10,ui->sk1_11,ui->sk1_12};
    ui->exit_button->setStyleSheet(whitefontstyle);
    for(int i=0;i<13;i++){
        label[i]->setStyleSheet(whitefontstyle);
    }
    QPushButton* button[]={ui->exit_button,ui->routePlanning,ui->realTime,ui->historyRoute,ui->hotPlace,ui->operationTime};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(whitefontstyle1);
    }
    QString whitetitle="font: 700 9pt Microsoft YaHei UI;color: rgb(255, 255, 255);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(whitetitle);
    }
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon_active.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon_active.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon_active.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon_active.png"));\
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon_active.png"));
}

void cloth::on_skin1_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(248, 235, 226, 255), stop:0.5 rgba(250, 250, 250, 255), stop:1 rgba(250, 250, 250, 255))}";
    this->setStyleSheet(style1);
    emit blackfont();
}

void cloth::on_skin1_2_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(206, 213, 140, 255), stop:0.5 rgba(237, 235, 224, 255), stop:1 rgba(237, 235, 224, 255))}";
    this->setStyleSheet(style1);
    emit blackfont();
}

void cloth::on_skin1_3_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(177, 78, 84, 255), stop:0.5 rgba(178, 130, 130, 255), stop:1 rgba(178, 130, 130, 255))}";
    this->setStyleSheet(style1);
    emit whitefont();
}


void cloth::on_skin1_4_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(148, 219, 36, 255), stop:0.5 rgba(151, 198, 84, 255), stop:1 rgba(151, 198, 84, 255))}";
    this->setStyleSheet(style1);
    emit whitefont();
}


void cloth::on_skin1_8_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(227, 136, 47, 255), stop:0.5 rgba(73, 84, 138, 255), stop:1 rgba(73, 84, 138, 255))}";
    this->setStyleSheet(style1);
    emit whitefont();
}


void cloth::on_skin1_7_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 86, 152, 255), stop:0.5 rgba(255, 255, 238, 255), stop:1 rgba(255, 255, 238, 255))}";
    this->setStyleSheet(style1);
    emit blackfont();
}


void cloth::on_skin1_6_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 35, 73, 255), stop:0.5 rgba(241, 222, 224, 255), stop:1 rgba(241, 222, 224, 255))}";
    this->setStyleSheet(style1);
    emit blackfont();
}


void cloth::on_skin1_5_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(251, 185, 87, 255), stop:0.5 rgba(251, 242, 227, 255), stop:1 rgba(251, 242, 227, 255))}";
    this->setStyleSheet(style1);
    emit blackfont();
}


void cloth::on_skin1_12_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(89, 66, 64, 255), stop:0.7 rgba(89, 66, 64, 255), stop:1 rgba(31,28,24, 255))}";
    this->setStyleSheet(style1);
    emit whitefont();
}


void cloth::on_skin1_11_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(31, 131, 254, 255), stop:0.5 rgba(255, 220, 100, 255), stop:1 rgba(255,220,100, 255))}";
    this->setStyleSheet(style1);
    emit whitefont();
}


void cloth::on_skin1_10_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(179, 194, 200, 255), stop:0.5 rgba(220, 190, 179, 255), stop:1 rgba(220, 190, 179, 255))}";
    this->setStyleSheet(style1);
    emit blackfont();
}


void cloth::on_skin1_9_clicked()
{
    style1="#cloth{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(229,194,161, 255), stop:0.5 rgba(181, 161, 227, 255), stop:1 rgba(181, 161, 227, 255))}";
    this->setStyleSheet(style1);
    emit whitefont();
}


void cloth::on_head_clicked()
{
    head=":/new/prefix1/image/head1.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_2_clicked()
{
    head=":/new/prefix1/image/head2.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_3_clicked()
{
    head=":/new/prefix1/image/head3.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_4_clicked()
{
    head=":/new/prefix1/image/head4.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_5_clicked()
{
    head=":/new/prefix1/image/head5.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_6_clicked()
{
    head=":/new/prefix1/image/head6.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_9_clicked()
{
    head=":/new/prefix1/image/head7.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_7_clicked()
{
    head=":/new/prefix1/image/head8.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_8_clicked()
{
    head=":/new/prefix1/image/head9.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_12_clicked()
{
    head=":/new/prefix1/image/head10.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_10_clicked()
{
    head=":/new/prefix1/image/head11.png";
    ui->profile_photo->setIcon(QIcon(head));
}


void cloth::on_head_11_clicked()
{
    head=":/new/prefix1/image/head12.png";
    ui->profile_photo->setIcon(QIcon(head));
}
