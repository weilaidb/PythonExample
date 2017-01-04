#define COMMAND_DIR "git-shell-commands"
#define HELP_COMMAND COMMAND_DIR "/help"
#define NOLOGIN_COMMAND COMMAND_DIR "/no-interactive-login"
static int do_generic_cmd(const char *me, char *arg)
static int do_cvs_cmd(const char *me, char *arg)
static int is_valid_cmd_name(const char *cmd)
static char *make_cmd(const char *prog)
static void cd_to_homedir(void)
static void run_shell(void)
static struct commands  cmd_list[] = ;
int main(int argc, char **argv)
