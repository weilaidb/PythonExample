static jobjectArray emptyGroups = NULL;
JNIEXPORT void JNICALL
Java_org_apache_hadoop_security_JniBasedUnixGroupsMapping_anchorNative(
JNIEnv *env, jclass clazz)
static void throw_ioexception(JNIEnv* env, DWORD errnum)
JNIEXPORT jobjectArray JNICALL
Java_org_apache_hadoop_security_JniBasedUnixGroupsMapping_getGroupsForUser
(JNIEnv *env, jclass clazz, jstring juser)
