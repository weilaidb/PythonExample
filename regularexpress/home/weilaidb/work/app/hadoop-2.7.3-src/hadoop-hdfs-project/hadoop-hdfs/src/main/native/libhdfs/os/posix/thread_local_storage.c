static pthread_key_t gTlsKey;
static int gTlsKeyInitialized = 0;
static void hdfsThreadDestructor(void *v)
int threadLocalStorageGet(JNIEnv **env)
int threadLocalStorageSet(JNIEnv *env)
