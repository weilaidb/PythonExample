struct scripting_context *scripting_context;
static int stop_script_unsupported(void)
static void process_event_unsupported(union perf_event *event __unused,
struct perf_sample *sample __unused,
struct perf_evsel *evsel __unused,
struct perf_session *session __unused,
struct thread *thread __unused)
static void print_python_unsupported_msg(void)
static int python_start_script_unsupported(const char *script __unused,
int argc __unused,
const char **argv __unused)
static int python_generate_script_unsupported(const char *outfile __unused)
struct scripting_ops python_scripting_unsupported_ops = ;
static void register_python_scripting(struct scripting_ops *scripting_ops)
void setup_python_scripting(void)
extern struct scripting_ops python_scripting_ops;
void setup_python_scripting(void)
static void print_perl_unsupported_msg(void)
static int perl_start_script_unsupported(const char *script __unused,
int argc __unused,
const char **argv __unused)
static int perl_generate_script_unsupported(const char *outfile __unused)
struct scripting_ops perl_scripting_unsupported_ops = ;
static void register_perl_scripting(struct scripting_ops *scripting_ops)
void setup_perl_scripting(void)
extern struct scripting_ops perl_scripting_ops;
void setup_perl_scripting(void)
