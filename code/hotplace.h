#ifndef HOTPLACE_H
#define HOTPLACE_H

#include <QWidget>
#include <qwindowdefs.h>

namespace Ui {
class hotPlace;
}

class hotPlace : public QWidget
{
    Q_OBJECT

public:
    explicit hotPlace(QWidget *parent = nullptr);
    ~hotPlace();

private slots:
    void on_routePlanning_clicked();
    void on_realTime_clicked();
    void on_historyRoute_clicked();
    void on_operationTime_clicked();
    void on_cloth_button_clicked();
    void receiveRoutePlanning();
    void receiveHistoryRoute();
    void receiveRealTime();
    void receiveCloth();
    void receiveOperationTime();
    void receiveBlackFont();
    void receiveWhiteFont();
    void receiveUsername(QString data);

    void on_exit_button_clicked();

signals:
    void showRoutePlanning(); //显示路线规划界面
    void showHistoryRoute();
    void showRealTime();
    void showMain();
    void showCloth();
    void showOperationTime();

private:
    Ui::hotPlace *ui;
};

#endif // HOTPLACE_H
