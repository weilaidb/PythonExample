#define _GNU_SOURCE
#undef _GNU_SOURCE
#define MAX_CMDLEN 256
#define MAX_PROBE_ARGS 128
#define PERFPROBE_GROUP "probe"
bool probe_event_dry_run;
#define semantic_error(msg ...) pr_err("Semantic error :" msg)
static int e_snprintf(char *str, size_t size, const char *format, ...)
__attribute__((format(printf, 3, 4)));
static int e_snprintf(char *str, size_t size, const char *format, ...)
static char *synthesize_perf_probe_point(struct perf_probe_point *pp);
static struct machine machine;
static int init_vmlinux(void)
static struct symbol *__find_kernel_function_by_name(const char *name,
struct map **mapp)
static struct map *kernel_get_module_map(const char *module)
static struct dso *kernel_get_module_dso(const char *module)
const char *kernel_get_module_path(const char *module)
static int open_vmlinux(const char *module)
static int kprobe_convert_to_perf_probe(struct probe_trace_point *tp,
struct perf_probe_point *pp)
static int try_to_find_probe_trace_events(struct perf_probe_event *pev,
struct probe_trace_event **tevs,
int max_tevs, const char *module)
static int get_real_path(const char *raw_path, const char *comp_dir,
char **new_path)
#define LINEBUF_SIZE 256
#define NR_ADDITIONAL_LINES 2
static int __show_one_line(FILE *fp, int l, bool skip, bool show_num)
static int _show_one_line(FILE *fp, int l, bool skip, bool show_num)
#define show_one_line_with_num(f,l)	_show_one_line(f,l,false,true)
#define show_one_line(f,l)		_show_one_line(f,l,false,false)
#define skip_one_line(f,l)		_show_one_line(f,l,true,false)
#define show_one_line_or_eof(f,l)	__show_one_line(f,l,false,false)
int show_line_range(struct line_range *lr, const char *module)
static int show_available_vars_at(int fd, struct perf_probe_event *pev,
int max_vls, struct strfilter *_filter,
bool externs)
int show_available_vars(struct perf_probe_event *pevs, int npevs,
int max_vls, const char *module,
struct strfilter *_filter, bool externs)
static int kprobe_convert_to_perf_probe(struct probe_trace_point *tp,
struct perf_probe_point *pp)
static int try_to_find_probe_trace_events(struct perf_probe_event *pev,
struct probe_trace_event **tevs __unused,
int max_tevs __unused, const char *mod __unused)
int show_line_range(struct line_range *lr __unused, const char *module __unused)
int show_available_vars(struct perf_probe_event *pevs __unused,
int npevs __unused, int max_vls __unused,
const char *module __unused,
struct strfilter *filter __unused,
bool externs __unused)
static int parse_line_num(char **ptr, int *val, const char *what)
int parse_line_range_desc(const char *arg, struct line_range *lr)
static bool check_event_name(const char *name)
static int parse_perf_probe_point(char *arg, struct perf_probe_event *pev)
static int parse_perf_probe_arg(char *str, struct perf_probe_arg *arg)
int parse_perf_probe_command(const char *cmd, struct perf_probe_event *pev)
bool perf_probe_event_need_dwarf(struct perf_probe_event *pev)
static int parse_probe_trace_command(const char *cmd,
struct probe_trace_event *tev)
int synthesize_perf_probe_arg(struct perf_probe_arg *pa, char *buf, size_t len)
static char *synthesize_perf_probe_point(struct perf_probe_point *pp)
static int __synthesize_probe_trace_arg_ref(struct probe_trace_arg_ref *ref,
char **buf, size_t *buflen,
int depth)
static int synthesize_probe_trace_arg(struct probe_trace_arg *arg,
char *buf, size_t buflen)
char *synthesize_probe_trace_command(struct probe_trace_event *tev)
static int convert_to_perf_probe_event(struct probe_trace_event *tev,
struct perf_probe_event *pev)
void clear_perf_probe_event(struct perf_probe_event *pev)
static void clear_probe_trace_event(struct probe_trace_event *tev)
static int open_kprobe_events(bool readwrite)
static struct strlist *get_probe_trace_command_rawlist(int fd)
static int show_perf_probe_event(struct perf_probe_event *pev)
int show_perf_probe_events(void)
static struct strlist *get_probe_trace_event_names(int fd, bool include_group)
static int write_probe_trace_event(int fd, struct probe_trace_event *tev)
static int get_new_event_name(char *buf, size_t len, const char *base,
struct strlist *namelist, bool allow_suffix)
static int __add_probe_trace_events(struct perf_probe_event *pev,
struct probe_trace_event *tevs,
int ntevs, bool allow_suffix)
static int convert_to_probe_trace_events(struct perf_probe_event *pev,
struct probe_trace_event **tevs,
int max_tevs, const char *module)
struct __event_package ;
int add_perf_probe_events(struct perf_probe_event *pevs, int npevs,
int max_tevs, const char *module, bool force_add)
static int __del_trace_probe_event(int fd, struct str_node *ent)
static int del_trace_probe_event(int fd, const char *group,
const char *event, struct strlist *namelist)
int del_perf_probe_events(struct strlist *dellist)
static struct strfilter *available_func_filter;
static int filter_available_functions(struct map *map __unused,
struct symbol *sym)
int show_available_funcs(const char *module, struct strfilter *_filter)
