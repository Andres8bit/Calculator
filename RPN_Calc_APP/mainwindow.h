#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<assert.h>
#include <bits/stdc++.h>
#include"op.h"



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
    std::string input;
    std::map<std::string,Op> ops;
    void parse(const std::string& input, std::vector<std::string>& tokens, const char &delim);
    void eval(const std::vector<std::string>& input, double& result, const std::map<std::string, Op>& funcs);
    double compute(std::stack<double>& terms, const Op &op);


private slots:
    void numPressed();
    void operationPressed();
    void clearPressed();
    void backSpacePressed();
    void allClearPressed();
    void evalPressed();
    void decimalPressed();
};

#endif // MAINWINDOW_H
