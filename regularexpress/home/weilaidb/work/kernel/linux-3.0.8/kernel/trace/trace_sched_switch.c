static struct trace_array	*ctx_trace;
static int __read_mostly	tracer_enabled;
static int			sched_ref;
static DEFINE_MUTEX(sched_register_mutex);
static int			sched_stopped;
void
tracing_sched_switch_trace(struct trace_array *tr,
struct task_struct *prev,
struct task_struct *next,
unsigned long flags, int pc)
static void
probe_sched_switch(void *ignore, struct task_struct *prev, struct task_struct *next)
void
tracing_sched_wakeup_trace(struct trace_array *tr,
struct task_struct *wakee,
struct task_struct *curr,
unsigned long flags, int pc)
static void
probe_sched_wakeup(void *ignore, struct task_struct *wakee, int success)
static int tracing_sched_register(void)
static void tracing_sched_unregister(void)
static void tracing_start_sched_switch(void)
static void tracing_stop_sched_switch(void)
void tracing_start_cmdline_record(void)
void tracing_stop_cmdline_record(void)
void tracing_start_sched_switch_record(void)
void tracing_stop_sched_switch_record(void)
void tracing_sched_switch_assign_trace(struct trace_array *tr)
