static DEFINE_SPINLOCK(kthread_create_lock);
static LIST_HEAD(kthread_create_list);
struct task_struct *kthreadd_task;
struct kthread_create_info
;
struct kthread ;
#define to_kthread(tsk)	\
container_of((tsk)->vfork_done, struct kthread, exited)
int kthread_should_stop(void)
EXPORT_SYMBOL(kthread_should_stop);
void *kthread_data(struct task_struct *task)
static int kthread(void *_create)
int tsk_fork_get_node(struct task_struct *tsk)
static void create_kthread(struct kthread_create_info *create)
struct task_struct *kthread_create_on_node(int (*threadfn)(void *data),
void *data,
int node,
const char namefmt[],
...)
EXPORT_SYMBOL(kthread_create_on_node);
void kthread_bind(struct task_struct *p, unsigned int cpu)
EXPORT_SYMBOL(kthread_bind);
int kthread_stop(struct task_struct *k)
EXPORT_SYMBOL(kthread_stop);
int kthreadd(void *unused)
void __init_kthread_worker(struct kthread_worker *worker,
const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL_GPL(__init_kthread_worker);
int kthread_worker_fn(void *worker_ptr)
EXPORT_SYMBOL_GPL(kthread_worker_fn);
bool queue_kthread_work(struct kthread_worker *worker,
struct kthread_work *work)
EXPORT_SYMBOL_GPL(queue_kthread_work);
void flush_kthread_work(struct kthread_work *work)
EXPORT_SYMBOL_GPL(flush_kthread_work);
struct kthread_flush_work ;
static void kthread_flush_work_fn(struct kthread_work *work)
void flush_kthread_worker(struct kthread_worker *worker)
EXPORT_SYMBOL_GPL(flush_kthread_worker);
