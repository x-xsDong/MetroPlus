#include "historyroute.h"
#include "ui_historyroute.h"
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

extern QString style1;
extern QString head;
QString styleForHis="";
QString headForHis="";

historyRoute::historyRoute(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::historyRoute)
{
    ui->setupUi(this);
    ui->routePlanning->setFixedSize(164,35);
    ui->realTime->setFixedSize(164,35);
    ui->operationTime->setFixedSize(164,35);
    ui->historyRoute_2->setFixedSize(164,35);
    ui->hotPlace->setFixedSize(164,35);

    QString scrollstyle="QScrollArea {border:none;background-color: rgb(242, 242, 242);border-radius: 12px;}"
                          "QScrollArea QScrollBar:vertical{width: 5px;background:rgb(240,240,240);border-radius:2px;}"
                          "QScrollArea QScrollBar::handle:vertical{background:rgb(211,211,211);border-radius:2px;}"
                          "QScrollArea QScrollBar::sub-line:vertical{border:none;}"
                          "QScrollArea QScrollBar::add-line:vertical{border:none;}"
                          "QScrollArea QScrollBar::handle:vertical:hover{background:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(31, 212, 175, 255), stop:1 rgba(0, 204, 102, 255));}";
    ui->scrollArea->setStyleSheet(scrollstyle);
}

historyRoute::~historyRoute()
{
    delete ui;
}

void historyRoute::on_routePlanning_clicked()
{
    this->hide();
    emit showRoutePlanning();
}

void historyRoute::receiveRoutePlanning()
{
    style1.replace("secondWidget","historyRoute");
    if(styleForHis!=style1){
        this->setStyleSheet(style1);
        styleForHis=style1;
    }
    if(headForHis!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHis=head;
    }
    getHistory();
    this->show();
}

void historyRoute::receiveCloth()
{
    style1.replace("cloth","historyRoute");
    if(styleForHis!=style1){
        this->setStyleSheet(style1);
        styleForHis=style1;
    }
    if(headForHis!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHis=head;
    }
    getHistory();
    this->show();
}

void historyRoute::receiveRealTime()
{
    style1.replace("realTime","historyRoute");
    if(styleForHis!=style1){
        this->setStyleSheet(style1);
        styleForHis=style1;
    }
    if(headForHis!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHis=head;
    }
    getHistory();
    this->show();
}

void historyRoute::receiveOperationTime()
{
    style1.replace("operationTime","historyRoute");
    if(styleForHis!=style1){
        this->setStyleSheet(style1);
        styleForHis=style1;
    }
    if(headForHis!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHis=head;
    }
    getHistory();
    this->show();
}

void historyRoute::receiveHotPlace()
{
    style1.replace("hotPlace","historyRoute");
    if(styleForHis!=style1){
        this->setStyleSheet(style1);
        styleForHis=style1;
    }
    if(headForHis!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForHis=head;
    }
    getHistory();
    this->show();
}

void historyRoute::on_hotPlace_clicked()
{
    this->hide();
    emit showHotPlace();
}

void historyRoute::on_realTime_clicked()
{
    this->hide();
    emit showRealTime();
}


void historyRoute::on_operationTime_clicked()
{
    this->hide();
    emit showOperationTime();
}


void historyRoute::on_exit_button_clicked()
{
    this->close();
    emit showMain();
}

void historyRoute::receiveUsername(QString data)
{
    ui->username->setText(data);
}

void historyRoute::on_cloth_button_clicked()
{
    this->close();
    emit showCloth();
}

