#ifndef RESETDIALOG_H
#define RESETDIALOG_H

#include <QDialog>
#include<QDebug>
#include<QRegularExpression>

#include"Tip_Msg.h"
#include"httpmgr.h"

namespace Ui {
class ResetDialog;
}

class ResetDialog : public QDialog
{
    Q_OBJECT

private slots:
    void slot_reset_mod_finish(ReqId id,QString res,ErrorCodes err);

    void on_verify_btn_clicked();

    void on_con_btn_clicked();
    void on_return_btn_clicked();

signals:
    void Reset_Go_Login();

public:
    explicit ResetDialog(QWidget *parent = nullptr);
    ~ResetDialog();

private:
    bool checkUserValid();
    bool checkEmailValid();
    bool checkPassValid();
    bool checkVerifyValid();
    void initHandlers();

    void AddTipErr(TipErr err, QString tips);
    void DelTipErr(TipErr err);
    void showTip(QString str, bool b_ok);

    QMap<TipErr, QString> _tip_errs;
    QMap<ReqId,std::function<void(const QJsonObject&)>>_handlers;

private:
    Ui::ResetDialog *ui;
};

#endif // RESETDIALOG_H
