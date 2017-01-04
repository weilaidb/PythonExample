int verbose;
bool dump_trace = false, quiet = false;
int eprintf(int level, const char *fmt, ...)
int dump_printf(const char *fmt, ...)
void ui__warning(const char *format, ...)
void ui__warning_paranoid(void)
void trace_event(union perf_event *event)
