#if !defined ORG_APACHE_HADOOP_H
#define ORG_APACHE_HADOOP_H
#if defined(_WIN32)
#undef UNIX
#define WINDOWS
#undef WINDOWS
#define UNIX
#define THROW(env, exception_name, message) \
#define PASS_EXCEPTIONS(env) \
#define PASS_EXCEPTIONS_GOTO(env, target) \
#define PASS_EXCEPTIONS_RET(env, ret) \
static __attribute__ ((unused))
void *do_dlsym(JNIEnv *env, void *handle, const char *symbol)
#define LOAD_DYNAMIC_SYMBOL(func_ptr, env, handle, symbol) \
if ((func_ptr = do_dlsym(env, handle, symbol)) == NULL)
#define UNICODE
#define inline __inline;
#define likely(_c) (_c)
#define unlikely(_c) (_c)
#define snprintf(a, b ,c, d) _snprintf_s((a), (b), _TRUNCATE, (c), (d))
#define LOAD_DYNAMIC_SYMBOL(func_type, func_ptr, env, handle, symbol) \
if ((func_ptr = (func_type) do_dlsym(env, handle, symbol)) == NULL)
static FARPROC WINAPI do_dlsym(JNIEnv *env, HMODULE handle, LPCSTR symbol)
#define LOCK_CLASS(env, clazz, classname) \
if ((*env)->MonitorEnter(env, clazz) != 0)
#define UNLOCK_CLASS(env, clazz, classname) \
if ((*env)->MonitorExit(env, clazz) != 0)
#define RETRY_ON_EINTR(ret, expr) do  while ((ret == -1) && (errno == EINTR));
