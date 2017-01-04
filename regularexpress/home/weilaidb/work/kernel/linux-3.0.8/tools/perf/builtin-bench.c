struct bench_suite ;
\
#define suite_all
static struct bench_suite sched_suites[] = ;
static struct bench_suite mem_suites[] = ;
struct bench_subsys ;
static struct bench_subsys subsystems[] = ;
static void dump_suites(int subsys_index)
static const char *bench_format_str;
int bench_format = BENCH_FORMAT_DEFAULT;
static const struct option bench_options[] = ;
static const char * const bench_usage[] = ;
static void print_usage(void)
static int bench_str2int(const char *str)
static void all_suite(struct bench_subsys *subsys)
static void all_subsystem(void)
int cmd_bench(int argc, const char **argv, const char *prefix __used)
