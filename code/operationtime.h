#ifndef OPERATIONTIME_H
#define OPERATIONTIME_H

#include <QWidget>
#include <qwindowdefs.h>

namespace Ui {
class operationTime;
}

class operationTime : public QWidget
{
    Q_OBJECT

public:
    explicit operationTime(QWidget *parent = nullptr);
    ~operationTime();

private slots:
    void on_routePlanning_clicked();
    void on_realTime_clicked();
    void on_historyRoute_clicked();
    void receiveRoutePlanning();
    void receiveHistoryRoute();
    void receiveRealTime();
    void receiveCloth();
    void receiveHotPlace();
    void receiveBlackFont();
    void receiveWhiteFont();
    void receiveUsername(QString data);

    void on_Line1_clicked();
    void on_backButton_clicked();
    void on_Line2_clicked();
    void on_Line3_clicked();
    void on_Line4_clicked();
    void on_Line5_clicked();
    void on_Line6_clicked();
    void on_Line7_clicked();
    void on_Line8_clicked();
    void on_Line11_clicked();
    void on_Line16_clicked();
    void on_Line19_clicked();
    void on_LineYangLuo_clicked();

    void on_exit_button_clicked();

    void on_cloth_button_clicked();

    void on_hotPlace_clicked();

signals:
    void showRoutePlanning(); //显示路线规划界面
    void showHistoryRoute();
    void showRealTime();
    void showMain();
    void showCloth();
    void showHotPlace();

private:
    Ui::operationTime *ui;
};

#endif // OPERATIONTIME_H
