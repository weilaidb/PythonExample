static inline int trace_valid_entry(struct trace_entry *entry)
static int trace_test_buffer_cpu(struct trace_array *tr, int cpu)
static int trace_test_buffer(struct trace_array *tr, unsigned long *count)
static inline void warn_failed_init_tracer(struct tracer *trace, int init_ret)
static int trace_selftest_test_probe1_cnt;
static void trace_selftest_test_probe1_func(unsigned long ip,
unsigned long pip)
static int trace_selftest_test_probe2_cnt;
static void trace_selftest_test_probe2_func(unsigned long ip,
unsigned long pip)
static int trace_selftest_test_probe3_cnt;
static void trace_selftest_test_probe3_func(unsigned long ip,
unsigned long pip)
static int trace_selftest_test_global_cnt;
static void trace_selftest_test_global_func(unsigned long ip,
unsigned long pip)
static int trace_selftest_test_dyn_cnt;
static void trace_selftest_test_dyn_func(unsigned long ip,
unsigned long pip)
static struct ftrace_ops test_probe1 = ;
static struct ftrace_ops test_probe2 = ;
static struct ftrace_ops test_probe3 = ;
static struct ftrace_ops test_global = ;
static void print_counts(void)
static void reset_counts(void)
static int trace_selftest_ops(int cnt)
int trace_selftest_startup_dynamic_tracing(struct tracer *trace,
struct trace_array *tr,
int (*func)(void))
# define trace_selftest_startup_dynamic_tracing(trace, tr, func) ()
int
trace_selftest_startup_function(struct tracer *trace, struct trace_array *tr)
#define GRAPH_MAX_FUNC_TEST	100000000
static void
__ftrace_dump(bool disable_tracing, enum ftrace_dump_mode oops_dump_mode);
static unsigned int graph_hang_thresh;
static int trace_graph_entry_watchdog(struct ftrace_graph_ent *trace)
int
trace_selftest_startup_function_graph(struct tracer *trace,
struct trace_array *tr)
int
trace_selftest_startup_irqsoff(struct tracer *trace, struct trace_array *tr)
int
trace_selftest_startup_preemptoff(struct tracer *trace, struct trace_array *tr)
#if defined(CONFIG_IRQSOFF_TRACER) && defined(CONFIG_PREEMPT_TRACER)
int
trace_selftest_startup_preemptirqsoff(struct tracer *trace, struct trace_array *tr)
int
trace_selftest_startup_nop(struct tracer *trace, struct trace_array *tr)
static int trace_wakeup_test_thread(void *data)
int
trace_selftest_startup_wakeup(struct tracer *trace, struct trace_array *tr)
int
trace_selftest_startup_sched_switch(struct tracer *trace, struct trace_array *tr)
int
trace_selftest_startup_branch(struct tracer *trace, struct trace_array *tr)
