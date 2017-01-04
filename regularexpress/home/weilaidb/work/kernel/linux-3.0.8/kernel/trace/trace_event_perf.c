static char __percpu *perf_trace_buf[PERF_NR_CONTEXTS];
typedef typeof(unsigned long [PERF_MAX_TRACE_SIZE / sizeof(unsigned long)])
perf_trace_t;
static int	total_ref_count;
static int perf_trace_event_perm(struct ftrace_event_call *tp_event,
struct perf_event *p_event)
static int perf_trace_event_init(struct ftrace_event_call *tp_event,
struct perf_event *p_event)
int perf_trace_init(struct perf_event *p_event)
int perf_trace_add(struct perf_event *p_event, int flags)
void perf_trace_del(struct perf_event *p_event, int flags)
void perf_trace_destroy(struct perf_event *p_event)
__kprobes void *perf_trace_buf_prepare(int size, unsigned short type,
struct pt_regs *regs, int *rctxp)
EXPORT_SYMBOL_GPL(perf_trace_buf_prepare);
