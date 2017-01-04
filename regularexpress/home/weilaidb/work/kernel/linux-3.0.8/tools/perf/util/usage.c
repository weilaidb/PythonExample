static void report(const char *prefix, const char *err, va_list params)
static NORETURN void usage_builtin(const char *err)
static NORETURN void die_builtin(const char *err, va_list params)
static void error_builtin(const char *err, va_list params)
static void warn_builtin(const char *warn, va_list params)
static void (*usage_routine)(const char *err) NORETURN = usage_builtin;
static void (*die_routine)(const char *err, va_list params) NORETURN = die_builtin;
static void (*error_routine)(const char *err, va_list params) = error_builtin;
static void (*warn_routine)(const char *err, va_list params) = warn_builtin;
void set_die_routine(void (*routine)(const char *err, va_list params) NORETURN)
void usage(const char *err)
void die(const char *err, ...)
int error(const char *err, ...)
void warning(const char *warn, ...)
