#define __PERF_DEBUG_H
extern int verbose;
extern bool quiet, dump_trace;
int dump_printf(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
void trace_event(union perf_event *event);
struct ui_progress;
static inline int ui_helpline__show_help(const char *format __used, va_list ap __used)
static inline struct ui_progress *ui_progress__new(const char *title __used,
u64 total __used)
static inline void ui_progress__update(struct ui_progress *self __used,
u64 curr __used)
static inline void ui_progress__delete(struct ui_progress *self __used)
extern char ui_helpline__last_msg[];
int ui_helpline__show_help(const char *format, va_list ap);
void ui__warning(const char *format, ...) __attribute__((format(printf, 1, 2)));
void ui__warning_paranoid(void);
