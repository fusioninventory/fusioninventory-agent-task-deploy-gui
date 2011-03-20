#include "fusinvform.h"
#include "ui_fusinvform.h"

#include <iostream>
#include <QTimer>

FusInvForm::FusInvForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FusInvForm)
{
        this->timeout = 0;
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

void FusInvForm::setType(QString type) {

    if (type == QString("info")) {
        ui->pushCancel->hide();
    }
}
void FusInvForm::setTimeout(QString timeout) {
    if (timeout.toInt()>0) {
        this->timeout = timeout.toInt();
        ui->textEdit->setText(timeout);
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(updateTimeoutStatus()));
        timer->start(1000);
    }
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

void FusInvForm::updateTimeoutStatus()
{
    QString pattern = "Ok (%1)";
    ui->pushOk->setText(pattern.arg(this->timeout--));
    if (this->timeout == 0) {
        std::cout<<"timeout"<<std::endl;
        QApplication::exit(0);
    }
}
