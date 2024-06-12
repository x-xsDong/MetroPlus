#include "ui_secondwidget.h"
#include "secondwidget.h"
#include "routeplan.h"
#include <QMessageBox>
#include <string>
#include <iostream>
#include <fstream>
#include <QWheelEvent>
#include <QPainter>
#include <QPaintEvent>
#include <QDateTime>

using namespace std;

extern QString style1;
extern QString head;
QString styleForSecond="";
QString headForSecond="";
int mode = 0; //导航模式

double m_zoomscale = 0;

secondWidget::secondWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::secondWidget)
{
    ui->setupUi(this);

    //菜单栏初始化
    QSize size = QSize(10, 10);
    ui->search->setTextMargins(size.width(), 1, 1 , 1);
    ui->routePlanning->setFixedSize(164,35);
    ui->realTime->setFixedSize(164,35);
    ui->operationTime->setFixedSize(164,35);
    ui->historyRoute->setFixedSize(164,35);
    ui->hotPlace->setFixedSize(164,35);

    //系统时间
    getDateTime();
    myTimer=new QTimer(this);
    myTimer->start(60000); //一分钟刷新一次
    connect(myTimer,SIGNAL(timeout()),this,SLOT(getDateTime()));

    //安装事件过滤器
    ui->mapLabel->installEventFilter(this);

    QString scrollstyle="QScrollArea {border:none;background-color: rgb(242, 242, 242);border-radius: 12px;}"
                           "QScrollArea QScrollBar:vertical{width: 5px;background:transparent;border-radius:2px;}"
                           "QScrollArea QScrollBar::handle:vertical{background:rgb(211,211,211);border-radius:2px;}"
                           "QScrollArea QScrollBar::sub-line:vertical{border:none;}"
                           "QScrollArea QScrollBar::add-line:vertical{border:none;}"
                           "QScrollArea QScrollBar::handle:vertical:hover{background:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(31, 212, 175, 255), stop:1 rgba(0, 204, 102, 255));}";
    ui->scrollArea->setStyleSheet(scrollstyle);

}

secondWidget::~secondWidget()
{
    delete ui;
}

void secondWidget::on_operationTime_clicked()
{
    this->hide();
    emit showOperationTime();
}

void secondWidget::receiveRealTime()
{
    style1.replace("realTime","secondWidget");
    if(styleForSecond!=style1){
        this->setStyleSheet(style1);
        styleForSecond=style1;
    }
    if(headForSecond!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForSecond=head;
    }
    this->show();
}

void secondWidget::receiveHotPlace()
{
    style1.replace("hotPlace","secondWidget");
    if(styleForSecond!=style1){
        this->setStyleSheet(style1);
        styleForSecond=style1;
    }
    if(headForSecond!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForSecond=head;
    }
    this->show();
}

void secondWidget::receiveOperationTime()
{
    style1.replace("operationTime","secondWidget");
    if(styleForSecond!=style1){
        this->setStyleSheet(style1);
        styleForSecond=style1;
    }
    if(headForSecond!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForSecond=head;
    }
    this->show();
}

void secondWidget::receiveCloth()
{
    style1.replace("cloth","secondWidget");
    if(styleForSecond!=style1){
        this->setStyleSheet(style1);
        styleForSecond=style1;
    }
    if(headForSecond!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForSecond=head;
    }
    this->show();
}

void secondWidget::receivelogin()
{
    this->show();
}

void secondWidget::receiveHistoryRoute()
{
    style1.replace("historyRoute","secondWidget");
    if(styleForSecond!=style1){
        this->setStyleSheet(style1);
        styleForSecond=style1;
    }
    if(headForSecond!=head){
        ui->profile_photo->setIcon(QIcon(head));
        headForSecond=head;
    }
    this->show();
}

void secondWidget::on_changeButton_clicked(bool checked)
{
    QString a = ui->startText->text();
    QString b = ui->endText->text();
    ui->startText->setText(b);
    ui->endText->setText(a);
}


void secondWidget::on_realTime_clicked()
{
    this->hide();
    emit showRealTime();
}

