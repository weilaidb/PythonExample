#define MAXNAME (256)
#define DEBUG_CACHE_DIR ".debug"
char buildid_dir[MAXPATHLEN];
static FILE *config_file;
static const char *config_file_name;
static int config_linenr;
static int config_file_eof;
static const char *config_exclusive_filename;
static int get_next_char(void)
static char *parse_value(void)
static inline int iskeychar(int c)
static int get_value(config_fn_t fn, void *data, char *name, unsigned int len)
static int get_extended_base_var(char *name, int baselen, int c)
static int get_base_var(char *name)
static int perf_parse_file(config_fn_t fn, void *data)
static int parse_unit_factor(const char *end, unsigned long *val)
static int perf_parse_long(const char *value, long *ret)
static void die_bad_config(const char *name)
int perf_config_int(const char *name, const char *value)
static int perf_config_bool_or_int(const char *name, const char *value, int *is_bool)
int perf_config_bool(const char *name, const char *value)
const char *perf_config_dirname(const char *name, const char *value)
static int perf_default_core_config(const char *var __used, const char *value __used)
int perf_default_config(const char *var, const char *value, void *dummy __used)
static int perf_config_from_file(config_fn_t fn, const char *filename, void *data)
static const char *perf_etc_perfconfig(void)
static int perf_env_bool(const char *k, int def)
static int perf_config_system(void)
static int perf_config_global(void)
int perf_config(config_fn_t fn, void *data)
int config_error_nonbool(const char *var)
struct buildid_dir_config ;
static int buildid_dir_command_config(const char *var, const char *value,
void *data)
static void check_buildid_dir_config(void)
void set_buildid_dir(void)
