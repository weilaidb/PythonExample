mutex hdfsHashMutex = PTHREAD_MUTEX_INITIALIZER;
mutex jvmMutex = PTHREAD_MUTEX_INITIALIZER;
int mutexLock(mutex *m)
int mutexUnlock(mutex *m)
