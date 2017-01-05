typedef struct errno_mapping  errno_mapping_t;
#define MAPPING(x)
static errno_mapping_t ERRNO_MAPPINGS[] = ;
static jclass enum_class;
static jmethodID enum_valueOf;
static jclass errno_class;
void errno_enum_init(JNIEnv *env)
void errno_enum_deinit(JNIEnv *env)
static char *errno_to_string(int errnum)
jobject errno_to_enum(JNIEnv *env, int errnum)
