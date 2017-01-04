#define TRANSACTIONTHREAD_H
class Transaction
;
class FlipTransaction : public Transaction
;
class ResizeTransaction : public Transaction
;
class ConvertDepthTransaction : public Transaction
;
class TransactionThread : public QThread
;
