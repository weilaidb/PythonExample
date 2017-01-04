ClientSocket::ClientSocket(QObject *parent)
: QTcpSocket(parent)
void ClientSocket::readClient()
void ClientSocket::generateRandomTrip(const QString &,
const QString &, const QDate &date, const QTime &time)
