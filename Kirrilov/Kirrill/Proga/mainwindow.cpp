#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <unistd.h>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    t1mer = new QTimer(this);
    connect(t1mer, SIGNAL(timeout()), this, SLOT(update()));
    hide_all();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::go_Random()
{
    ui->humidity_1_1->display(rand()%40+40);
    //ui->humidity_1_2->display(ui->humidity_1_1->intValue());                                //(rand()%40+40);
    ui->humidity_2_1->display(rand()%40+40);
    //ui->humidity_2_2->display (ui->humidity_2_1->intValue());                               //(rand()%40+40);
    ui->humidity_3_1->display(rand()%40+40);
    //ui->humidity_3_2->display(ui->humidity_3_1->intValue());                                //(rand()%40+40);
    ui->humidity_4_1->display(rand()%40+40);
    //ui->humidity_4_2->display(ui->humidity_4_1->intValue());                                //(rand()%40+40);
    ui->humidity_5_1->display(rand()%40+40);
    //ui->humidity_5_2->display(ui->humidity_5_1->intValue());                                //(rand()%40+40);
    ui->humidity_6_1->display(rand()%40+40);
    //ui->humidity_6_2->display(ui->humidity_6_1->intValue());                                //(rand()%40+40);
    ui->humidity_7_1->display(rand()%40+40);
    //ui->humidity_7_2->display(ui->humidity_7_1->intValue());                                //(rand()%40+40);
    ui->humidity_8_1->display(rand()%40+40);
    //ui->humidity_8_2->display(ui->humidity_8_1->intValue());                                //(rand()%40+40);
    ui->humidity_9_1->display(rand()%40+40);
    //ui->humidity_9_2->display(ui->humidity_9_1->intValue());                                //(rand()%40+40);
    ui->humidity_10_1->display(rand()%40+40);
    //ui->humidity_10_2->display(ui->humidity_10_1->intValue());                               //(rand()%40+40);
    ui->temperature_1_1->display(rand()%26+8);
    //ui->temperature_1_2->display(ui->temperature_1_1->intValue());                             //(rand()%23+13);
    ui->temperature_2_1->display(rand()%26+8);
    //ui->temperature_2_2->display(ui->temperature_2_1->intValue());                             //(rand()%23+13);
    ui->temperature_3_1->display(rand()%26+8);
    //ui->temperature_3_2->display(ui->temperature_3_1->intValue());                             //(rand()%23+13);
    ui->temperature_4_1->display(rand()%26+8);
    //ui->temperature_4_2->display(ui->temperature_4_1->intValue());                             //(rand()%23+13);
    ui->temperature_5_1->display(rand()%26+8);
    //ui->temperature_5_2->display(ui->temperature_5_1->intValue());                             //(rand()%23+13);
    ui->temperature_6_1->display(rand()%26+8);
    //ui->temperature_6_2->display(ui->temperature_6_1->intValue());                             //(rand()%23+13);
    ui->temperature_7_1->display(rand()%26+8);
    //ui->temperature_7_2->display(ui->temperature_7_1->intValue());                             //(rand()%23+13);
    ui->temperature_8_1->display(rand()%26+8);
    //ui->temperature_8_2->display(ui->temperature_8_1->intValue());                             //(rand()%23+13);
    ui->temperature_9_1->display(rand()%26+8);
    //ui->temperature_9_2->display(ui->temperature_9_1->intValue());                             //(rand()%23+13);
    ui->temperature_10_1->display(rand()%26+8);
    //ui->temperature_10_2->display(ui->temperature_10_1->intValue());                            //(rand()%23+13);
    dis_ok();
    warning_show();
    t1mer->start(2000);
}


void MainWindow::on_refresh_clicked()
{
   hide_all();
   go_Random();
}

int MainWindow::check_temperature(int n)
{
    if (n < 14)
        return 1;
    if (n > 27)
        return 2;
    if ((n >= 14) && (n <= 27))
        return 3;
}

int MainWindow::check_humidity(int n)
{
     if (n < 50)
         return 1;
     if (n > 70)
         return 2;
     if ((n >= 50) && (n <= 70))
         return 3;
}

