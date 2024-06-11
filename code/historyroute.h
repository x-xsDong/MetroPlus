#ifndef HISTORYROUTE_H
#define HISTORYROUTE_H

#include <QWidget>
#include <qwindowdefs.h>

namespace Ui {
class historyRoute;
}

class historyRoute : public QWidget
{
    Q_OBJECT

public:
    explicit historyRoute(QWidget *parent = nullptr);
    ~historyRoute();
    void getHistory();

private slots:
    void on_routePlanning_clicked();
    void on_realTime_clicked();
    void on_operationTime_clicked();
    void on_cloth_button_clicked();
    void on_hotPlace_clicked();
    void receiveOperationTime();
    void receiveRoutePlanning();
    void receiveRealTime();
    void receiveCloth();
    void receiveHotPlace();
    void receiveBlackFont();
    void receiveWhiteFont();
    void receiveUsername(QString data);

    void on_exit_button_clicked();

signals:
    void showRoutePlanning();
    void showRealTime();
    void showOperationTime();
    void showMain();
    void showCloth();
    void showHotPlace();

private:
    Ui::historyRoute *ui;
};

#endif // HISTORYROUTE_H
