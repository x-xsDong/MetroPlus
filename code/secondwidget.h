#ifndef SECONDWIDGET_H
#define SECONDWIDGET_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class secondWidget;
}

class secondWidget : public QWidget
{
    Q_OBJECT

public:
    explicit secondWidget(QWidget *parent = nullptr);
    ~secondWidget();

private slots:
    void on_operationTime_clicked();
    void on_realTime_clicked();
    void on_historyRoute_clicked();
    void on_hotPlace_clicked();
    void on_cloth_button_clicked();

    void receiveRealTime();
    void receiveOperationTime();
    void receivelogin();
    void receiveHistoryRoute();
    void receiveCloth();
    void receiveHotPlace();
    void receiveUsername(QString data);

    void receiveWhiteFont();
    void receiveBlackFont();

    void on_changeButton_clicked(bool checked);
    void on_searchButton_clicked(bool checked);
    void on_exit_button_clicked();

    bool eventFilter(QObject *watched, QEvent *event);
    void wheelEvent(QWheelEvent *event);

    void getDateTime(); //动态显示时间

    void on_time_toHotplace_clicked();

    void on_leastSta_clicked();

    void on_shortestDst_clicked();

signals:
    void showOperationTime(); //显示运营时间界面
    void showRealTime();
    void showHistoryRoute();
    void showMain();
    void showCloth();
    void showHotPlace();

    void init_signal();
    void down_signal();
    void up_signal();
    void mousepress_signal();

private:
    Ui::secondWidget *ui;
    QTimer *myTimer;
};

#endif // SECONDWIDGET_H
