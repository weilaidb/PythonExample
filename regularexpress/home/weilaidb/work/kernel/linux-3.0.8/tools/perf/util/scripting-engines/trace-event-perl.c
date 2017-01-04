void boot_Perf__Trace__Context(pTHX_ CV *cv);
void boot_DynaLoader(pTHX_ CV *cv);
typedef PerlInterpreter * INTERP;
void xs_init(pTHX);
void xs_init(pTHX)
INTERP my_perl;
#define FTRACE_MAX_EVENT				\
((1 << (sizeof(unsigned short) * 8)) - 1)
struct event *events[FTRACE_MAX_EVENT];
extern struct scripting_context *scripting_context;
static char *cur_field_name;
static int zero_flag_atom;
static void define_symbolic_value(const char *ev_name,
const char *field_name,
const char *field_value,
const char *field_str)
static void define_symbolic_values(struct print_flag_sym *field,
const char *ev_name,
const char *field_name)
static void define_symbolic_field(const char *ev_name,
const char *field_name)
static void define_flag_value(const char *ev_name,
const char *field_name,
const char *field_value,
const char *field_str)
static void define_flag_values(struct print_flag_sym *field,
const char *ev_name,
const char *field_name)
static void define_flag_field(const char *ev_name,
const char *field_name,
const char *delim)
static void define_event_symbols(struct event *event,
const char *ev_name,
struct print_arg *args)
static inline struct event *find_cache_event(int type)
static void perl_process_event(union perf_event *pevent __unused,
struct perf_sample *sample,
struct perf_evsel *evsel,
struct perf_session *session __unused,
struct thread *thread)
static void run_start_sub(void)
static int perl_start_script(const char *script, int argc, const char **argv)
static int perl_stop_script(void)
static int perl_generate_script(const char *outfile)
struct scripting_ops perl_scripting_ops = ;