void MainWindow::warning_show()
{
    switch (check_humidity(ui->humidity_1_1->intValue()))
    {
     case 2: ui->info_t1h->show(); break;
     case 1: ui->info_f1h->show(); break;
    }
    switch (check_humidity(ui->humidity_2_1->intValue()))
    {
      case 2: ui->info_t2h->show(); break;
      case 1: ui->info_f2h->show(); break;
    }
    switch (check_humidity(ui->humidity_3_1->intValue()))
    {
      case 2: ui->info_t3h->show(); break;
      case 1: ui->info_f3h->show(); break;
    }

    switch (check_humidity(ui->humidity_4_1->intValue()))
    {
      case 2: ui->info_t4h->show(); break;
      case 1: ui->info_f4h->show(); break;
    }
    switch (check_humidity(ui->humidity_5_1->intValue()))
    {
      case 2: ui->info_t5h->show(); break;
      case 1: ui->info_f5h->show(); break;
    }
    switch (check_humidity(ui->humidity_6_1->intValue()))
    {
      case 2: ui->info_t6h->show(); break;
      case 1: ui->info_f6h->show(); break;
    }

    switch (check_humidity(ui->humidity_7_1->intValue()))
    {
      case 2: ui->info_t7h->show(); break;
      case 1: ui->info_f7h->show(); break;
    }

    switch (check_humidity(ui->humidity_8_1->intValue()))
    {
      case 2: ui->info_t8h->show(); break;
      case 1: ui->info_f8h->show(); break;
    }

    switch (check_humidity(ui->humidity_9_1->intValue()))
    {
      case 2: ui->info_t9h->show(); break;
      case 1: ui->info_f9h->show(); break;
    }

    switch (check_humidity(ui->humidity_10_1->intValue()))
    {
      case 2: ui->info_t10h->show(); break;
      case 1: ui->info_f10h->show(); break;
    }
    switch (check_temperature(ui->temperature_1_1->intValue()))
    {
      case 2: ui->info_t1t->show(); break;
      case 1: ui->info_f1t->show(); break;
    }
    switch (check_temperature(ui->temperature_2_1->intValue()))
    {
      case 2: ui->info_t2t->show(); break;
      case 1: ui->info_f2t->show(); break;
    }
    switch (check_temperature(ui->temperature_3_1->intValue()))
    {
      case 2: ui->info_t3t->show(); break;
      case 1: ui->info_f3t->show(); break;
    }
    switch (check_temperature(ui->temperature_4_1->intValue()))
    {
      case 2: ui->info_t4t->show(); break;
      case 1: ui->info_f4t->show(); break;
    }
    switch (check_temperature(ui->temperature_5_1->intValue()))
    {
      case 2: ui->info_t5t->show(); break;
      case 1: ui->info_f5t->show(); break;
    }
    switch (check_temperature(ui->temperature_6_1->intValue()))
    {
      case 2: ui->info_t6t->show(); break;
      case 1: ui->info_f6t->show(); break;
    }
    switch (check_temperature(ui->temperature_7_1->intValue()))
    {
      case 2: ui->info_t7t->show(); break;
      case 1: ui->info_f7t->show(); break;
    }
    switch (check_temperature(ui->temperature_8_1->intValue()))
    {
      case 2: ui->info_t8t->show(); break;
      case 1: ui->info_f8t->show(); break;
    }
    switch (check_temperature(ui->temperature_9_1->intValue()))
    {
      case 2: ui->info_t9t->show(); break;
      case 1: ui->info_f9t->show(); break;
    }
    switch (check_temperature(ui->temperature_10_1->intValue()))
    {
      case 2: ui->info_t10t->show(); break;
      case 1: ui->info_f10t->show(); break;
    }
}