void secondWidget::on_hotPlace_clicked()
{
    this->hide();
    emit showHotPlace();
}

void secondWidget::on_historyRoute_clicked()
{
    this->hide();
    emit showHistoryRoute();
}

void secondWidget::on_searchButton_clicked(bool checked)
{
    //地铁线色号
    QString lineColor[21] = {"rgb(85,130,173);","rgb(222,135,184);","rgb(214,194,134);","rgb(144,181,64);",\
        "rgb(173,95,83);","rgb(0,1119,51);","rgb(238,121,1);","rgb(155,173,172);"};
    lineColor[10]="rgb(254,228,0);";
    lineColor[15]="rgb(227,88,124);";
    lineColor[18]="rgb(24,160,121);";
    lineColor[20]="rgb(182,0,129);";

    QVBoxLayout *pG = new QVBoxLayout ();
    QLayout* layout = ui->scrollArea->widget()->layout();

    //生成路线前先清空layout
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

    QString QSa = ui->startText->text();
    QString QSb = ui->endText->text();
    string a=QSa.toStdString();
    string b=QSb.toStdString();

    vector<string> route = routeplan::getroute(a,b,mode);

    if (route.empty())
    {
        QMessageBox::information(this,"提示","地点输入错误！");
        return;
    }

    int widgetLength = 0;
    int size = route.size();
    string sta = route[0],sta_end=*(route.rbegin()+2);
    string line = route[1];
    string sta_next, line_next;
    vector<string> line_sequence; //输出到历史路程的线路信息
    vector<string> sta_transfer = { sta }; //save stations to transfer
    for (int i = 1; i < size / 2; i++) {
        sta_next = route[i*2];
        line_next = route[i*2 + 1];
        if (line_next != line)
            sta_transfer.push_back(sta_next);
        sta = sta_next;
        line = line_next;
    }
    if(std::find(sta_transfer.begin(), sta_transfer.end(), sta_end) == sta_transfer.end())
        sta_transfer.push_back(sta_end);


    for (int i=route.size()-3;i>=0;i-=2) {
        string sta=route[i];
        if(::find(sta_transfer.begin(), sta_transfer.end(), sta) != sta_transfer.end()){ //在这里换乘
            if(sta!=route[route.size()-3]){ //非终点的换乘站才输出换乘线路
                QPushButton *nLine = new QPushButton(this);
                string line ="轨道交通";
                line.append(route[i+1]);
                line_sequence.push_back(route[i+1]);
                line.append("号线");
                QString lineText = QString::fromStdString(line);
                nLine->setText(lineText);
                nLine->setFixedSize(120,25);
                widgetLength+=40;
                QString linestyle="border-radius: 8px;color:rgb(255,255,255);font:11pt Microsoft YaHei UI;background-color:";
                linestyle.append(lineColor[stoi(route[i+1])-1]);
                nLine->setStyleSheet(linestyle);
                pG->insertWidget(0, nLine);
            }
            QPushButton *nLabel = new QPushButton(this);
            QString strText = QString::fromStdString(sta); //站点名
            nLabel->setText(strText);
            nLabel->setFixedSize(164,30);
            if(sta==route[route.size()-3])
                nLabel->setIcon(QIcon(":/new/prefix1/image/endDot.png"));
            else if(sta==route[0])
                nLabel->setIcon(QIcon(":/new/prefix1/image/startDot.png"));
            else
                nLabel->setIcon(QIcon(":/new/prefix1/image/stationDot.png"));
            nLabel->setStyleSheet("text-align: left;background:transparent;border-width:0;font:700 13pt Microsoft YaHei UI;color: rgb(0, 0, 0);");
            widgetLength+=40;
            pG->insertWidget(0, nLabel);
        }
        else{ //不在这里换乘
            QPushButton *nLabel = new QPushButton(this);
            QString strText = "     "+QString::fromStdString(sta);
            nLabel->setText(strText);
            nLabel->setStyleSheet("text-align: left;background:transparent;border-width:0;font:9pt Microsoft YaHei UI;color: rgba(0, 0, 0, 150);");
            widgetLength+=20;
            pG->insertWidget(0, nLabel);
        }
    }
    ui->scrollArea->widget()->setFixedSize(271,widgetLength);
    ui->scrollArea->widget()->setLayout(pG);
    QPalette pa = ui->scrollArea->palette();
    pa.setBrush(QPalette::Window, Qt::transparent);
    ui->scrollArea->setPalette(pa);

    //保存日期时间
    QDateTime system_time = QDateTime::currentDateTime();
    string time = system_time.toString("yyyy/MM/dd hh:mm").toStdString();

    fstream history("./history.txt", ios_base::out|ios_base::app);
    history<< route[0] << " "; // start station
    history<< route[route.size()-3] << " "; // end station
    for (auto i : line_sequence) {
        history<< i << " "; // line sequence
    }
    history<< route[route.size()-2] << " "; // distance
    history<< route[route.size()-1] << " "; //price
    history<< time << endl;
    history.close();
}

