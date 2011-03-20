#include "fusinvform.h"
#include "ui_fusinvform.h"
//#include <QMenu>
#include <iostream>

FusInvForm::FusInvForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FusInvForm)
{
        ui->setupUi(this);
        /* QMenu *qmenu = new QMenu();
        qmenu->addAction("Dans 2 heures");
        qmenu->addAction("Dans 4 heures");
        qmenu->addAction("Dans 8 heures");
        ui->pushCancel->setMenu(qmenu); */
}

FusInvForm::~FusInvForm()
{
    delete ui;
}


void FusInvForm::setMsg(QString msg) {
    ui->textEdit->setText(msg);
}

void FusInvForm::setTitle(QString title) {
    this->setWindowTitle(title);
}


void FusInvForm::on_pushCancel_pressed()
{
    std::cout<<"cancel"<<std::endl;

    QApplication::exit(0);
}

void FusInvForm::on_pushOk_pressed()
{
    std::cout<<"ok"<<std::endl;
    QApplication::exit(0);
}
