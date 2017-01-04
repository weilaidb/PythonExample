static JavaVM *java_vm;
static pthread_key_t current_env;
static pthread_once_t once = PTHREAD_ONCE_INIT;
static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
static void jni_detach_env(void *data)
static void jni_create_pthread_key(void)
JNIEnv *ff_jni_get_env(void *log_ctx)
char *ff_jni_jstring_to_utf_chars(JNIEnv *env, jstring string, void *log_ctx)
jstring ff_jni_utf_chars_to_jstring(JNIEnv *env, const char *utf_chars, void *log_ctx)
int ff_jni_exception_get_summary(JNIEnv *env, jthrowable exception, char **error, void *log_ctx)
int ff_jni_exception_check(JNIEnv *env, int log, void *log_ctx)
int ff_jni_init_jfields(JNIEnv *env, void *jfields, const struct FFJniField *jfields_mapping, int global, void *log_ctx)
int ff_jni_reset_jfields(JNIEnv *env, void *jfields, const struct FFJniField *jfields_mapping, int global, void *log_ctx)
