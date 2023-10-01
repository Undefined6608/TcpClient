#ifndef TCPCLIENT_H
#define TCPCLIENT_H
// 引入所需的包
#include <QWidget>
#include <QFile>
#include <QByteArray>
#include <QDebug>
#include <QMessageBox>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class TcpClient; }
QT_END_NAMESPACE

class TcpClient : public QWidget
{
    Q_OBJECT

public:
    TcpClient(QWidget *parent = nullptr);
    ~TcpClient();
    // 定义加载配置文件
    void loadConfig();

private:
    Ui::TcpClient *ui;
    // 定义私有变量
    // ip
    QString m_strIP;
    // port
    quint16 m_usPort;
};
#endif // TCPCLIENT_H
