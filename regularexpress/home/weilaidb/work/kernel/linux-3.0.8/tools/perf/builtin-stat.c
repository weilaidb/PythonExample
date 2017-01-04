#define DEFAULT_SEPARATOR	" "
static struct perf_event_attr default_attrs[] = ;
static struct perf_event_attr detailed_attrs[] = ;
static struct perf_event_attr very_detailed_attrs[] = ;
static struct perf_event_attr very_very_detailed_attrs[] = ;
struct perf_evlist		*evsel_list;
static bool			system_wide			=  false;
static int			run_idx				=  0;
static int			run_count			=  1;
static bool			no_inherit			= false;
static bool			scale				=  true;
static bool			no_aggr				= false;
static pid_t			target_pid			= -1;
static pid_t			target_tid			= -1;
static pid_t			child_pid			= -1;
static bool			null_run			=  false;
static int			detailed_run			=  0;
static bool			sync_run			=  false;
static bool			big_num				=  true;
static int			big_num_opt			=  -1;
static const char		*cpu_list;
static const char		*csv_sep			= NULL;
static bool			csv_output			= false;
static volatile int done = 0;
struct stats
;
struct perf_stat ;
static int perf_evsel__alloc_stat_priv(struct perf_evsel *evsel)
static void perf_evsel__free_stat_priv(struct perf_evsel *evsel)
static void update_stats(struct stats *stats, u64 val)
static double avg_stats(struct stats *stats)
static double stddev_stats(struct stats *stats)
struct stats			runtime_nsecs_stats[MAX_NR_CPUS];
struct stats			runtime_cycles_stats[MAX_NR_CPUS];
struct stats			runtime_stalled_cycles_front_stats[MAX_NR_CPUS];
struct stats			runtime_stalled_cycles_back_stats[MAX_NR_CPUS];
struct stats			runtime_branches_stats[MAX_NR_CPUS];
struct stats			runtime_cacherefs_stats[MAX_NR_CPUS];
struct stats			runtime_l1_dcache_stats[MAX_NR_CPUS];
struct stats			runtime_l1_icache_stats[MAX_NR_CPUS];
struct stats			runtime_ll_cache_stats[MAX_NR_CPUS];
struct stats			runtime_itlb_cache_stats[MAX_NR_CPUS];
struct stats			runtime_dtlb_cache_stats[MAX_NR_CPUS];
struct stats			walltime_nsecs_stats;
static int create_perf_stat_counter(struct perf_evsel *evsel)
static inline int nsec_counter(struct perf_evsel *evsel)
static void update_shadow_stats(struct perf_evsel *counter, u64 *count)
static int read_counter_aggr(struct perf_evsel *counter)
static int read_counter(struct perf_evsel *counter)
static int run_perf_stat(int argc __used, const char **argv)
static void print_noise_pct(double total, double avg)
static void print_noise(struct perf_evsel *evsel, double avg)
static void nsec_printout(int cpu, struct perf_evsel *evsel, double avg)
static void print_stalled_cycles_frontend(int cpu, struct perf_evsel *evsel __used, double avg)
static void print_stalled_cycles_backend(int cpu, struct perf_evsel *evsel __used, double avg)
static void print_branch_misses(int cpu, struct perf_evsel *evsel __used, double avg)
static void print_l1_dcache_misses(int cpu, struct perf_evsel *evsel __used, double avg)
static void print_l1_icache_misses(int cpu, struct perf_evsel *evsel __used, double avg)
static void print_dtlb_cache_misses(int cpu, struct perf_evsel *evsel __used, double avg)
static void print_itlb_cache_misses(int cpu, struct perf_evsel *evsel __used, double avg)
static void print_ll_cache_misses(int cpu, struct perf_evsel *evsel __used, double avg)
static void abs_printout(int cpu, struct perf_evsel *evsel, double avg)
static void print_counter_aggr(struct perf_evsel *counter)
static void print_counter(struct perf_evsel *counter)
static void print_stat(int argc, const char **argv)
static volatile int signr = -1;
static void skip_signal(int signo)
static void sig_atexit(void)
static const char * const stat_usage[] = ;
static int stat__set_big_num(const struct option *opt __used,
const char *s __used, int unset)
static const struct option options[] = ;
static int add_default_attributes(void)
int cmd_stat(int argc, const char **argv, const char *prefix __used)
