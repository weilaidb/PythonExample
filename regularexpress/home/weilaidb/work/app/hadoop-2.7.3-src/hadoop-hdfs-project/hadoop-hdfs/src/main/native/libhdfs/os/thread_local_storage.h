#define LIBHDFS_THREAD_LOCAL_STORAGE_H
#define THREAD_LOCAL_STORAGE_GET_QUICK() \
static __thread JNIEnv *quickTlsEnv = NULL; \
#define THREAD_LOCAL_STORAGE_SET_QUICK(env) \
#define THREAD_LOCAL_STORAGE_GET_QUICK()
#define THREAD_LOCAL_STORAGE_SET_QUICK(env)
int threadLocalStorageGet(JNIEnv **env);
int threadLocalStorageSet(JNIEnv *env);
