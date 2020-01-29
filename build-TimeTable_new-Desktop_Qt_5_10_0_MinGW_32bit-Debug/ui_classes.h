/********************************************************************************
** Form generated from reading UI file 'classes.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSES_H
#define UI_CLASSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Classes
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QLabel *Auditories;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Classes)
    {
        if (Classes->objectName().isEmpty())
            Classes->setObjectName(QStringLiteral("Classes"));
        Classes->resize(166, 547);
        Classes->setMaximumSize(QSize(166, 16777215));
        action = new QAction(Classes);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(Classes);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralwidget = new QWidget(Classes);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral("background-color: rgb(134, 207, 231);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 358, 456));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Auditories = new QLabel(scrollAreaWidgetContents_2);
        Auditories->setObjectName(QStringLiteral("Auditories"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(14);
        Auditories->setFont(font);
        Auditories->setPixmap(QPixmap(QString::fromUtf8("../Pictures/Menu/86cfe7.png")));
        Auditories->setScaledContents(true);

        gridLayout_2->addWidget(Auditories, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        Classes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Classes);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 166, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        Classes->setMenuBar(menubar);
        statusbar = new QStatusBar(Classes);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Classes->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(Classes);

        QMetaObject::connectSlotsByName(Classes);
    } // setupUi

    void retranslateUi(QMainWindow *Classes)
    {
        Classes->setWindowTitle(QApplication::translate("Classes", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\260\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\271, \320\275\320\265 \320\267\320\260\320\275\321\217\321\202\321\213\321\205 \320\263\321\200\321\203\320\277\320\277\320\276\320\271", nullptr));
        action->setText(QApplication::translate("Classes", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
        action_2->setText(QApplication::translate("Classes", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        Auditories->setText(QString());
        menu->setTitle(QApplication::translate("Classes", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Classes: public Ui_Classes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSES_H
