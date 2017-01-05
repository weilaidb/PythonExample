static jfieldID fd_set_data_fid;
#define FD_SET_DATA_MIN_SIZE 2
struct fd_set_data ;
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocketWatcher_anchorNative(
JNIEnv *env, jclass clazz)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_net_unix_DomainSocketWatcher_00024FdSet_alloc0(
JNIEnv *env, jclass clazz)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocketWatcher_00024FdSet_add(
JNIEnv *env, jobject obj, jint fd)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocketWatcher_00024FdSet_remove(
JNIEnv *env, jobject obj, jint fd)
JNIEXPORT jobject JNICALL
Java_org_apache_hadoop_net_unix_DomainSocketWatcher_00024FdSet_getAndClearReadableFds(
JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocketWatcher_00024FdSet_close(
JNIEnv *env, jobject obj)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocketWatcher_doPoll0(
JNIEnv *env, jclass clazz, jint checkMs, jobject fdSet)
