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
    void setMsg(QString msg);
    void setTitle(QString title);
    ~FusInvForm();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::FusInvForm *ui;
};

#endif // FUSINVFORM_H
