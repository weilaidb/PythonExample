#define EXCEPTION_INFO_LEN (sizeof(gExceptionInfo)/sizeof(gExceptionInfo[0]))
struct ExceptionInfo ;
static const struct ExceptionInfo gExceptionInfo[] = ;
void getExceptionInfo(const char *excName, int noPrintFlags,
int *excErrno, int *shouldPrint)
int printExceptionAndFreeV(JNIEnv *env, jthrowable exc, int noPrintFlags,
const char *fmt, va_list ap)
int printExceptionAndFree(JNIEnv *env, jthrowable exc, int noPrintFlags,
const char *fmt, ...)
int printPendingExceptionAndFree(JNIEnv *env, int noPrintFlags,
const char *fmt, ...)
jthrowable getPendingExceptionAndClear(JNIEnv *env)
jthrowable newRuntimeError(JNIEnv *env, const char *fmt, ...)
