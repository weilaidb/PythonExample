const char perf_usage_string[] =
"perf [--version] [--help] COMMAND [ARGS]";
const char perf_more_info_string[] =
"See 'perf help COMMAND' for more information on a specific command.";
int use_browser = -1;
static int use_pager = -1;
struct pager_config ;
static char debugfs_mntpt[MAXPATHLEN];
static int pager_command_config(const char *var, const char *value, void *data)
int check_pager_config(const char *cmd)
static int tui_command_config(const char *var, const char *value, void *data)
static int check_tui_config(const char *cmd)
static void commit_pager_choice(void)
static void set_debugfs_path(void)
static int handle_options(const char ***argv, int *argc, int *envchanged)
static int handle_alias(int *argcp, const char ***argv)
const char perf_version_string[] = PERF_VERSION;
#define RUN_SETUP	(1<<0)
#define USE_PAGER	(1<<1)
#define NEED_WORK_TREE	(1<<2)
struct cmd_struct ;
static int run_builtin(struct cmd_struct *p, int argc, const char **argv)
static void handle_internal_command(int argc, const char **argv)
static void execv_dashed_external(const char **argv)
static int run_argv(int *argcp, const char ***argv)
static void get_debugfs_mntpt(void)
int main(int argc, const char **argv)
