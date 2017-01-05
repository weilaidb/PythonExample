jthrowable newExceptionV(JNIEnv* env, const char *name,
const char *fmt, va_list ap)
jthrowable newException(JNIEnv* env, const char *name, const char *fmt, ...)
jthrowable newRuntimeException(JNIEnv* env, const char *fmt, ...)
jthrowable newIOException(JNIEnv* env, const char *fmt, ...)
const char* terror(int errnum)
