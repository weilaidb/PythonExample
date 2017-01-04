struct dog_data ;
static void pre_exec(void *d)
int start_watchdog(int *in_fd_ret, int *out_fd_ret, char *sock)
void stop_watchdog(int in_fd, int out_fd)
int ping_watchdog(int fd)