void historyRoute::receiveBlackFont()
{
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_image.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_image.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon.png"));
    ui->historyRoute_2->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon.png"));
    QString blackfontstyle="color: rgba(0, 0, 0, 150);font: 13pt Simhei;background: transparent;";
    QString blackfontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(0, 0, 0, 150);} QPushButton:hover{background-color: rgba(0,0,0,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->exit_button->setStyleSheet(blackfontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(blackfontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime,ui->historyRoute_2,ui->operationTime,ui->hotPlace,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(blackfontstyle1);
    }
    QString blacktitle="font: 700 9pt Microsoft YaHei UI;color: rgb(136, 136, 136);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(blacktitle);
    }
    ui->historyRoute_2->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(0,0,0, 70);");
}

void historyRoute::receiveWhiteFont()
{
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon_active.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_white.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_white.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon_active.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon_active.png"));
    ui->historyRoute_2->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon_active.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon_active.png"));
    QString whitefontstyle="color: rgba(255, 255, 255, 150);font: 13pt Simhei;background: transparent;";
    QString whitefontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(255, 255, 255, 150);} QPushButton:hover{background-color: rgba(255,255,255,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->exit_button->setStyleSheet(whitefontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(whitefontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime,ui->historyRoute_2,ui->operationTime,ui->hotPlace,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(whitefontstyle1);
    }
    QString whitetitle="font: 700 9pt Microsoft YaHei UI;color: rgb(255, 255, 255);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(whitetitle);
    }
    ui->historyRoute_2->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(255,255,255, 70);");
}

void historyRoute::getHistory()
{
    ui->scrollArea->viewport()->setStyleSheet("background:transparent;");
    ifstream historyFile("./history.txt");
    vector<string> history;
    string tmp;
    string bgColor[10]={"#FFEFF9,stop:1 #9984AF)","#1DE5E2,stop:1 #B588F7)",
                        "#EAEF9D,stop:1 #336A29)","#FACA2E,stop:1 #D56F1B)",
                        "#FF5778,stop:1 #FFC976)","#08F1D9,stop:1 #002FA7)",
                        "#7DAFC2,stop:1 #2F4F4F)","#DDCFA7,stop:1 #BBD2CE)",
                        "#EC2351,stop:1 #0443F3)","#00C695,stop:1 #F62850)"};
    srand(time(0));
    int fileLineNum = 0; //文件行数
    QVBoxLayout *pG = new QVBoxLayout ();
    QLayout* layout = ui->scrollArea->widget()->layout();
    if (layout) {
            // 从widget中移除布局
            ui->scrollArea->widget()->setLayout(nullptr);
            // 删除并释放控件
            QLayoutItem* item;
            while ((item = layout->takeAt(0))) {
                QWidget* childWidget = item->widget();
                if (childWidget) {
                    delete childWidget;
                }
                delete item;
            }
            // 最后记得释放布局本身
            delete layout;
    }

    while (getline(historyFile, tmp, '\n'))
    {
        //以空格拆分每行
        istringstream str(tmp);
        while(str >> tmp)
            history.push_back(tmp);
        QString startToEnd =QString("<font style = 'color:#000000; font-size:17px; font-family:Microsoft Yahei; font-weight:bold'>")
                             +QString::fromStdString(*(history.end()-2)+" "+*(history.end()-1))+QString("</font>")+"<br/>"
                             +QString("<font style = 'color:#000000; font-size:14px; font-family:Microsoft Yahei; font-weight:bold'>")
                             +QString::fromStdString(history[0])+" —— "+QString::fromStdString(history[1])+"<br/>"+"路程："+
                            QString::fromStdString(*(history.end()-4))+"公里 票价："+QString::fromStdString(*(history.end()-3))+"元"+QString("</font>");

        int numForStyle = rand() % 10; //生成随机数匹配不同的字体颜色 10种
        QLabel *routeB = new QLabel(this);
        QString linestyle="border-radius: 10px;background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 ";
        linestyle.append(bgColor[numForStyle]);
        linestyle.append(";padding-bottom: 40px;padding-left: 7px;");
        routeB->setText(startToEnd);
        routeB->setStyleSheet(linestyle);
        routeB->setMaximumSize(320,120);

        //输出线路标签
        QLabel *lineB = new QLabel(this);
        QString lineBStr ="轨道交通";
        for(int i=2; i < history.size()-5; i++){
            lineBStr.append(history[i]);
            lineBStr.append("-");
        }
        lineBStr.append(history[history.size()-5]);
        lineBStr.append("号线");

        linestyle="border-radius: 8px;color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 ";
        linestyle.append(bgColor[numForStyle]);
        linestyle.append(";font:700 12pt Microsoft YaHei UI;background-color:rgb(255,255,255);padding-bottom: 0;padding-left: 3px;");
        lineB->setStyleSheet(linestyle);
        lineB->setFixedSize(120+(history.size()-7)*20,30);
        lineB->setText(lineBStr);

        QVBoxLayout *pVB =  new QVBoxLayout;
        pVB->addStretch();
        pVB->setContentsMargins(5,80,11,10);
        pVB->insertWidget(0,lineB);
        routeB->setLayout(pVB);
        pG->insertWidget(0,routeB);

        history.clear();
        fileLineNum++;
        //pVB->deleteLater();
    }
    ui->scrollArea->widget()->setFixedSize(320,fileLineNum*130-10);
    ui->scrollArea->widget()->setLayout(pG);
    //pG->deleteLater();
}
