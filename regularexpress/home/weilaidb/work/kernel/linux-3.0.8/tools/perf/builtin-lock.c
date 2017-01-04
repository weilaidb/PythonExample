static struct perf_session *session;
#define LOCKHASH_BITS		12
#define LOCKHASH_SIZE		(1UL << LOCKHASH_BITS)
static struct list_head lockhash_table[LOCKHASH_SIZE];
#define __lockhashfn(key)	hash_long((unsigned long)key, LOCKHASH_BITS)
#define lockhashentry(key)	(lockhash_table + __lockhashfn((key)))
struct lock_stat ;
#define SEQ_STATE_UNINITIALIZED      0
#define SEQ_STATE_RELEASED	1
#define SEQ_STATE_ACQUIRING	2
#define SEQ_STATE_ACQUIRED	3
#define SEQ_STATE_READ_ACQUIRED	4
#define SEQ_STATE_CONTENDED	5
#define MAX_LOCK_DEPTH 48
struct lock_seq_stat ;
struct thread_stat ;
static struct rb_root		thread_stats;
static struct thread_stat *thread_stat_find(u32 tid)
static void thread_stat_insert(struct thread_stat *new)
static struct thread_stat *thread_stat_findnew_after_first(u32 tid)
static struct thread_stat *thread_stat_findnew_first(u32 tid);
static struct thread_stat *(*thread_stat_findnew)(u32 tid) =
thread_stat_findnew_first;
static struct thread_stat *thread_stat_findnew_first(u32 tid)
#define SINGLE_KEY(member)						\
static int lock_stat_key_ ## member(struct lock_stat *one,	\
struct lock_stat *two)		\
SINGLE_KEY(nr_acquired)
SINGLE_KEY(nr_contended)
SINGLE_KEY(wait_time_total)
SINGLE_KEY(wait_time_max)
static int lock_stat_key_wait_time_min(struct lock_stat *one,
struct lock_stat *two)
struct lock_key ;
static const char		*sort_key = "acquired";
static int			(*compare)(struct lock_stat *, struct lock_stat *);
static struct rb_root		result;
#define DEF_KEY_LOCK(name, fn_suffix)	\
struct lock_key keys[] = ;
static void select_key(void)
static void insert_to_result(struct lock_stat *st,
int (*bigger)(struct lock_stat *, struct lock_stat *))
static struct lock_stat *pop_from_result(void)
static struct lock_stat *lock_stat_findnew(void *addr, const char *name)
static char			const *input_name = "perf.data";
struct raw_event_sample ;
struct trace_acquire_event ;
struct trace_acquired_event ;
struct trace_contended_event ;
struct trace_release_event ;
struct trace_lock_handler ;
static struct lock_seq_stat *get_seq(struct thread_stat *ts, void *addr)
enum broken_state ;
static int bad_hist[BROKEN_MAX];
enum acquire_flags ;
static void
report_lock_acquire_event(struct trace_acquire_event *acquire_event,
struct event *__event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
report_lock_acquired_event(struct trace_acquired_event *acquired_event,
struct event *__event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
report_lock_contended_event(struct trace_contended_event *contended_event,
struct event *__event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
report_lock_release_event(struct trace_release_event *release_event,
struct event *__event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static struct trace_lock_handler report_lock_ops  = ;
static struct trace_lock_handler *trace_handler;
static void
process_lock_acquire_event(void *data,
struct event *event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
process_lock_acquired_event(void *data,
struct event *event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
process_lock_contended_event(void *data,
struct event *event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
process_lock_release_event(void *data,
struct event *event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
process_raw_event(void *data, int cpu, u64 timestamp, struct thread *thread)
static void print_bad_events(int bad, int total)
static void print_result(void)
static bool info_threads, info_map;
static void dump_threads(void)
static void dump_map(void)
static void dump_info(void)
static int process_sample_event(union perf_event *event,
struct perf_sample *sample,
struct perf_evsel *evsel __used,
struct perf_session *s)
static struct perf_event_ops eops = ;
static int read_events(void)
static void sort_result(void)
static void __cmd_report(void)
static const char * const report_usage[] = ;
static const struct option report_options[] = ;
static const char * const info_usage[] = ;
static const struct option info_options[] = ;
static const char * const lock_usage[] = ;
static const struct option lock_options[] = ;
static const char *record_args[] = ;
static int __cmd_record(int argc, const char **argv)
int cmd_lock(int argc, const char **argv, const char *prefix __used)
