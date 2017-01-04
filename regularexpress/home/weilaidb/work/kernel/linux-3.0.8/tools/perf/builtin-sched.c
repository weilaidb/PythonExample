static char			const *input_name = "perf.data";
static char			default_sort_order[] = "avg, max, switch, runtime";
static const char		*sort_order = default_sort_order;
static int			profile_cpu = -1;
#define PR_SET_NAME		15
#define MAX_CPUS		4096
static u64			run_measurement_overhead;
static u64			sleep_measurement_overhead;
#define COMM_LEN		20
#define SYM_LEN			129
#define MAX_PID			65536
static unsigned long		nr_tasks;
struct sched_atom;
struct task_desc ;
enum sched_event_type ;
struct sched_atom ;
static struct task_desc		*pid_to_task[MAX_PID];
static struct task_desc		**tasks;
static pthread_mutex_t		start_work_mutex = PTHREAD_MUTEX_INITIALIZER;
static u64			start_time;
static pthread_mutex_t		work_done_wait_mutex = PTHREAD_MUTEX_INITIALIZER;
static unsigned long		nr_run_events;
static unsigned long		nr_sleep_events;
static unsigned long		nr_wakeup_events;
static unsigned long		nr_sleep_corrections;
static unsigned long		nr_run_events_optimized;
static unsigned long		targetless_wakeups;
static unsigned long		multitarget_wakeups;
static u64			cpu_usage;
static u64			runavg_cpu_usage;
static u64			parent_cpu_usage;
static u64			runavg_parent_cpu_usage;
static unsigned long		nr_runs;
static u64			sum_runtime;
static u64			sum_fluct;
static u64			run_avg;
static unsigned int		replay_repeat = 10;
static unsigned long		nr_timestamps;
static unsigned long		nr_unordered_timestamps;
static unsigned long		nr_state_machine_bugs;
static unsigned long		nr_context_switch_bugs;
static unsigned long		nr_events;
static unsigned long		nr_lost_chunks;
static unsigned long		nr_lost_events;
#define TASK_STATE_TO_CHAR_STR "RSDTtZX"
enum thread_state ;
struct work_atom ;
struct work_atoms ;
typedef int (*sort_fn_t)(struct work_atoms *, struct work_atoms *);
static struct rb_root		atom_root, sorted_atom_root;
static u64			all_runtime;
static u64			all_count;
static u64 get_nsecs(void)
static void burn_nsecs(u64 nsecs)
static void sleep_nsecs(u64 nsecs)
static void calibrate_run_measurement_overhead(void)
static void calibrate_sleep_measurement_overhead(void)
static struct sched_atom *
get_new_event(struct task_desc *task, u64 timestamp)
static struct sched_atom *last_event(struct task_desc *task)
static void
add_sched_event_run(struct task_desc *task, u64 timestamp, u64 duration)
static void
add_sched_event_wakeup(struct task_desc *task, u64 timestamp,
struct task_desc *wakee)
static void
add_sched_event_sleep(struct task_desc *task, u64 timestamp,
u64 task_state __used)
static struct task_desc *register_pid(unsigned long pid, const char *comm)
static void print_task_traces(void)
static void add_cross_task_wakeups(void)
static void
process_sched_event(struct task_desc *this_task __used, struct sched_atom *atom)
static u64 get_cpu_usage_nsec_parent(void)
static int self_open_counters(void)
static u64 get_cpu_usage_nsec_self(int fd)
static void *thread_func(void *ctx)
static void create_tasks(void)
static void wait_for_tasks(void)
static void run_one_test(void)
static void test_calibrations(void)
#define FILL_FIELD(ptr, field, event, data)	\
ptr.field = (typeof(ptr.field)) raw_field_value(event, #field, data)
#define FILL_ARRAY(ptr, array, event, data)			\
do  while(0)
#define FILL_COMMON_FIELDS(ptr, event, data)			\
do  while (0)
struct trace_switch_event ;
struct trace_runtime_event ;
struct trace_wakeup_event ;
struct trace_fork_event ;
struct trace_migrate_task_event ;
struct trace_sched_handler ;
static void
replay_wakeup_event(struct trace_wakeup_event *wakeup_event,
struct perf_session *session __used,
struct event *event,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static u64 cpu_last_switched[MAX_CPUS];
static void
replay_switch_event(struct trace_switch_event *switch_event,
struct perf_session *session __used,
struct event *event,
int cpu,
u64 timestamp,
struct thread *thread __used)
static void
replay_fork_event(struct trace_fork_event *fork_event,
struct event *event,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static struct trace_sched_handler replay_ops  = ;
struct sort_dimension ;
static LIST_HEAD(cmp_pid);
static int
thread_lat_cmp(struct list_head *list, struct work_atoms *l, struct work_atoms *r)
static struct work_atoms *
thread_atoms_search(struct rb_root *root, struct thread *thread,
struct list_head *sort_list)
static void
__thread_latency_insert(struct rb_root *root, struct work_atoms *data,
struct list_head *sort_list)
static void thread_atoms_insert(struct thread *thread)
static void
latency_fork_event(struct trace_fork_event *fork_event __used,
struct event *event __used,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
__used
static char sched_out_state(struct trace_switch_event *switch_event)
static void
add_sched_out_event(struct work_atoms *atoms,
char run_state,
u64 timestamp)
static void
add_runtime_event(struct work_atoms *atoms, u64 delta, u64 timestamp __used)
static void
add_sched_in_event(struct work_atoms *atoms, u64 timestamp)
static void
latency_switch_event(struct trace_switch_event *switch_event,
struct perf_session *session,
struct event *event __used,
int cpu,
u64 timestamp,
struct thread *thread __used)
static void
latency_runtime_event(struct trace_runtime_event *runtime_event,
struct perf_session *session,
struct event *event __used,
int cpu,
u64 timestamp,
struct thread *this_thread __used)
static void
latency_wakeup_event(struct trace_wakeup_event *wakeup_event,
struct perf_session *session,
struct event *__event __used,
int cpu __used,
u64 timestamp,
struct thread *thread __used)
static void
latency_migrate_task_event(struct trace_migrate_task_event *migrate_task_event,
struct perf_session *session,
struct event *__event __used,
int cpu __used,
u64 timestamp,
struct thread *thread __used)
static struct trace_sched_handler lat_ops  = ;
static void output_lat_thread(struct work_atoms *work_list)
static int pid_cmp(struct work_atoms *l, struct work_atoms *r)
static struct sort_dimension pid_sort_dimension = ;
static int avg_cmp(struct work_atoms *l, struct work_atoms *r)
static struct sort_dimension avg_sort_dimension = ;
static int max_cmp(struct work_atoms *l, struct work_atoms *r)
static struct sort_dimension max_sort_dimension = ;
static int switch_cmp(struct work_atoms *l, struct work_atoms *r)
static struct sort_dimension switch_sort_dimension = ;
static int runtime_cmp(struct work_atoms *l, struct work_atoms *r)
static struct sort_dimension runtime_sort_dimension = ;
static struct sort_dimension *available_sorts[] = ;
#define NB_AVAILABLE_SORTS	(int)(sizeof(available_sorts) / sizeof(struct sort_dimension *))
static LIST_HEAD(sort_list);
static int sort_dimension__add(const char *tok, struct list_head *list)
static void setup_sorting(void);
static void sort_lat(void)
static struct trace_sched_handler *trace_handler;
static void
process_sched_wakeup_event(void *data, struct perf_session *session,
struct event *event,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static int max_cpu;
static u32 curr_pid[MAX_CPUS] = ;
static struct thread *curr_thread[MAX_CPUS];
static char next_shortname1 = 'A';
static char next_shortname2 = '0';
static void
map_switch_event(struct trace_switch_event *switch_event,
struct perf_session *session,
struct event *event __used,
int this_cpu,
u64 timestamp,
struct thread *thread __used)
static void
process_sched_switch_event(void *data, struct perf_session *session,
struct event *event,
int this_cpu,
u64 timestamp __used,
struct thread *thread __used)
static void
process_sched_runtime_event(void *data, struct perf_session *session,
struct event *event,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
process_sched_fork_event(void *data,
struct event *event,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
process_sched_exit_event(struct event *event,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void
process_sched_migrate_task_event(void *data, struct perf_session *session,
struct event *event,
int cpu __used,
u64 timestamp __used,
struct thread *thread __used)
static void process_raw_event(union perf_event *raw_event __used,
struct perf_session *session, void *data, int cpu,
u64 timestamp, struct thread *thread)
static int process_sample_event(union perf_event *event,
struct perf_sample *sample,
struct perf_evsel *evsel __used,
struct perf_session *session)
static struct perf_event_ops event_ops = ;
static int read_events(void)
static void print_bad_events(void)
static void __cmd_lat(void)
static struct trace_sched_handler map_ops  = ;
static void __cmd_map(void)
static void __cmd_replay(void)
static const char * const sched_usage[] = ;
static const struct option sched_options[] = ;
static const char * const latency_usage[] = ;
static const struct option latency_options[] = ;
static const char * const replay_usage[] = ;
static const struct option replay_options[] = ;
static void setup_sorting(void)
static const char *record_args[] = ;
static int __cmd_record(int argc, const char **argv)
int cmd_sched(int argc, const char **argv, const char *prefix __used)
