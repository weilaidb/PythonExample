#define FILE_DESCRIPTOR_H
void fd_init(JNIEnv *env);
void fd_deinit(JNIEnv *env);
int fd_get(JNIEnv* env, jobject obj);
jobject fd_create(JNIEnv *env, int fd);
long fd_get(JNIEnv* env, jobject obj);
jobject fd_create(JNIEnv *env, long fd);
