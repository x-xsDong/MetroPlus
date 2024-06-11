#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    secondWidget s;
    operationTime o;
    historyRoute h;
    realTime r;
    cloth c;
    hotPlace ho;

    w.show();
    QObject::connect(&w,SIGNAL(showRoutePlanning()),&s,SLOT(receivelogin()));

    //历史行程转其他
    QObject::connect(&h,SIGNAL(showRoutePlanning()),&s,SLOT(receiveHistoryRoute()));
    QObject::connect(&h,SIGNAL(showRealTime()),&r,SLOT(receiveHistoryRoute()));
    QObject::connect(&h,SIGNAL(showOperationTime()),&o,SLOT(receiveHistoryRoute()));
    QObject::connect(&h,SIGNAL(showHotPlace()),&ho,SLOT(receiveHistoryRoute()));
    QObject::connect(&h,SIGNAL(showMain()),&w,SLOT(receiveHistoryRoute()));
    QObject::connect(&h,SIGNAL(showCloth()),&c,SLOT(receiveHistoryRoute()));

    //运营时间转其他
    QObject::connect(&o,SIGNAL(showRoutePlanning()),&s,SLOT(receiveOperationTime()));
    QObject::connect(&o,SIGNAL(showHistoryRoute()),&h,SLOT(receiveOperationTime()));
    QObject::connect(&o,SIGNAL(showRealTime()),&r,SLOT(receiveOperationTime()));
    QObject::connect(&o,SIGNAL(showHotPlace()),&ho,SLOT(receiveOperationTime()));
    QObject::connect(&o,SIGNAL(showMain()),&w,SLOT(receiveOperationTime()));
    QObject::connect(&o,SIGNAL(showCloth()),&c,SLOT(receiveOperationTime()));


    //路线规划转其他
    QObject::connect(&s,SIGNAL(showOperationTime()),&o,SLOT(receiveRoutePlanning()));
    QObject::connect(&s,SIGNAL(showHistoryRoute()),&h,SLOT(receiveRoutePlanning()));
    QObject::connect(&s,SIGNAL(showRealTime()),&r,SLOT(receiveRoutePlanning()));
    QObject::connect(&s,SIGNAL(showHotPlace()),&ho,SLOT(receiveRoutePlanning()));
    QObject::connect(&s,SIGNAL(showMain()),&w,SLOT(receiveRoutePlanning()));
    QObject::connect(&s,SIGNAL(showCloth()),&c,SLOT(receiveRoutePlanning()));

    //实时地铁转其他
    QObject::connect(&r,SIGNAL(showOperationTime()),&o,SLOT(receiveRealTime()));
    QObject::connect(&r,SIGNAL(showRoutePlanning()),&s,SLOT(receiveRealTime()));
    QObject::connect(&r,SIGNAL(showHistoryRoute()),&h,SLOT(receiveRealTime()));
    QObject::connect(&r,SIGNAL(showHotPlace()),&ho,SLOT(receiveRealTime()));
    QObject::connect(&r,SIGNAL(showMain()),&w,SLOT(receiveRealTime()));
    QObject::connect(&r,SIGNAL(showCloth()),&c,SLOT(receiveRealTime()));

    //热门地点转其他
    QObject::connect(&ho,SIGNAL(showMain()),&w,SLOT(receiveHotPlace()));
    QObject::connect(&ho,SIGNAL(showCloth()),&c,SLOT(receiveHotPlace()));
    QObject::connect(&ho,SIGNAL(showOperationTime()),&o,SLOT(receiveHotPlace()));
    QObject::connect(&ho,SIGNAL(showHistoryRoute()),&h,SLOT(receiveHotPlace()));
    QObject::connect(&ho,SIGNAL(showRoutePlanning()),&s,SLOT(receiveHotPlace()));
    QObject::connect(&ho,SIGNAL(showRealTime()),&r,SLOT(receiveHotPlace()));

    //皮肤转其他
    QObject::connect(&c,SIGNAL(showMain()),&w,SLOT(receiveCloth()));
    QObject::connect(&c,SIGNAL(showOperationTime()),&o,SLOT(receiveCloth()));
    QObject::connect(&c,SIGNAL(showRoutePlanning()),&s,SLOT(receiveCloth()));
    QObject::connect(&c,SIGNAL(showHistoryTime()),&h,SLOT(receiveCloth()));
    QObject::connect(&c,SIGNAL(showRealTime()),&r,SLOT(receiveCloth()));
    QObject::connect(&c,SIGNAL(showHotPlace()),&ho,SLOT(receiveCloth()));

    //传递用户名
    QObject::connect(&w, SIGNAL(sendUsername(QString)), &o, SLOT(receiveUsername(QString)));
    QObject::connect(&w, SIGNAL(sendUsername(QString)), &s, SLOT(receiveUsername(QString)));
    QObject::connect(&w, SIGNAL(sendUsername(QString)), &h, SLOT(receiveUsername(QString)));
    QObject::connect(&w, SIGNAL(sendUsername(QString)), &r, SLOT(receiveUsername(QString)));
    QObject::connect(&w, SIGNAL(sendUsername(QString)), &c, SLOT(receiveUsername(QString)));
    QObject::connect(&w, SIGNAL(sendUsername(QString)), &ho, SLOT(receiveUsername(QString)));

    //传递字体颜色
    QObject::connect(&c, SIGNAL(whitefont()), &s, SLOT(receiveWhiteFont()));
    QObject::connect(&c, SIGNAL(blackfont()), &s, SLOT(receiveBlackFont()));
    QObject::connect(&c, SIGNAL(whitefont()), &o, SLOT(receiveWhiteFont()));
    QObject::connect(&c, SIGNAL(blackfont()), &o, SLOT(receiveBlackFont()));
    QObject::connect(&c, SIGNAL(whitefont()), &r, SLOT(receiveWhiteFont()));
    QObject::connect(&c, SIGNAL(blackfont()), &r, SLOT(receiveBlackFont()));
    QObject::connect(&c, SIGNAL(whitefont()), &h, SLOT(receiveWhiteFont()));
    QObject::connect(&c, SIGNAL(blackfont()), &h, SLOT(receiveBlackFont()));
    QObject::connect(&c, SIGNAL(whitefont()), &ho, SLOT(receiveWhiteFont()));
    QObject::connect(&c, SIGNAL(blackfont()), &ho, SLOT(receiveBlackFont()));

    return a.exec();
}
