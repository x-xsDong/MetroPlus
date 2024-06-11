#ifndef REALTIME_H
#define REALTIME_H

#include <QWidget>
#include <qwindowdefs.h>

namespace Ui {
class realTime;
}

class realTime : public QWidget
{
    Q_OBJECT

public:
    explicit realTime(QWidget *parent = nullptr);
    ~realTime();

private slots:
    void receiveRoutePlanning();
    void receiveHistoryRoute();
    void receiveOperationTime();
    void receiveCloth();
    void receiveHotPlace();
    void receiveUsername(QString data);
    void receiveBlackFont();
    void receiveWhiteFont();
    void on_routePlanning_clicked();
    void on_historyRoute_clicked();
    void on_operationTime_clicked();
    void on_cloth_button_clicked();
    void on_hotPlace_clicked();

    void on_line7button_clicked();

    void on_exit_button_clicked();

signals:
    void showRoutePlanning();
    void showHistoryRoute();
    void showOperationTime();
    void showMain();
    void showCloth();
    void showHotPlace();

private:
    Ui::realTime *ui;
};

#endif // REALTIME_H
