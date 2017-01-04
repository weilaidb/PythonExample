static struct trace_array		*irqsoff_trace __read_mostly;
static int				tracer_enabled __read_mostly;
static DEFINE_PER_CPU(int, tracing_cpu);
static DEFINE_SPINLOCK(max_trace_lock);
enum ;
static int trace_type __read_mostly;
static int save_lat_flag;
static void stop_irqsoff_tracer(struct trace_array *tr, int graph);
static int start_irqsoff_tracer(struct trace_array *tr, int graph);
static inline int
preempt_trace(void)
# define preempt_trace() (0)
static inline int
irq_trace(void)
# define irq_trace() (0)
#define TRACE_DISPLAY_GRAPH	1
static struct tracer_opt trace_opts[] = ;
static struct tracer_flags tracer_flags = ;
#define is_graph() (tracer_flags.val & TRACE_DISPLAY_GRAPH)
static __cacheline_aligned_in_smp	unsigned long max_sequence;
static int func_prolog_dec(struct trace_array *tr,
struct trace_array_cpu **data,
unsigned long *flags)
static void
irqsoff_tracer_call(unsigned long ip, unsigned long parent_ip)
static struct ftrace_ops trace_ops __read_mostly =
;
static int irqsoff_set_flag(u32 old_flags, u32 bit, int set)
static int irqsoff_graph_entry(struct ftrace_graph_ent *trace)
static void irqsoff_graph_return(struct ftrace_graph_ret *trace)
static void irqsoff_trace_open(struct trace_iterator *iter)
static void irqsoff_trace_close(struct trace_iterator *iter)
#define GRAPH_TRACER_FLAGS (TRACE_GRAPH_PRINT_CPU | \
TRACE_GRAPH_PRINT_PROC)
static enum print_line_t irqsoff_print_line(struct trace_iterator *iter)
static void irqsoff_print_header(struct seq_file *s)
static void
__trace_function(struct trace_array *tr,
unsigned long ip, unsigned long parent_ip,
unsigned long flags, int pc)
#define __trace_function trace_function
static int irqsoff_set_flag(u32 old_flags, u32 bit, int set)
static int irqsoff_graph_entry(struct ftrace_graph_ent *trace)
static enum print_line_t irqsoff_print_line(struct trace_iterator *iter)
static void irqsoff_graph_return(struct ftrace_graph_ret *trace)
static void irqsoff_print_header(struct seq_file *s)
static void irqsoff_trace_open(struct trace_iterator *iter)
static void irqsoff_trace_close(struct trace_iterator *iter)
static int report_latency(cycle_t delta)
static void
check_critical_timing(struct trace_array *tr,
struct trace_array_cpu *data,
unsigned long parent_ip,
int cpu)
static inline void
start_critical_timing(unsigned long ip, unsigned long parent_ip)
static inline void
stop_critical_timing(unsigned long ip, unsigned long parent_ip)
void start_critical_timings(void)
EXPORT_SYMBOL_GPL(start_critical_timings);
void stop_critical_timings(void)
EXPORT_SYMBOL_GPL(stop_critical_timings);
void time_hardirqs_on(unsigned long a0, unsigned long a1)
void time_hardirqs_off(unsigned long a0, unsigned long a1)
void trace_softirqs_on(unsigned long ip)
void trace_softirqs_off(unsigned long ip)
inline void print_irqtrace_events(struct task_struct *curr)
void trace_hardirqs_on(void)
EXPORT_SYMBOL(trace_hardirqs_on);
void trace_hardirqs_off(void)
EXPORT_SYMBOL(trace_hardirqs_off);
void trace_hardirqs_on_caller(unsigned long caller_addr)
EXPORT_SYMBOL(trace_hardirqs_on_caller);
void trace_hardirqs_off_caller(unsigned long caller_addr)
EXPORT_SYMBOL(trace_hardirqs_off_caller);
void trace_preempt_on(unsigned long a0, unsigned long a1)
void trace_preempt_off(unsigned long a0, unsigned long a1)
static int start_irqsoff_tracer(struct trace_array *tr, int graph)
static void stop_irqsoff_tracer(struct trace_array *tr, int graph)
static void __irqsoff_tracer_init(struct trace_array *tr)
static void irqsoff_tracer_reset(struct trace_array *tr)
static void irqsoff_tracer_start(struct trace_array *tr)
static void irqsoff_tracer_stop(struct trace_array *tr)
static int irqsoff_tracer_init(struct trace_array *tr)
static struct tracer irqsoff_tracer __read_mostly =
;
# define register_irqsoff(trace) register_tracer(&trace)
# define register_irqsoff(trace) do  while (0)
static int preemptoff_tracer_init(struct trace_array *tr)
static struct tracer preemptoff_tracer __read_mostly =
;
# define register_preemptoff(trace) register_tracer(&trace)
# define register_preemptoff(trace) do  while (0)
#if defined(CONFIG_IRQSOFF_TRACER) && \
defined(CONFIG_PREEMPT_TRACER)
static int preemptirqsoff_tracer_init(struct trace_array *tr)
static struct tracer preemptirqsoff_tracer __read_mostly =
;
# define register_preemptirqsoff(trace) register_tracer(&trace)
# define register_preemptirqsoff(trace) do  while (0)
__init static int init_irqsoff_tracer(void)
device_initcall(init_irqsoff_tracer);
