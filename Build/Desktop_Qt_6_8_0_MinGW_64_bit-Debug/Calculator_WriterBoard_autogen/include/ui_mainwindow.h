/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *button1;
    QPushButton *button6;
    QPushButton *button9;
    QPushButton *buttonAdd;
    QPushButton *button8;
    QPushButton *buttonSubtract;
    QPushButton *buttonEquals;
    QLineEdit *display;
    QPushButton *button0;
    QPushButton *button3;
    QPushButton *button2;
    QPushButton *buttonClear;
    QPushButton *buttonMultiply;
    QPushButton *button7;
    QPushButton *button5;
    QPushButton *button4;
    QPushButton *buttonDivide;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(458, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #0000000"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        button1->setFont(font);
        button1->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button1, 3, 0, 1, 1);

        button6 = new QPushButton(centralwidget);
        button6->setObjectName("button6");
        sizePolicy1.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy1);
        button6->setFont(font);
        button6->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button6, 2, 2, 1, 1);

        button9 = new QPushButton(centralwidget);
        button9->setObjectName("button9");
        sizePolicy1.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy1);
        button9->setFont(font);
        button9->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button9, 1, 2, 1, 1);

        buttonAdd = new QPushButton(centralwidget);
        buttonAdd->setObjectName("buttonAdd");
        buttonAdd->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonAdd->sizePolicy().hasHeightForWidth());
        buttonAdd->setSizePolicy(sizePolicy1);
        buttonAdd->setFont(font);
        buttonAdd->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #C0C0C0;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #000000;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));
        buttonAdd->setAutoDefault(false);

        gridLayout->addWidget(buttonAdd, 3, 3, 1, 1);

        button8 = new QPushButton(centralwidget);
        button8->setObjectName("button8");
        sizePolicy1.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy1);
        button8->setFont(font);
        button8->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button8, 1, 1, 1, 1);

        buttonSubtract = new QPushButton(centralwidget);
        buttonSubtract->setObjectName("buttonSubtract");
        sizePolicy1.setHeightForWidth(buttonSubtract->sizePolicy().hasHeightForWidth());
        buttonSubtract->setSizePolicy(sizePolicy1);
        buttonSubtract->setFont(font);
        buttonSubtract->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #C0C0C0;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #000000;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(buttonSubtract, 4, 3, 1, 1);

        buttonEquals = new QPushButton(centralwidget);
        buttonEquals->setObjectName("buttonEquals");
        sizePolicy1.setHeightForWidth(buttonEquals->sizePolicy().hasHeightForWidth());
        buttonEquals->setSizePolicy(sizePolicy1);
        buttonEquals->setFont(font);
        buttonEquals->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #FFA500;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(buttonEquals, 4, 2, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        display->setEnabled(true);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setBold(false);
        display->setFont(font1);
        display->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        display->setToolTipDuration(0);
        display->setStyleSheet(QString::fromUtf8("    QLineEdit {\n"
"        background-color: transparent;\n"
"        border: 2px solid #E5E5E5;\n"
"        border-radius: 10px;\n"
"        padding: 10px;\n"
"        font-size: 50px;\n"
"        color: #FFFF;\n"
"    }"));
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        display->setClearButtonEnabled(false);

        gridLayout->addWidget(display, 0, 0, 1, 4);

        button0 = new QPushButton(centralwidget);
        button0->setObjectName("button0");
        sizePolicy1.setHeightForWidth(button0->sizePolicy().hasHeightForWidth());
        button0->setSizePolicy(sizePolicy1);
        button0->setFont(font);
        button0->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button0, 4, 1, 1, 1);

        button3 = new QPushButton(centralwidget);
        button3->setObjectName("button3");
        sizePolicy1.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy1);
        button3->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button3, 3, 2, 1, 1);

        button2 = new QPushButton(centralwidget);
        button2->setObjectName("button2");
        sizePolicy1.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setBold(false);
        button2->setFont(font2);
        button2->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button2, 3, 1, 1, 1);

        buttonClear = new QPushButton(centralwidget);
        buttonClear->setObjectName("buttonClear");
        sizePolicy1.setHeightForWidth(buttonClear->sizePolicy().hasHeightForWidth());
        buttonClear->setSizePolicy(sizePolicy1);
        buttonClear->setFont(font);
        buttonClear->setAutoFillBackground(false);
        buttonClear->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #C0C0C0;\n"
"        border: 1px solid #D1D1D6;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #000000;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(buttonClear, 4, 0, 1, 1);

        buttonMultiply = new QPushButton(centralwidget);
        buttonMultiply->setObjectName("buttonMultiply");
        sizePolicy1.setHeightForWidth(buttonMultiply->sizePolicy().hasHeightForWidth());
        buttonMultiply->setSizePolicy(sizePolicy1);
        buttonMultiply->setFont(font);
        buttonMultiply->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #C0C0C0;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #000000;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(buttonMultiply, 2, 3, 1, 1);

        button7 = new QPushButton(centralwidget);
        button7->setObjectName("button7");
        sizePolicy1.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy1);
        button7->setFont(font);
        button7->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button7, 1, 0, 1, 1);

        button5 = new QPushButton(centralwidget);
        button5->setObjectName("button5");
        sizePolicy1.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy1);
        button5->setFont(font);
        button5->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button5, 2, 1, 1, 1);

        button4 = new QPushButton(centralwidget);
        button4->setObjectName("button4");
        sizePolicy1.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy1);
        button4->setFont(font);
        button4->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #808080;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #FFFFFF;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(button4, 2, 0, 1, 1);

        buttonDivide = new QPushButton(centralwidget);
        buttonDivide->setObjectName("buttonDivide");
        sizePolicy1.setHeightForWidth(buttonDivide->sizePolicy().hasHeightForWidth());
        buttonDivide->setSizePolicy(sizePolicy1);
        buttonDivide->setFont(font);
        buttonDivide->setStyleSheet(QString::fromUtf8("    QPushButton {\n"
"        background-color: #C0C0C0;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        color: #000000;\n"
"        padding: 10px;\n"
"        margin: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid grey;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(buttonDivide, 1, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        buttonAdd->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        buttonSubtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonEquals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        display->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        display->setPlaceholderText(QString());
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        buttonMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        buttonDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