void secondWidget::on_exit_button_clicked()
{
    this->close();
    emit showMain();
}

void secondWidget::receiveUsername(QString data)
{
    ui->username->setText(data);
}

void secondWidget::on_cloth_button_clicked()
{
    this->close();
    emit showCloth();
}

void secondWidget::receiveBlackFont()
{
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_image.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_image.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon.png"));
    QString blackSearch="border-radius: 10px;font: 11pt Microsoft YaHei UI;color: rgba(0,0,0,50);background-color: rgba(0,0,0,0);border-color: rgba(0,0,0,50);border-width:1px 1px;border-style:solid;";
    QString blackfontstyle="color: rgba(0, 0, 0, 150);font: 13pt Simhei;background: transparent;";
    QString blackfontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(0, 0, 0, 150);} QPushButton:hover{background-color: rgba(0,0,0,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->search->setStyleSheet(blackSearch);
    ui->exit_button->setStyleSheet(blackfontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(blackfontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime,ui->historyRoute,ui->operationTime,ui->exit_button,ui->hotPlace};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(blackfontstyle1);
    }
    QString blacktitle="font: 700 9pt Microsoft YaHei UI;color: rgb(136, 136, 136);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(blacktitle);
    }
    ui->routePlanning->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(0,0,0, 70);");
}

void secondWidget::receiveWhiteFont()
{
    ui->hotPlace->setIcon(QIcon(":/new/prefix1/image/hotPlaceIcon_active.png"));
    ui->cloth_button->setIcon(QIcon(":/new/prefix1/image/cloth_white.png"));
    ui->exit_button->setIcon(QIcon(":/new/prefix1/image/exit_white.png"));
    ui->routePlanning->setIcon(QIcon(":/new/prefix1/image/routePlanningIcon_active.png"));
    ui->realTime->setIcon(QIcon(":/new/prefix1/image/realTimeIcon_active.png"));
    ui->historyRoute->setIcon(QIcon(":/new/prefix1/image/historyRouteIcon_active.png"));
    ui->operationTime->setIcon(QIcon(":/new/prefix1/image/operationTimeIcon_active.png"));
    QString whiteSearch="border-radius: 10px;font: 11pt Microsoft YaHei UI;color: rgba(255,255,255,50);background-color: rgba(0,0,0,0);border-color: rgba(255,255,255,50);border-width:1px 1px;border-style:solid;";
    QString whitefontstyle="color: rgba(255, 255, 255, 150);font: 13pt Simhei;background: transparent;";
    QString whitefontstyle1="QPushButton {background:transparent;border-width:0;font: 13pt Microsoft YaHei UI;color: rgba(255, 255, 255, 150);} QPushButton:hover{background-color: rgba(255,255,255,20);border-radius: 8px;}";
    QLabel* label[1]={ui->username};
    ui->search->setStyleSheet(whiteSearch);
    ui->exit_button->setStyleSheet(whitefontstyle);
    for(int i=0;i<1;i++){
        label[i]->setStyleSheet(whitefontstyle);
    }
    QPushButton* button[]={ui->routePlanning,ui->realTime,ui->historyRoute,ui->operationTime,ui->hotPlace,ui->exit_button};
    for(int i=0;i<6;i++){
        button[i]->setStyleSheet(whitefontstyle1);
    }
    QString whitetitle="font: 700 9pt Microsoft YaHei UI;color: rgb(255, 255, 255);background:transparent;border-width:0;border-style:outset;text-align : left;";
    QPushButton* buttontitle[]={ui->travel,ui->recommend,ui->person};
    for(int i=0;i<3;i++){
        buttontitle[i]->setStyleSheet(whitetitle);
    }
    ui->routePlanning->setStyleSheet("font: 13pt Microsoft YaHei UI;color: rgb(255, 255, 255);border-radius: 8px;background-color: rgba(255,255,255, 70);");
}

