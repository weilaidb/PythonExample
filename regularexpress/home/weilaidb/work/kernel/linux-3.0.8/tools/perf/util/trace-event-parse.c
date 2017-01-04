#define _GNU_SOURCE
#undef _GNU_SOURCE
int header_page_ts_offset;
int header_page_ts_size;
int header_page_size_offset;
int header_page_size_size;
int header_page_overwrite_offset;
int header_page_overwrite_size;
int header_page_data_offset;
int header_page_data_size;
bool latency_format;
static char *input_buf;
static unsigned long long input_buf_ptr;
static unsigned long long input_buf_siz;
static int cpus;
static int long_size;
static int is_flag_field;
static int is_symbolic_field;
static struct format_field *
find_any_field(struct event *event, const char *name);
static void init_input_buf(char *buf, unsigned long long size)
struct cmdline ;
static struct cmdline *cmdlines;
static int cmdline_count;
static int cmdline_cmp(const void *a, const void *b)
void parse_cmdlines(char *file, int size __unused)
static struct func_map  *func_list;
static unsigned int func_count;
static int func_cmp(const void *a, const void *b)
void parse_proc_kallsyms(char *file, unsigned int size __unused)
static int func_bcmp(const void *a, const void *b)
static struct func_map *find_func(unsigned long long addr)
void print_funcs(void)
static struct printk_map  *printk_list;
static unsigned int printk_count;
static int printk_cmp(const void *a, const void *b)
static struct printk_map *find_printk(unsigned long long addr)
void parse_ftrace_printk(char *file, unsigned int size __unused)
void print_printk(void)
static struct event *alloc_event(void)
enum event_type ;
static struct event *event_list;
static void add_event(struct event *event)
static int event_item_type(enum event_type type)
static void free_arg(struct print_arg *arg)
static enum event_type get_type(int ch)
static int __read_char(void)
static int __peek_char(void)
static enum event_type __read_token(char **tok)
static void free_token(char *tok)
static enum event_type read_token(char **tok)
static enum event_type read_token_item(char **tok)
static int test_type(enum event_type type, enum event_type expect)
static int __test_type_token(enum event_type type, char *token,
enum event_type expect, const char *expect_tok,
bool warn)
static int test_type_token(enum event_type type, char *token,
enum event_type expect, const char *expect_tok)
static int __read_expect_type(enum event_type expect, char **tok, int newline_ok)
static int read_expect_type(enum event_type expect, char **tok)
static int __read_expected(enum event_type expect, const char *str,
int newline_ok, bool warn)
static int read_expected(enum event_type expect, const char *str)
static int read_expected_item(enum event_type expect, const char *str)
static char *event_read_name(void)
static int event_read_id(void)
static int field_is_string(struct format_field *field)
static int field_is_dynamic(struct format_field *field)
static int event_read_fields(struct event *event, struct format_field **fields)
static int event_read_format(struct event *event)
enum event_type
process_arg_token(struct event *event, struct print_arg *arg,
char **tok, enum event_type type);
static enum event_type
process_arg(struct event *event, struct print_arg *arg, char **tok)
static enum event_type
process_cond(struct event *event, struct print_arg *top, char **tok)
static enum event_type
process_array(struct event *event, struct print_arg *top, char **tok)
static int get_op_prio(char *op)
static void set_op_prio(struct print_arg *arg)
static enum event_type
process_op(struct event *event, struct print_arg *arg, char **tok)
static enum event_type
process_entry(struct event *event __unused, struct print_arg *arg,
char **tok)
static char *arg_eval (struct print_arg *arg);
static long long arg_num_eval(struct print_arg *arg)
static char *arg_eval (struct print_arg *arg)
static enum event_type
process_fields(struct event *event, struct print_flag_sym **list, char **tok)
static enum event_type
process_flags(struct event *event, struct print_arg *arg, char **tok)
static enum event_type
process_symbols(struct event *event, struct print_arg *arg, char **tok)
static enum event_type
process_paren(struct event *event, struct print_arg *arg, char **tok)
static enum event_type
process_str(struct event *event __unused, struct print_arg *arg, char **tok)
enum event_type
process_arg_token(struct event *event, struct print_arg *arg,
char **tok, enum event_type type)
static int event_read_print_args(struct event *event, struct print_arg **list)
static int event_read_print(struct event *event)
static struct format_field *
find_common_field(struct event *event, const char *name)
static struct format_field *
find_field(struct event *event, const char *name)
static struct format_field *
find_any_field(struct event *event, const char *name)
unsigned long long read_size(void *ptr, int size)
unsigned long long
raw_field_value(struct event *event, const char *name, void *data)
void *raw_field_ptr(struct event *event, const char *name, void *data)
static int get_common_info(const char *type, int *offset, int *size)
static int __parse_common(void *data, int *size, int *offset,
const char *name)
int trace_parse_common_type(void *data)
int trace_parse_common_pid(void *data)
int parse_common_pc(void *data)
int parse_common_flags(void *data)
int parse_common_lock_depth(void *data)
struct event *trace_find_event(int id)
struct event *trace_find_next_event(struct event *event)
static unsigned long long eval_num_arg(void *data, int size,
struct event *event, struct print_arg *arg)
struct flag ;
static const struct flag flags[] = ;
unsigned long long eval_flag(const char *flag)
static void print_str_arg(void *data, int size,
struct event *event, struct print_arg *arg)
static struct print_arg *make_bprint_args(char *fmt, void *data, int size, struct event *event)
static void free_args(struct print_arg *args)
static char *get_bprint_format(void *data, int size __unused, struct event *event)
static void pretty_print(void *data, int size, struct event *event)
static inline int log10_cpu(int nb)
static void print_lat_fmt(void *data, int size __unused)
#define TRACE_GRAPH_INDENT	2
static struct record *
get_return_for_leaf(int cpu, int cur_pid, unsigned long long cur_func,
struct record *next)
static void print_graph_overhead(unsigned long long duration)
static void print_graph_duration(unsigned long long duration)
static void
print_graph_entry_leaf(struct event *event, void *data, struct record *ret_rec)
static void print_graph_nested(struct event *event, void *data)
{
struct format_field *field;
unsigned long long depth;
unsigned long long val;
struct func_map *func;
int i;
print_graph_overhead(-1);
printf("           |  ");
field = find_field(event, "depth");
if (!field)
die("can't find depth in entry graph");
depth = read_size(data + field->offset, field->size);
for (i = 0; i < (int)(depth * TRACE_GRAPH_INDENT); i++)
printf(" ");
field = find_field(event, "func");
if (!field)
die("can't find func in entry graph");
val = read_size(data + field->offset, field->size);
func = find_func(val);
if (func)
printf("%s()
static void
pretty_print_func_graph(void *data, int size, struct event *event,
int cpu, int pid)
void print_trace_event(int cpu, void *data, int size)
static void print_fields(struct print_flag_sym *field)
static void print_args(struct print_arg *args)
int parse_ftrace_file(char *buf, unsigned long size)
int parse_event_file(char *buf, unsigned long size, char *sys)
void parse_set_info(int nr_cpus, int long_sz)
int common_pc(struct scripting_context *context)
int common_flags(struct scripting_context *context)
int common_lock_depth(struct scripting_context *context)
