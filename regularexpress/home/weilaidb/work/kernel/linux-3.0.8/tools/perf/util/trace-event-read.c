#define _FILE_OFFSET_BITS 64
static int input_fd;
static int read_page;
int file_bigendian;
int host_bigendian;
static int long_size;
static unsigned long	page_size;
static ssize_t calc_data_size;
static bool repipe;
static int do_read(int fd, void *buf, int size)
static int read_or_die(void *data, int size)
static void skip(int size)
static unsigned int read4(void)
static unsigned long long read8(void)
static char *read_string(void)
static void read_proc_kallsyms(void)
static void read_ftrace_printk(void)
static void read_header_files(void)
static void read_ftrace_file(unsigned long long size)
static void read_event_file(char *sys, unsigned long long size)
static void read_ftrace_files(void)
static void read_event_files(void)
struct cpu_data ;
static struct cpu_data *cpu_data;
static void update_cpu_data_index(int cpu)
static void get_next_page(int cpu)
static unsigned int type_len4host(unsigned int type_len_ts)
static unsigned int ts4host(unsigned int type_len_ts)
static int calc_index(void *ptr, int cpu)
struct record *trace_peek_data(int cpu)
struct record *trace_read_data(int cpu)
ssize_t trace_report(int fd, bool __repipe)
