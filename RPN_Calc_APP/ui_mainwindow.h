/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *num_4;
    QPushButton *num_3;
    QPushButton *num_2;
    QPushButton *times_button;
    QPushButton *num_9;
    QPushButton *num_8;
    QPushButton *div_button;
    QPushButton *num_7;
    QPushButton *num_5;
    QPushButton *num_6;
    QPushButton *num_1;
    QPushButton *sub_button;
    QPushButton *decimal_button;
    QPushButton *num_0;
    QPushButton *equals_button;
    QPushButton *add_button;
    QLineEdit *Display;
    QPushButton *backSpace_button;
    QPushButton *all_clear_button;
    QPushButton *clear_button;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(450, 281);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        num_4 = new QPushButton(centralWidget);
        num_4->setObjectName(QStringLiteral("num_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(num_4->sizePolicy().hasHeightForWidth());
        num_4->setSizePolicy(sizePolicy);
        num_4->setLayoutDirection(Qt::LeftToRight);
        num_4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_4, 2, 1, 1, 1);

        num_3 = new QPushButton(centralWidget);
        num_3->setObjectName(QStringLiteral("num_3"));
        sizePolicy.setHeightForWidth(num_3->sizePolicy().hasHeightForWidth());
        num_3->setSizePolicy(sizePolicy);
        num_3->setLayoutDirection(Qt::LeftToRight);
        num_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_3, 3, 3, 1, 1);

        num_2 = new QPushButton(centralWidget);
        num_2->setObjectName(QStringLiteral("num_2"));
        sizePolicy.setHeightForWidth(num_2->sizePolicy().hasHeightForWidth());
        num_2->setSizePolicy(sizePolicy);
        num_2->setLayoutDirection(Qt::LeftToRight);
        num_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_2, 3, 2, 1, 1);

        times_button = new QPushButton(centralWidget);
        times_button->setObjectName(QStringLiteral("times_button"));
        sizePolicy.setHeightForWidth(times_button->sizePolicy().hasHeightForWidth());
        times_button->setSizePolicy(sizePolicy);
        times_button->setLayoutDirection(Qt::LeftToRight);
        times_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(times_button, 1, 4, 1, 1);

        num_9 = new QPushButton(centralWidget);
        num_9->setObjectName(QStringLiteral("num_9"));
        sizePolicy.setHeightForWidth(num_9->sizePolicy().hasHeightForWidth());
        num_9->setSizePolicy(sizePolicy);
        num_9->setLayoutDirection(Qt::LeftToRight);
        num_9->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_9, 1, 3, 1, 1);

        num_8 = new QPushButton(centralWidget);
        num_8->setObjectName(QStringLiteral("num_8"));
        sizePolicy.setHeightForWidth(num_8->sizePolicy().hasHeightForWidth());
        num_8->setSizePolicy(sizePolicy);
        num_8->setLayoutDirection(Qt::LeftToRight);
        num_8->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_8, 1, 2, 1, 1);

        div_button = new QPushButton(centralWidget);
        div_button->setObjectName(QStringLiteral("div_button"));
        sizePolicy.setHeightForWidth(div_button->sizePolicy().hasHeightForWidth());
        div_button->setSizePolicy(sizePolicy);
        div_button->setLayoutDirection(Qt::LeftToRight);
        div_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(div_button, 2, 4, 1, 1);

        num_7 = new QPushButton(centralWidget);
        num_7->setObjectName(QStringLiteral("num_7"));
        sizePolicy.setHeightForWidth(num_7->sizePolicy().hasHeightForWidth());
        num_7->setSizePolicy(sizePolicy);
        num_7->setLayoutDirection(Qt::LeftToRight);
        num_7->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_7, 1, 1, 1, 1);

        num_5 = new QPushButton(centralWidget);
        num_5->setObjectName(QStringLiteral("num_5"));
        sizePolicy.setHeightForWidth(num_5->sizePolicy().hasHeightForWidth());
        num_5->setSizePolicy(sizePolicy);
        num_5->setLayoutDirection(Qt::LeftToRight);
        num_5->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_5, 2, 2, 1, 1);

        num_6 = new QPushButton(centralWidget);
        num_6->setObjectName(QStringLiteral("num_6"));
        sizePolicy.setHeightForWidth(num_6->sizePolicy().hasHeightForWidth());
        num_6->setSizePolicy(sizePolicy);
        num_6->setLayoutDirection(Qt::LeftToRight);
        num_6->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_6, 2, 3, 1, 1);

        num_1 = new QPushButton(centralWidget);
        num_1->setObjectName(QStringLiteral("num_1"));
        sizePolicy.setHeightForWidth(num_1->sizePolicy().hasHeightForWidth());
        num_1->setSizePolicy(sizePolicy);
        num_1->setLayoutDirection(Qt::LeftToRight);
        num_1->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_1, 3, 1, 1, 1);

        sub_button = new QPushButton(centralWidget);
        sub_button->setObjectName(QStringLiteral("sub_button"));
        sizePolicy.setHeightForWidth(sub_button->sizePolicy().hasHeightForWidth());
        sub_button->setSizePolicy(sizePolicy);
        sub_button->setLayoutDirection(Qt::LeftToRight);
        sub_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(sub_button, 3, 4, 1, 1);

        decimal_button = new QPushButton(centralWidget);
        decimal_button->setObjectName(QStringLiteral("decimal_button"));
        sizePolicy.setHeightForWidth(decimal_button->sizePolicy().hasHeightForWidth());
        decimal_button->setSizePolicy(sizePolicy);
        decimal_button->setLayoutDirection(Qt::LeftToRight);
        decimal_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(decimal_button, 4, 1, 1, 1);

        num_0 = new QPushButton(centralWidget);
        num_0->setObjectName(QStringLiteral("num_0"));
        sizePolicy.setHeightForWidth(num_0->sizePolicy().hasHeightForWidth());
        num_0->setSizePolicy(sizePolicy);
        num_0->setLayoutDirection(Qt::LeftToRight);
        num_0->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(num_0, 4, 2, 1, 1);

        equals_button = new QPushButton(centralWidget);
        equals_button->setObjectName(QStringLiteral("equals_button"));
        sizePolicy.setHeightForWidth(equals_button->sizePolicy().hasHeightForWidth());
        equals_button->setSizePolicy(sizePolicy);
        equals_button->setLayoutDirection(Qt::LeftToRight);
        equals_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(equals_button, 4, 3, 1, 1);

        add_button = new QPushButton(centralWidget);
        add_button->setObjectName(QStringLiteral("add_button"));
        sizePolicy.setHeightForWidth(add_button->sizePolicy().hasHeightForWidth());
        add_button->setSizePolicy(sizePolicy);
        add_button->setLayoutDirection(Qt::LeftToRight);
        add_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(add_button, 4, 4, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Display->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(18);
        Display->setFont(font);
        Display->setLayoutDirection(Qt::LeftToRight);
        Display->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color:white;\n"
"    border: 1px #000000;\n"
"    color:black;	\n"
"}"));
        Display->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout_2->addWidget(Display, 0, 0, 1, 5);

        backSpace_button = new QPushButton(centralWidget);
        backSpace_button->setObjectName(QStringLiteral("backSpace_button"));
        sizePolicy.setHeightForWidth(backSpace_button->sizePolicy().hasHeightForWidth());
        backSpace_button->setSizePolicy(sizePolicy);
        backSpace_button->setLayoutDirection(Qt::LeftToRight);
        backSpace_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(backSpace_button, 1, 0, 1, 1);

        all_clear_button = new QPushButton(centralWidget);
        all_clear_button->setObjectName(QStringLiteral("all_clear_button"));
        sizePolicy.setHeightForWidth(all_clear_button->sizePolicy().hasHeightForWidth());
        all_clear_button->setSizePolicy(sizePolicy);
        all_clear_button->setLayoutDirection(Qt::LeftToRight);
        all_clear_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(all_clear_button, 2, 0, 1, 1);

        clear_button = new QPushButton(centralWidget);
        clear_button->setObjectName(QStringLiteral("clear_button"));
        sizePolicy.setHeightForWidth(clear_button->sizePolicy().hasHeightForWidth());
        clear_button->setSizePolicy(sizePolicy);
        clear_button->setLayoutDirection(Qt::LeftToRight);
        clear_button->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#708090;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#FFFFFF ;\n"
