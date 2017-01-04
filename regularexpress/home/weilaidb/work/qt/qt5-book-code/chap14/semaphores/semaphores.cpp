const int DataSize = 100000;
const int BufferSize = 4096;
char buffer[BufferSize];
QSemaphore freeSpace(BufferSize);
QSemaphore usedSpace(0);
class Producer : public QThread
;
void Producer::run()
class Consumer : public QThread
;
void Consumer::run()
int main()
