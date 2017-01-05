static struct htable *gClassRefHTable = NULL;
#define JVOID         'V'
#define JOBJECT       'L'
#define JARRAYOBJECT  '['
#define JBOOLEAN      'Z'
#define JBYTE         'B'
#define JCHAR         'C'
#define JSHORT        'S'
#define JINT          'I'
#define JLONG         'J'
#define JFLOAT        'F'
#define JDOUBLE       'D'
#define MAX_HASH_TABLE_ELEM 4096
#define VM_BUF_LENGTH 1
void destroyLocalReference(JNIEnv *env, jobject jObject)
static jthrowable validateMethodType(JNIEnv *env, MethType methType)
jthrowable newJavaStr(JNIEnv *env, const char *str, jstring *out)
jthrowable newCStr(JNIEnv *env, jstring jstr, char **out)
jthrowable invokeMethod(JNIEnv *env, jvalue *retval, MethType methType,
jobject instObj, const char *className,
const char *methName, const char *methSignature, ...)
jthrowable constructNewObjectOfClass(JNIEnv *env, jobject *out, const char *className,
const char *ctorSignature, ...)
jthrowable methodIdFromClass(const char *className, const char *methName,
const char *methSignature, MethType methType,
JNIEnv *env, jmethodID *out)
jthrowable globalClassReference(const char *className, JNIEnv *env, jclass *out)
jthrowable classNameOfObject(jobject jobj, JNIEnv *env, char **name)
static JNIEnv* getGlobalJNIEnv(void)
JNIEnv* getJNIEnv(void)
int javaObjectIsOfClass(JNIEnv *env, jobject obj, const char *name)
jthrowable hadoopConfSetStr(JNIEnv *env, jobject jConfiguration,
const char *key, const char *value)
jthrowable fetchEnumInstance(JNIEnv *env, const char *className,
const char *valueName, jobject *out)
