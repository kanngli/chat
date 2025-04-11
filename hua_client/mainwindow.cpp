#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //子对象注册
    _login_dialog=new LoginDialog();
    _register_dialog=new RegisterDialog();
    _reset_dialog=new ResetDialog();

    setCentralWidget(_login_dialog);

    connect(_login_dialog,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);

    connect(_register_dialog,&RegisterDialog::sigSwitchLogin,this,&MainWindow::Slot_Go_Login);

    connect(_login_dialog, &LoginDialog::switchReset, this, &MainWindow::SlotSwitchReset);

    connect(_reset_dialog,&ResetDialog::Reset_Go_Login,this,&MainWindow::Slot_Reset_Go_Login);


    /*
由于setCentralWidget会强行绑定父子对象关系（父对象管理子对象生命周期），且会析构旧的中心widget，因此有两种方法
一:使用QStackedWidget，进行页面管理。
二:保存旧的中心widget对象，并且解除父子关系绑定，但是需要主动释放内存。
*/
}

MainWindow::~MainWindow()
{
    if(_login_dialog)
    {
        delete _login_dialog;
        _login_dialog=nullptr;
    }
    if(_register_dialog)
    {
        delete _register_dialog;
        _register_dialog=nullptr;
    }
    if(_reset_dialog)
    {
        delete _reset_dialog;
        _reset_dialog=nullptr;
    }
    delete ui;
}

void MainWindow::SlotSwitchReg()
{
    // 先移除旧 central widget，但不删除它
    QWidget* old = takeCentralWidget();
    if (old) old->setParent(nullptr); // 解除父级关系，避免被 delete,此时需要避免内存泄漏。

    setCentralWidget(_register_dialog);
}

void MainWindow::Slot_Go_Login()
{
    QWidget* old = takeCentralWidget();
    if (old) old->setParent(nullptr);

    setCentralWidget(_login_dialog);
}

void MainWindow::SlotSwitchReset()
{

    QWidget* old = takeCentralWidget();
    if (old) old->setParent(nullptr);
    setCentralWidget(_reset_dialog);

}

void MainWindow::Slot_Reset_Go_Login()
{
    QWidget*old=takeCentralWidget();
    if(old) old->setParent(nullptr);
    setCentralWidget(_login_dialog);
}

