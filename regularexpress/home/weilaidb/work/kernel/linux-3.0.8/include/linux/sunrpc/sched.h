#define _LINUX_SUNRPC_SCHED_H_
struct rpc_procinfo;
struct rpc_message ;
struct rpc_call_ops;
struct rpc_wait_queue;
struct rpc_wait ;
struct rpc_task ;
#define tk_xprt			tk_client->cl_xprt
#define	task_for_each(task, pos, head) \
list_for_each(pos, head) \
if ((task=list_entry(pos, struct rpc_task, u.tk_wait.list)),1)
#define	task_for_first(task, head) \
if (!list_empty(head) &&  \
((task=list_entry((head)->next, struct rpc_task, u.tk_wait.list)),1))
typedef void			(*rpc_action)(struct rpc_task *);
struct rpc_call_ops ;
struct rpc_task_setup ;
#define RPC_TASK_ASYNC		0x0001
#define RPC_TASK_SWAPPER	0x0002
#define RPC_CALL_MAJORSEEN	0x0020
#define RPC_TASK_ROOTCREDS	0x0040
#define RPC_TASK_DYNAMIC	0x0080
#define RPC_TASK_KILLED		0x0100
#define RPC_TASK_SOFT		0x0200
#define RPC_TASK_SOFTCONN	0x0400
#define RPC_TASK_SENT		0x0800
#define RPC_TASK_TIMEOUT	0x1000
#define RPC_IS_ASYNC(t)		((t)->tk_flags & RPC_TASK_ASYNC)
#define RPC_IS_SWAPPER(t)	((t)->tk_flags & RPC_TASK_SWAPPER)
#define RPC_DO_ROOTOVERRIDE(t)	((t)->tk_flags & RPC_TASK_ROOTCREDS)
#define RPC_ASSASSINATED(t)	((t)->tk_flags & RPC_TASK_KILLED)
#define RPC_IS_SOFT(t)		((t)->tk_flags & (RPC_TASK_SOFT|RPC_TASK_TIMEOUT))
#define RPC_IS_SOFTCONN(t)	((t)->tk_flags & RPC_TASK_SOFTCONN)
#define RPC_WAS_SENT(t)		((t)->tk_flags & RPC_TASK_SENT)
#define RPC_TASK_RUNNING	0
#define RPC_TASK_QUEUED		1
#define RPC_TASK_ACTIVE		2
#define RPC_IS_RUNNING(t)	test_bit(RPC_TASK_RUNNING, &(t)->tk_runstate)
#define rpc_set_running(t)	set_bit(RPC_TASK_RUNNING, &(t)->tk_runstate)
#define rpc_test_and_set_running(t) \
test_and_set_bit(RPC_TASK_RUNNING, &(t)->tk_runstate)
#define rpc_clear_running(t)	\
do  while (0)
#define RPC_IS_QUEUED(t)	test_bit(RPC_TASK_QUEUED, &(t)->tk_runstate)
#define rpc_set_queued(t)	set_bit(RPC_TASK_QUEUED, &(t)->tk_runstate)
#define rpc_clear_queued(t)	\
do  while (0)
#define RPC_IS_ACTIVATED(t)	test_bit(RPC_TASK_ACTIVE, &(t)->tk_runstate)
#define RPC_PRIORITY_LOW	(-1)
#define RPC_PRIORITY_NORMAL	(0)
#define RPC_PRIORITY_HIGH	(1)
#define RPC_PRIORITY_PRIVILEGED	(2)
#define RPC_NR_PRIORITY		(1 + RPC_PRIORITY_PRIVILEGED - RPC_PRIORITY_LOW)
struct rpc_timer ;
struct rpc_wait_queue ;
#define RPC_BATCH_COUNT			16
#define RPC_IS_PRIORITY(q)		((q)->maxpriority > 0)
struct rpc_task *rpc_new_task(const struct rpc_task_setup *);
struct rpc_task *rpc_run_task(const struct rpc_task_setup *);
struct rpc_task *rpc_run_bc_task(struct rpc_rqst *req,
const struct rpc_call_ops *ops);
void		rpc_put_task(struct rpc_task *);
void		rpc_put_task_async(struct rpc_task *);
void		rpc_exit_task(struct rpc_task *);
void		rpc_exit(struct rpc_task *, int);
void		rpc_release_calldata(const struct rpc_call_ops *, void *);
void		rpc_killall_tasks(struct rpc_clnt *);
void		rpc_execute(struct rpc_task *);
void		rpc_init_priority_wait_queue(struct rpc_wait_queue *, const char *);
void		rpc_init_wait_queue(struct rpc_wait_queue *, const char *);
void		rpc_destroy_wait_queue(struct rpc_wait_queue *);
void		rpc_sleep_on(struct rpc_wait_queue *, struct rpc_task *,
rpc_action action);
void		rpc_wake_up_queued_task(struct rpc_wait_queue *,
struct rpc_task *);
void		rpc_wake_up(struct rpc_wait_queue *);
struct rpc_task *rpc_wake_up_next(struct rpc_wait_queue *);
void		rpc_wake_up_status(struct rpc_wait_queue *, int);
int		rpc_queue_empty(struct rpc_wait_queue *);
void		rpc_delay(struct rpc_task *, unsigned long);
void *		rpc_malloc(struct rpc_task *, size_t);
void		rpc_free(void *);
int		rpciod_up(void);
void		rpciod_down(void);
int		__rpc_wait_for_completion_task(struct rpc_task *task, int (*)(void *));
void		rpc_show_tasks(void);
int		rpc_init_mempool(void);
void		rpc_destroy_mempool(void);
extern struct workqueue_struct *rpciod_workqueue;
void		rpc_prepare_task(struct rpc_task *task);
static inline int rpc_wait_for_completion_task(struct rpc_task *task)
static inline void rpc_task_set_priority(struct rpc_task *task, unsigned char prio)
static inline int rpc_task_has_priority(struct rpc_task *task, unsigned char prio)
static inline const char * rpc_qname(struct rpc_wait_queue *q)
