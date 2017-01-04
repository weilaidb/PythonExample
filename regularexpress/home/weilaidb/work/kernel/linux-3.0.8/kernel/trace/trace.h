#define _LINUX_KERNEL_TRACE_H
enum trace_type ;
#undef __field
#define __field(type, item)		type	item;
#undef __field_struct
#define __field_struct(type, item)	__field(type, item)
#undef __field_desc
#define __field_desc(type, container, item)
#undef __array
#define __array(type, item, size)	type	item[size];
#undef __array_desc
#define __array_desc(type, container, item, size)
#undef __dynamic_array
#define __dynamic_array(type, item)	type	item[];
#undef F_STRUCT
#define F_STRUCT(args...)		args
#undef FTRACE_ENTRY
#define FTRACE_ENTRY(name, struct_name, id, tstruct, print)	\
struct struct_name
#undef TP_ARGS
#define TP_ARGS(args...)	args
#undef FTRACE_ENTRY_DUP
#define FTRACE_ENTRY_DUP(name, name_struct, id, tstruct, printk)
struct syscall_trace_enter ;
struct syscall_trace_exit ;
struct kprobe_trace_entry_head ;
struct kretprobe_trace_entry_head ;
enum trace_flag_type ;
#define TRACE_BUF_SIZE		1024
struct trace_array_cpu ;
struct trace_array ;
#define FTRACE_CMP_TYPE(var, type) \
__builtin_types_compatible_p(typeof(var), type *)
#undef IF_ASSIGN
#define IF_ASSIGN(var, entry, etype, id)		\
if (FTRACE_CMP_TYPE(var, etype))
extern void __ftrace_bad_type(void);
#define trace_assign_type(var, ent)					\
do  while (0)
struct tracer_opt ;
struct tracer_flags ;
#define TRACER_OPT(s, b)	.name = #s, .bit = b
struct tracer ;
#define TRACE_PIPE_ALL_CPU	-1
int tracer_init(struct tracer *t, struct trace_array *tr);
int tracing_is_enabled(void);
void trace_wake_up(void);
void tracing_reset(struct trace_array *tr, int cpu);
void tracing_reset_online_cpus(struct trace_array *tr);
void tracing_reset_current(int cpu);
void tracing_reset_current_online_cpus(void);
int tracing_open_generic(struct inode *inode, struct file *filp);
struct dentry *trace_create_file(const char *name,
mode_t mode,
struct dentry *parent,
void *data,
const struct file_operations *fops);
struct dentry *tracing_init_dentry(void);
struct ring_buffer_event;
struct ring_buffer_event *
trace_buffer_lock_reserve(struct ring_buffer *buffer,
int type,
unsigned long len,
unsigned long flags,
int pc);
void trace_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event,
unsigned long flags, int pc);
struct trace_entry *tracing_get_trace_entry(struct trace_array *tr,
struct trace_array_cpu *data);
struct trace_entry *trace_find_next_entry(struct trace_iterator *iter,
int *ent_cpu, u64 *ent_ts);
int trace_empty(struct trace_iterator *iter);
void *trace_find_next_entry_inc(struct trace_iterator *iter);
void trace_init_global_iter(struct trace_iterator *iter);
void tracing_iter_reset(struct trace_iterator *iter, int cpu);
void default_wait_pipe(struct trace_iterator *iter);
void poll_wait_pipe(struct trace_iterator *iter);
void ftrace(struct trace_array *tr,
struct trace_array_cpu *data,
unsigned long ip,
unsigned long parent_ip,
unsigned long flags, int pc);
void tracing_sched_switch_trace(struct trace_array *tr,
struct task_struct *prev,
struct task_struct *next,
unsigned long flags, int pc);
void tracing_sched_wakeup_trace(struct trace_array *tr,
struct task_struct *wakee,
struct task_struct *cur,
unsigned long flags, int pc);
void trace_function(struct trace_array *tr,
unsigned long ip,
unsigned long parent_ip,
unsigned long flags, int pc);
void trace_graph_function(struct trace_array *tr,
unsigned long ip,
unsigned long parent_ip,
unsigned long flags, int pc);
void trace_default_header(struct seq_file *m);
void print_trace_header(struct seq_file *m, struct trace_iterator *iter);
int trace_empty(struct trace_iterator *iter);
void trace_graph_return(struct ftrace_graph_ret *trace);
int trace_graph_entry(struct ftrace_graph_ent *trace);
void set_graph_array(struct trace_array *tr);
void tracing_start_cmdline_record(void);
void tracing_stop_cmdline_record(void);
void tracing_sched_switch_assign_trace(struct trace_array *tr);
void tracing_stop_sched_switch_record(void);
void tracing_start_sched_switch_record(void);
int register_tracer(struct tracer *type);
void unregister_tracer(struct tracer *type);
int is_tracing_stopped(void);
enum trace_file_type ;
extern cpumask_var_t __read_mostly tracing_buffer_mask;
#define for_each_tracing_cpu(cpu)	\
for_each_cpu(cpu, tracing_buffer_mask)
extern unsigned long nsecs_to_usecs(unsigned long nsecs);
extern unsigned long tracing_thresh;
extern unsigned long tracing_max_latency;
void update_max_tr(struct trace_array *tr, struct task_struct *tsk, int cpu);
void update_max_tr_single(struct trace_array *tr,
struct task_struct *tsk, int cpu);
void ftrace_trace_stack(struct ring_buffer *buffer, unsigned long flags,
int skip, int pc);
void ftrace_trace_userstack(struct ring_buffer *buffer, unsigned long flags,
int pc);
void __trace_stack(struct trace_array *tr, unsigned long flags, int skip,
int pc);
static inline void ftrace_trace_stack(struct ring_buffer *buffer,
unsigned long flags, int skip, int pc)
static inline void ftrace_trace_userstack(struct ring_buffer *buffer,
unsigned long flags, int pc)
static inline void __trace_stack(struct trace_array *tr, unsigned long flags,
int skip, int pc)
extern cycle_t ftrace_now(int cpu);
extern void trace_find_cmdline(int pid, char comm[]);
extern unsigned long ftrace_update_tot_cnt;
#define DYN_FTRACE_TEST_NAME trace_selftest_dynamic_test_func
extern int DYN_FTRACE_TEST_NAME(void);
#define DYN_FTRACE_TEST_NAME2 trace_selftest_dynamic_test_func2
extern int DYN_FTRACE_TEST_NAME2(void);
extern int ring_buffer_expanded;
extern bool tracing_selftest_disabled;
DECLARE_PER_CPU(int, ftrace_cpu_disabled);
extern int trace_selftest_startup_function(struct tracer *trace,
struct trace_array *tr);
extern int trace_selftest_startup_function_graph(struct tracer *trace,
struct trace_array *tr);
extern int trace_selftest_startup_irqsoff(struct tracer *trace,
struct trace_array *tr);
extern int trace_selftest_startup_preemptoff(struct tracer *trace,
struct trace_array *tr);
extern int trace_selftest_startup_preemptirqsoff(struct tracer *trace,
struct trace_array *tr);
extern int trace_selftest_startup_wakeup(struct tracer *trace,
struct trace_array *tr);
extern int trace_selftest_startup_nop(struct tracer *trace,
struct trace_array *tr);
extern int trace_selftest_startup_sched_switch(struct tracer *trace,
struct trace_array *tr);
extern int trace_selftest_startup_branch(struct tracer *trace,
struct trace_array *tr);
extern void *head_page(struct trace_array_cpu *data);
extern unsigned long long ns2usecs(cycle_t nsec);
extern int
trace_vbprintk(unsigned long ip, const char *fmt, va_list args);
extern int
trace_vprintk(unsigned long ip, const char *fmt, va_list args);
extern int
trace_array_vprintk(struct trace_array *tr,
unsigned long ip, const char *fmt, va_list args);
int trace_array_printk(struct trace_array *tr,
unsigned long ip, const char *fmt, ...);
void trace_printk_seq(struct trace_seq *s);
enum print_line_t print_trace_line(struct trace_iterator *iter);
extern unsigned long trace_flags;
extern int trace_clock_id;
#define TRACE_GRAPH_PRINT_OVERRUN       0x1
#define TRACE_GRAPH_PRINT_CPU           0x2
#define TRACE_GRAPH_PRINT_OVERHEAD      0x4
#define TRACE_GRAPH_PRINT_PROC          0x8
#define TRACE_GRAPH_PRINT_DURATION      0x10
#define TRACE_GRAPH_PRINT_ABS_TIME      0x20
extern enum print_line_t
print_graph_function_flags(struct trace_iterator *iter, u32 flags);
extern void print_graph_headers_flags(struct seq_file *s, u32 flags);
extern enum print_line_t
trace_print_graph_duration(unsigned long long duration, struct trace_seq *s);
extern void graph_trace_open(struct trace_iterator *iter);
extern void graph_trace_close(struct trace_iterator *iter);
extern int __trace_graph_entry(struct trace_array *tr,
struct ftrace_graph_ent *trace,
unsigned long flags, int pc);
extern void __trace_graph_return(struct trace_array *tr,
struct ftrace_graph_ret *trace,
unsigned long flags, int pc);
#define FTRACE_GRAPH_MAX_FUNCS		32
extern int ftrace_graph_filter_enabled;
extern int ftrace_graph_count;
extern unsigned long ftrace_graph_funcs[FTRACE_GRAPH_MAX_FUNCS];
static inline int ftrace_graph_addr(unsigned long addr)
static inline int ftrace_graph_addr(unsigned long addr)
static inline enum print_line_t
print_graph_function_flags(struct trace_iterator *iter, u32 flags)
extern struct list_head ftrace_pids;
static inline int ftrace_trace_task(struct task_struct *task)
static inline int ftrace_trace_task(struct task_struct *task)
struct trace_parser ;
static inline bool trace_parser_loaded(struct trace_parser *parser)
static inline bool trace_parser_cont(struct trace_parser *parser)
static inline void trace_parser_clear(struct trace_parser *parser)
extern int trace_parser_get_init(struct trace_parser *parser, int size);
extern void trace_parser_put(struct trace_parser *parser);
extern int trace_get_user(struct trace_parser *parser, const char __user *ubuf,
size_t cnt, loff_t *ppos);
enum trace_iterator_flags ;
#define TRACE_ITER_SYM_MASK \
(TRACE_ITER_PRINT_PARENT|TRACE_ITER_SYM_OFFSET|TRACE_ITER_SYM_ADDR)
extern struct tracer nop_trace;
extern int enable_branch_tracing(struct trace_array *tr);
extern void disable_branch_tracing(void);
static inline int trace_branch_enable(struct trace_array *tr)
static inline void trace_branch_disable(void)
static inline int trace_branch_enable(struct trace_array *tr)
static inline void trace_branch_disable(void)
int tracing_update_buffers(void);
enum ;
struct ftrace_event_field ;
struct event_filter ;
struct event_subsystem ;
#define FILTER_PRED_INVALID	((unsigned short)-1)
#define FILTER_PRED_IS_RIGHT	(1 << 15)
#define FILTER_PRED_FOLD	(1 << 15)
#define MAX_FILTER_PRED		16384
struct filter_pred;
struct regex;
typedef int (*filter_pred_fn_t) (struct filter_pred *pred, void *event);
typedef int (*regex_match_func)(char *str, struct regex *r, int len);
enum regex_type ;
struct regex ;
struct filter_pred ;
extern struct list_head ftrace_common_fields;
extern enum regex_type
filter_parse_regex(char *buff, int len, char **search, int *not);
extern void print_event_filter(struct ftrace_event_call *call,
struct trace_seq *s);
extern int apply_event_filter(struct ftrace_event_call *call,
char *filter_string);
extern int apply_subsystem_event_filter(struct event_subsystem *system,
char *filter_string);
extern void print_subsystem_event_filter(struct event_subsystem *system,
struct trace_seq *s);
extern int filter_assign_type(const char *type);
struct list_head *
trace_get_fields(struct ftrace_event_call *event_call);
static inline int
filter_check_discard(struct ftrace_event_call *call, void *rec,
struct ring_buffer *buffer,
struct ring_buffer_event *event)
extern void trace_event_enable_cmd_record(bool enable);
extern struct mutex event_mutex;
extern struct list_head ftrace_events;
extern const char *__start___trace_bprintk_fmt[];
extern const char *__stop___trace_bprintk_fmt[];
#undef FTRACE_ENTRY
#define FTRACE_ENTRY(call, struct_name, id, tstruct, print)		\
extern struct ftrace_event_call					\
__attribute__((__aligned__(4))) event_##call;
#undef FTRACE_ENTRY_DUP
#define FTRACE_ENTRY_DUP(call, struct_name, id, tstruct, print)		\
FTRACE_ENTRY(call, struct_name, id, PARAMS(tstruct), PARAMS(print))
#define trace_recursion_inc() do  while (0)
#define trace_recursion_dec() do  while (0)
#define trace_recursion_buffer() ((current)->trace_recursion & 0x3ff)
#define TRACE_INTERNAL_BIT		(1<<11)
#define TRACE_GLOBAL_BIT		(1<<12)
#define trace_recursion_set(bit)	do  while (0)
#define trace_recursion_clear(bit)	do  while (0)
#define trace_recursion_test(bit)	((current)->trace_recursion & (bit))
