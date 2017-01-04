#define SUPPORT_OLD_POWER_EVENTS 1
#define PWR_EVENT_EXIT -1
static char		const *input_name = "perf.data";
static char		const *output_name = "output.svg";
static unsigned int	numcpus;
static u64		min_freq;
static u64		max_freq;
static u64		turbo_frequency;
static u64		first_time, last_time;
static bool		power_only;
struct per_pid;
struct per_pidcomm;
struct cpu_sample;
struct power_event;
struct wake_event;
struct sample_wrapper;
struct per_pid ;
struct per_pidcomm ;
struct sample_wrapper ;
#define TYPE_NONE	0
#define TYPE_RUNNING	1
#define TYPE_WAITING	2
#define TYPE_BLOCKED	3
struct cpu_sample ;
static struct per_pid *all_data;
#define CSTATE 1
#define PSTATE 2
struct power_event ;
struct wake_event ;
static struct power_event    *power_events;
static struct wake_event     *wake_events;
struct process_filter;
struct process_filter ;
static struct process_filter *process_filter;
static struct per_pid *find_create_pid(int pid)
static void pid_set_comm(int pid, char *comm)
static void pid_fork(int pid, int ppid, u64 timestamp)
static void pid_exit(int pid, u64 timestamp)
static void
pid_put_sample(int pid, int type, unsigned int cpu, u64 start, u64 end)
#define MAX_CPUS 4096
static u64 cpus_cstate_start_times[MAX_CPUS];
static int cpus_cstate_state[MAX_CPUS];
static u64 cpus_pstate_start_times[MAX_CPUS];
static u64 cpus_pstate_state[MAX_CPUS];
static int process_comm_event(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session __used)
static int process_fork_event(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session __used)
static int process_exit_event(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session __used)
struct trace_entry ;
static int use_old_power_events;
struct power_entry_old ;
struct power_processor_entry ;
#define TASK_COMM_LEN 16
struct wakeup_entry ;
enum trace_flag_type ;
struct sched_switch ;
static void c_state_start(int cpu, u64 timestamp, int state)
static void c_state_end(int cpu, u64 timestamp)
static void p_state_change(int cpu, u64 timestamp, u64 new_freq)
static void
sched_wakeup(int cpu, u64 timestamp, int pid, struct trace_entry *te)
static void sched_switch(int cpu, u64 timestamp, struct trace_entry *te)
static int process_sample_event(union perf_event *event __used,
struct perf_sample *sample,
struct perf_evsel *evsel __used,
struct perf_session *session)
static void end_sample_processing(void)
static void sort_pids(void)
static void draw_c_p_states(void)
static void draw_wakeups(void)
static void draw_cpu_usage(void)
static void draw_process_bars(void)
static void add_process_filter(const char *string)
static int passes_filter(struct per_pid *p, struct per_pidcomm *c)
static int determine_display_tasks_filtered(void)
static int determine_display_tasks(u64 threshold)
#define TIME_THRESH 10000000
static void write_svg_file(const char *filename)
static struct perf_event_ops event_ops = ;
static int __cmd_timechart(void)
static const char * const timechart_usage[] = ;
static const char * const record_old_args[] = ;
static const char * const record_new_args[] = ;
static int __cmd_record(int argc, const char **argv)
static int
parse_process(const struct option *opt __used, const char *arg, int __used unset)
static const struct option options[] = ;
int cmd_timechart(int argc, const char **argv, const char *prefix __used)
