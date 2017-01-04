static int			ftrace_function_enabled;
static struct trace_array	*func_trace;
static void tracing_start_function_trace(void);
static void tracing_stop_function_trace(void);
static int function_trace_init(struct trace_array *tr)
static void function_trace_reset(struct trace_array *tr)
static void function_trace_start(struct trace_array *tr)
static void
function_trace_call_preempt_only(unsigned long ip, unsigned long parent_ip)
static void
function_trace_call(unsigned long ip, unsigned long parent_ip)
static void
function_stack_trace_call(unsigned long ip, unsigned long parent_ip)
static struct ftrace_ops trace_ops __read_mostly =
;
static struct ftrace_ops trace_stack_ops __read_mostly =
;
enum ;
static struct tracer_opt func_opts[] = ;
static struct tracer_flags func_flags = ;
static void tracing_start_function_trace(void)
static void tracing_stop_function_trace(void)
static int func_set_flag(u32 old_flags, u32 bit, int set)
static struct tracer function_trace __read_mostly =
;
static void
ftrace_traceon(unsigned long ip, unsigned long parent_ip, void **data)
static void
ftrace_traceoff(unsigned long ip, unsigned long parent_ip, void **data)
static int
ftrace_trace_onoff_print(struct seq_file *m, unsigned long ip,
struct ftrace_probe_ops *ops, void *data);
static struct ftrace_probe_ops traceon_probe_ops = ;
static struct ftrace_probe_ops traceoff_probe_ops = ;
static int
ftrace_trace_onoff_print(struct seq_file *m, unsigned long ip,
struct ftrace_probe_ops *ops, void *data)
static int
ftrace_trace_onoff_unreg(char *glob, char *cmd, char *param)
static int
ftrace_trace_onoff_callback(struct ftrace_hash *hash,
char *glob, char *cmd, char *param, int enable)
static struct ftrace_func_command ftrace_traceon_cmd = ;
static struct ftrace_func_command ftrace_traceoff_cmd = ;
static int __init init_func_cmd_traceon(void)
static inline int init_func_cmd_traceon(void)
static __init int init_function_trace(void)
device_initcall(init_function_trace);
