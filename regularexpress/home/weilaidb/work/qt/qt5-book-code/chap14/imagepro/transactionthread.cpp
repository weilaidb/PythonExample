Transaction * const EndTransaction = 0;
FlipTransaction::FlipTransaction(Qt::Orientation orientation)
QImage FlipTransaction::apply(const QImage &image)
QString FlipTransaction::message()
ResizeTransaction::ResizeTransaction(const QSize &size)
QString ResizeTransaction::message()
QImage ResizeTransaction::apply(const QImage &image)
ConvertDepthTransaction::ConvertDepthTransaction(int depth)
QImage ConvertDepthTransaction::apply(const QImage &image)
QString ConvertDepthTransaction::message()
TransactionThread::TransactionThread()
TransactionThread::~TransactionThread()
void TransactionThread::addTransaction(Transaction *transact)
void TransactionThread::run()
void TransactionThread::setImage(const QImage &image)
QImage TransactionThread::image()