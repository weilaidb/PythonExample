#define _LINUX_KTHREAD_H
struct task_struct *kthread_create_on_node(int (*threadfn)(void *data),
void *data,
int node,
const char namefmt[], ...)
__attribute__((format(printf, 4, 5)));
#define kthread_create(threadfn, data, namefmt, arg...) \
kthread_create_on_node(threadfn, data, -1, namefmt, ##arg)
#define kthread_run(threadfn, data, namefmt, ...)			   \
()
void kthread_bind(struct task_struct *k, unsigned int cpu);
int kthread_stop(struct task_struct *k);
int kthread_should_stop(void);
void *kthread_data(struct task_struct *k);
int kthreadd(void *unused);
extern struct task_struct *kthreadd_task;
extern int tsk_fork_get_node(struct task_struct *tsk);
struct kthread_work;
typedef void (*kthread_work_func_t)(struct kthread_work *work);
struct kthread_worker ;
struct kthread_work ;
#define KTHREAD_WORKER_INIT(worker)
#define KTHREAD_WORK_INIT(work, fn)
#define DEFINE_KTHREAD_WORKER(worker)					\
struct kthread_worker worker = KTHREAD_WORKER_INIT(worker)
#define DEFINE_KTHREAD_WORK(work, fn)					\
struct kthread_work work = KTHREAD_WORK_INIT(work, fn)
# define KTHREAD_WORKER_INIT_ONSTACK(worker)				\
()
# define DEFINE_KTHREAD_WORKER_ONSTACK(worker)				\
struct kthread_worker worker = KTHREAD_WORKER_INIT_ONSTACK(worker)
# define KTHREAD_WORK_INIT_ONSTACK(work, fn)				\
()
# define DEFINE_KTHREAD_WORK_ONSTACK(work, fn)				\
struct kthread_work work = KTHREAD_WORK_INIT_ONSTACK(work, fn)
# define DEFINE_KTHREAD_WORKER_ONSTACK(worker) DEFINE_KTHREAD_WORKER(worker)
# define DEFINE_KTHREAD_WORK_ONSTACK(work, fn) DEFINE_KTHREAD_WORK(work, fn)
extern void __init_kthread_worker(struct kthread_worker *worker,
const char *name, struct lock_class_key *key);
#define init_kthread_worker(worker)					\
do  while (0)
#define init_kthread_work(work, fn)					\
do  while (0)
int kthread_worker_fn(void *worker_ptr);
bool queue_kthread_work(struct kthread_worker *worker,
struct kthread_work *work);
void flush_kthread_work(struct kthread_work *work);
void flush_kthread_worker(struct kthread_worker *worker);
