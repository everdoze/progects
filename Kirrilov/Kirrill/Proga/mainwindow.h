#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void go_Random();
    void hide_all();
public slots:
    void update();
    void get_info();

private slots:
    void on_refresh_clicked();

private:
    Ui::MainWindow *ui;
    int temp;
    int check_temperature(int);
    int check_humidity(int);
    void do_Something(int);
    void warning_show();
    void dis_ok();
    void go_fuck_yourself();
    QTimer *t1mer;
};

#endif // MAINWINDOW_H
