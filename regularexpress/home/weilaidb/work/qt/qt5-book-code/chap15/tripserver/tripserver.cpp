TripServer::TripServer(QObject *parent)
: QTcpServer(parent)
void TripServer::incomingConnection(int socketId)