void MainWindow::hide_all()
{
    ui->info_t1h->hide(); ui->info_t1t->hide();
    ui->info_t2h->hide(); ui->info_t2t->hide();
    ui->info_t3h->hide(); ui->info_t3t->hide();
    ui->info_t4h->hide(); ui->info_t4t->hide();
    ui->info_t5h->hide(); ui->info_t5t->hide();
    ui->info_t6h->hide(); ui->info_t6t->hide();
    ui->info_t7h->hide(); ui->info_t7t->hide();
    ui->info_t8h->hide(); ui->info_t8t->hide();
    ui->info_t9h->hide(); ui->info_t9t->hide();
    ui->info_t10h->hide(); ui->info_t10t->hide();

    ui->info_f1h->hide(); ui->info_f1t->hide();
    ui->info_f2h->hide(); ui->info_f2t->hide();
    ui->info_f3h->hide(); ui->info_f3t->hide();
    ui->info_f4h->hide(); ui->info_f4t->hide();
    ui->info_f5h->hide(); ui->info_f5t->hide();
    ui->info_f6h->hide(); ui->info_f6t->hide();
    ui->info_f7h->hide(); ui->info_f7t->hide();
    ui->info_f8h->hide(); ui->info_f8t->hide();
    ui->info_f9h->hide(); ui->info_f9t->hide();
    ui->info_f10h->hide(); ui->info_f10t->hide();
    ui->correction->hide();
}


void MainWindow::go_fuck_yourself()
{

    switch (check_humidity(ui->humidity_1_1->intValue()))
    {
     case 2: ui->humidity_1_1->display(ui->humidity_1_1->intValue()- 10); break;
     case 1: ui->humidity_1_1->display(ui->humidity_1_1->intValue()+ 10); break;
    }
    switch (check_humidity(ui->humidity_2_1->intValue()))
    {
      case 2: ui->humidity_2_1->display(ui->humidity_2_1->intValue()- 10); break;
      case 1: ui->humidity_2_1->display(ui->humidity_2_1->intValue()+ 10); break;
    }
    switch (check_humidity(ui->humidity_3_1->intValue()))
    {
      case 2: ui->humidity_3_1->display(ui->humidity_3_1->intValue()- 10); break;
      case 1: ui->humidity_3_1->display(ui->humidity_3_1->intValue()+ 10); break;
    }

    switch (check_humidity(ui->humidity_4_1->intValue()))
    {
      case 2: ui->humidity_4_1->display(ui->humidity_3_1->intValue()- 10); break;
      case 1: ui->humidity_4_1->display(ui->humidity_3_1->intValue()+ 10); break;
    }
    switch (check_humidity(ui->humidity_5_1->intValue()))
    {
      case 2: ui->humidity_5_1->display(ui->humidity_5_1->intValue()- 10); break;
      case 1: ui->humidity_5_1->display(ui->humidity_5_1->intValue()+ 10); break;
    }
    switch (check_humidity(ui->humidity_6_1->intValue()))
    {
      case 2: ui->humidity_6_1->display(ui->humidity_6_1->intValue()- 10); break;
      case 1: ui->humidity_6_1->display(ui->humidity_6_1->intValue()+ 10); break;
    }

    switch (check_humidity(ui->humidity_7_1->intValue()))
    {
      case 2: ui->humidity_7_1->display(ui->humidity_7_1->intValue()- 10); break;
      case 1: ui->humidity_7_1->display(ui->humidity_7_1->intValue()+ 10); break;
    }

    switch (check_humidity(ui->humidity_8_1->intValue()))
    {
      case 2: ui->humidity_8_1->display(ui->humidity_8_1->intValue()- 10); break;
      case 1: ui->humidity_8_1->display(ui->humidity_8_1->intValue()+ 10); break;
    }

    switch (check_humidity(ui->humidity_9_1->intValue()))
    {
      case 2: ui->humidity_9_1->display(ui->humidity_9_1->intValue()- 10); break;
      case 1: ui->humidity_9_1->display(ui->humidity_9_1->intValue()+ 10); break;
    }

    switch (check_humidity(ui->humidity_10_1->intValue()))
    {
      case 2: ui->humidity_10_1->display(ui->humidity_10_1->intValue()- 10); break;
      case 1: ui->humidity_10_1->display(ui->humidity_10_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_1_1->intValue()))
    {
      case 2: ui->temperature_1_1->display(ui->temperature_1_1->intValue()- 10); break;
      case 1: ui->temperature_1_1->display(ui->temperature_1_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_2_1->intValue()))
    {
      case 2: ui->temperature_2_1->display(ui->temperature_2_1->intValue()- 10); break;
      case 1: ui->temperature_2_1->display(ui->temperature_2_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_3_1->intValue()))
    {
      case 2: ui->temperature_3_1->display(ui->temperature_3_1->intValue()- 10); break;
      case 1: ui->temperature_3_1->display(ui->temperature_3_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_4_1->intValue()))
    {
      case 2: ui->temperature_4_1->display(ui->temperature_4_1->intValue()- 10); break;
      case 1: ui->temperature_4_1->display(ui->temperature_4_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_5_1->intValue()))
    {
      case 2: ui->temperature_5_1->display(ui->temperature_5_1->intValue()- 10); break;
      case 1: ui->temperature_5_1->display(ui->temperature_5_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_6_1->intValue()))
    {
      case 2: ui->temperature_6_1->display(ui->temperature_6_1->intValue()- 10); break;
      case 1: ui->temperature_6_1->display(ui->temperature_6_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_7_1->intValue()))
    {
      case 2: ui->temperature_7_1->display(ui->temperature_7_1->intValue()- 10); break;
      case 1: ui->temperature_7_1->display(ui->temperature_7_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_8_1->intValue()))
    {
      case 2: ui->temperature_8_1->display(ui->temperature_8_1->intValue()- 10); break;
      case 1: ui->temperature_8_1->display(ui->temperature_8_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_9_1->intValue()))
    {
      case 2: ui->temperature_9_1->display(ui->temperature_9_1->intValue()- 10); break;
      case 1: ui->temperature_9_1->display(ui->temperature_9_1->intValue()+ 10); break;
    }
    switch (check_temperature(ui->temperature_10_1->intValue()))
    {
      case 2: ui->temperature_10_1->display(ui->temperature_10_1->intValue()- 10); break;
      case 1: ui->temperature_10_1->display(ui->temperature_10_1->intValue()+ 10); break;
    }
    dis_ok();
    hide_all();
}

