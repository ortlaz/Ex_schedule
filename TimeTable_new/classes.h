#ifndef CLASSES_H
#define CLASSES_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class Classes;
}

class Classes : public QMainWindow
{
    Q_OBJECT

public:
    explicit Classes(QWidget *parent = 0);

    ~Classes();

    void ShowClass(QString txt);

private:
    void closed();//закрываем окно
    void Exit();

    Ui::Classes *ui;
};

#endif // CLASSES_H
