#if CONFIG_JNI
void *java_vm;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
int av_jni_set_java_vm(void *vm, void *log_ctx)
void *av_jni_get_java_vm(void *log_ctx)
int av_jni_set_java_vm(void *vm, void *log_ctx)
void *av_jni_get_java_vm(void *log_ctx)
