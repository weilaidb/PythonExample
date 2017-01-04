#define MSR_TSC	0x10
#define MSR_NEHALEM_PLATFORM_INFO	0xCE
#define MSR_NEHALEM_TURBO_RATIO_LIMIT	0x1AD
#define MSR_APERF	0xE8
#define MSR_MPERF	0xE7
#define MSR_PKG_C2_RESIDENCY	0x60D
#define MSR_PKG_C3_RESIDENCY	0x3F8
#define MSR_PKG_C6_RESIDENCY	0x3F9
#define MSR_PKG_C7_RESIDENCY	0x3FA
#define MSR_CORE_C3_RESIDENCY	0x3FC
#define MSR_CORE_C6_RESIDENCY	0x3FD
#define MSR_CORE_C7_RESIDENCY	0x3FE
char *proc_stat = "/proc/stat";
unsigned int interval_sec = 5;
unsigned int verbose;
unsigned int skip_c0;
unsigned int skip_c1;
unsigned int do_nhm_cstates;
unsigned int do_snb_cstates;
unsigned int has_aperf;
unsigned int units = 1000000000;
unsigned int genuine_intel;
unsigned int has_invariant_tsc;
unsigned int do_nehalem_platform_info;
unsigned int do_nehalem_turbo_ratio_limit;
unsigned int extra_msr_offset;
double bclk;
unsigned int show_pkg;
unsigned int show_core;
unsigned int show_cpu;
int aperf_mperf_unstable;
int backwards_count;
char *progname;
int need_reinitialize;
int num_cpus;
struct counters ;
struct counters *cnt_even;
struct counters *cnt_odd;
struct counters *cnt_delta;
struct counters *cnt_average;
struct timeval tv_even;
struct timeval tv_odd;
struct timeval tv_delta;
unsigned long long get_msr(int cpu, off_t offset)
void print_header(void)
void dump_cnt(struct counters *cnt)
void dump_list(struct counters *cnt)
void print_cnt(struct counters *p)
void print_counters(struct counters *counters)
#define SUBTRACT_COUNTER(after, before, delta) (delta = (after - before), (before > after))
int compute_delta(struct counters *after,
struct counters *before, struct counters *delta)
void compute_average(struct counters *delta, struct counters *avg)
void get_counters(struct counters *cnt)
void print_nehalem_info(void)
void free_counter_list(struct counters *list)
void free_all_counters(void)
void insert_counters(struct counters **list,
struct counters *new)
void alloc_new_counters(int pkg, int core, int cpu)
int get_physical_package_id(int cpu)
int get_core_id(int cpu)
int for_all_cpus(void (func)(int, int, int))
void re_initialize(void)
void dummy(int pkg, int core, int cpu)
void verify_num_cpus(void)
void turbostat_loop()
void check_dev_msr()
void check_super_user()
int has_nehalem_turbo_ratio_limit(unsigned int family, unsigned int model)
int is_snb(unsigned int family, unsigned int model)
double discover_bclk(unsigned int family, unsigned int model)
void check_cpuid()
void usage()
int dir_filter(const struct dirent *dirp)
int open_dev_cpu_msr(int dummy1)
void turbostat_init()
int fork_it(char **argv)
void cmdline(int argc, char **argv)
int main(int argc, char **argv)
