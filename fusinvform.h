#ifndef FUSINVFORM_H
#define FUSINVFORM_H

#include <QMainWindow>

namespace Ui {
    class FusInvForm;
}

class FusInvForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit FusInvForm(QWidget *parent = 0);
    void setType(QString type);
    void setTimeout(QString timeout);
    void setMsg(QString msg);
    void setTitle(QString title);
    ~FusInvForm();

private slots:

    void on_pushCancel_pressed();

    void on_pushOk_pressed();

    void updateTimeoutStatus();

private:
    int timeout;
    Ui::FusInvForm *ui;
};

#endif // FUSINVFORM_H
