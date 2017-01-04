static inline void close_pair(int fd[2])
static inline void dup_devnull(int to)
int start_command(struct child_process *cmd)
static int wait_or_whine(pid_t pid)
int finish_command(struct child_process *cmd)
int run_command(struct child_process *cmd)
static void prepare_run_command_v_opt(struct child_process *cmd,
const char **argv,
int opt)
int run_command_v_opt(const char **argv, int opt)
