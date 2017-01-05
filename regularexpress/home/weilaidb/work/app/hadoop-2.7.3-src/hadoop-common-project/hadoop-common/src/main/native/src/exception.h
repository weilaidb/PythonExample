#define HADOOP_MAIN_NATIVE_SRC_EXCEPTION_H
#define TYPE_CHECKED_PRINTF_FORMAT(formatArg, varArgs)
# else
#define TYPE_CHECKED_PRINTF_FORMAT(formatArg, varArgs) \
__attribute__((format(printf, formatArg, varArgs)))
jthrowable newExceptionV(JNIEnv* env, const char *name,
const char *fmt, va_list ap);
jthrowable newException(JNIEnv* env, const char *name, const char *fmt, ...)
TYPE_CHECKED_PRINTF_FORMAT(3, 4);
jthrowable newRuntimeException(JNIEnv* env, const char *fmt, ...)
TYPE_CHECKED_PRINTF_FORMAT(2, 3);
jthrowable newIOException(JNIEnv* env, const char *fmt, ...)
TYPE_CHECKED_PRINTF_FORMAT(2, 3);
const char* terror(int errnum);
#undef TYPE_CHECKED_PRINTF_FORMAT
