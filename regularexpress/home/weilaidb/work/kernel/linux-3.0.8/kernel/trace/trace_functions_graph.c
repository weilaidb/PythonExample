static int ftrace_graph_skip_irqs;
struct fgraph_cpu_data ;
struct fgraph_data ;
#define TRACE_GRAPH_INDENT	2
#define TRACE_GRAPH_PRINT_OVERRUN	0x1
#define TRACE_GRAPH_PRINT_CPU		0x2
#define TRACE_GRAPH_PRINT_OVERHEAD	0x4
#define TRACE_GRAPH_PRINT_PROC		0x8
#define TRACE_GRAPH_PRINT_DURATION	0x10
#define TRACE_GRAPH_PRINT_ABS_TIME	0x20
#define TRACE_GRAPH_PRINT_IRQS		0x40
static struct tracer_opt trace_opts[] = ;
static struct tracer_flags tracer_flags = ;
static struct trace_array *graph_array;
int
ftrace_push_return_trace(unsigned long ret, unsigned long func, int *depth,
unsigned long frame_pointer)
static void
ftrace_pop_return_trace(struct ftrace_graph_ret *trace, unsigned long *ret,
unsigned long frame_pointer)
unsigned long ftrace_return_to_handler(unsigned long frame_pointer)
int __trace_graph_entry(struct trace_array *tr,
struct ftrace_graph_ent *trace,
unsigned long flags,
int pc)
static inline int ftrace_graph_ignore_irqs(void)
int trace_graph_entry(struct ftrace_graph_ent *trace)
int trace_graph_thresh_entry(struct ftrace_graph_ent *trace)
static void
__trace_graph_function(struct trace_array *tr,
unsigned long ip, unsigned long flags, int pc)
void
trace_graph_function(struct trace_array *tr,
unsigned long ip, unsigned long parent_ip,
unsigned long flags, int pc)
void __trace_graph_return(struct trace_array *tr,
struct ftrace_graph_ret *trace,
unsigned long flags,
int pc)
void trace_graph_return(struct ftrace_graph_ret *trace)
void set_graph_array(struct trace_array *tr)
void trace_graph_thresh_return(struct ftrace_graph_ret *trace)
static int graph_trace_init(struct trace_array *tr)
static void graph_trace_reset(struct trace_array *tr)
static int max_bytes_for_cpu;
static enum print_line_t
print_graph_cpu(struct trace_seq *s, int cpu)
#define TRACE_GRAPH_PROCINFO_LENGTH	14
static enum print_line_t
print_graph_proc(struct trace_seq *s, pid_t pid)
static enum print_line_t
print_graph_lat_fmt(struct trace_seq *s, struct trace_entry *entry)
static enum print_line_t
verif_pid(struct trace_seq *s, pid_t pid, int cpu, struct fgraph_data *data)
static struct ftrace_graph_ret_entry *
get_return_for_leaf(struct trace_iterator *iter,
struct ftrace_graph_ent_entry *curr)
static int
print_graph_overhead(unsigned long long duration, struct trace_seq *s,
u32 flags)
static int print_graph_abs_time(u64 t, struct trace_seq *s)
static enum print_line_t
print_graph_irq(struct trace_iterator *iter, unsigned long addr,
enum trace_type type, int cpu, pid_t pid, u32 flags)
enum print_line_t
trace_print_graph_duration(unsigned long long duration, struct trace_seq *s)
static enum print_line_t
print_graph_duration(unsigned long long duration, struct trace_seq *s)
static enum print_line_t
print_graph_entry_leaf(struct trace_iterator *iter,
struct ftrace_graph_ent_entry *entry,
struct ftrace_graph_ret_entry *ret_entry,
struct trace_seq *s, u32 flags)
static enum print_line_t
print_graph_entry_nested(struct trace_iterator *iter,
struct ftrace_graph_ent_entry *entry,
struct trace_seq *s, int cpu, u32 flags)
if (flags & TRACE_GRAPH_PRINT_OVERRUN)
ret = print_graph_irq(iter, trace->func, TRACE_GRAPH_RET,
cpu, pid, flags);
if (ret == TRACE_TYPE_PARTIAL_LINE)
return TRACE_TYPE_PARTIAL_LINE;
return TRACE_TYPE_HANDLED;
}
static enum print_line_t
print_graph_comment(struct trace_seq *s, struct trace_entry *ent,
struct trace_iterator *iter, u32 flags)
enum print_line_t
__print_graph_function_flags(struct trace_iterator *iter, u32 flags)
static enum print_line_t
print_graph_function(struct trace_iterator *iter)
enum print_line_t print_graph_function_flags(struct trace_iterator *iter,
u32 flags)
static enum print_line_t
print_graph_function_event(struct trace_iterator *iter, int flags,
struct trace_event *event)
static void print_lat_header(struct seq_file *s, u32 flags)
static void __print_graph_headers_flags(struct seq_file *s, u32 flags)
void print_graph_headers(struct seq_file *s)
void print_graph_headers_flags(struct seq_file *s, u32 flags)
void graph_trace_open(struct trace_iterator *iter)
void graph_trace_close(struct trace_iterator *iter)
static int func_graph_set_flag(u32 old_flags, u32 bit, int set)
static struct trace_event_functions graph_functions = ;
static struct trace_event graph_trace_entry_event = ;
static struct trace_event graph_trace_ret_event = ;
static struct tracer graph_trace __read_mostly = ;
static __init int init_graph_trace(void)
device_initcall(init_graph_trace);
