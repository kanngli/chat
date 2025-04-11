/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedlabel.h>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout_2;
    QWidget *head_widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *head_label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pass_label;
    QLineEdit *pass_edit;
    ClickedLabel *pass_visible;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *login_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *reg_btn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    ClickedLabel *forget_label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(300, 500);
        LoginDialog->setMinimumSize(QSize(300, 500));
        LoginDialog->setMaximumSize(QSize(300, 500));
        horizontalLayout = new QHBoxLayout(LoginDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(7, 7, 7, 7);
        err_tip = new QLabel(LoginDialog);
        err_tip->setObjectName(QString::fromUtf8("err_tip"));
        err_tip->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(err_tip);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        head_widget = new QWidget(LoginDialog);
        head_widget->setObjectName(QString::fromUtf8("head_widget"));
        horizontalLayout_7 = new QHBoxLayout(head_widget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        head_label = new QLabel(head_widget);
        head_label->setObjectName(QString::fromUtf8("head_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(head_label->sizePolicy().hasHeightForWidth());
        head_label->setSizePolicy(sizePolicy);
        head_label->setMinimumSize(QSize(200, 200));
        head_label->setMaximumSize(QSize(200, 200));
        head_label->setTextFormat(Qt::TextFormat::AutoText);
        head_label->setScaledContents(true);
        head_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(head_label);


        horizontalLayout_2->addWidget(head_widget);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        email_label = new QLabel(LoginDialog);
        email_label->setObjectName(QString::fromUtf8("email_label"));

        horizontalLayout_3->addWidget(email_label);

        email_edit = new QLineEdit(LoginDialog);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));

        horizontalLayout_3->addWidget(email_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pass_label = new QLabel(LoginDialog);
        pass_label->setObjectName(QString::fromUtf8("pass_label"));

        horizontalLayout_4->addWidget(pass_label);

        pass_edit = new QLineEdit(LoginDialog);
        pass_edit->setObjectName(QString::fromUtf8("pass_edit"));

        horizontalLayout_4->addWidget(pass_edit);

        pass_visible = new ClickedLabel(LoginDialog);
        pass_visible->setObjectName(QString::fromUtf8("pass_visible"));
        pass_visible->setMinimumSize(QSize(20, 20));
        pass_visible->setMaximumSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pass_visible);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        login_btn = new QPushButton(LoginDialog);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));

        horizontalLayout_5->addWidget(login_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        reg_btn = new QPushButton(LoginDialog);
        reg_btn->setObjectName(QString::fromUtf8("reg_btn"));

        horizontalLayout_5->addWidget(reg_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        forget_label = new ClickedLabel(LoginDialog);
        forget_label->setObjectName(QString::fromUtf8("forget_label"));

        horizontalLayout_6->addWidget(forget_label);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        err_tip->setText(QCoreApplication::translate("LoginDialog", "\345\274\200\345\247\213\347\231\273\345\275\225", nullptr));
        head_label->setText(QString());
        email_label->setText(QCoreApplication::translate("LoginDialog", "\351\202\256\347\256\261:", nullptr));
        pass_label->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201:", nullptr));
        pass_visible->setText(QString());
        login_btn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        reg_btn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
        forget_label->setText(QCoreApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
