#define ZERO_FULLY_BUF_SIZE 8192
static pthread_mutex_t g_rand_lock = PTHREAD_MUTEX_INITIALIZER;
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_SharedFileDescriptorFactory_deleteStaleTemporaryFiles0(
JNIEnv *env, jclass clazz, jstring jprefix, jstring jpath)
static int zero_fully(int fd, jint length)
JNIEXPORT jobject JNICALL
Java_org_apache_hadoop_io_nativeio_SharedFileDescriptorFactory_createDescriptor0(
JNIEnv *env, jclass clazz, jstring jprefix, jstring jpath, jint length)
