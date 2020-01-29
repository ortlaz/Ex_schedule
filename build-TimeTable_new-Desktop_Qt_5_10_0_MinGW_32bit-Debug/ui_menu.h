/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QAction *exit_2;
    QAction *action;
    QWidget *centralwidget;
    QTimeEdit *timeFrom;
    QTimeEdit *timeTo;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *week1_2;
    QTableWidget *week2_2;
    QTableWidget *week3_2;
    QTableWidget *week4_2;
    QTableWidget *week5_2;
    QLabel *label_2;
    QPushButton *free_class;
    QLabel *label;
    QLabel *lineEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *change_class_2;
    QPushButton *save_2;
    QPushButton *open_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *weeknum;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(818, 917);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy);
        Menu->setMaximumSize(QSize(818, 917));
        Menu->setAutoFillBackground(false);
        exit_2 = new QAction(Menu);
        exit_2->setObjectName(QStringLiteral("exit_2"));
        action = new QAction(Menu);
        action->setObjectName(QStringLiteral("action"));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        timeFrom = new QTimeEdit(centralwidget);
        timeFrom->setObjectName(QStringLiteral("timeFrom"));
        timeFrom->setGeometry(QRect(620, 420, 118, 25));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        timeFrom->setFont(font);
        timeTo = new QTimeEdit(centralwidget);
        timeTo->setObjectName(QStringLiteral("timeTo"));
        timeTo->setGeometry(QRect(620, 470, 118, 25));
        timeTo->setFont(font);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 541, 871));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        week1_2 = new QTableWidget(verticalLayoutWidget);
        if (week1_2->columnCount() < 6)
            week1_2->setColumnCount(6);
        QBrush brush(QColor(134, 231, 207, 255));
        brush.setStyle(Qt::SolidPattern);
        QFont font1;
        font1.setFamily(QStringLiteral("Tahoma"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setStyleStrategy(QFont::PreferDefault);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        __qtablewidgetitem->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem->setForeground(brush);
        week1_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font2;
        font2.setFamily(QStringLiteral("Tahoma"));
        font2.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        __qtablewidgetitem1->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem1->setForeground(brush);
        week1_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        __qtablewidgetitem2->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem2->setForeground(brush);
        week1_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        __qtablewidgetitem3->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem3->setForeground(brush);
        week1_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        __qtablewidgetitem4->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem4->setForeground(brush);
        week1_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font2);
        __qtablewidgetitem5->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem5->setForeground(brush);
        week1_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (week1_2->rowCount() < 6)
            week1_2->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setForeground(brush);
        week1_2->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setForeground(brush);
        week1_2->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setForeground(brush);
        week1_2->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setForeground(brush);
        week1_2->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setForeground(brush);
        week1_2->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setForeground(brush);
        week1_2->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::NoBrush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setBackground(brush2);
        __qtablewidgetitem12->setForeground(brush1);
        week1_2->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        week1_2->setItem(0, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        week1_2->setItem(3, 4, __qtablewidgetitem14);
        week1_2->setObjectName(QStringLiteral("week1_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        week1_2->setFont(font3);
        week1_2->setLayoutDirection(Qt::LeftToRight);
        week1_2->setAutoFillBackground(false);
        week1_2->setStyleSheet(QLatin1String("background-color: rgb(84, 179, 152);\n"
"\n"
"font: 9pt \"Arial\";"));
        week1_2->setFrameShape(QFrame::StyledPanel);
        week1_2->setFrameShadow(QFrame::Raised);
        week1_2->setMidLineWidth(-1);
        week1_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        week1_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        week1_2->setGridStyle(Qt::SolidLine);

        verticalLayout_4->addWidget(week1_2);

        week2_2 = new QTableWidget(verticalLayoutWidget);
        if (week2_2->columnCount() < 6)
            week2_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font1);
        __qtablewidgetitem15->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem15->setForeground(brush);
        week2_2->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font2);
        __qtablewidgetitem16->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem16->setForeground(brush);
        week2_2->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font2);
        __qtablewidgetitem17->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem17->setForeground(brush);
        week2_2->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFont(font2);
        __qtablewidgetitem18->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem18->setForeground(brush);
        week2_2->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFont(font2);
        __qtablewidgetitem19->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem19->setForeground(brush);
        week2_2->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font2);
        __qtablewidgetitem20->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem20->setForeground(brush);
        week2_2->setHorizontalHeaderItem(5, __qtablewidgetitem20);
        if (week2_2->rowCount() < 6)
            week2_2->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setForeground(brush);
        week2_2->setVerticalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setForeground(brush);
        week2_2->setVerticalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setForeground(brush);
        week2_2->setVerticalHeaderItem(2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setForeground(brush);
        week2_2->setVerticalHeaderItem(3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setForeground(brush);
        week2_2->setVerticalHeaderItem(4, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setForeground(brush);
        week2_2->setVerticalHeaderItem(5, __qtablewidgetitem26);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::NoBrush);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setBackground(brush4);
        __qtablewidgetitem27->setForeground(brush3);
        week2_2->setItem(0, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        week2_2->setItem(0, 3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        week2_2->setItem(3, 4, __qtablewidgetitem29);
        week2_2->setObjectName(QStringLiteral("week2_2"));
        week2_2->setFont(font3);
        week2_2->setLayoutDirection(Qt::LeftToRight);
        week2_2->setAutoFillBackground(false);
        week2_2->setStyleSheet(QLatin1String("background-color: rgb(84, 179, 152);\n"
"\n"
"font: 9pt \"Arial\";"));
        week2_2->setFrameShape(QFrame::StyledPanel);
        week2_2->setFrameShadow(QFrame::Raised);
        week2_2->setMidLineWidth(-1);
        week2_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        week2_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        week2_2->setGridStyle(Qt::SolidLine);

        verticalLayout_4->addWidget(week2_2);

        week3_2 = new QTableWidget(verticalLayoutWidget);
        if (week3_2->columnCount() < 6)
            week3_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFont(font1);
        __qtablewidgetitem30->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem30->setForeground(brush);
        week3_2->setHorizontalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setFont(font2);
        __qtablewidgetitem31->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem31->setForeground(brush);
        week3_2->setHorizontalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setFont(font2);
        __qtablewidgetitem32->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem32->setForeground(brush);
        week3_2->setHorizontalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFont(font2);
        __qtablewidgetitem33->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem33->setForeground(brush);
        week3_2->setHorizontalHeaderItem(3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFont(font2);
        __qtablewidgetitem34->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem34->setForeground(brush);
        week3_2->setHorizontalHeaderItem(4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setFont(font2);
        __qtablewidgetitem35->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem35->setForeground(brush);
        week3_2->setHorizontalHeaderItem(5, __qtablewidgetitem35);
        if (week3_2->rowCount() < 6)
            week3_2->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setForeground(brush);
        week3_2->setVerticalHeaderItem(0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setForeground(brush);
        week3_2->setVerticalHeaderItem(1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setForeground(brush);
        week3_2->setVerticalHeaderItem(2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setForeground(brush);
        week3_2->setVerticalHeaderItem(3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setForeground(brush);
        week3_2->setVerticalHeaderItem(4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setForeground(brush);
        week3_2->setVerticalHeaderItem(5, __qtablewidgetitem41);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::NoBrush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setBackground(brush6);
        __qtablewidgetitem42->setForeground(brush5);
        week3_2->setItem(0, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        week3_2->setItem(0, 3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        week3_2->setItem(3, 4, __qtablewidgetitem44);
        week3_2->setObjectName(QStringLiteral("week3_2"));
        week3_2->setFont(font3);
        week3_2->setLayoutDirection(Qt::LeftToRight);
        week3_2->setAutoFillBackground(false);
        week3_2->setStyleSheet(QLatin1String("background-color: rgb(84, 179, 152);\n"
"\n"
"font: 9pt \"Arial\";"));
        week3_2->setFrameShape(QFrame::StyledPanel);
        week3_2->setFrameShadow(QFrame::Raised);
        week3_2->setMidLineWidth(-1);
        week3_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        week3_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        week3_2->setGridStyle(Qt::SolidLine);

        verticalLayout_4->addWidget(week3_2);

        week4_2 = new QTableWidget(verticalLayoutWidget);
        if (week4_2->columnCount() < 6)
            week4_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setFont(font1);
        __qtablewidgetitem45->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem45->setForeground(brush);
        week4_2->setHorizontalHeaderItem(0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setFont(font2);
        __qtablewidgetitem46->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem46->setForeground(brush);
        week4_2->setHorizontalHeaderItem(1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setFont(font2);
        __qtablewidgetitem47->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem47->setForeground(brush);
        week4_2->setHorizontalHeaderItem(2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setFont(font2);
        __qtablewidgetitem48->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem48->setForeground(brush);
        week4_2->setHorizontalHeaderItem(3, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setFont(font2);
        __qtablewidgetitem49->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem49->setForeground(brush);
        week4_2->setHorizontalHeaderItem(4, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setFont(font2);
        __qtablewidgetitem50->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem50->setForeground(brush);
        week4_2->setHorizontalHeaderItem(5, __qtablewidgetitem50);
        if (week4_2->rowCount() < 6)
            week4_2->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setForeground(brush);
        week4_2->setVerticalHeaderItem(0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setForeground(brush);
        week4_2->setVerticalHeaderItem(1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setForeground(brush);
        week4_2->setVerticalHeaderItem(2, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setForeground(brush);
        week4_2->setVerticalHeaderItem(3, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setForeground(brush);
        week4_2->setVerticalHeaderItem(4, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setForeground(brush);
        week4_2->setVerticalHeaderItem(5, __qtablewidgetitem56);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::NoBrush);
        QBrush brush8(QColor(255, 255, 255, 255));
        brush8.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setBackground(brush8);
        __qtablewidgetitem57->setForeground(brush7);
        week4_2->setItem(0, 0, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        week4_2->setItem(0, 3, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        week4_2->setItem(3, 4, __qtablewidgetitem59);
        week4_2->setObjectName(QStringLiteral("week4_2"));
        week4_2->setFont(font3);
        week4_2->setLayoutDirection(Qt::LeftToRight);
        week4_2->setAutoFillBackground(false);
        week4_2->setStyleSheet(QLatin1String("background-color: rgb(84, 179, 152);\n"
"\n"
"font: 9pt \"Arial\";"));
        week4_2->setFrameShape(QFrame::StyledPanel);
        week4_2->setFrameShadow(QFrame::Raised);
        week4_2->setMidLineWidth(-1);
        week4_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        week4_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        week4_2->setGridStyle(Qt::SolidLine);

        verticalLayout_4->addWidget(week4_2);

        week5_2 = new QTableWidget(verticalLayoutWidget);
        if (week5_2->columnCount() < 6)
            week5_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setFont(font1);
        __qtablewidgetitem60->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem60->setForeground(brush);
        week5_2->setHorizontalHeaderItem(0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setFont(font2);
        __qtablewidgetitem61->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem61->setForeground(brush);
        week5_2->setHorizontalHeaderItem(1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setFont(font2);
        __qtablewidgetitem62->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem62->setForeground(brush);
        week5_2->setHorizontalHeaderItem(2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setFont(font2);
        __qtablewidgetitem63->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem63->setForeground(brush);
        week5_2->setHorizontalHeaderItem(3, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setFont(font2);
        __qtablewidgetitem64->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem64->setForeground(brush);
        week5_2->setHorizontalHeaderItem(4, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setFont(font2);
        __qtablewidgetitem65->setBackground(QColor(68, 68, 68));
        __qtablewidgetitem65->setForeground(brush);
        week5_2->setHorizontalHeaderItem(5, __qtablewidgetitem65);
        if (week5_2->rowCount() < 6)
            week5_2->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setForeground(brush);
        week5_2->setVerticalHeaderItem(0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setForeground(brush);
        week5_2->setVerticalHeaderItem(1, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setForeground(brush);
        week5_2->setVerticalHeaderItem(2, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setForeground(brush);
        week5_2->setVerticalHeaderItem(3, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setForeground(brush);
        week5_2->setVerticalHeaderItem(4, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setForeground(brush);
        week5_2->setVerticalHeaderItem(5, __qtablewidgetitem71);
        QBrush brush9(QColor(255, 255, 255, 255));
        brush9.setStyle(Qt::NoBrush);
        QBrush brush10(QColor(255, 255, 255, 255));
        brush10.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        __qtablewidgetitem72->setBackground(brush10);
        __qtablewidgetitem72->setForeground(brush9);
        week5_2->setItem(0, 0, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        week5_2->setItem(0, 3, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        week5_2->setItem(3, 4, __qtablewidgetitem74);
        week5_2->setObjectName(QStringLiteral("week5_2"));
        week5_2->setFont(font3);
        week5_2->setLayoutDirection(Qt::LeftToRight);
        week5_2->setAutoFillBackground(false);
        week5_2->setStyleSheet(QLatin1String("background-color: rgb(84, 179, 152);\n"
"\n"
"font: 9pt \"Arial\";"));
        week5_2->setFrameShape(QFrame::StyledPanel);
        week5_2->setFrameShadow(QFrame::Raised);
        week5_2->setMidLineWidth(-1);
        week5_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        week5_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        week5_2->setGridStyle(Qt::SolidLine);

        verticalLayout_4->addWidget(week5_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(610, 450, 55, 16));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(10);
        label_2->setFont(font4);
        free_class = new QPushButton(centralwidget);
        free_class->setObjectName(QStringLiteral("free_class"));
        free_class->setGeometry(QRect(580, 330, 201, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(free_class->sizePolicy().hasHeightForWidth());
        free_class->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setFamily(QStringLiteral("Times New Roman"));
        font5.setPointSize(11);
        free_class->setFont(font5);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(610, 400, 55, 16));
        label->setFont(font4);
        lineEdit = new QLabel(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(581, 21, 171, 51));
        lineEdit->setMaximumSize(QSize(16777208, 16777215));
        QFont font6;
        font6.setFamily(QStringLiteral("Times New Roman"));
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setItalic(true);
        font6.setWeight(75);
        lineEdit->setFont(font6);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(571, 101, 199, 201));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        change_class_2 = new QPushButton(verticalLayoutWidget_2);
        change_class_2->setObjectName(QStringLiteral("change_class_2"));
        change_class_2->setFont(font5);

        verticalLayout_5->addWidget(change_class_2);

        save_2 = new QPushButton(verticalLayoutWidget_2);
        save_2->setObjectName(QStringLiteral("save_2"));
        save_2->setFont(font5);

        verticalLayout_5->addWidget(save_2);

        open_2 = new QPushButton(verticalLayoutWidget_2);
        open_2->setObjectName(QStringLiteral("open_2"));
        open_2->setFont(font5);

        verticalLayout_5->addWidget(open_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-30, 0, 851, 911));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../Pictures/Menu/C0F2E6.jpg")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(610, 500, 141, 21));
        label_4->setFont(font4);
        weeknum = new QLineEdit(centralwidget);
        weeknum->setObjectName(QStringLiteral("weeknum"));
        weeknum->setGeometry(QRect(620, 530, 113, 24));
        Menu->setCentralWidget(centralwidget);
        label_3->raise();
        timeFrom->raise();
        timeTo->raise();
        verticalLayoutWidget->raise();
        label_2->raise();
        free_class->raise();
        label->raise();
        lineEdit->raise();
        verticalLayoutWidget_2->raise();
        label_4->raise();
        weeknum->raise();
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 818, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        Menu->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(exit_2);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\215\320\272\320\267\320\260\320\274\320\265\320\275\320\276\320\262", nullptr));
        exit_2->setText(QApplication::translate("Menu", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        action->setText(QApplication::translate("Menu", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem = week1_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Menu", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = week1_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = week1_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Menu", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \n"
"\320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = week1_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Menu", "\320\230\320\274\321\217\n"
"\320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = week1_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = week1_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Menu", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = week1_2->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("Menu", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = week1_2->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("Menu", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = week1_2->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("Menu", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = week1_2->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("Menu", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = week1_2->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("Menu", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = week1_2->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("Menu", "7", nullptr));

        const bool __sortingEnabled = week1_2->isSortingEnabled();
        week1_2->setSortingEnabled(false);
        week1_2->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem12 = week2_2->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("Menu", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = week2_2->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = week2_2->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("Menu", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \n"
"\320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = week2_2->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("Menu", "\320\230\320\274\321\217\n"
"\320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = week2_2->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = week2_2->horizontalHeaderItem(5);
        ___qtablewidgetitem17->setText(QApplication::translate("Menu", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = week2_2->verticalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("Menu", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = week2_2->verticalHeaderItem(1);
        ___qtablewidgetitem19->setText(QApplication::translate("Menu", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = week2_2->verticalHeaderItem(2);
        ___qtablewidgetitem20->setText(QApplication::translate("Menu", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = week2_2->verticalHeaderItem(3);
        ___qtablewidgetitem21->setText(QApplication::translate("Menu", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = week2_2->verticalHeaderItem(4);
        ___qtablewidgetitem22->setText(QApplication::translate("Menu", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = week2_2->verticalHeaderItem(5);
        ___qtablewidgetitem23->setText(QApplication::translate("Menu", "7", nullptr));

        const bool __sortingEnabled1 = week2_2->isSortingEnabled();
        week2_2->setSortingEnabled(false);
        week2_2->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem24 = week3_2->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("Menu", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = week3_2->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = week3_2->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("Menu", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \n"
"\320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = week3_2->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("Menu", "\320\230\320\274\321\217\n"
"\320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = week3_2->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = week3_2->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QApplication::translate("Menu", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = week3_2->verticalHeaderItem(0);
        ___qtablewidgetitem30->setText(QApplication::translate("Menu", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = week3_2->verticalHeaderItem(1);
        ___qtablewidgetitem31->setText(QApplication::translate("Menu", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = week3_2->verticalHeaderItem(2);
        ___qtablewidgetitem32->setText(QApplication::translate("Menu", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = week3_2->verticalHeaderItem(3);
        ___qtablewidgetitem33->setText(QApplication::translate("Menu", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = week3_2->verticalHeaderItem(4);
        ___qtablewidgetitem34->setText(QApplication::translate("Menu", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = week3_2->verticalHeaderItem(5);
        ___qtablewidgetitem35->setText(QApplication::translate("Menu", "7", nullptr));

        const bool __sortingEnabled2 = week3_2->isSortingEnabled();
        week3_2->setSortingEnabled(false);
        week3_2->setSortingEnabled(__sortingEnabled2);

        QTableWidgetItem *___qtablewidgetitem36 = week4_2->horizontalHeaderItem(0);
        ___qtablewidgetitem36->setText(QApplication::translate("Menu", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = week4_2->horizontalHeaderItem(1);
        ___qtablewidgetitem37->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = week4_2->horizontalHeaderItem(2);
        ___qtablewidgetitem38->setText(QApplication::translate("Menu", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \n"
"\320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = week4_2->horizontalHeaderItem(3);
        ___qtablewidgetitem39->setText(QApplication::translate("Menu", "\320\230\320\274\321\217\n"
"\320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = week4_2->horizontalHeaderItem(4);
        ___qtablewidgetitem40->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = week4_2->horizontalHeaderItem(5);
        ___qtablewidgetitem41->setText(QApplication::translate("Menu", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = week4_2->verticalHeaderItem(0);
        ___qtablewidgetitem42->setText(QApplication::translate("Menu", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = week4_2->verticalHeaderItem(1);
        ___qtablewidgetitem43->setText(QApplication::translate("Menu", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = week4_2->verticalHeaderItem(2);
        ___qtablewidgetitem44->setText(QApplication::translate("Menu", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = week4_2->verticalHeaderItem(3);
        ___qtablewidgetitem45->setText(QApplication::translate("Menu", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = week4_2->verticalHeaderItem(4);
        ___qtablewidgetitem46->setText(QApplication::translate("Menu", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = week4_2->verticalHeaderItem(5);
        ___qtablewidgetitem47->setText(QApplication::translate("Menu", "7", nullptr));

        const bool __sortingEnabled3 = week4_2->isSortingEnabled();
        week4_2->setSortingEnabled(false);
        week4_2->setSortingEnabled(__sortingEnabled3);

        QTableWidgetItem *___qtablewidgetitem48 = week5_2->horizontalHeaderItem(0);
        ___qtablewidgetitem48->setText(QApplication::translate("Menu", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = week5_2->horizontalHeaderItem(1);
        ___qtablewidgetitem49->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = week5_2->horizontalHeaderItem(2);
        ___qtablewidgetitem50->setText(QApplication::translate("Menu", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \n"
"\320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = week5_2->horizontalHeaderItem(3);
        ___qtablewidgetitem51->setText(QApplication::translate("Menu", "\320\230\320\274\321\217\n"
"\320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = week5_2->horizontalHeaderItem(4);
        ___qtablewidgetitem52->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = week5_2->horizontalHeaderItem(5);
        ___qtablewidgetitem53->setText(QApplication::translate("Menu", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = week5_2->verticalHeaderItem(0);
        ___qtablewidgetitem54->setText(QApplication::translate("Menu", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = week5_2->verticalHeaderItem(1);
        ___qtablewidgetitem55->setText(QApplication::translate("Menu", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = week5_2->verticalHeaderItem(2);
        ___qtablewidgetitem56->setText(QApplication::translate("Menu", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = week5_2->verticalHeaderItem(3);
        ___qtablewidgetitem57->setText(QApplication::translate("Menu", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = week5_2->verticalHeaderItem(4);
        ___qtablewidgetitem58->setText(QApplication::translate("Menu", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = week5_2->verticalHeaderItem(5);
        ___qtablewidgetitem59->setText(QApplication::translate("Menu", "7", nullptr));

        const bool __sortingEnabled4 = week5_2->isSortingEnabled();
        week5_2->setSortingEnabled(false);
        week5_2->setSortingEnabled(__sortingEnabled4);

        label_2->setText(QApplication::translate("Menu", "\320\224\320\276", nullptr));
        free_class->setText(QApplication::translate("Menu", "	  \320\235\320\265 \320\267\320\260\320\275\321\217\321\202\321\213\320\265 \320\263\321\200\321\203\320\277\320\277\320\276\320\271\n"
"\320\260\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\270", nullptr));
        label->setText(QApplication::translate("Menu", "\320\236\321\202", nullptr));
        lineEdit->setText(QApplication::translate("Menu", "<html><head/><body><p><span style=\" font-size:14pt; font-style:italic; color:#86e7cf;\">TextLabel </span></p></body></html>", nullptr));
        change_class_2->setText(QApplication::translate("Menu", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\203", nullptr));
        save_2->setText(QApplication::translate("Menu", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 ", nullptr));
        open_2->setText(QApplication::translate("Menu", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\200\320\260\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("Menu", "\320\235\320\276\320\274\320\265\321\200 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        menu->setTitle(QApplication::translate("Menu", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
