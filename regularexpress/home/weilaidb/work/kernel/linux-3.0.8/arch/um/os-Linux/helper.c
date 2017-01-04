struct helper_data ;
static int helper_child(void *arg)
int run_helper(void (*pre_exec)(void *), void *pre_data, char **argv)
int run_helper_thread(int (*proc)(void *), void *arg, unsigned int flags,
unsigned long *stack_out)
int helper_wait(int pid)
