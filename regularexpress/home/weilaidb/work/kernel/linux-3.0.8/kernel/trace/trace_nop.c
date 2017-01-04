enum ;
static struct tracer_opt nop_opts[] = ;
static struct tracer_flags nop_flags = ;
static struct trace_array	*ctx_trace;
static void start_nop_trace(struct trace_array *tr)
static void stop_nop_trace(struct trace_array *tr)
static int nop_trace_init(struct trace_array *tr)
static void nop_trace_reset(struct trace_array *tr)
static int nop_set_flag(u32 old_flags, u32 bit, int set)
struct tracer nop_trace __read_mostly =
;
