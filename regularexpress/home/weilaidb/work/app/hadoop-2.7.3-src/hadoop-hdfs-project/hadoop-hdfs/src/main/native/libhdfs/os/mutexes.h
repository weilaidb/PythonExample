#define LIBHDFS_MUTEXES_H
extern mutex hdfsHashMutex;
extern mutex jvmMutex;
int mutexLock(mutex *m);
int mutexUnlock(mutex *m);
