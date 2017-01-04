static int force = -1;
static int interactive;
static struct string_list del_list = STRING_LIST_INIT_DUP;
static unsigned int colopts;
static const char *const builtin_clean_usage[] = ;
static const char *msg_remove = N_("Removing %s\n");
static const char *msg_would_remove = N_("Would remove %s\n");
static const char *msg_skip_git_dir = N_("Skipping repository %s\n");
static const char *msg_would_skip_git_dir = N_("Would skip repository %s\n");
static const char *msg_warn_remove_failed = N_("failed to remove %s");
static int clean_use_color = -1;
static char clean_colors[][COLOR_MAXLEN] = ;
enum color_clean ;
#define MENU_OPTS_SINGLETON		01
#define MENU_OPTS_IMMEDIATE		02
#define MENU_OPTS_LIST_ONLY		04
struct menu_opts ;
#define MENU_RETURN_NO_LOOP		10
struct menu_item ;
enum menu_stuff_type ;
struct menu_stuff ;
static int parse_clean_color_slot(const char *var)
static int git_clean_config(const char *var, const char *value, void *cb)
static const char *clean_get_color(enum color_clean ix)
static void clean_print_color(enum color_clean ix)
static int exclude_cb(const struct option *opt, const char *arg, int unset)
static int remove_dirs(struct strbuf *path, const char *prefix, int force_flag,
int dry_run, int quiet, int *dir_gone)
static void pretty_print_dels(void)
static void pretty_print_menus(struct string_list *menu_list)
static void prompt_help_cmd(int singleton)
static void print_highlight_menu_stuff(struct menu_stuff *stuff, int **chosen)
static int find_unique(const char *choice, struct menu_stuff *menu_stuff)
static int parse_choice(struct menu_stuff *menu_stuff,
int is_single,
struct strbuf input,
int **chosen)
static int *list_and_choose(struct menu_opts *opts, struct menu_stuff *stuff)
static int clean_cmd(void)
static int filter_by_patterns_cmd(void)
static int select_by_numbers_cmd(void)
static int ask_each_cmd(void)
static int quit_cmd(void)
static int help_cmd(void)
static void interactive_main_loop(void)
int cmd_clean(int argc, const char **argv, const char *prefix)
