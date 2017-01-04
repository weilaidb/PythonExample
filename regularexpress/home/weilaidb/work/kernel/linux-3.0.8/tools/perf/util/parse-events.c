struct event_symbol ;
enum event_result ;
char debugfs_path[MAXPATHLEN];
#define CHW(x) .type = PERF_TYPE_HARDWARE, .config = PERF_COUNT_HW_##x
#define CSW(x) .type = PERF_TYPE_SOFTWARE, .config = PERF_COUNT_SW_##x
static struct event_symbol event_symbols[] = ;
#define __PERF_EVENT_FIELD(config, name) \
((config & PERF_EVENT_##name##_MASK) >> PERF_EVENT_##name##_SHIFT)
#define PERF_EVENT_RAW(config)		__PERF_EVENT_FIELD(config, RAW)
#define PERF_EVENT_CONFIG(config)	__PERF_EVENT_FIELD(config, CONFIG)
#define PERF_EVENT_TYPE(config)		__PERF_EVENT_FIELD(config, TYPE)
#define PERF_EVENT_ID(config)		__PERF_EVENT_FIELD(config, EVENT)
static const char *hw_event_names[PERF_COUNT_HW_MAX] = ;
static const char *sw_event_names[PERF_COUNT_SW_MAX] = ;
#define MAX_ALIASES 8
static const char *hw_cache[][MAX_ALIASES] = ;
static const char *hw_cache_op[][MAX_ALIASES] = ;
static const char *hw_cache_result[][MAX_ALIASES] = ;
#define C(x)		PERF_COUNT_HW_CACHE_##x
#define CACHE_READ	(1 << C(OP_READ))
#define CACHE_WRITE	(1 << C(OP_WRITE))
#define CACHE_PREFETCH	(1 << C(OP_PREFETCH))
#define COP(x)		(1 << x)
static unsigned long hw_cache_stat[C(MAX)] = ;
#define for_each_subsystem(sys_dir, sys_dirent, sys_next)	       \
while (!readdir_r(sys_dir, &sys_dirent, &sys_next) && sys_next)	       \
if (sys_dirent.d_type == DT_DIR &&				       \
(strcmp(sys_dirent.d_name, ".")) &&				       \
(strcmp(sys_dirent.d_name, "..")))
static int tp_event_has_id(struct dirent *sys_dir, struct dirent *evt_dir)
#define for_each_event(sys_dirent, evt_dir, evt_dirent, evt_next)	       \
while (!readdir_r(evt_dir, &evt_dirent, &evt_next) && evt_next)        \
if (evt_dirent.d_type == DT_DIR &&				       \
(strcmp(evt_dirent.d_name, ".")) &&				       \
(strcmp(evt_dirent.d_name, "..")) &&				       \
(!tp_event_has_id(&sys_dirent, &evt_dirent)))
#define MAX_EVENT_LENGTH 512
struct tracepoint_path *tracepoint_id_to_path(u64 config)
#define TP_PATH_LEN (MAX_EVENT_LENGTH * 2 + 1)
static const char *tracepoint_id_to_name(u64 config)
static int is_cache_op_valid(u8 cache_type, u8 cache_op)
static char *event_cache_name(u8 cache_type, u8 cache_op, u8 cache_result)
const char *event_type(int type)
const char *event_name(struct perf_evsel *evsel)
const char *__event_name(int type, u64 config)
static int parse_aliases(const char **str, const char *names[][MAX_ALIASES], int size)
static enum event_result
parse_generic_hw_event(const char **str, struct perf_event_attr *attr)
static enum event_result
parse_single_tracepoint_event(char *sys_name,
const char *evt_name,
unsigned int evt_length,
struct perf_event_attr *attr,
const char **strp)
#define MAX_EVOPT_LEN	(MAX_EVENT_LENGTH * 2 + 2 + 128)
static enum event_result
parse_multiple_tracepoint_event(const struct option *opt, char *sys_name,
const char *evt_exp, char *flags)
static enum event_result
parse_tracepoint_event(const struct option *opt, const char **strp,
struct perf_event_attr *attr)
static enum event_result
parse_breakpoint_type(const char *type, const char **strp,
struct perf_event_attr *attr)
static enum event_result
parse_breakpoint_event(const char **strp, struct perf_event_attr *attr)
static int check_events(const char *str, unsigned int i)
static enum event_result
parse_symbolic_event(const char **strp, struct perf_event_attr *attr)
static enum event_result
parse_raw_event(const char **strp, struct perf_event_attr *attr)
static enum event_result
parse_numeric_event(const char **strp, struct perf_event_attr *attr)
static int
parse_event_modifier(const char **strp, struct perf_event_attr *attr)
static enum event_result
parse_event_symbols(const struct option *opt, const char **str,
struct perf_event_attr *attr)
int parse_events(const struct option *opt, const char *str, int unset __used)
int parse_filter(const struct option *opt, const char *str,
int unset __used)
static const char * const event_type_descriptors[] = ;
void print_tracepoint_events(const char *subsys_glob, const char *event_glob)
int is_valid_tracepoint(const char *event_string)
void print_events_type(u8 type)
int print_hwcache_events(const char *event_glob)
#define MAX_NAME_LEN 100
void print_events(const char *event_glob)