"    border: 1px #000000;\n"
"    padding:5px;	\n"
"}"));

        gridLayout_2->addWidget(clear_button, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 450, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        num_4->setText(QApplication::translate("MainWindow", "4", 0));
        num_3->setText(QApplication::translate("MainWindow", "3", 0));
        num_2->setText(QApplication::translate("MainWindow", "2", 0));
        times_button->setText(QApplication::translate("MainWindow", "*", 0));
        num_9->setText(QApplication::translate("MainWindow", "9", 0));
        num_8->setText(QApplication::translate("MainWindow", "8", 0));
        div_button->setText(QApplication::translate("MainWindow", "/", 0));
        num_7->setText(QApplication::translate("MainWindow", "7", 0));
        num_5->setText(QApplication::translate("MainWindow", "5", 0));
        num_6->setText(QApplication::translate("MainWindow", "6", 0));
        num_1->setText(QApplication::translate("MainWindow", "1", 0));
        sub_button->setText(QApplication::translate("MainWindow", "-", 0));
        decimal_button->setText(QApplication::translate("MainWindow", ".", 0));
        num_0->setText(QApplication::translate("MainWindow", "0", 0));
        equals_button->setText(QApplication::translate("MainWindow", "=", 0));
        add_button->setText(QApplication::translate("MainWindow", "+", 0));
        Display->setText(QApplication::translate("MainWindow", "0", 0));
        backSpace_button->setText(QApplication::translate("MainWindow", "backSpace", 0));
        all_clear_button->setText(QApplication::translate("MainWindow", "AC", 0));
        clear_button->setText(QApplication::translate("MainWindow", "C", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
