#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include<QDebug>
#include<QPainter>
#include<QPainterPath>
#include<QJsonDocument>
#include"httpmgr.h"
#include"tcpmgr.h"
#include"Tip_Msg.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();


private:
    void initHead();
    void initHttpHandlers();
    void showTip(QString str,bool b_ok);
    bool checkEmailValid();
    bool checkPwdValid();

    void AddTipErr(TipErr err,QString Str);
    void DelTipErr(TipErr err);

    bool enableBtn(bool enabled);

private slots:
    void slot_forget_pwd();
    void on_login_btn_clicked();
    void slot_login_mod_finish(ReqId id,QString str,ErrorCodes err);
    void slot_tcp_con_finish(bool bsuccess);
signals:
    void switchRegister();
    void switchReset();
    void sig_connect_tcp(ServerInfo si);


private:
    Ui::LoginDialog *ui;
    int _uid;
    QString _token;
    QMap<ReqId, std::function<void(const QJsonObject&)>> _handlers;
    QMap<TipErr, QString> _tip_errs;

};

#endif // LOGINDIALOG_H
