#define _LINUX_FTRACE_EVENT_H
struct trace_array;
struct tracer;
struct dentry;
struct trace_print_flags ;
struct trace_print_flags_u64 ;
const char *ftrace_print_flags_seq(struct trace_seq *p, const char *delim,
unsigned long flags,
const struct trace_print_flags *flag_array);
const char *ftrace_print_symbols_seq(struct trace_seq *p, unsigned long val,
const struct trace_print_flags *symbol_array);
#if BITS_PER_LONG == 32
const char *ftrace_print_symbols_seq_u64(struct trace_seq *p,
unsigned long long val,
const struct trace_print_flags_u64
*symbol_array);
const char *ftrace_print_hex_seq(struct trace_seq *p,
const unsigned char *buf, int len);
struct trace_entry ;
#define FTRACE_MAX_EVENT						\
((1 << (sizeof(((struct trace_entry *)0)->type) * 8)) - 1)
struct trace_iterator ;
struct trace_event;
typedef enum print_line_t (*trace_print_func)(struct trace_iterator *iter,
int flags, struct trace_event *event);
struct trace_event_functions ;
struct trace_event ;
extern int register_ftrace_event(struct trace_event *event);
extern int unregister_ftrace_event(struct trace_event *event);
enum print_line_t ;
void tracing_generic_entry_update(struct trace_entry *entry,
unsigned long flags,
int pc);
struct ring_buffer_event *
trace_current_buffer_lock_reserve(struct ring_buffer **current_buffer,
int type, unsigned long len,
unsigned long flags, int pc);
void trace_current_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event,
unsigned long flags, int pc);
void trace_nowake_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event,
unsigned long flags, int pc);
void trace_current_buffer_discard_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event);
void tracing_record_cmdline(struct task_struct *tsk);
struct event_filter;
enum trace_reg ;
struct ftrace_event_call;
struct ftrace_event_class ;
extern int ftrace_event_reg(struct ftrace_event_call *event,
enum trace_reg type);
enum ;
enum ;
struct ftrace_event_call ;
#define __TRACE_EVENT_FLAGS(name, value)				\
static int __init trace_init_flags_##name(void)			\
\
early_initcall(trace_init_flags_##name);
#define PERF_MAX_TRACE_SIZE	2048
#define MAX_FILTER_STR_VAL	256
extern void destroy_preds(struct ftrace_event_call *call);
extern int filter_match_preds(struct event_filter *filter, void *rec);
extern int filter_current_check_discard(struct ring_buffer *buffer,
struct ftrace_event_call *call,
void *rec,
struct ring_buffer_event *event);
enum ;
#define EVENT_STORAGE_SIZE 128
extern struct mutex event_storage_mutex;
extern char event_storage[EVENT_STORAGE_SIZE];
extern int trace_event_raw_init(struct ftrace_event_call *call);
extern int trace_define_field(struct ftrace_event_call *call, const char *type,
const char *name, int offset, int size,
int is_signed, int filter_type);
extern int trace_add_event_call(struct ftrace_event_call *call);
extern void trace_remove_event_call(struct ftrace_event_call *call);
#define is_signed_type(type)	(((type)(-1)) < 0)
int trace_set_clr_event(const char *system, const char *event, int set);
#define event_trace_printk(ip, fmt, args...)				\
do  while (0)
struct perf_event;
DECLARE_PER_CPU(struct pt_regs, perf_trace_regs);
extern int  perf_trace_init(struct perf_event *event);
extern void perf_trace_destroy(struct perf_event *event);
extern int  perf_trace_add(struct perf_event *event, int flags);
extern void perf_trace_del(struct perf_event *event, int flags);
extern int  ftrace_profile_set_filter(struct perf_event *event, int event_id,
char *filter_str);
extern void ftrace_profile_free_filter(struct perf_event *event);
extern void *perf_trace_buf_prepare(int size, unsigned short type,
struct pt_regs *regs, int *rctxp);
static inline void
perf_trace_buf_submit(void *raw_data, int size, int rctx, u64 addr,
u64 count, struct pt_regs *regs, void *head)
