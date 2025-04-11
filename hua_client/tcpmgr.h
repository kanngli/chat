#ifndef TCPMGR_H
#define TCPMGR_H
#include<QTcpSocket>
#include<memory>
#include<QObject>
#include<QDataStream>

#include"Tip_Msg.h"
#include"singleton.h"

class TcpMgr:public QObject,public Singleton<TcpMgr>,public enable_shared_from_this<TcpMgr>
{
    Q_OBJECT
public:
    friend class Singleton<TcpMgr>;
    ~TcpMgr();
    TcpMgr(const TcpMgr&)=delete;
    TcpMgr&operator=(const TcpMgr&)=delete;
private:
    TcpMgr();

    QTcpSocket _socket;
    QString _host;
    uint16_t _port;
    QByteArray _buffer;
    bool _b_recv_pending;
    quint16 _message_id;
    quint16 _message_len;

public slots:
    void slot_tcp_connect(ServerInfo si);
    void slot_send_data(ReqId reqId, QString data);
signals:
    void sig_con_success(bool bsuccess);
    void sig_send_data(ReqId reqId, QString data);

};

#endif // TCPMGR_H
