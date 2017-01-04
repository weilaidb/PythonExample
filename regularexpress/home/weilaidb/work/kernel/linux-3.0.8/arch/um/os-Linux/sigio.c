static int write_sigio_pid = -1;
static unsigned long write_sigio_stack;
#define SIGIO_FDS_INIT
static int write_sigio_fds[2] = SIGIO_FDS_INIT;
static int sigio_private[2] = SIGIO_FDS_INIT;
struct pollfds ;
static struct pollfds current_poll;
static struct pollfds next_poll;
static struct pollfds all_sigio_fds;
static int write_sigio_thread(void *unused)
static int need_poll(struct pollfds *polls, int n)
static void update_thread(void)
int add_sigio_fd(int fd)
int ignore_sigio_fd(int fd)
static struct pollfd *setup_initial_poll(int fd)
static void write_sigio_workaround(void)
void sigio_broken(int fd, int read)
static int pty_output_sigio;
static int pty_close_sigio;
void maybe_sigio_broken(int fd, int read)
static void sigio_cleanup(void)
__uml_exitcall(sigio_cleanup);
static int got_sigio;
static void __init handler(int sig)
struct openpty_arg ;
static void openpty_cb(void *arg)
static int async_pty(int master, int slave)
static void __init check_one_sigio(void (*proc)(int, int))
static void tty_output(int master, int slave)
static void tty_close(int master, int slave)
static void __init check_sigio(void)
void __init os_check_bugs(void)
