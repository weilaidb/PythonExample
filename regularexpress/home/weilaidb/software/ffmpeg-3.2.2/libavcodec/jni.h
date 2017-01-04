#define AVCODEC_JNI_H
int av_jni_set_java_vm(void *vm, void *log_ctx);
void *av_jni_get_java_vm(void *log_ctx);
