#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"
#include "classes.h"



Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);


   connect(ui->change_class_2, &QPushButton::clicked, this, &Menu::changer);
   connect(ui->save_2, &QPushButton::clicked, this, &Menu::SaveData);
   connect(ui->open_2, &QPushButton::clicked, this, &Menu::OutSaved);
   connect(ui->exit_2, &QAction::triggered, this, &Menu::on_exit_2_triggered);
   connect(ui->free_class, &QPushButton::clicked, this, &Menu::activeButton);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::setHeadline(QString text)
{
    ui->lineEdit->setText(text); //запись названия группы на форму
}

void Menu::InputList()
{
    //1ая неделя
    for(int i=0;i<ui->week1_2->rowCount();i++) //пробег ячейкам таблицы
    {
        for(int j=0;j<ui->week1_2->columnCount();j++)
        {
            if (ui->week1_2->item(i,j)==0) //если ячейка пуста, записываем в массив "?"
            {
                Base[i][i]='?';
            }else
            Base[i][j]=ui->week1_2->item(i,j)->text(); //в ином случае записывает значение

        }
    }
    //2ая неделя
    for(int i=0;i<ui->week2_2->rowCount();i++)
    {
        for(int j=0;j<ui->week2_2->columnCount();j++)
        {
            if (ui->week2_2->item(i,j)==0)
            {
                Base[i+7][i]='?';
            }else
            Base[i+7][j]=ui->week2_2->item(i,j)->text();
        }
    }
    //3я неделя
    for(int i=0;i<ui->week3_2->rowCount();i++)
    {
        for(int j=0;j<ui->week3_2->columnCount();j++)
            if (ui->week3_2->item(i,j)==0)
            {
                Base[i+14][i]='?';
            }else
        {
            Base[i+14][j]=ui->week3_2->item(i,j)->text();
        }
    }
    //4ая неделя
    for(int i=0;i<ui->week1_2->rowCount();i++)
    {
        for(int j=0;j<ui->week4_2->columnCount();j++)
        {
            if (ui->week4_2->item(i,j)==0)
            {
                Base[i+21][i]='?';
            }else
            Base[i+21][j]=ui->week4_2->item(i,j)->text();
        }
    }
    //5ая неделя
    for(int i=0;i<ui->week5_2->rowCount();i++)
    {
        for(int j=0;j<ui->week5_2->columnCount();j++)
        {
            if (ui->week5_2->item(i,j)==0)
            {
                Base[i+28][i]='?';
            }else
            Base[i+28][j]=ui->week5_2->item(i,j)->text();
        }
    }

}

void Menu::SaveData()
{


    try{
       this->Menu::InputList();

        QFile new_file("C:/Users/Lenovo/Documents/1)My kursach/TimeTable_new/Group"+ui->lineEdit->text()+".txt");

            //удаляем старые данные, если они есть
            if(new_file.size() != 0)
        {
             if (new_file.open(QIODevice::WriteOnly | QIODevice::Text))
            new_file.close();
        }
            if(new_file.open(QIODevice::WriteOnly|QIODevice::Append))
            {

             //записываем новые
              QTextStream out(&new_file);

              //записываем каждую строку из массива в файл построчно,разделяя данные из яеек символом "/"
              for(int i=0;i<35;i++)
              {
                  for(int j=0;j<6;j++)
                  {
                 out<<Base[i][j]<<'/';
                  }
                  out<<"\r\n";
              }
           new_file.close();
        }else throw 112;

         QMessageBox::information(this," ","Данные сохранены"); //информируем пользователя об успешной записи
    }
    catch(int i)
    {
         QMessageBox::critical(this,"!Ошибка!","Не удалось открыть файл для записи");
    }
}

void Menu::OutSaved()
{
    this->Menu::OutputList();

    for(int i =0; i<7;i++)
    {
        for(int j=0;j<6;j++)
        {
            //1-ая таблица
            QTableWidgetItem *item1 = new QTableWidgetItem();

            item1->setText(Base[i][j]);
            ui->week1_2->setItem(i,j,item1);//записываем данные в таблицу

            //2-ая таблица
            QTableWidgetItem *item2 = new QTableWidgetItem();

            item2->setText(Base[i+7][j]);
            ui->week2_2->setItem(i,j,item2);

            //3-ая таблица
            QTableWidgetItem *item3 = new QTableWidgetItem();

            item3->setText(Base[i+14][j]);
            ui->week3_2->setItem(i,j,item3);

            //4-ая таблица
            QTableWidgetItem *item4 = new QTableWidgetItem();

            item4->setText(Base[i+21][j]);
            ui->week4_2->setItem(i,j,item4);

            //5-ая таблица
            QTableWidgetItem *item5 = new QTableWidgetItem();

            item5->setText(Base[i+28][j]);
            ui->week5_2->setItem(i,j,item5);
     }

    }
}

