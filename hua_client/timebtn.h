#ifndef TIMEBTN_H
#define TIMEBTN_H

//本文件用于实现自定义控件
#include<QPushButton>
#include<QTimer>
#include<QDebug>
#include<QMouseEvent>

class TimeBtn:public QPushButton
{
public:
    TimeBtn(QWidget*parent=nullptr);
    ~TimeBtn();

    virtual void mouseReleaseEvent(QMouseEvent *e) override;

private:
    QTimer  *_timer;
    int _counter;
};

#endif // TIMEBTN_H
