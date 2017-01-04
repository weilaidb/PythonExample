#define RUN_COMMAND_H
struct child_process ;
int start_command(struct child_process *);
int finish_command(struct child_process *);
int run_command(struct child_process *);
extern char *find_hook(const char *name);
LAST_ARG_MUST_BE_NULL
extern int run_hook_le(const char *const *env, const char *name, ...);
extern int run_hook_ve(const char *const *env, const char *name, va_list args);
LAST_ARG_MUST_BE_NULL
__attribute__((deprecated))
extern int run_hook_with_custom_index(const char *index_file, const char *name, ...);
#define RUN_COMMAND_NO_STDIN 1
#define RUN_GIT_CMD	     2
#define RUN_COMMAND_STDOUT_TO_STDERR 4
#define RUN_SILENT_EXEC_FAILURE 8
#define RUN_USING_SHELL 16
#define RUN_CLEAN_ON_EXIT 32
int run_command_v_opt(const char **argv, int opt);
int run_command_v_opt_cd_env(const char **argv, int opt, const char *dir, const char *const *env);
struct async ;
int start_async(struct async *async);
int finish_async(struct async *async);
