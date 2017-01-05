static DWORD gTlsIndex = TLS_OUT_OF_INDEXES;
static void detachCurrentThreadFromJvm()
static void NTAPI tlsCallback(PVOID h, DWORD reason, PVOID pv)
extern const PIMAGE_TLS_CALLBACK pTlsCallback;
const PIMAGE_TLS_CALLBACK pTlsCallback = tlsCallback;
int threadLocalStorageGet(JNIEnv **env)
int threadLocalStorageSet(JNIEnv *env)
