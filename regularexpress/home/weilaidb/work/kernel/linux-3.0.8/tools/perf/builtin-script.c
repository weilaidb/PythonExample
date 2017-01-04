static char const		*script_name;
static char const		*generate_script_lang;
static bool			debug_mode;
static u64			last_timestamp;
static u64			nr_unordered;
extern const struct option	record_options[];
static bool			no_callchain;
enum perf_output_field ;
struct output_option  all_output_options[] = ;
static struct  output[PERF_TYPE_MAX] = ;
static bool output_set_by_user(void)
static const char *output_field2str(enum perf_output_field field)
#define PRINT_FIELD(x)  (output[attr->type].fields & PERF_OUTPUT_##x)
static int perf_event_attr__check_stype(struct perf_event_attr *attr,
u64 sample_type, const char *sample_msg,
enum perf_output_field field)
static int perf_evsel__check_attr(struct perf_evsel *evsel,
struct perf_session *session)
static int perf_session__check_output_opt(struct perf_session *session)
static void print_sample_start(struct perf_sample *sample,
struct thread *thread,
struct perf_event_attr *attr)
static void process_event(union perf_event *event __unused,
struct perf_sample *sample,
struct perf_evsel *evsel,
struct perf_session *session,
struct thread *thread)
static int default_start_script(const char *script __unused,
int argc __unused,
const char **argv __unused)
static int default_stop_script(void)
static int default_generate_script(const char *outfile __unused)
static struct scripting_ops default_scripting_ops = ;
static struct scripting_ops	*scripting_ops;
static void setup_scripting(void)
static int cleanup_scripting(void)
static char const		*input_name = "perf.data";
static int process_sample_event(union perf_event *event,
struct perf_sample *sample,
struct perf_evsel *evsel,
struct perf_session *session)
static struct perf_event_ops event_ops = ;
extern volatile int session_done;
static void sig_handler(int sig __unused)
static int __cmd_script(struct perf_session *session)
struct script_spec ;
static LIST_HEAD(script_specs);
static struct script_spec *script_spec__new(const char *spec,
struct scripting_ops *ops)
static void script_spec__delete(struct script_spec *s)
static void script_spec__add(struct script_spec *s)
static struct script_spec *script_spec__find(const char *spec)
static struct script_spec *script_spec__findnew(const char *spec,
struct scripting_ops *ops)
int script_spec_register(const char *spec, struct scripting_ops *ops)
static struct scripting_ops *script_spec__lookup(const char *spec)
static void list_available_languages(void)
static int parse_scriptname(const struct option *opt __used,
const char *str, int unset __used)
static int parse_output_fields(const struct option *opt __used,
const char *arg, int unset __used)
static int is_directory(const char *base_path, const struct dirent *dent)
#define for_each_lang(scripts_path, scripts_dir, lang_dirent, lang_next)\
while (!readdir_r(scripts_dir, &lang_dirent, &lang_next) &&	\
lang_next)						\
if ((lang_dirent.d_type == DT_DIR ||			\
(lang_dirent.d_type == DT_UNKNOWN &&		\
is_directory(scripts_path, &lang_dirent))) &&	\
(strcmp(lang_dirent.d_name, ".")) &&		\
(strcmp(lang_dirent.d_name, "..")))
#define for_each_script(lang_path, lang_dir, script_dirent, script_next)\
while (!readdir_r(lang_dir, &script_dirent, &script_next) &&	\
script_next)						\
if (script_dirent.d_type != DT_DIR &&			\
(script_dirent.d_type != DT_UNKNOWN ||		\
!is_directory(lang_path, &script_dirent)))
#define RECORD_SUFFIX			"-record"
#define REPORT_SUFFIX			"-report"
struct script_desc ;
static LIST_HEAD(script_descs);
static struct script_desc *script_desc__new(const char *name)
static void script_desc__delete(struct script_desc *s)
static void script_desc__add(struct script_desc *s)
static struct script_desc *script_desc__find(const char *name)
static struct script_desc *script_desc__findnew(const char *name)
static const char *ends_with(const char *str, const char *suffix)
static char *ltrim(char *str)
static int read_script_info(struct script_desc *desc, const char *filename)
static int list_available_scripts(const struct option *opt __used,
const char *s __used, int unset __used)
static char *get_script_path(const char *script_root, const char *suffix)
static bool is_top_script(const char *script_path)
static int has_required_arg(char *script_path)
static const char * const script_usage[] = ;
static const struct option options[] = ;
static bool have_cmd(int argc, const char **argv)
int cmd_script(int argc, const char **argv, const char *prefix __used)
