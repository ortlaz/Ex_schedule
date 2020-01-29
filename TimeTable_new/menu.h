#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QString>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QList>
#include <QMessageBox>
#include <QTextStream>
#include <QString>
#include <QTextEdit>
#include <QTableWidget>
#include <QFile>
#include <QLabel>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

    QString Base[35][6]; //массив для хранения информации об экзаменах
    QList <QString> Audit; //лист для хранения свободных аудиторий

    void setHeadline(QString text); //получение названия группы из предыдущей формы
    void timeget(); //проверка наличия свободных аудиторий в заданный промежуток времени и запись их в лист
    void OutClass(); //вывод свободных аудиторий

private:
      void InputList(); //запись данных, введенных пользователем, в массив
      void SaveData(); //запись данных из массива в файл
      void OutputList(); //считывание последних сохранённых данных из файла в массив
      void OutSaved(); //вывод данных из массива в таблицу на форме
      void changer(); //смена группы
      void activeButton(); //вывод свобобных аудиторий
      int selectweek(); //проверка корректности ввода номера недели
      int Tcheck(int from,int to); //проверка корректности ввода времени
      void on_exit_2_triggered(); //выход из приложения
    
    Ui::Menu *ui;
};

#endif // MENU_H

