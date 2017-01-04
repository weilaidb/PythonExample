#define __PERF_RUN_COMMAND_H
enum ;
#define IS_RUN_COMMAND_ERR(x) (-(x) >= ERR_RUN_COMMAND_FORK)
struct child_process ;
int start_command(struct child_process *);
int finish_command(struct child_process *);
int run_command(struct child_process *);
#define RUN_COMMAND_NO_STDIN 1
#define RUN_PERF_CMD	     2
#define RUN_COMMAND_STDOUT_TO_STDERR 4
int run_command_v_opt(const char **argv, int opt);
