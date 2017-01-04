#define MAX_SLACK	(100 * NSEC_PER_MSEC)
static long __estimate_accuracy(struct timespec *tv)
long select_estimate_accuracy(struct timespec *tv)
struct poll_table_page ;
#define POLL_TABLE_FULL(table) \
((unsigned long)((table)->entry+1) > PAGE_SIZE + (unsigned long)(table))
static void __pollwait(struct file *filp, wait_queue_head_t *wait_address,
poll_table *p);
void poll_initwait(struct poll_wqueues *pwq)
EXPORT_SYMBOL(poll_initwait);
static void free_poll_entry(struct poll_table_entry *entry)
void poll_freewait(struct poll_wqueues *pwq)
EXPORT_SYMBOL(poll_freewait);
static struct poll_table_entry *poll_get_entry(struct poll_wqueues *p)
static int __pollwake(wait_queue_t *wait, unsigned mode, int sync, void *key)
static int pollwake(wait_queue_t *wait, unsigned mode, int sync, void *key)
static void __pollwait(struct file *filp, wait_queue_head_t *wait_address,
poll_table *p)
int poll_schedule_timeout(struct poll_wqueues *pwq, int state,
ktime_t *expires, unsigned long slack)
EXPORT_SYMBOL(poll_schedule_timeout);
int poll_select_set_timeout(struct timespec *to, long sec, long nsec)
static int poll_select_copy_remaining(struct timespec *end_time, void __user *p,
int timeval, int ret)
#define FDS_IN(fds, n)		(fds->in + n)
#define FDS_OUT(fds, n)		(fds->out + n)
#define FDS_EX(fds, n)		(fds->ex + n)
#define BITS(fds, n)	(*FDS_IN(fds, n)|*FDS_OUT(fds, n)|*FDS_EX(fds, n))
static int max_select_fd(unsigned long n, fd_set_bits *fds)
#define POLLIN_SET (POLLRDNORM | POLLRDBAND | POLLIN | POLLHUP | POLLERR)
#define POLLOUT_SET (POLLWRBAND | POLLWRNORM | POLLOUT | POLLERR)
#define POLLEX_SET (POLLPRI)
static inline void wait_key_set(poll_table *wait, unsigned long in,
unsigned long out, unsigned long bit)
int do_select(int n, fd_set_bits *fds, struct timespec *end_time)
int core_sys_select(int n, fd_set __user *inp, fd_set __user *outp,
fd_set __user *exp, struct timespec *end_time)
SYSCALL_DEFINE5(select, int, n, fd_set __user *, inp, fd_set __user *, outp,
fd_set __user *, exp, struct timeval __user *, tvp)
static long do_pselect(int n, fd_set __user *inp, fd_set __user *outp,
fd_set __user *exp, struct timespec __user *tsp,
const sigset_t __user *sigmask, size_t sigsetsize)
SYSCALL_DEFINE6(pselect6, int, n, fd_set __user *, inp, fd_set __user *, outp,
fd_set __user *, exp, struct timespec __user *, tsp,
void __user *, sig)
struct sel_arg_struct ;
SYSCALL_DEFINE1(old_select, struct sel_arg_struct __user *, arg)
struct poll_list ;
#define POLLFD_PER_PAGE  ((PAGE_SIZE-sizeof(struct poll_list)) / sizeof(struct pollfd))
static inline unsigned int do_pollfd(struct pollfd *pollfd, poll_table *pwait)
static int do_poll(unsigned int nfds,  struct poll_list *list,
struct poll_wqueues *wait, struct timespec *end_time)
#define N_STACK_PPS ((sizeof(stack_pps) - sizeof(struct poll_list))  / \
sizeof(struct pollfd))
int do_sys_poll(struct pollfd __user *ufds, unsigned int nfds,
struct timespec *end_time)
static long do_restart_poll(struct restart_block *restart_block)
SYSCALL_DEFINE3(poll, struct pollfd __user *, ufds, unsigned int, nfds,
long, timeout_msecs)
SYSCALL_DEFINE5(ppoll, struct pollfd __user *, ufds, unsigned int, nfds,
struct timespec __user *, tsp, const sigset_t __user *, sigmask,
size_t, sigsetsize)
