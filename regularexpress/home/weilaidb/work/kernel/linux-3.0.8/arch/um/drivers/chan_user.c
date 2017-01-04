void generic_close(int fd, void *unused)
int generic_read(int fd, char *c_out, void *unused)
int generic_write(int fd, const char *buf, int n, void *unused)
int generic_window_size(int fd, void *unused, unsigned short *rows_out,
unsigned short *cols_out)
void generic_free(void *data)
int generic_console_write(int fd, const char *buf, int n)
static void winch_handler(int sig)
struct winch_data ;
static int winch_thread(void *arg)
static int winch_tramp(int fd, struct tty_struct *tty, int *fd_out,
unsigned long *stack_out)
void register_winch(int fd, struct tty_struct *tty)
