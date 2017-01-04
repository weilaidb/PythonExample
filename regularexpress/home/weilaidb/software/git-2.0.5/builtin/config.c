static const char *const builtin_config_usage[] = ;
static char *key;
static regex_t *key_regexp;
static regex_t *regexp;
static int show_keys;
static int use_key_regexp;
static int do_all;
static int do_not_match;
static char delim = '=';
static char key_delim = ' ';
static char term = '\n';
static int use_global_config, use_system_config, use_local_config;
static struct git_config_source given_config_source;
static int actions, types;
static const char *get_color_slot, *get_colorbool_slot;
static int end_null;
static int respect_includes = -1;
#define ACTION_GET (1<<0)
#define ACTION_GET_ALL (1<<1)
#define ACTION_GET_REGEXP (1<<2)
#define ACTION_REPLACE_ALL (1<<3)
#define ACTION_ADD (1<<4)
#define ACTION_UNSET (1<<5)
#define ACTION_UNSET_ALL (1<<6)
#define ACTION_RENAME_SECTION (1<<7)
#define ACTION_REMOVE_SECTION (1<<8)
#define ACTION_LIST (1<<9)
#define ACTION_EDIT (1<<10)
#define ACTION_SET (1<<11)
#define ACTION_SET_ALL (1<<12)
#define ACTION_GET_COLOR (1<<13)
#define ACTION_GET_COLORBOOL (1<<14)
#define ACTION_GET_URLMATCH (1<<15)
#define TYPE_BOOL (1<<0)
#define TYPE_INT (1<<1)
#define TYPE_BOOL_OR_INT (1<<2)
#define TYPE_PATH (1<<3)
static struct option builtin_config_options[] = ;
static void check_argc(int argc, int min, int max)
static int show_all_config(const char *key_, const char *value_, void *cb)
struct strbuf_list ;
static int format_config(struct strbuf *buf, const char *key_, const char *value_)
static int collect_config(const char *key_, const char *value_, void *cb)
static int get_value(const char *key_, const char *regex_)
static char *normalize_value(const char *key, const char *value)
static int get_color_found;
static const char *get_color_slot;
static const char *get_colorbool_slot;
static char parsed_color[COLOR_MAXLEN];
static int git_get_color_config(const char *var, const char *value, void *cb)
static void get_color(const char *def_color)
static int get_colorbool_found;
static int get_diff_color_found;
static int get_color_ui_found;
static int git_get_colorbool_config(const char *var, const char *value,
void *cb)
static int get_colorbool(int print)
static void check_write(void)
struct urlmatch_current_candidate_value ;
static int urlmatch_collect_fn(const char *var, const char *value, void *cb)
static char *dup_downcase(const char *string)
static int get_urlmatch(const char *var, const char *url)
int cmd_config(int argc, const char **argv, const char *prefix)
