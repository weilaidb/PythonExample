#define _LINUX_POLL_H
extern struct ctl_table epoll_table[];
#define MAX_STACK_ALLOC 832
#define FRONTEND_STACK_ALLOC	256
#define SELECT_STACK_ALLOC	FRONTEND_STACK_ALLOC
#define POLL_STACK_ALLOC	FRONTEND_STACK_ALLOC
#define WQUEUES_STACK_ALLOC	(MAX_STACK_ALLOC - FRONTEND_STACK_ALLOC)
#define N_INLINE_POLL_ENTRIES	(WQUEUES_STACK_ALLOC / sizeof(struct poll_table_entry))
#define DEFAULT_POLLMASK (POLLIN | POLLOUT | POLLRDNORM | POLLWRNORM)
struct poll_table_struct;
typedef void (*poll_queue_proc)(struct file *, wait_queue_head_t *, struct poll_table_struct *);
typedef struct poll_table_struct  poll_table;
static inline void poll_wait(struct file * filp, wait_queue_head_t * wait_address, poll_table *p)
static inline void init_poll_funcptr(poll_table *pt, poll_queue_proc qproc)
struct poll_table_entry ;
struct poll_wqueues ;
extern void poll_initwait(struct poll_wqueues *pwq);
extern void poll_freewait(struct poll_wqueues *pwq);
extern int poll_schedule_timeout(struct poll_wqueues *pwq, int state,
ktime_t *expires, unsigned long slack);
extern long select_estimate_accuracy(struct timespec *tv);
static inline int poll_schedule(struct poll_wqueues *pwq, int state)
typedef struct  fd_set_bits;
#define FDS_BITPERLONG	(8*sizeof(long))
#define FDS_LONGS(nr)	(((nr)+FDS_BITPERLONG-1)/FDS_BITPERLONG)
#define FDS_BYTES(nr)	(FDS_LONGS(nr)*sizeof(long))
static inline
int get_fd_set(unsigned long nr, void __user *ufdset, unsigned long *fdset)
static inline unsigned long __must_check
set_fd_set(unsigned long nr, void __user *ufdset, unsigned long *fdset)
static inline
void zero_fd_set(unsigned long nr, unsigned long *fdset)
#define MAX_INT64_SECONDS (((s64)(~((u64)0)>>1)/HZ)-1)
extern int do_select(int n, fd_set_bits *fds, struct timespec *end_time);
extern int do_sys_poll(struct pollfd __user * ufds, unsigned int nfds,
struct timespec *end_time);
extern int core_sys_select(int n, fd_set __user *inp, fd_set __user *outp,
fd_set __user *exp, struct timespec *end_time);
extern int poll_select_set_timeout(struct timespec *to, long sec, long nsec);
