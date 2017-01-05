static jmethodID g_log_error_method;
static jclass g_string_clazz;
extern jobject pw_lock_object;
JNIEXPORT void JNICALL
Java_org_apache_hadoop_security_JniBasedUnixGroupsMapping_anchorNative(
JNIEnv *env, jclass clazz)
static void logError(JNIEnv *env, jclass clazz, jint gid, int ret)
JNIEXPORT jobjectArray JNICALL
Java_org_apache_hadoop_security_JniBasedUnixGroupsMapping_getGroupsForUser
(JNIEnv *env, jclass clazz, jstring jusername)
