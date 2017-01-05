static pthread_mutex_t gTempdirLock = PTHREAD_MUTEX_INITIALIZER;
static int gTempdirNonce = 0;
int recursiveDeleteContents(const char *path)
int recursiveDelete(const char *path)
int createTempDir(char *tempDir, int nameMax, int mode)
void sleepNoSig(int sec)
