static struct tracer branch_trace;
static int branch_tracing_enabled __read_mostly;
static DEFINE_MUTEX(branch_tracing_mutex);
static struct trace_array *branch_tracer;
static void
probe_likely_condition(struct ftrace_branch_data *f, int val, int expect)
static inline
void trace_likely_condition(struct ftrace_branch_data *f, int val, int expect)
int enable_branch_tracing(struct trace_array *tr)
void disable_branch_tracing(void)
static void start_branch_trace(struct trace_array *tr)
static void stop_branch_trace(struct trace_array *tr)
static int branch_trace_init(struct trace_array *tr)
static void branch_trace_reset(struct trace_array *tr)
static enum print_line_t trace_branch_print(struct trace_iterator *iter,
int flags, struct trace_event *event)
static void branch_print_header(struct seq_file *s)
static struct trace_event_functions trace_branch_funcs = ;
static struct trace_event trace_branch_event = ;
static struct tracer branch_trace __read_mostly =
;
__init static int init_branch_tracer(void)
device_initcall(init_branch_tracer);
static inline
void trace_likely_condition(struct ftrace_branch_data *f, int val, int expect)
void ftrace_likely_update(struct ftrace_branch_data *f, int val, int expect)
EXPORT_SYMBOL(ftrace_likely_update);
extern unsigned long __start_annotated_branch_profile[];
extern unsigned long __stop_annotated_branch_profile[];
static int annotated_branch_stat_headers(struct seq_file *m)
static inline long get_incorrect_percent(struct ftrace_branch_data *p)
static int branch_stat_show(struct seq_file *m, void *v)
static void *annotated_branch_stat_start(struct tracer_stat *trace)
static void *
annotated_branch_stat_next(void *v, int idx)
static int annotated_branch_stat_cmp(void *p1, void *p2)
static struct tracer_stat annotated_branch_stats = ;
__init static int init_annotated_branch_stats(void)
fs_initcall(init_annotated_branch_stats);
extern unsigned long __start_branch_profile[];
extern unsigned long __stop_branch_profile[];
static int all_branch_stat_headers(struct seq_file *m)
static void *all_branch_stat_start(struct tracer_stat *trace)
static void *
all_branch_stat_next(void *v, int idx)
static struct tracer_stat all_branch_stats = ;
__init static int all_annotated_branch_stats(void)
fs_initcall(all_annotated_branch_stats);
