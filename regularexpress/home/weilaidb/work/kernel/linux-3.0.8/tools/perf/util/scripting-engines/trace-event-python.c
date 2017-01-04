PyMODINIT_FUNC initperf_trace_context(void);
#define FTRACE_MAX_EVENT				\
((1 << (sizeof(unsigned short) * 8)) - 1)
struct event *events[FTRACE_MAX_EVENT];
#define MAX_FIELDS	64
#define N_COMMON_FIELDS	7
extern struct scripting_context *scripting_context;
static char *cur_field_name;
static int zero_flag_atom;
static PyObject *main_module, *main_dict;
static void handler_call_die(const char *handler_name)
static void define_value(enum print_arg_type field_type,
const char *ev_name,
const char *field_name,
const char *field_value,
const char *field_str)
static void define_values(enum print_arg_type field_type,
struct print_flag_sym *field,
const char *ev_name,
const char *field_name)
static void define_field(enum print_arg_type field_type,
const char *ev_name,
const char *field_name,
const char *delim)
static void define_event_symbols(struct event *event,
const char *ev_name,
struct print_arg *args)
static inline struct event *find_cache_event(int type)
static void python_process_event(union perf_event *pevent __unused,
struct perf_sample *sample,
struct perf_evsel *evsel __unused,
struct perf_session *session __unused,
struct thread *thread)
static int run_start_sub(void)
static int python_start_script(const char *script, int argc, const char **argv)
static int python_stop_script(void)
static int python_generate_script(const char *outfile)
struct scripting_ops python_scripting_ops = ;
