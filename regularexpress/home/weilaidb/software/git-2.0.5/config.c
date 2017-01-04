struct config_source ;
static struct config_source *cf;
static int zlib_compression_seen;
static int config_file_fgetc(struct config_source *conf)
static int config_file_ungetc(int c, struct config_source *conf)
static long config_file_ftell(struct config_source *conf)
static int config_buf_fgetc(struct config_source *conf)
static int config_buf_ungetc(int c, struct config_source *conf)
static long config_buf_ftell(struct config_source *conf)
#define MAX_INCLUDE_DEPTH 10
static const char include_depth_advice[] =
"exceeded maximum include depth (%d) while including\n"
"	%s\n"
"from\n"
"	%s\n"
"Do you have circular includes?";
static int handle_path_include(const char *path, struct config_include_data *inc)
int git_config_include(const char *var, const char *value, void *data)
static void lowercase(char *p)
void git_config_push_parameter(const char *text)
int git_config_parse_parameter(const char *text,
config_fn_t fn, void *data)
int git_config_from_parameters(config_fn_t fn, void *data)
static int get_next_char(void)
static char *parse_value(void)
static inline int iskeychar(int c)
static int get_value(config_fn_t fn, void *data, struct strbuf *name)
static int get_extended_base_var(struct strbuf *name, int c)
static int get_base_var(struct strbuf *name)
static int git_parse_source(config_fn_t fn, void *data)
static int parse_unit_factor(const char *end, uintmax_t *val)
static int git_parse_signed(const char *value, intmax_t *ret, intmax_t max)
static int git_parse_unsigned(const char *value, uintmax_t *ret, uintmax_t max)
static int git_parse_int(const char *value, int *ret)
static int git_parse_int64(const char *value, int64_t *ret)
int git_parse_ulong(const char *value, unsigned long *ret)
NORETURN
static void die_bad_number(const char *name, const char *value)
int git_config_int(const char *name, const char *value)
int64_t git_config_int64(const char *name, const char *value)
unsigned long git_config_ulong(const char *name, const char *value)
static int git_config_maybe_bool_text(const char *name, const char *value)
int git_config_maybe_bool(const char *name, const char *value)
int git_config_bool_or_int(const char *name, const char *value, int *is_bool)
int git_config_bool(const char *name, const char *value)
int git_config_string(const char **dest, const char *var, const char *value)
int git_config_pathname(const char **dest, const char *var, const char *value)
static int git_default_core_config(const char *var, const char *value)
static int git_default_i18n_config(const char *var, const char *value)
static int git_default_branch_config(const char *var, const char *value)
static int git_default_push_config(const char *var, const char *value)
static int git_default_mailmap_config(const char *var, const char *value)
int git_default_config(const char *var, const char *value, void *dummy)
static int do_config_from(struct config_source *top, config_fn_t fn, void *data)
static int do_config_from_file(config_fn_t fn,
const char *name, const char *path, FILE *f, void *data)
static int git_config_from_stdin(config_fn_t fn, void *data)
int git_config_from_file(config_fn_t fn, const char *filename, void *data)
int git_config_from_buf(config_fn_t fn, const char *name, const char *buf,
size_t len, void *data)
static int git_config_from_blob_sha1(config_fn_t fn,
const char *name,
const unsigned char *sha1,
void *data)
static int git_config_from_blob_ref(config_fn_t fn,
const char *name,
void *data)
const char *git_etc_gitconfig(void)
int git_env_bool(const char *k, int def)
int git_config_system(void)
int git_config_early(config_fn_t fn, void *data, const char *repo_config)
int git_config_with_options(config_fn_t fn, void *data,
struct git_config_source *config_source,
int respect_includes)
int git_config(config_fn_t fn, void *data)
static struct  store;
static int matches(const char *key, const char *value)
static int store_aux(const char *key, const char *value, void *cb)
static int write_error(const char *filename)
static int store_write_section(int fd, const char *key)
static int store_write_pair(int fd, const char *key, const char *value)
static ssize_t find_beginning_of_line(const char *contents, size_t size,
size_t offset_, int *found_bracket)
int git_config_set_in_file(const char *config_filename,
const char *key, const char *value)
int git_config_set(const char *key, const char *value)
int git_config_parse_key(const char *key, char **store_key, int *baselen_)
int git_config_set_multivar_in_file(const char *config_filename,
const char *key, const char *value,
const char *value_regex, int multi_replace)
int git_config_set_multivar(const char *key, const char *value,
const char *value_regex, int multi_replace)
static int section_name_match (const char *buf, const char *name)
static int section_name_is_ok(const char *name)
int git_config_rename_section_in_file(const char *config_filename,
const char *old_name, const char *new_name)
int git_config_rename_section(const char *old_name, const char *new_name)
#undef config_error_nonbool
int config_error_nonbool(const char *var)
int parse_config_key(const char *var,
const char *section,
const char **subsection, int *subsection_len,
const char **key)
