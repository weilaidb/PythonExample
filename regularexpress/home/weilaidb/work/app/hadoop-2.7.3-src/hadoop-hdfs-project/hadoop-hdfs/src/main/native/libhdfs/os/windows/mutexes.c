mutex hdfsHashMutex;
mutex jvmMutex;
static void __cdecl initializeMutexes(void)
__declspec(allocate(".CRT$XCU"))
const void (__cdecl *pInitialize)(void) = initializeMutexes;
int mutexLock(mutex *m)
int mutexUnlock(mutex *m)
