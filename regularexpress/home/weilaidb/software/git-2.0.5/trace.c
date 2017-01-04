static int get_trace_fd(const char *key, int *need_close)
static const char err_msg[] = "Could not trace into fd given by "
"GIT_TRACE environment variable";
static void trace_vprintf(const char *key, const char *fmt, va_list ap)
__attribute__((format (printf, 2, 3)))
void trace_printf_key(const char *key, const char *fmt, ...)
void trace_printf(const char *fmt, ...)
void trace_strbuf(const char *key, const struct strbuf *buf)
void trace_argv_printf(const char **argv, const char *fmt, ...)
static const char *quote_crnl(const char *path)
void trace_repo_setup(const char *prefix)
int trace_want(const char *key)