void Menu::OutputList()
{
    try{

            QFile myfile("C:/Users/Lenovo/Documents/1)My kursach/TimeTable_new/Group"+ui->lineEdit->text()+".txt");
            QStringList help; //лист для записи данных без разделительного символа
            QString str; //переменная для записи строки из файла
            int j=0, index=0,i=0;

              if(myfile.size() != 0) //если файл не пуст
              {
            if((myfile.exists())&&(myfile.open(QIODevice::ReadOnly)))
            {

                QTextStream stream(&myfile);

                while (!stream.atEnd()&&(i<35)) //считываем данные построчно доконца файла
                   {
                          str = stream.readLine();
                          help = str.split("/"); //убираем разделительные символ

                          while(j<6&&index<7) //пробегаемся по столбцам массива и элементам листа
                          {
                              if(help[index]=="?") //если встретился "?", записываем в массив пробел
                              {
                                  Base[i][j]=" ";
                              }else
                              {
                              Base[i][j]=help[index]; //в ином случае записываем данные
                              }
                              j++;index++;

                          }j=0;i++; help.clear();index=0;

                   }
            }


    }else throw 2;
    }
    catch(int i)
    {
         QMessageBox::critical(this,"!Ошибка!","Не удалось открыть файл");
    }

}

int Menu::Tcheck(int from,int to)
{
    if(from<to) //если начальное время меньше конечного
    return 1;
      else
    return 0;
}

void Menu::timeget()
{
    Audit.clear();
    QTime time=ui->timeFrom->time(); //считываем с формы введенное пользователем время
    int timef;
    timef=time.hour()*60+time.minute(); //переводим его целочисленный тип данных

    time=ui->timeTo->time();
    int timeto;
    timeto=time.hour()*60+time.minute();

    if(Tcheck(timef,timeto)) //если время введено правильно
    {
        if (selectweek()>0 && selectweek()<6) //если номер недели введен верно
        {
        for(int i=0;i<7;i++) //пробегаемся по строкам массива
        {
            //1ая неделя
           if(selectweek()==1){
            if ((Base[i][4] !=0)&&(Base[i][4]!=" ")) //если ячейка массива содержит значение
            {
                //переводим время проведения экзамена в целочисленный тип данных
           int Tfrom=(Base[i][4].mid(0,2).toInt(0,10))*60 + Base[i][4].mid(3,2).toInt(0,10);
           int Tto=(Base[i][4].mid(6,2).toInt(0,10))*60+ Base[i][4].mid(9,2).toInt(0,10);
           //проверяем, свободна ли аудитория в заданное пользователем время
              if((Tcheck(timef,Tfrom)&&!Tcheck(timeto,Tfrom))||(Tcheck(timef,Tto)&&Tcheck(timeto,Tto)))
           {
               Audit.push_back(Base[i][5]); //если нет, то записываем её в лист
          }
        }
            //2ая неделя
           }else if(selectweek()==2)
           {

               if ((Base[i+7][4] !=0)&&(Base[i+7][4]!=" "))
               {
               int Tfrom=(Base[i+7][4].mid(0,2).toInt(0,10))*60 + Base[i+7][4].mid(3,2).toInt(0,10);
               int Tto=(Base[i+7][4].mid(6,2).toInt(0,10))*60+ Base[i+7][4].mid(9,2).toInt(0,10);
                  if((Tcheck(timef,Tfrom)&&!Tcheck(timeto,Tfrom))||(Tcheck(timef,Tto)&&Tcheck(timeto,Tto)))
               {
                   Audit.push_back(Base[i+7][5]);
              }
               }
               //3я неделя
           }else if (selectweek()==3)
           {
               if ((Base[i+14][4] !=0)&&(Base[i+14][4]!=" "))
               {
               int Tfrom=(Base[i+14][4].mid(0,2).toInt(0,10))*60 + Base[i+14][4].mid(3,2).toInt(0,10);
               int Tto=(Base[i+14][4].mid(6,2).toInt(0,10))*60+ Base[i+14][4].mid(9,2).toInt(0,10);
                  if((Tcheck(timef,Tfrom)&&!Tcheck(timeto,Tfrom))||(Tcheck(timef,Tto)&&Tcheck(timeto,Tto)))
               {
                   Audit.push_back(Base[i+14][5]);
              }
               }
               //4ая неделя
           }else if (selectweek()==4)
           {
               if ((Base[i+21][4] !=0)&&(Base[i+21][4]!=" "))
               {
               int Tfrom=(Base[i+21][4].mid(0,2).toInt(0,10))*60 + Base[i+21][4].mid(3,2).toInt(0,10);
               int Tto=(Base[i+21][4].mid(6,2).toInt(0,10))*60+ Base[i+21][4].mid(9,2).toInt(0,10);
                  if((Tcheck(timef,Tfrom)&&!Tcheck(timeto,Tfrom))||(Tcheck(timef,Tto)&&Tcheck(timeto,Tto)))
               {
                   Audit.push_back(Base[i+21][5]);
              }
               }
               //5ая неделя
           }else if (selectweek()==5)
           {
               if ((Base[i+28][4] !=0)&&(Base[i+28][4]!=" "))
               {
               int Tfrom=(Base[i+28][4].mid(0,2).toInt(0,10))*60 + Base[i+28][4].mid(3,2).toInt(0,10);
               int Tto=(Base[i+28][4].mid(6,2).toInt(0,10))*60+ Base[i+28][4].mid(9,2).toInt(0,10);
                  if((Tcheck(timef,Tfrom)&&!Tcheck(timeto,Tfrom))||(Tcheck(timef,Tto)&&Tcheck(timeto,Tto)))
               {
                   Audit.push_back(Base[i+28][5]);
              }
               }
           }
      }
        }else return;
   }else QMessageBox::critical(this,"ОШИБКА","Введите время правильно");
}