//地铁图
bool secondWidget::eventFilter(QObject *watched, QEvent *event) //事件过滤器
{
    if(watched == ui->mapLabel){
        if(event->type()==QEvent::Wheel){
            QWheelEvent* wheel = static_cast<QWheelEvent*>(event);
            wheelEvent(wheel);
            return true;
        }
    }
    return QWidget::eventFilter(watched, event);
}

void secondWidget::wheelEvent(QWheelEvent *event) //缩放
{
    QRect rect = ui->mapLabel->geometry(); //标签位置
    QPoint cursorpositon = QCursor().pos(); //鼠标位置

    QPoint pos = ui->mapLabel->mapFromGlobal(cursorpositon);

    double scale = 0.1;

    if (event->angleDelta().y() > 0) //向前滚动
    {
        m_zoomscale += scale;
        if (ui->mapLabel->width()<=3000)
        {
            m_zoomscale = scale;
            int x = rect.x() - scale*pos.x();
            int y = rect.y() - scale*pos.y();
            ui->mapLabel->hide();//图片移动时，会有闪烁重叠的问题，所以先hide，再show；
            ui->mapLabel->move(x, y);
            ui->mapLabel->show();
            ui->mapLabel->resize(rect.width()*(1 + scale), rect.height()*(1 + scale));
        }
    }
    else
    {
        m_zoomscale -= scale;
        if (ui->mapLabel->width()<=621)
        {
            m_zoomscale = scale;
            ui->mapLabel->hide();
            ui->mapLabel->move(0,0);
            ui->mapLabel->show();
            ui->mapLabel->resize(621,621);
            return;
        }
        int x = rect.x() + scale*pos.x();
        int y = rect.y() + scale*pos.y();
        ui->mapLabel->hide();
        ui->mapLabel->move(x, y);
        ui->mapLabel->show();
        ui->mapLabel->resize(rect.width()*(1 - scale), rect.height()*(1 - scale));
    }
}

void secondWidget::getDateTime()
{
    QString greet;
    QDateTime system_time = QDateTime::currentDateTime();
    QString hour_qstr = system_time.toString("hh");
    if((hour_qstr.toInt() >= 5)&&(hour_qstr.toInt() < 11))
        greet = "早上好，";
    else if((hour_qstr.toInt() >= 11)&&(hour_qstr.toInt() < 14))
        greet = "下午好，";
    else if((hour_qstr.toInt() >= 14)&&(hour_qstr.toInt() < 17))
        greet = "下午好，";
    else
        greet = "晚上好，";
    greet = QString("<font style = 'color:#000000; font-size:20px; font-family:Microsoft Yahei; font-weight:bold'>")+greet+QString("</font>")
            +QString("<font style = 'color:#000000; font-family:Microsoft Yahei; font-size:14px; font-weight:bold'>")+QString("猜你最近喜欢去  ")+system_time.toString("yyyy/MM/dd hh:mm")+QString("</font>");
    ui->timeLabel->setText(greet);
}

void secondWidget::on_time_toHotplace_clicked()
{
    this->hide();
    emit showHotPlace();
}


void secondWidget::on_leastSta_clicked()
{
    mode=0;
}


void secondWidget::on_shortestDst_clicked()
{
    mode=1;
}

