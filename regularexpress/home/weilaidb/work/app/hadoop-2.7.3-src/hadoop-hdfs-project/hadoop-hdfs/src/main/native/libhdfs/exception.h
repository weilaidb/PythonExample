#define LIBHDFS_EXCEPTION_H
#define PRINT_EXC_ALL                           0x00
#define NOPRINT_EXC_FILE_NOT_FOUND              0x01
#define NOPRINT_EXC_ACCESS_CONTROL              0x02
#define NOPRINT_EXC_UNRESOLVED_LINK             0x04
#define NOPRINT_EXC_PARENT_NOT_DIRECTORY        0x08
#define NOPRINT_EXC_ILLEGAL_ARGUMENT            0x10
void getExceptionInfo(const char *excName, int noPrintFlags,
int *excErrno, int *shouldPrint);
int printExceptionAndFreeV(JNIEnv *env, jthrowable exc, int noPrintFlags,
const char *fmt, va_list ap);
int printExceptionAndFree(JNIEnv *env, jthrowable exc, int noPrintFlags,
const char *fmt, ...) TYPE_CHECKED_PRINTF_FORMAT(4, 5);
int printPendingExceptionAndFree(JNIEnv *env, int noPrintFlags,
const char *fmt, ...) TYPE_CHECKED_PRINTF_FORMAT(3, 4);
jthrowable getPendingExceptionAndClear(JNIEnv *env);
jthrowable newRuntimeError(JNIEnv *env, const char *fmt, ...)
TYPE_CHECKED_PRINTF_FORMAT(2, 3);
#undef TYPE_CHECKED_PRINTF_FORMAT
