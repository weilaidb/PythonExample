struct alloc_stat;
typedef int (*sort_fn_t)(struct alloc_stat *, struct alloc_stat *);
static char const		*input_name = "perf.data";
static int			alloc_flag;
static int			caller_flag;
static int			alloc_lines = -1;
static int			caller_lines = -1;
static bool			raw_ip;
static char			default_sort_order[] = "frag,hit,bytes";
static int			*cpunode_map;
static int			max_cpu_num;
struct alloc_stat ;
static struct rb_root root_alloc_stat;
static struct rb_root root_alloc_sorted;
static struct rb_root root_caller_stat;
static struct rb_root root_caller_sorted;
static unsigned long total_requested, total_allocated;
static unsigned long nr_allocs, nr_cross_allocs;
#define PATH_SYS_NODE	"/sys/devices/system/node"
static void init_cpunode_map(void)
static void setup_cpunode_map(void)
static void insert_alloc_stat(unsigned long call_site, unsigned long ptr,
int bytes_req, int bytes_alloc, int cpu)
static void insert_caller_stat(unsigned long call_site,
int bytes_req, int bytes_alloc)
static void process_alloc_event(void *data,
struct event *event,
int cpu,
u64 timestamp __used,
struct thread *thread __used,
int node)
static int ptr_cmp(struct alloc_stat *, struct alloc_stat *);
static int callsite_cmp(struct alloc_stat *, struct alloc_stat *);
static struct alloc_stat *search_alloc_stat(unsigned long ptr,
unsigned long call_site,
struct rb_root *root,
sort_fn_t sort_fn)
static void process_free_event(void *data,
struct event *event,
int cpu,
u64 timestamp __used,
struct thread *thread __used)
static void process_raw_event(union perf_event *raw_event __used, void *data,
int cpu, u64 timestamp, struct thread *thread)
static int process_sample_event(union perf_event *event,
struct perf_sample *sample,
struct perf_evsel *evsel __used,
struct perf_session *session)
static struct perf_event_ops event_ops = ;
static double fragmentation(unsigned long n_req, unsigned long n_alloc)
static void __print_result(struct rb_root *root, struct perf_session *session,
int n_lines, int is_caller)
static void print_summary(void)
static void print_result(struct perf_session *session)
struct sort_dimension ;
static LIST_HEAD(caller_sort);
static LIST_HEAD(alloc_sort);
static void sort_insert(struct rb_root *root, struct alloc_stat *data,
struct list_head *sort_list)
static void __sort_result(struct rb_root *root, struct rb_root *root_sorted,
struct list_head *sort_list)
static void sort_result(void)
static int __cmd_kmem(void)
static const char * const kmem_usage[] = ;
static int ptr_cmp(struct alloc_stat *l, struct alloc_stat *r)
static struct sort_dimension ptr_sort_dimension = ;
static int callsite_cmp(struct alloc_stat *l, struct alloc_stat *r)
static struct sort_dimension callsite_sort_dimension = ;
static int hit_cmp(struct alloc_stat *l, struct alloc_stat *r)
static struct sort_dimension hit_sort_dimension = ;
static int bytes_cmp(struct alloc_stat *l, struct alloc_stat *r)
static struct sort_dimension bytes_sort_dimension = ;
static int frag_cmp(struct alloc_stat *l, struct alloc_stat *r)
static struct sort_dimension frag_sort_dimension = ;
static int pingpong_cmp(struct alloc_stat *l, struct alloc_stat *r)
static struct sort_dimension pingpong_sort_dimension = ;
static struct sort_dimension *avail_sorts[] = ;
#define NUM_AVAIL_SORTS	\
(int)(sizeof(avail_sorts) / sizeof(struct sort_dimension *))
static int sort_dimension__add(const char *tok, struct list_head *list)
static int setup_sorting(struct list_head *sort_list, const char *arg)
static int parse_sort_opt(const struct option *opt __used,
const char *arg, int unset __used)
static int parse_caller_opt(const struct option *opt __used,
const char *arg __used, int unset __used)
static int parse_alloc_opt(const struct option *opt __used,
const char *arg __used, int unset __used)
static int parse_line_opt(const struct option *opt __used,
const char *arg, int unset __used)
static const struct option kmem_options[] = ;
static const char *record_args[] = ;
static int __cmd_record(int argc, const char **argv)
int cmd_kmem(int argc, const char **argv, const char *prefix __used)
