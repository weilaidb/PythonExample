#define DEBUG 0
#if DEBUG > 1
#define dprintk		printk
#define dprintk(x...)	do  while (0)
static DEFINE_SPINLOCK(aio_nr_lock);
unsigned long aio_nr;
unsigned long aio_max_nr = 0x10000;
static struct kmem_cache	*kiocb_cachep;
static struct kmem_cache	*kioctx_cachep;
static struct workqueue_struct *aio_wq;
static void aio_fput_routine(struct work_struct *);
static DECLARE_WORK(fput_work, aio_fput_routine);
static DEFINE_SPINLOCK(fput_lock);
static LIST_HEAD(fput_head);
static void aio_kick_handler(struct work_struct *);
static void aio_queue_work(struct kioctx *);
static int __init aio_setup(void)
__initcall(aio_setup);
static void aio_free_ring(struct kioctx *ctx)
static int aio_setup_ring(struct kioctx *ctx)
#define AIO_EVENTS_PER_PAGE	(PAGE_SIZE / sizeof(struct io_event))
#define AIO_EVENTS_FIRST_PAGE	((PAGE_SIZE - sizeof(struct aio_ring)) / sizeof(struct io_event))
#define AIO_EVENTS_OFFSET	(AIO_EVENTS_PER_PAGE - AIO_EVENTS_FIRST_PAGE)
#define aio_ring_event(info, nr, km) ()
#define put_aio_ring_event(event, km) do  while(0)
static void ctx_rcu_free(struct rcu_head *head)
static void __put_ioctx(struct kioctx *ctx)
static inline void get_ioctx(struct kioctx *kioctx)
static inline int try_get_ioctx(struct kioctx *kioctx)
static inline void put_ioctx(struct kioctx *kioctx)
static struct kioctx *ioctx_alloc(unsigned nr_events)
static void aio_cancel_all(struct kioctx *ctx)
static void wait_for_all_aios(struct kioctx *ctx)
ssize_t wait_on_sync_kiocb(struct kiocb *iocb)
EXPORT_SYMBOL(wait_on_sync_kiocb);
void exit_aio(struct mm_struct *mm)
static struct kiocb *__aio_get_req(struct kioctx *ctx)
static inline struct kiocb *aio_get_req(struct kioctx *ctx)
static inline void really_put_req(struct kioctx *ctx, struct kiocb *req)
static void aio_fput_routine(struct work_struct *data)
static int __aio_put_req(struct kioctx *ctx, struct kiocb *req)
int aio_put_req(struct kiocb *req)
EXPORT_SYMBOL(aio_put_req);
static struct kioctx *lookup_ioctx(unsigned long ctx_id)
static inline int __queue_kicked_iocb(struct kiocb *iocb)
static ssize_t aio_run_iocb(struct kiocb *iocb)
static int __aio_run_iocbs(struct kioctx *ctx)
static void aio_queue_work(struct kioctx * ctx)
static inline void aio_run_all_iocbs(struct kioctx *ctx)
static void aio_kick_handler(struct work_struct *work)
static void try_queue_kicked_iocb(struct kiocb *iocb)
void kick_iocb(struct kiocb *iocb)
EXPORT_SYMBOL(kick_iocb);
int aio_complete(struct kiocb *iocb, long res, long res2)
EXPORT_SYMBOL(aio_complete);
static int aio_read_evt(struct kioctx *ioctx, struct io_event *ent)
struct aio_timeout ;
static void timeout_func(unsigned long data)
static inline void init_timeout(struct aio_timeout *to)
static inline void set_timeout(long start_jiffies, struct aio_timeout *to,
const struct timespec *ts)
static inline void clear_timeout(struct aio_timeout *to)
static int read_events(struct kioctx *ctx,
long min_nr, long nr,
struct io_event __user *event,
struct timespec __user *timeout)
static void io_destroy(struct kioctx *ioctx)
SYSCALL_DEFINE2(io_setup, unsigned, nr_events, aio_context_t __user *, ctxp)
SYSCALL_DEFINE1(io_destroy, aio_context_t, ctx)
static void aio_advance_iovec(struct kiocb *iocb, ssize_t ret)
static ssize_t aio_rw_vect_retry(struct kiocb *iocb)
static ssize_t aio_fdsync(struct kiocb *iocb)
static ssize_t aio_fsync(struct kiocb *iocb)
static ssize_t aio_setup_vectored_rw(int type, struct kiocb *kiocb, bool compat)
static ssize_t aio_setup_single_vector(struct kiocb *kiocb)
static ssize_t aio_setup_iocb(struct kiocb *kiocb, bool compat)
static int io_submit_one(struct kioctx *ctx, struct iocb __user *user_iocb,
struct iocb *iocb, bool compat)
long do_io_submit(aio_context_t ctx_id, long nr,
struct iocb __user *__user *iocbpp, bool compat)
SYSCALL_DEFINE3(io_submit, aio_context_t, ctx_id, long, nr,
struct iocb __user * __user *, iocbpp)
static struct kiocb *lookup_kiocb(struct kioctx *ctx, struct iocb __user *iocb,
u32 key)
SYSCALL_DEFINE3(io_cancel, aio_context_t, ctx_id, struct iocb __user *, iocb,
struct io_event __user *, result)
SYSCALL_DEFINE5(io_getevents, aio_context_t, ctx_id,
long, min_nr,
long, nr,
struct io_event __user *, events,
struct timespec __user *, timeout)
