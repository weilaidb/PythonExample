static struct trace_array	*wakeup_trace;
static int __read_mostly	tracer_enabled;
static struct task_struct	*wakeup_task;
static int			wakeup_cpu;
static int			wakeup_current_cpu;
static unsigned			wakeup_prio = -1;
static int			wakeup_rt;
static arch_spinlock_t wakeup_lock =
(arch_spinlock_t)__ARCH_SPIN_LOCK_UNLOCKED;
static void wakeup_reset(struct trace_array *tr);
static void __wakeup_reset(struct trace_array *tr);
static int wakeup_graph_entry(struct ftrace_graph_ent *trace);
static void wakeup_graph_return(struct ftrace_graph_ret *trace);
static int save_lat_flag;
#define TRACE_DISPLAY_GRAPH     1
static struct tracer_opt trace_opts[] = ;
static struct tracer_flags tracer_flags = ;
#define is_graph() (tracer_flags.val & TRACE_DISPLAY_GRAPH)
static int
func_prolog_preempt_disable(struct trace_array *tr,
struct trace_array_cpu **data,
int *pc)
static void
wakeup_tracer_call(unsigned long ip, unsigned long parent_ip)
static struct ftrace_ops trace_ops __read_mostly =
;
static int start_func_tracer(int graph)
static void stop_func_tracer(int graph)
static int wakeup_set_flag(u32 old_flags, u32 bit, int set)
static int wakeup_graph_entry(struct ftrace_graph_ent *trace)
static void wakeup_graph_return(struct ftrace_graph_ret *trace)
static void wakeup_trace_open(struct trace_iterator *iter)
static void wakeup_trace_close(struct trace_iterator *iter)
#define GRAPH_TRACER_FLAGS (TRACE_GRAPH_PRINT_PROC)
static enum print_line_t wakeup_print_line(struct trace_iterator *iter)
static void wakeup_print_header(struct seq_file *s)
static void
__trace_function(struct trace_array *tr,
unsigned long ip, unsigned long parent_ip,
unsigned long flags, int pc)
#define __trace_function trace_function
static int wakeup_set_flag(u32 old_flags, u32 bit, int set)
static int wakeup_graph_entry(struct ftrace_graph_ent *trace)
static enum print_line_t wakeup_print_line(struct trace_iterator *iter)
static void wakeup_graph_return(struct ftrace_graph_ret *trace)
static void wakeup_print_header(struct seq_file *s)
static void wakeup_trace_open(struct trace_iterator *iter)
static void wakeup_trace_close(struct trace_iterator *iter)
static int report_latency(cycle_t delta)
static void
probe_wakeup_migrate_task(void *ignore, struct task_struct *task, int cpu)
static void notrace
probe_wakeup_sched_switch(void *ignore,
struct task_struct *prev, struct task_struct *next)
static void __wakeup_reset(struct trace_array *tr)
static void wakeup_reset(struct trace_array *tr)
static void
probe_wakeup(void *ignore, struct task_struct *p, int success)
static void start_wakeup_tracer(struct trace_array *tr)
static void stop_wakeup_tracer(struct trace_array *tr)
static int __wakeup_tracer_init(struct trace_array *tr)
static int wakeup_tracer_init(struct trace_array *tr)
static int wakeup_rt_tracer_init(struct trace_array *tr)
static void wakeup_tracer_reset(struct trace_array *tr)
static void wakeup_tracer_start(struct trace_array *tr)
static void wakeup_tracer_stop(struct trace_array *tr)
static struct tracer wakeup_tracer __read_mostly =
;
static struct tracer wakeup_rt_tracer __read_mostly =
;
__init static int init_wakeup_tracer(void)
device_initcall(init_wakeup_tracer);