void Menu::OutClass()
{

    try{
        this->Menu::timeget();
            QFile file1("C:/Users/Lenovo/Documents/1)My kursach/TimeTable_new/Class.txt");
            QString line=0; //переменная для строки, содержащей список свободных аудиторий
            QString cl; //переменная для полученной строки из файла
            int i=0;

            if((file1.exists())&&(file1.open(QIODevice::ReadOnly)))
            {

                QTextStream stream1(&file1);

                 //считываем данные построчно до конца файла
                while (!stream1.atEnd())
                   {
                   cl=stream1.readLine();

                    if(!Audit.empty()) //если список занятых аудиторий не пуст
                    {
                 while(i<Audit.size())
                    {
                    if(cl.mid(2,2)!=Audit[i].mid(2,2)) //если аудитория из списка, совпадает с занятой
                    {                        
                     line+=cl+"\n"; //записываем в строку номаер аудитории через ввод
                    }i++;
                 }i=0;
                }else {throw 411;
                   return;}

                } file1.close();
                //через объект класса вызываем окно со списком аудиторий
                Classes *obj=new Classes;
                obj->ShowClass(line);
                obj->show();
            } else  throw 404;


    }

    catch(int i){
        if (i==404)
        QMessageBox::critical(this,"!Ошибка!","Файл не найден");
        else if (i==411)
        QMessageBox::critical(this,"!Ошибка!","Введите данные правильно");
    }

}

void Menu::activeButton()
{

     this->Menu::OutClass();

}

void Menu::on_exit_2_triggered()
{
    close();
}

void Menu::changer()
{
    //подготавливаем массив для записи новых данных
    for(int i=0;i<35;i++)
    {
        for(int j=0;j<6;j++)
        {
            Base[i][j]="";
        }
     }
        // открываем стартовое окно
        MainWindow *new_groupe = new MainWindow();
        new_groupe->show();
        close();
}

int Menu::selectweek()
{
    QString a=ui->weeknum->text(); //считываем введенный пользователем текст

    //если номер недели введен правильно, возвращаем его, в противном случае выдаём ошибку
    if ((ui->weeknum->text()!="1")&&(ui->weeknum->text()!="2")&&(ui->weeknum->text()!="3")&&(ui->weeknum->text()!="4")&&(ui->weeknum->text()!="5"))
    {
        QMessageBox::critical(this,"Ошибка","Введите номер недели правильно");return 0;

    }else  return a.toInt(0,10);

}
