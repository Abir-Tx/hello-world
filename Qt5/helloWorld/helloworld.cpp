#include "helloworld.h"
#include "ui_helloworld.h"

helloWorld::helloWorld(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::helloWorld)
{
    ui->setupUi(this);
}

helloWorld::~helloWorld()
{
    delete ui;
}

static unsigned short int counter=  0;
void helloWorld::on_pressme_clicked()
{
       counter++;

       if (counter == 3){
           ui->status->setText("Hello World of QT GUI ;-)");
       }
       else if (counter > 3){
           ui->status->setText("horray !! You have pressed me more than 3 times !");
       }
       else
       {
           ui->status->setText("I don't know what you are doing ! ");
       }

}
