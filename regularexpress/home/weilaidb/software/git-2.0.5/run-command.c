# define SHELL_PATH "/bin/sh"
struct child_to_clean ;
static struct child_to_clean *children_to_clean;
static int installed_child_cleanup_handler;
static void cleanup_children(int sig)
static void cleanup_children_on_signal(int sig)
static void cleanup_children_on_exit(void)
static void mark_child_for_cleanup(pid_t pid)
static void clear_child_for_cleanup(pid_t pid)
static inline void close_pair(int fd[2])
static inline void dup_devnull(int to)
static char *locate_in_PATH(const char *file)
static int exists_in_PATH(const char *file)
int sane_execvp(const char *file, char * const argv[])
static const char **prepare_shell_cmd(const char **argv)
static int execv_shell_cmd(const char **argv)
static int child_err = 2;
static int child_notifier = -1;
static void notify_parent(void)
static NORETURN void die_child(const char *err, va_list params)
static void error_child(const char *err, va_list params)
static inline void set_cloexec(int fd)
static int wait_or_whine(pid_t pid, const char *argv0)
int start_command(struct child_process *cmd)
int finish_command(struct child_process *cmd)
int run_command(struct child_process *cmd)
static void prepare_run_command_v_opt(struct child_process *cmd,
const char **argv,
int opt)
int run_command_v_opt(const char **argv, int opt)
int run_command_v_opt_cd_env(const char **argv, int opt, const char *dir, const char *const *env)
static pthread_t main_thread;
static int main_thread_set;
static pthread_key_t async_key;
static pthread_key_t async_die_counter;
static void *run_thread(void *data)
static NORETURN void die_async(const char *err, va_list params)
static int async_die_is_recursing(void)
int start_async(struct async *async)
int finish_async(struct async *async)
char *find_hook(const char *name)
int run_hook_ve(const char *const *env, const char *name, va_list args)
int run_hook_le(const char *const *env, const char *name, ...)
int run_hook_with_custom_index(const char *index_file, const char *name, ...)
