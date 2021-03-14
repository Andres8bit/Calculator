#include "mainwindow.h"
#include "ui_mainwindow.h"

bool empty = true;
double myAdd(const double& x,const double& y){return x + y;}
double mySub(const double& x,const double& y){return x - y;}
double myMult(const double& x,const double& y){return x * y;}
double myDiv(const double& num,const double& denom){assert(denom!=0);return num/denom;}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(0));

    //number_buttons:
    QPushButton* nums[10];
    for(int i = 0; i < 10;i++){
        QString name = "num_" + QString::number(i);
        nums[i] = MainWindow::findChild<QPushButton*>(name);
        connect(nums[i],SIGNAL(released()),this,SLOT(numPressed()));
    }

    //operations_setup:
    ops.insert(std::pair<std::string,Op>("+",Op(2,myAdd)));
    ops.insert(std::pair<std::string,Op>("-",Op(2,mySub)));
    ops.insert(std::pair<std::string,Op>("*",Op(3,myMult)));
    ops.insert(std::pair<std::string,Op>("/",Op(3,myDiv)));

    //operation_buttons:
    connect(ui->decimal_button,SIGNAL(released()),this,SLOT(decimalPressed()));
    connect(ui->add_button,SIGNAL(released()),this,SLOT(operationPressed()));
    connect(ui->sub_button,SIGNAL(released()),this,SLOT(operationPressed()));
    connect(ui->times_button,SIGNAL(released()),this,SLOT(operationPressed()));
    connect(ui->div_button,SIGNAL(released()),this,SLOT(operationPressed()));

    //edit buttons:
    connect(ui->all_clear_button,SIGNAL(released()),this,SLOT(allClearPressed()));
    connect(ui->backSpace_button,SIGNAL(released()),this,SLOT(backSpacePressed()));
    connect(ui->clear_button,SIGNAL(released()),this,SLOT(clearPressed()));

    //eval:
    connect(ui->equals_button,SIGNAL(released()),this,SLOT(evalPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString val = button->text();
    QString displayVal = ui->Display->text();

    if(empty && !displayVal.contains(QChar('.'))){
        ui->Display->setText(val);
        empty = false;
    }else{

        ui->Display->setText(ui->Display->text() + val);
    }

}

void MainWindow::operationPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString val = button->text();
    QString displayVal = ui->Display->text();
    std::cout<<"val:"<<val.toStdString()<<std::endl;
    std::cout<<"Display:"<<QString(displayVal + " " + val + " ").toStdString()<<std::endl;
    ui->Display->setText( QString(displayVal + " " + val + " "));
}

void MainWindow::clearPressed(){

}

void MainWindow::backSpacePressed(){

}

void MainWindow::allClearPressed(){
 ui->Display->setText(QString::number(0));
 empty = true;
}

void MainWindow::evalPressed(){
    std::vector<std::string> tokens;
    double result = 0;
  if(!empty){//if empty dont eval
      //add last space for parsing
      ui->Display->setText(ui->Display->text() + QString(" "));
      std::cout<<"input:"<<ui->Display->text().toStdString()<<std::endl;
      parse(ui->Display->text().toStdString(),tokens,' ');
      eval(tokens,result,ops);
      ui->Display->setText(QString::number(result));
  }
}

void MainWindow::decimalPressed(){
    if(!ui->Display->text().contains(QChar('.'))){
    QPushButton *button = (QPushButton *)sender();
    QString val = button->text();
    QString displayVal = ui->Display->text();

    ui->Display->setText( displayVal + val);
    }
}

void MainWindow::parse(const std::string& input, std::vector<std::string> &tokens, const char& delim){
    size_t index = input.find_first_of(delim);
    std::string temp;
    std::string source = input;

    while(index != std::string::npos ){
        temp = source.substr(0,index);
        tokens.push_back(temp);
        source =  source.substr(index + 1);
        index = source.find_first_of(delim);
    }
}

//4 + 8 * 5 / 4 - 3
void MainWindow::eval(const std::vector<std::string>& input, double& result,  const std::map<std::string,Op>& funcs){
    std::stack<Op> operators;
    std::stack<double> operands;
    std::string token;
    size_t i = 0;
    size_t n_tokens = input.size();

    while(i < n_tokens){
        token = input[i];
        if(funcs.find(token) == funcs.end()){ //is digit
            operands.push(std::stod(token));
        }else{
            while(!operators.empty() &&
                  funcs.at(token).precedence <= operators.top().precedence){
                operands.push(compute(operands,operators.top())); //call function
                operators.pop();
            }
            operators.push(funcs.at(token));
        }
        i++;
    }

    while(!operators.empty()){
        operands.push(compute(operands,operators.top())); //call function
        operators.pop();
    }
    result = operands.top();
}

double MainWindow::compute(std::stack<double>& terms,const Op& op){
    double x,y = 0.0;

    y = terms.top(); terms.pop(); //get top then pop
    x = terms.top(); terms.pop();

    return (*op.func)(x,y); //call function
}
