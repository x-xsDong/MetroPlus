#ifndef CLOTH_H
#define CLOTH_H

#include <QWidget>
class secondWidget;

namespace Ui {
class cloth;
}

class cloth : public QWidget
{
    Q_OBJECT

public:
    explicit cloth(QWidget *parent = nullptr);
    ~cloth();
    static QString style;

private slots:
    void on_exit_button_clicked();

    void receiveUsername(QString data);
    void receiveRoutePlanning();
    void receiveHistoryRoute();
    void receiveOperationTime();
    void receiveRealTime();
    void receiveHotPlace();

    void receiveBlackFont();
    void receiveWhiteFont();

    void on_routePlanning_clicked();
    void on_realTime_clicked();
    void on_historyRoute_clicked();
    void on_operationTime_clicked();
    void on_hotPlace_clicked();

    void on_skin1_clicked();

    void on_skin1_2_clicked();

    void on_skin1_3_clicked();

    void on_skin1_4_clicked();

    void on_skin1_8_clicked();

    void on_skin1_7_clicked();

    void on_skin1_6_clicked();

    void on_skin1_5_clicked();

    void on_skin1_12_clicked();

    void on_skin1_11_clicked();

    void on_skin1_10_clicked();

    void on_skin1_9_clicked();

    void on_head_clicked();

    void on_head_2_clicked();

    void on_head_3_clicked();

    void on_head_4_clicked();

    void on_head_5_clicked();

    void on_head_6_clicked();

    void on_head_9_clicked();

    void on_head_7_clicked();

    void on_head_8_clicked();

    void on_head_12_clicked();

    void on_head_10_clicked();

    void on_head_11_clicked();

signals:
    void showMain();
    void showRoutePlanning();
    void showRealTime();
    void showOperationTime();
    void showHistoryTime();
    void showHotPlace();
    void blackfont();
    void whitefont();

private:
    Ui::cloth *ui;
};

#endif // CLOTH_H
