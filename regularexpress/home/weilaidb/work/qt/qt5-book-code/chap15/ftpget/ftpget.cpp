FtpGet::FtpGet(QObject *parent)
: QObject(parent)
bool FtpGet::getFile(const QUrl &url)
void FtpGet::ftpDone(bool error)
