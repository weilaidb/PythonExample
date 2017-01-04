#define MAX_ARGS	32
static const char *argv_exec_path;
static const char *argv0_path;
const char *system_path(const char *path)
const char *git_extract_argv0_path(const char *argv0)
void git_set_argv_exec_path(const char *exec_path)
const char *git_exec_path(void)
static void add_path(struct strbuf *out, const char *path)
void setup_path(void)
const char **prepare_git_cmd(const char **argv)
int execv_git_cmd(const char **argv)
int execl_git_cmd(const char *cmd,...)
