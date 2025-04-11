#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include<QTimer>
#include<QRegExp>
#include<QRegularExpression>
#include<QStringView>

#include"Tip_Msg.h"
#include"httpmgr.h"
#include"clickedlabel.h"

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT
private slots:
    void on_verify_btn_clicked();
    void slot_reg_mod_finish(ReqId id, QString res, ErrorCodes err);

    void on_confirm_btn_clicked();

    void on_return_btn_clicked();

    void on_off_btn_clicked();


signals:
    void sigSwitchLogin();

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private:
    void showTip(QString str,bool b_ok);
    void initHttpHandlers();

    bool checkUserValid();
    bool checkEmailValid();
    bool checkPassValid();
    bool checkConfirmValid();
    bool checkVarifyValid();

    void AddTipErr(TipErr err,QString Str);
    void DelTipErr(TipErr err);

    void ChangeTipPage();
private:
    Ui::RegisterDialog *ui;
    //注册的回调函数，用于收到http的回包后的信息展示。
    QMap<ReqId, std::function<void(const QJsonObject&)>> _handlers;
    QMap<TipErr, QString> _tip_errs;

    QTimer*_countdown_timer;
    int _countdown;

};

#endif // REGISTERDIALOG_H
