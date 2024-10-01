#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed();
    void operator_pressed();
    void operator_released();
    void equals_pressed();
    void equals_released();
    void clear_pressed();
    void clear_released();

private:
    double firstNum;
    bool userIsTypingSecondNumber;
};

#endif // MAINWINDOW_H