void MainWindow::dis_ok()
{
    ui->humidity_1_2->display(ui->humidity_1_1->intValue());
    ui->humidity_2_2->display(ui->humidity_2_1->intValue());
    ui->humidity_3_2->display(ui->humidity_3_1->intValue());
    ui->humidity_4_2->display(ui->humidity_4_1->intValue());
    ui->humidity_5_2->display(ui->humidity_5_1->intValue());
    ui->humidity_6_2->display(ui->humidity_6_1->intValue());
    ui->humidity_7_2->display(ui->humidity_7_1->intValue());
    ui->humidity_8_2->display(ui->humidity_8_1->intValue());
    ui->humidity_9_2->display(ui->humidity_9_1->intValue());
    ui->humidity_10_2->display(ui->humidity_10_1->intValue());
    ui->temperature_1_2->display(ui->temperature_1_1->intValue());
    ui->temperature_2_2->display(ui->temperature_2_1->intValue());
    ui->temperature_3_2->display(ui->temperature_3_1->intValue());
    ui->temperature_5_2->display(ui->temperature_5_1->intValue());
    ui->temperature_4_2->display(ui->temperature_4_1->intValue());
    ui->temperature_6_2->display(ui->temperature_6_1->intValue());
    ui->temperature_7_2->display(ui->temperature_7_1->intValue());
    ui->temperature_8_2->display(ui->temperature_8_1->intValue());
    ui->temperature_9_2->display(ui->temperature_9_1->intValue());
    ui->temperature_10_2->display(ui->temperature_10_1->intValue());
}


void MainWindow::update()
{
    ui->correction->show();
    QTimer::singleShot(3000, this, SLOT(get_info()));
    t1mer->stop();
}

void MainWindow::get_info()
{
    go_fuck_yourself();
    ui->correction->hide();
}
