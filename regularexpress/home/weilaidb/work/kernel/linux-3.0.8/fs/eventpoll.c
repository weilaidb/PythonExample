#define EP_PRIVATE_BITS (EPOLLONESHOT | EPOLLET)
#define EP_MAX_NESTS 4
#define EP_MAX_EVENTS (INT_MAX / sizeof(struct epoll_event))
#define EP_UNACTIVE_PTR ((void *) -1L)
#define EP_ITEM_COST (sizeof(struct epitem) + sizeof(struct eppoll_entry))
struct epoll_filefd ;
struct nested_call_node ;
struct nested_calls ;
struct epitem ;
struct eventpoll ;
struct eppoll_entry ;
struct ep_pqueue ;
struct ep_send_events_data ;
static long max_user_watches __read_mostly;
static DEFINE_MUTEX(epmutex);
static struct nested_calls poll_loop_ncalls;
static struct nested_calls poll_safewake_ncalls;
static struct nested_calls poll_readywalk_ncalls;
static struct kmem_cache *epi_cache __read_mostly;
static struct kmem_cache *pwq_cache __read_mostly;
static long zero;
static long long_max = LONG_MAX;
ctl_table epoll_table[] = ;
static inline void ep_set_ffd(struct epoll_filefd *ffd,
struct file *file, int fd)
static inline int ep_cmp_ffd(struct epoll_filefd *p1,
struct epoll_filefd *p2)
static inline int ep_is_linked(struct list_head *p)
static inline struct epitem *ep_item_from_wait(wait_queue_t *p)
static inline struct epitem *ep_item_from_epqueue(poll_table *p)
static inline int ep_op_has_event(int op)
static void ep_nested_calls_init(struct nested_calls *ncalls)
static inline int ep_events_available(struct eventpoll *ep)
static int ep_call_nested(struct nested_calls *ncalls, int max_nests,
int (*nproc)(void *, void *, int), void *priv,
void *cookie, void *ctx)
static inline void ep_wake_up_nested(wait_queue_head_t *wqueue,
unsigned long events, int subclass)
static inline void ep_wake_up_nested(wait_queue_head_t *wqueue,
unsigned long events, int subclass)
static int ep_poll_wakeup_proc(void *priv, void *cookie, int call_nests)
static void ep_poll_safewake(wait_queue_head_t *wq)
static void ep_unregister_pollwait(struct eventpoll *ep, struct epitem *epi)
static int ep_scan_ready_list(struct eventpoll *ep,
int (*sproc)(struct eventpoll *,
struct list_head *, void *),
void *priv)
static int ep_remove(struct eventpoll *ep, struct epitem *epi)
static void ep_free(struct eventpoll *ep)
static int ep_eventpoll_release(struct inode *inode, struct file *file)
static int ep_read_events_proc(struct eventpoll *ep, struct list_head *head,
void *priv)
static int ep_poll_readyevents_proc(void *priv, void *cookie, int call_nests)
static unsigned int ep_eventpoll_poll(struct file *file, poll_table *wait)
static const struct file_operations eventpoll_fops = ;
static inline int is_file_epoll(struct file *f)
void eventpoll_release_file(struct file *file)
static int ep_alloc(struct eventpoll **pep)
static struct epitem *ep_find(struct eventpoll *ep, struct file *file, int fd)
static int ep_poll_callback(wait_queue_t *wait, unsigned mode, int sync, void *key)
static void ep_ptable_queue_proc(struct file *file, wait_queue_head_t *whead,
poll_table *pt)
static void ep_rbtree_insert(struct eventpoll *ep, struct epitem *epi)
static int ep_insert(struct eventpoll *ep, struct epoll_event *event,
struct file *tfile, int fd)
static int ep_modify(struct eventpoll *ep, struct epitem *epi, struct epoll_event *event)
static int ep_send_events_proc(struct eventpoll *ep, struct list_head *head,
void *priv)
static int ep_send_events(struct eventpoll *ep,
struct epoll_event __user *events, int maxevents)
static inline struct timespec ep_set_mstimeout(long ms)
static int ep_poll(struct eventpoll *ep, struct epoll_event __user *events,
int maxevents, long timeout)
static int ep_loop_check_proc(void *priv, void *cookie, int call_nests)
static int ep_loop_check(struct eventpoll *ep, struct file *file)
SYSCALL_DEFINE1(epoll_create1, int, flags)
SYSCALL_DEFINE1(epoll_create, int, size)
SYSCALL_DEFINE4(epoll_ctl, int, epfd, int, op, int, fd,
struct epoll_event __user *, event)
SYSCALL_DEFINE4(epoll_wait, int, epfd, struct epoll_event __user *, events,
int, maxevents, int, timeout)
SYSCALL_DEFINE6(epoll_pwait, int, epfd, struct epoll_event __user *, events,
int, maxevents, int, timeout, const sigset_t __user *, sigmask,
size_t, sigsetsize)
static int __init eventpoll_init(void)
fs_initcall(eventpoll_init);
