#define NLMDBG_FACILITY		NLMDBG_CLIENT
#define NLMCLNT_GRACE_WAIT	(5*HZ)
#define NLMCLNT_POLL_TIMEOUT	(30*HZ)
#define NLMCLNT_MAX_RETRIES	3
static int	nlmclnt_test(struct nlm_rqst *, struct file_lock *);
static int	nlmclnt_lock(struct nlm_rqst *, struct file_lock *);
static int	nlmclnt_unlock(struct nlm_rqst *, struct file_lock *);
static int	nlm_stat_to_errno(__be32 stat);
static void	nlmclnt_locks_init_private(struct file_lock *fl, struct nlm_host *host);
static int	nlmclnt_cancel(struct nlm_host *, int , struct file_lock *);
static const struct rpc_call_ops nlmclnt_unlock_ops;
static const struct rpc_call_ops nlmclnt_cancel_ops;
static atomic_t	nlm_cookie = ATOMIC_INIT(0x1234);
void nlmclnt_next_cookie(struct nlm_cookie *c)
static struct nlm_lockowner *nlm_get_lockowner(struct nlm_lockowner *lockowner)
static void nlm_put_lockowner(struct nlm_lockowner *lockowner)
static inline int nlm_pidbusy(struct nlm_host *host, uint32_t pid)
static inline uint32_t __nlm_alloc_pid(struct nlm_host *host)
static struct nlm_lockowner *__nlm_find_lockowner(struct nlm_host *host, fl_owner_t owner)
static struct nlm_lockowner *nlm_find_lockowner(struct nlm_host *host, fl_owner_t owner)
static void nlmclnt_setlockargs(struct nlm_rqst *req, struct file_lock *fl)
static void nlmclnt_release_lockargs(struct nlm_rqst *req)
int nlmclnt_proc(struct nlm_host *host, int cmd, struct file_lock *fl)
EXPORT_SYMBOL_GPL(nlmclnt_proc);
struct nlm_rqst *nlm_alloc_call(struct nlm_host *host)
void nlmclnt_release_call(struct nlm_rqst *call)
static void nlmclnt_rpc_release(void *data)
static int nlm_wait_on_grace(wait_queue_head_t *queue)
static int
nlmclnt_call(struct rpc_cred *cred, struct nlm_rqst *req, u32 proc)
static struct rpc_task *__nlm_async_call(struct nlm_rqst *req, u32 proc, struct rpc_message *msg, const struct rpc_call_ops *tk_ops)
static int nlm_do_async_call(struct nlm_rqst *req, u32 proc, struct rpc_message *msg, const struct rpc_call_ops *tk_ops)
int nlm_async_call(struct nlm_rqst *req, u32 proc, const struct rpc_call_ops *tk_ops)
int nlm_async_reply(struct nlm_rqst *req, u32 proc, const struct rpc_call_ops *tk_ops)
static int nlmclnt_async_call(struct rpc_cred *cred, struct nlm_rqst *req, u32 proc, const struct rpc_call_ops *tk_ops)
static int
nlmclnt_test(struct nlm_rqst *req, struct file_lock *fl)
static void nlmclnt_locks_copy_lock(struct file_lock *new, struct file_lock *fl)
static void nlmclnt_locks_release_private(struct file_lock *fl)
static const struct file_lock_operations nlmclnt_lock_ops = ;
static void nlmclnt_locks_init_private(struct file_lock *fl, struct nlm_host *host)
static int do_vfs_lock(struct file_lock *fl)
static int
nlmclnt_lock(struct nlm_rqst *req, struct file_lock *fl)
int
nlmclnt_reclaim(struct nlm_host *host, struct file_lock *fl)
static int
nlmclnt_unlock(struct nlm_rqst *req, struct file_lock *fl)
static void nlmclnt_unlock_callback(struct rpc_task *task, void *data)
static const struct rpc_call_ops nlmclnt_unlock_ops = ;
static int nlmclnt_cancel(struct nlm_host *host, int block, struct file_lock *fl)
static void nlmclnt_cancel_callback(struct rpc_task *task, void *data)
static const struct rpc_call_ops nlmclnt_cancel_ops = ;
static int
nlm_stat_to_errno(__be32 status)
