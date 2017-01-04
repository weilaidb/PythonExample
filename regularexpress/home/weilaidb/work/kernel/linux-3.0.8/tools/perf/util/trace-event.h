#define __PERF_TRACE_EVENTS_H
#define __unused __attribute__((unused))
#define PAGE_MASK (page_size - 1)
enum ;
#define TS_SHIFT		27
#define NSECS_PER_SEC		1000000000ULL
#define NSECS_PER_USEC		1000ULL
enum format_flags ;
struct format_field ;
struct format ;
struct print_arg_atom ;
struct print_arg_string ;
struct print_arg_field ;
struct print_flag_sym ;
struct print_arg_typecast ;
struct print_arg_flags ;
struct print_arg_symbol ;
struct print_arg;
struct print_arg_op ;
struct print_arg_func ;
enum print_arg_type ;
struct print_arg ;
struct print_fmt ;
struct event ;
enum ;
struct record ;
struct record *trace_peek_data(int cpu);
struct record *trace_read_data(int cpu);
void parse_set_info(int nr_cpus, int long_sz);
ssize_t trace_report(int fd, bool repipe);
void *malloc_or_die(unsigned int size);
void parse_cmdlines(char *file, int size);
void parse_proc_kallsyms(char *file, unsigned int size);
void parse_ftrace_printk(char *file, unsigned int size);
void print_funcs(void);
void print_printk(void);
int parse_ftrace_file(char *buf, unsigned long size);
int parse_event_file(char *buf, unsigned long size, char *sys);
void print_trace_event(int cpu, void *data, int size);
extern int file_bigendian;
extern int host_bigendian;
int bigendian(void);
static inline unsigned short __data2host2(unsigned short data)
static inline unsigned int __data2host4(unsigned int data)
static inline unsigned long long __data2host8(unsigned long long data)
#define data2host2(ptr)		__data2host2(*(unsigned short *)ptr)
#define data2host4(ptr)		__data2host4(*(unsigned int *)ptr)
#define data2host8(ptr)		()
extern int header_page_ts_offset;
extern int header_page_ts_size;
extern int header_page_size_offset;
extern int header_page_size_size;
extern int header_page_data_offset;
extern int header_page_data_size;
extern bool latency_format;
int trace_parse_common_type(void *data);
int trace_parse_common_pid(void *data);
int parse_common_pc(void *data);
int parse_common_flags(void *data);
int parse_common_lock_depth(void *data);
struct event *trace_find_event(int id);
struct event *trace_find_next_event(struct event *event);
unsigned long long read_size(void *ptr, int size);
unsigned long long
raw_field_value(struct event *event, const char *name, void *data);
void *raw_field_ptr(struct event *event, const char *name, void *data);
unsigned long long eval_flag(const char *flag);
int read_tracing_data(int fd, struct list_head *pattrs);
ssize_t read_tracing_data_size(int fd, struct list_head *pattrs);
enum trace_flag_type ;
struct scripting_ops ;
int script_spec_register(const char *spec, struct scripting_ops *ops);
void setup_perl_scripting(void);
void setup_python_scripting(void);
struct scripting_context ;
int common_pc(struct scripting_context *context);
int common_flags(struct scripting_context *context);
int common_lock_depth(struct scripting_context *context);
