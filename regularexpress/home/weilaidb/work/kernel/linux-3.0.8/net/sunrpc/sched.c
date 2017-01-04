#define RPCDBG_FACILITY		RPCDBG_SCHED
#define RPC_BUFFER_MAXSIZE	(2048)
#define RPC_BUFFER_POOLSIZE	(8)
#define RPC_TASK_POOLSIZE	(8)
static struct kmem_cache	*rpc_task_slabp __read_mostly;
static struct kmem_cache	*rpc_buffer_slabp __read_mostly;
static mempool_t	*rpc_task_mempool __read_mostly;
static mempool_t	*rpc_buffer_mempool __read_mostly;
static void			rpc_async_schedule(struct work_struct *);
static void			 rpc_release_task(struct rpc_task *task);
static void __rpc_queue_timer_fn(unsigned long ptr);
static struct rpc_wait_queue delay_queue;
struct workqueue_struct *rpciod_workqueue;
static void
__rpc_disable_timer(struct rpc_wait_queue *queue, struct rpc_task *task)
static void
rpc_set_queue_timer(struct rpc_wait_queue *queue, unsigned long expires)
static void
__rpc_add_timer(struct rpc_wait_queue *queue, struct rpc_task *task)
static void __rpc_add_wait_queue_priority(struct rpc_wait_queue *queue, struct rpc_task *task)
static void __rpc_add_wait_queue(struct rpc_wait_queue *queue, struct rpc_task *task)
static void __rpc_remove_wait_queue_priority(struct rpc_task *task)
static void __rpc_remove_wait_queue(struct rpc_wait_queue *queue, struct rpc_task *task)
static inline void rpc_set_waitqueue_priority(struct rpc_wait_queue *queue, int priority)
static inline void rpc_set_waitqueue_owner(struct rpc_wait_queue *queue, pid_t pid)
static inline void rpc_reset_waitqueue_priority(struct rpc_wait_queue *queue)
static void __rpc_init_priority_wait_queue(struct rpc_wait_queue *queue, const char *qname, unsigned char nr_queues)
void rpc_init_priority_wait_queue(struct rpc_wait_queue *queue, const char *qname)
EXPORT_SYMBOL_GPL(rpc_init_priority_wait_queue);
void rpc_init_wait_queue(struct rpc_wait_queue *queue, const char *qname)
EXPORT_SYMBOL_GPL(rpc_init_wait_queue);
void rpc_destroy_wait_queue(struct rpc_wait_queue *queue)
EXPORT_SYMBOL_GPL(rpc_destroy_wait_queue);
static int rpc_wait_bit_killable(void *word)
static void rpc_task_set_debuginfo(struct rpc_task *task)
static inline void rpc_task_set_debuginfo(struct rpc_task *task)
static void rpc_set_active(struct rpc_task *task)
static int rpc_complete_task(struct rpc_task *task)
int __rpc_wait_for_completion_task(struct rpc_task *task, int (*action)(void *))
EXPORT_SYMBOL_GPL(__rpc_wait_for_completion_task);
static void rpc_make_runnable(struct rpc_task *task)
static void __rpc_sleep_on(struct rpc_wait_queue *q, struct rpc_task *task,
rpc_action action)
void rpc_sleep_on(struct rpc_wait_queue *q, struct rpc_task *task,
rpc_action action)
EXPORT_SYMBOL_GPL(rpc_sleep_on);
static void __rpc_do_wake_up_task(struct rpc_wait_queue *queue, struct rpc_task *task)
static void rpc_wake_up_task_queue_locked(struct rpc_wait_queue *queue, struct rpc_task *task)
int rpc_queue_empty(struct rpc_wait_queue *queue)
EXPORT_SYMBOL_GPL(rpc_queue_empty);
void rpc_wake_up_queued_task(struct rpc_wait_queue *queue, struct rpc_task *task)
EXPORT_SYMBOL_GPL(rpc_wake_up_queued_task);
static struct rpc_task * __rpc_wake_up_next_priority(struct rpc_wait_queue *queue)
struct rpc_task * rpc_wake_up_next(struct rpc_wait_queue *queue)
EXPORT_SYMBOL_GPL(rpc_wake_up_next);
void rpc_wake_up(struct rpc_wait_queue *queue)
EXPORT_SYMBOL_GPL(rpc_wake_up);
void rpc_wake_up_status(struct rpc_wait_queue *queue, int status)
EXPORT_SYMBOL_GPL(rpc_wake_up_status);
static void __rpc_queue_timer_fn(unsigned long ptr)
static void __rpc_atrun(struct rpc_task *task)
void rpc_delay(struct rpc_task *task, unsigned long delay)
EXPORT_SYMBOL_GPL(rpc_delay);
void rpc_prepare_task(struct rpc_task *task)
void rpc_exit_task(struct rpc_task *task)
void rpc_exit(struct rpc_task *task, int status)
EXPORT_SYMBOL_GPL(rpc_exit);
void rpc_release_calldata(const struct rpc_call_ops *ops, void *calldata)
static void __rpc_execute(struct rpc_task *task)
void rpc_execute(struct rpc_task *task)
static void rpc_async_schedule(struct work_struct *work)
void *rpc_malloc(struct rpc_task *task, size_t size)
EXPORT_SYMBOL_GPL(rpc_malloc);
void rpc_free(void *buffer)
EXPORT_SYMBOL_GPL(rpc_free);
static void rpc_init_task(struct rpc_task *task, const struct rpc_task_setup *task_setup_data)
static struct rpc_task *
rpc_alloc_task(void)
struct rpc_task *rpc_new_task(const struct rpc_task_setup *setup_data)
static void rpc_free_task(struct rpc_task *task)
static void rpc_async_release(struct work_struct *work)
static void rpc_release_resources_task(struct rpc_task *task)
static void rpc_final_put_task(struct rpc_task *task,
struct workqueue_struct *q)
static void rpc_do_put_task(struct rpc_task *task, struct workqueue_struct *q)
void rpc_put_task(struct rpc_task *task)
EXPORT_SYMBOL_GPL(rpc_put_task);
void rpc_put_task_async(struct rpc_task *task)
EXPORT_SYMBOL_GPL(rpc_put_task_async);
static void rpc_release_task(struct rpc_task *task)
int rpciod_up(void)
void rpciod_down(void)
static int rpciod_start(void)
static void rpciod_stop(void)
void
rpc_destroy_mempool(void)
int
rpc_init_mempool(void)
