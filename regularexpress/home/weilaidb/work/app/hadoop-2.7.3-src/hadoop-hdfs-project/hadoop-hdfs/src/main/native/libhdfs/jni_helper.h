#define LIBHDFS_JNI_HELPER_H
#define PATH_SEPARATOR ':'
typedef enum  MethType;
jthrowable newCStr(JNIEnv *env, jstring jstr, char **out);
jthrowable newJavaStr(JNIEnv *env, const char *str, jstring *out);
void destroyLocalReference(JNIEnv *env, jobject jObject);
jthrowable invokeMethod(JNIEnv *env, jvalue *retval, MethType methType,
jobject instObj, const char *className, const char *methName,
const char *methSignature, ...);
jthrowable constructNewObjectOfClass(JNIEnv *env, jobject *out, const char *className,
const char *ctorSignature, ...);
jthrowable methodIdFromClass(const char *className, const char *methName,
const char *methSignature, MethType methType,
JNIEnv *env, jmethodID *out);
jthrowable globalClassReference(const char *className, JNIEnv *env, jclass *out);
jthrowable classNameOfObject(jobject jobj, JNIEnv *env, char **name);
JNIEnv* getJNIEnv(void);
int javaObjectIsOfClass(JNIEnv *env, jobject obj, const char *name);
jthrowable hadoopConfSetStr(JNIEnv *env, jobject jConfiguration,
const char *key, const char *value);
jthrowable fetchEnumInstance(JNIEnv *env, const char *className,
const char *valueName, jobject *out);
