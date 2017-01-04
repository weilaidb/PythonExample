const char git_usage_string[] =
"git [--version] [--help] [-C <path>] [-c name=value]\n"
"           [--exec-path[=<path>]] [--html-path] [--man-path] [--info-path]\n"
"           [-p|--paginate|--no-pager] [--no-replace-objects] [--bare]\n"
"           [--git-dir=<path>] [--work-tree=<path>] [--namespace=<name>]\n"
"           <command> [<args>]";
const char git_more_info_string[] =
N_("'git help -a' and 'git help -g' lists available subcommands and some\n"
"concept guides. See 'git help <command>' or 'git help <concept>'\n"
"to read about a specific subcommand or concept.");
static struct startup_info git_startup_info;
static int use_pager = -1;
static void commit_pager_choice(void)
static int handle_options(const char ***argv, int *argc, int *envchanged)
static int handle_alias(int *argcp, const char ***argv)
#define RUN_SETUP		(1<<0)
#define RUN_SETUP_GENTLY	(1<<1)
#define USE_PAGER		(1<<2)
#define NEED_WORK_TREE		(1<<3)
struct cmd_struct ;
static int run_builtin(struct cmd_struct *p, int argc, const char **argv)
static struct cmd_struct commands[] = ;
int is_builtin(const char *s)
static void handle_builtin(int argc, const char **argv)
static void execv_dashed_external(const char **argv)
static int run_argv(int *argcp, const char ***argv)
int main(int argc, char **av)
