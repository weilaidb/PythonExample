static struct pollfd *pollfds = NULL;
static int pollfds_num = 0;
static int pollfds_size = 0;
int os_waiting_for_events(struct irq_fd *active_fds)
int os_create_pollfd(int fd, int events, void *tmp_pfd, int size_tmpfds)
void os_free_irq_by_cb(int (*test)(struct irq_fd *, void *), void *arg,
struct irq_fd *active_fds, struct irq_fd ***last_irq_ptr2)
int os_get_pollfd(int i)
void os_set_pollfd(int i, int fd)
void os_set_ioignore(void)
