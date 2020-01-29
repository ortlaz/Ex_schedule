#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QString>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    bool flag=0;

    ~MainWindow();

private:


    Ui::MainWindow *ui;

    void link(); //активация ссылки на страницу разработчика
    void onClick(); //проверка группы
    void onExit(); //выход из программы

};

#endif // MAINWINDOW_H
