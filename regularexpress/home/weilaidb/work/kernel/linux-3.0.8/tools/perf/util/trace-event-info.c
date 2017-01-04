#define _GNU_SOURCE
#define VERSION "0.5"
#define _STR(x) #x
#define STR(x) _STR(x)
#define MAX_PATH 256
#define TRACE_CTRL	"tracing_on"
#define TRACE		"trace"
#define AVAILABLE	"available_tracers"
#define CURRENT		"current_tracer"
#define ITER_CTRL	"trace_options"
#define MAX_LATENCY	"tracing_max_latency"
unsigned int page_size;
static const char *output_file = "trace.info";
static int output_fd;
struct event_list ;
struct events ;
static void die(const char *fmt, ...)
void *malloc_or_die(unsigned int size)
static const char *find_debugfs(void)
static const char *find_tracing_dir(void)
static char *get_tracing_file(const char *name)
static void put_tracing_file(char *file)
static ssize_t calc_data_size;
static ssize_t write_or_die(const void *buf, size_t len)
int bigendian(void)
static unsigned long long copy_file_fd(int fd)
static unsigned long long copy_file(const char *file)
static unsigned long get_size_fd(int fd)
static unsigned long get_size(const char *file)
static void read_header_files(void)
static bool name_in_tp_list(char *sys, struct tracepoint_path *tps)
static void copy_event_system(const char *sys, struct tracepoint_path *tps)
static void read_ftrace_files(struct tracepoint_path *tps)
static bool system_in_tp_list(char *sys, struct tracepoint_path *tps)
static void read_event_files(struct tracepoint_path *tps)
static void read_proc_kallsyms(void)
static void read_ftrace_printk(void)
static struct tracepoint_path *
get_tracepoints_path(struct list_head *pattrs)
bool have_tracepoints(struct list_head *pattrs)
int read_tracing_data(int fd, struct list_head *pattrs)
ssize_t read_tracing_data_size(int fd, struct list_head *pattrs)
