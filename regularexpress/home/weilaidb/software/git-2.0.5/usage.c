void vreportf(const char *prefix, const char *err, va_list params)
void vwritef(int fd, const char *prefix, const char *err, va_list params)
static NORETURN void usage_builtin(const char *err, va_list params)
static NORETURN void die_builtin(const char *err, va_list params)
static void error_builtin(const char *err, va_list params)
static void warn_builtin(const char *warn, va_list params)
static int die_is_recursing_builtin(void)
static NORETURN_PTR void (*usage_routine)(const char *err, va_list params) = usage_builtin;
static NORETURN_PTR void (*die_routine)(const char *err, va_list params) = die_builtin;
static void (*error_routine)(const char *err, va_list params) = error_builtin;
static void (*warn_routine)(const char *err, va_list params) = warn_builtin;
static int (*die_is_recursing)(void) = die_is_recursing_builtin;
void set_die_routine(NORETURN_PTR void (*routine)(const char *err, va_list params))
void set_error_routine(void (*routine)(const char *err, va_list params))
void set_die_is_recursing_routine(int (*routine)(void))
void NORETURN usagef(const char *err, ...)
void NORETURN usage(const char *err)
void NORETURN die(const char *err, ...)
void NORETURN die_errno(const char *fmt, ...)
#undef error
int error(const char *err, ...)
void warning(const char *warn, ...)
