#include "mainwindow.h"
#include "ui_mainwindow.h"

double num1;
bool typsecnum = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , firstNum(0)
    , userIsTypingSecondNumber(false)
{
    ui->setupUi(this);

    // Connect digit buttons to a slot
    connect(ui->button0, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button1, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button2, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button3, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button4, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button5, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button6, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button7, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button8, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->button9, SIGNAL(clicked()), this, SLOT(digit_pressed()));

    // Connect operator buttons
    connect(ui->buttonAdd, SIGNAL(clicked()), this, SLOT(operator_pressed()));
    connect(ui->buttonSubtract, SIGNAL(clicked()), this, SLOT(operator_pressed()));
    connect(ui->buttonMultiply, SIGNAL(clicked()), this, SLOT(operator_pressed()));
    connect(ui->buttonDivide, SIGNAL(clicked()), this, SLOT(operator_pressed()));

    // Equals and Clear
    connect(ui->buttonEquals, SIGNAL(clicked()), this, SLOT(equals_pressed()));
    connect(ui->buttonClear, SIGNAL(clicked()), this, SLOT(clear_pressed()));

    ui->buttonAdd->setCheckable(true);
    ui->buttonSubtract->setCheckable(true);
    ui->buttonMultiply->setCheckable(true);
    ui->buttonDivide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton *)sender();
    double labelnumber;
    QString newlabel;
    if((ui->buttonAdd->isChecked() || ui->buttonSubtract->isChecked() ||
         ui->buttonMultiply->isChecked() || ui->buttonDivide->isChecked())
        && (!typsecnum))
    {
        labelnumber = button->text().toDouble();
        typsecnum = true;
        newlabel = QString::number(labelnumber,'g', 10);
    }
    else
    {
        if(ui->display->text().contains(".") && button->text()=="0")
        {
            newlabel = ui->display->text()+button->text();
        }
        else
        {
            labelnumber = (ui->display->text()+button->text()).toDouble();
            newlabel = QString::number(labelnumber,'g', 10);
        }
    }
    ui->display->setText(newlabel);
}

void MainWindow::operator_pressed()
{
    QPushButton *button = (QPushButton*)sender();
    firstNum = ui->display->text().toDouble();
    ui->display->setText("0"); // Reset the display
    button->setChecked(true);
}

void MainWindow::operator_released()
{
    QPushButton * button = (QPushButton *)sender();
    double labelnumber;
    labelnumber=(ui->display->text()).toDouble();
    QString newlabel;
    if(button->text()=="+/-")
    {
        labelnumber=labelnumber*-1;
        newlabel=QString::number(labelnumber,'g',10);
        ui->display->setText(newlabel);
    }
    if(button->text()=="%")
    {
        labelnumber=labelnumber*.01;
        newlabel=QString::number(labelnumber,'g',10);
        ui->display->setText(newlabel);
    }
}

void MainWindow::equals_pressed()
{
    double secondNum;
    QString newLabel;

    secondNum = ui->display->text().toDouble();

    if (ui->buttonAdd->isChecked())
    {
        newLabel = QString::number(firstNum + secondNum);
        ui->buttonAdd->setChecked(false);
    }
    else if (ui->buttonSubtract->isChecked())
    {
        newLabel = QString::number(firstNum - secondNum);
        ui->buttonSubtract->setChecked(false);
    }
    else if (ui->buttonMultiply->isChecked())
    {
        newLabel = QString::number(firstNum * secondNum);
        ui->buttonMultiply->setChecked(false);
    }
    else if (ui->buttonDivide->isChecked())
    {
        newLabel = QString::number(firstNum / secondNum);
        ui->buttonDivide->setChecked(false);
    }

    ui->display->setText(newLabel);
    userIsTypingSecondNumber = true;
}

void MainWindow::equals_released()
{
    double result, num2;
    num2 = ui->display->text().toDouble();
    QString newlabel;
    if(ui->buttonAdd->isChecked())
    {
        result=num1+num2;
        newlabel=QString::number(result);
        ui->display->setText(newlabel);
        ui->buttonAdd->setChecked(false);
    }
    else if(ui->buttonSubtract->isChecked())
    {
        result=num1-num2;
        newlabel=QString::number(result);
        ui->display->setText(newlabel);
        ui->buttonSubtract->setChecked(false);
    }
    else if(ui->buttonMultiply->isChecked())
    {
        result=num1*num2;
        newlabel=QString::number(result);
        ui->display->setText(newlabel);
        ui->buttonMultiply->setChecked(false);
    }
    else if(ui->buttonDivide->isChecked())
    {
        result=num1/num2;
        newlabel=QString::number(result);
        ui->display->setText(newlabel);
        ui->buttonDivide->setChecked(false);
    }

    typsecnum  = false;
}

void MainWindow::clear_pressed()
{
    ui->display->setText("0");
    userIsTypingSecondNumber = false;
}

void MainWindow::clear_released()
{
    ui->buttonAdd->setChecked(false);
    ui->buttonSubtract->setChecked(false);
    ui->buttonMultiply->setChecked(false);
    ui->buttonMultiply->setChecked(false);
    typsecnum = false;
    ui->display->setText("0");
}
