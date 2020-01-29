#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
//#include <QDebug>
#include <QUrl>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //связь сигналов и слотов
   connect(ui->actionVK_2, &QAction::triggered, this, &MainWindow::link);
   connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onClick);
    connect(ui->exitButton, &QPushButton::clicked, this, &MainWindow::onExit);
 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onClick()//проверка группы
{
    try{

            QFile file("C:/Users/Lenovo/Documents/1)My kursach/TimeTable_new/GroupEnter.txt");
            QString group=""; //переменная для стчитывания строка из файла
          if(ui->lineEdit->text() != "")//проверка ввода данных
            {
                if((file.exists())&&(file.open(QIODevice::ReadOnly)))
                {
                    QTextStream stream(&file);

                    while (!stream.atEnd()) //считываем данные до конца файла
                       {
                           group = stream.readLine(); //считываем по строке

                           if(group==ui->lineEdit->text()+";") //ищем введенную группу в файле
                           {
                               QMessageBox::information(this,"Поиск группы...", "Группа найдена");
                               flag=1;

                               Menu *menu = new Menu;
                               menu->show();//выводим окно с расписанием
                               menu->setHeadline(ui->lineEdit->text());//передаем форме с расписанием название группы
                               close();
                           }
                       }
                    if(!flag){
                        QMessageBox::critical(this,"Поиск группы...", "Ошибка: группа не найдена.");
                    }
                    file.close(); //закрываем файл
                }else{
                    throw 1;
                }
            }else
            {
                QMessageBox::critical(this,"Поиск группы...", "Ошибка: пожалуйста введите группу.");
            }

    }
    catch(int i)
    {
         QMessageBox::critical(this,"!Ошибка!","Не удалось открыть файл GroupEnter.txt");
    }
}


void MainWindow::link()
{
    try{
        if(!QDesktopServices::openUrl(QUrl("https://vk.com/id442156396"))) //если ссылка не активна
        {
            throw 911;
        }
    }
    catch(int i){
        QMessageBox::critical(this, "!Ошибка!" + QString::number(i), "Ссылка неактивна.");
    }

}

void MainWindow::onExit()
{
    exit(0); //выход
}


