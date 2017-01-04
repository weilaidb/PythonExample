const int DataSize = 100000;
const int BufferSize = 4096;
char buffer[BufferSize];
QWaitCondition bufferIsNotFull;
QWaitCondition bufferIsNotEmpty;
QMutex mutex;
int usedSpace = 0;
class Producer : public QThread
;
void Producer::run()
class Consumer : public QThread
;
void Consumer::run()
int main()
