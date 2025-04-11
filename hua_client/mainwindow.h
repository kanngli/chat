#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include"const.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void SlotSwitchReg();
    void Slot_Go_Login();
    void SlotSwitchReset();
    void Slot_Reset_Go_Login();

private:
    Ui::MainWindow *ui;
    LoginDialog* _login_dialog;
    RegisterDialog *_register_dialog;
    ResetDialog*_reset_dialog;
};
#endif // MAINWINDOW_H
