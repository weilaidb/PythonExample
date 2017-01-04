void perf_read_values_init(struct perf_read_values *values)
void perf_read_values_destroy(struct perf_read_values *values)
static void perf_read_values__enlarge_threads(struct perf_read_values *values)
static int perf_read_values__findnew_thread(struct perf_read_values *values,
u32 pid, u32 tid)
static void perf_read_values__enlarge_counters(struct perf_read_values *values)
static int perf_read_values__findnew_counter(struct perf_read_values *values,
u64 rawid, const char *name)
void perf_read_values_add_value(struct perf_read_values *values,
u32 pid, u32 tid,
u64 rawid, const char *name, u64 value)
static void perf_read_values__display_pretty(FILE *fp,
struct perf_read_values *values)
static void perf_read_values__display_raw(FILE *fp,
struct perf_read_values *values)
void perf_read_values_display(FILE *fp, struct perf_read_values *values, int raw)
