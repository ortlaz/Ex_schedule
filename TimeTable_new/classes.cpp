#include "classes.h"
#include "ui_classes.h"
#include "menu.h"

Classes::Classes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Classes)
{
    ui->setupUi(this);

    connect(ui->action, &QAction::triggered, this, &Classes::closed);
    connect(ui->action_2, &QAction::triggered, this, &Classes::Exit);
}

Classes::~Classes()
{
    delete ui;
}
void Classes::ShowClass(QString txt)
{

 ui->Auditories->setText(txt);

}
void Classes::closed()//закрываем окно
{
    close();
}
void Classes::Exit()//закрываем окно
{
    exit(0);
}
