#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwidget.h"
#include "operationtime.h"
#include "historyroute.h"
#include "realtime.h"
#include "cloth.h"
#include "hotplace.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_login_clicked();
    void on_signup_clicked();
    void on_signup_ready_clicked();
    void receiveOperationTime();
    void receiveRoutePlanning();
    void receiveHistoryRoute();
    void receiveRealTime();
    void receiveHotPlace();
    void receiveCloth();
    void back_to_login();
    void on_signuptologin_clicked();

signals:
    void showRoutePlanning();
    void sendUsername(QString);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
