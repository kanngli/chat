/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedlabel.h>
#include <timebtn.h>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pass_label;
    QLineEdit *pass_edit;
    ClickedLabel *pass_visible;
    QHBoxLayout *horizontalLayout_5;
    QLabel *con_label;
    QLineEdit *con_edit;
    ClickedLabel *con_visible;
    QHBoxLayout *horizontalLayout_6;
    QLabel *verify_label;
    QLineEdit *verify_edit;
    TimeBtn *verify_btn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *confirm_btn;
    QPushButton *off_btn;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *tip_lb;
    QLabel *tip_lb_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *return_btn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(300, 500);
        RegisterDialog->setMinimumSize(QSize(300, 500));
        RegisterDialog->setMaximumSize(QSize(300, 500));
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        widget->setFont(font);
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        err_tip = new QLabel(widget);
        err_tip->setObjectName(QString::fromUtf8("err_tip"));
        err_tip->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(err_tip);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(7, 7, 7, 7);
        user_label = new QLabel(page);
        user_label->setObjectName(QString::fromUtf8("user_label"));
        user_label->setMinimumSize(QSize(0, 20));
        user_label->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(user_label);

        user_edit = new QLineEdit(page);
        user_edit->setObjectName(QString::fromUtf8("user_edit"));

        horizontalLayout_2->addWidget(user_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        email_label = new QLabel(page);
        email_label->setObjectName(QString::fromUtf8("email_label"));
        email_label->setMinimumSize(QSize(0, 20));
        email_label->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_3->addWidget(email_label);

        email_edit = new QLineEdit(page);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));

        horizontalLayout_3->addWidget(email_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pass_label = new QLabel(page);
        pass_label->setObjectName(QString::fromUtf8("pass_label"));
        pass_label->setMinimumSize(QSize(0, 20));
        pass_label->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_4->addWidget(pass_label);

        pass_edit = new QLineEdit(page);
        pass_edit->setObjectName(QString::fromUtf8("pass_edit"));

        horizontalLayout_4->addWidget(pass_edit);

        pass_visible = new ClickedLabel(page);
        pass_visible->setObjectName(QString::fromUtf8("pass_visible"));
        pass_visible->setMinimumSize(QSize(20, 20));
        pass_visible->setMaximumSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pass_visible);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        con_label = new QLabel(page);
        con_label->setObjectName(QString::fromUtf8("con_label"));
        con_label->setMinimumSize(QSize(0, 20));
        con_label->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_5->addWidget(con_label);

        con_edit = new QLineEdit(page);
        con_edit->setObjectName(QString::fromUtf8("con_edit"));

        horizontalLayout_5->addWidget(con_edit);

        con_visible = new ClickedLabel(page);
        con_visible->setObjectName(QString::fromUtf8("con_visible"));
        con_visible->setMinimumSize(QSize(20, 20));
        con_visible->setMaximumSize(QSize(20, 20));

        horizontalLayout_5->addWidget(con_visible);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verify_label = new QLabel(page);
        verify_label->setObjectName(QString::fromUtf8("verify_label"));
        verify_label->setMinimumSize(QSize(0, 20));
        verify_label->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_6->addWidget(verify_label);

        verify_edit = new QLineEdit(page);
        verify_edit->setObjectName(QString::fromUtf8("verify_edit"));

        horizontalLayout_6->addWidget(verify_edit);

        verify_btn = new TimeBtn(page);
        verify_btn->setObjectName(QString::fromUtf8("verify_btn"));
        verify_btn->setMinimumSize(QSize(0, 25));
        verify_btn->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_6->addWidget(verify_btn);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        confirm_btn = new QPushButton(page);
        confirm_btn->setObjectName(QString::fromUtf8("confirm_btn"));

        horizontalLayout_7->addWidget(confirm_btn);

        off_btn = new QPushButton(page);
        off_btn->setObjectName(QString::fromUtf8("off_btn"));

        horizontalLayout_7->addWidget(off_btn);


        verticalLayout->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_4);

        tip_lb = new QLabel(page_2);
        tip_lb->setObjectName(QString::fromUtf8("tip_lb"));
        tip_lb->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(tip_lb);

        tip_lb_2 = new QLabel(page_2);
        tip_lb_2->setObjectName(QString::fromUtf8("tip_lb_2"));
        tip_lb_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(tip_lb_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        return_btn = new QPushButton(page_2);
        return_btn->setObjectName(QString::fromUtf8("return_btn"));

        horizontalLayout_9->addWidget(return_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_5);

        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(RegisterDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        err_tip->setText(QCoreApplication::translate("RegisterDialog", "\345\274\200\345\247\213\346\263\250\345\206\214", nullptr));
        user_label->setText(QCoreApplication::translate("RegisterDialog", "\347\224\250\346\210\267:", nullptr));
        email_label->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        pass_label->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        pass_visible->setText(QString());
        con_label->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244\357\274\232", nullptr));
        con_visible->setText(QString());
        verify_label->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        verify_btn->setText(QCoreApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        confirm_btn->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        off_btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
        tip_lb->setText(QCoreApplication::translate("RegisterDialog", "\346\263\250\345\206\214\346\210\220\345\212\237\357\274\2145 s\345\220\216\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        tip_lb_2->setText(QCoreApplication::translate("RegisterDialog", "\347\202\271\345\207\273\346\214\211\351\222\256\345\277\253\351\200\237\350\277\224\345\233\236\347\231\273\351\231\206\347\225\214\351\235\242", nullptr));
        return_btn->setText(QCoreApplication::translate("RegisterDialog", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
