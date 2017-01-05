struct listElement ;
typedef struct listElement UserList;
JNIEXPORT jobjectArray JNICALL
Java_org_apache_hadoop_security_JniBasedUnixGroupsNetgroupMapping_getUsersForNetgroupJNI
(JNIEnv *env, jobject jobj, jstring jgroup) {
UserList *userListHead = NULL;
UserList *current = NULL;
int       userListSize = 0;
const char *cgroup  = NULL;
jobjectArray jusers = NULL;
int setnetgrentCalledFlag = 0;
char *errorType = NULL;
char *errorMessage = NULL;
cgroup = (*env)->GetStringUTFChars(env, jgroup, NULL);
if (cgroup == NULL)
setnetgrentCalledFlag = 1;
#if defined(__FreeBSD__) || defined(__MACH__)
setnetgrent(cgroup);
