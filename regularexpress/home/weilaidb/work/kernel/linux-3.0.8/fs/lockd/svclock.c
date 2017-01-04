#define NLMDBG_FACILITY		NLMDBG_SVCLOCK
#define nlm_deadlock	nlm4_deadlock
#define nlm_deadlock	nlm_lck_denied
static void nlmsvc_release_block(struct nlm_block *block);
static void	nlmsvc_insert_block(struct nlm_block *block, unsigned long);
static void	nlmsvc_remove_block(struct nlm_block *block);
static int nlmsvc_setgrantargs(struct nlm_rqst *call, struct nlm_lock *lock);
static void nlmsvc_freegrantargs(struct nlm_rqst *call);
static const struct rpc_call_ops nlmsvc_grant_ops;
static const char *nlmdbg_cookie2a(const struct nlm_cookie *cookie);
static LIST_HEAD(nlm_blocked);
static DEFINE_SPINLOCK(nlm_blocked_lock);
static void
nlmsvc_insert_block_locked(struct nlm_block *block, unsigned long when)
static void nlmsvc_insert_block(struct nlm_block *block, unsigned long when)
static inline void
nlmsvc_remove_block(struct nlm_block *block)
static struct nlm_block *
nlmsvc_lookup_block(struct nlm_file *file, struct nlm_lock *lock)
static inline int nlm_cookie_match(struct nlm_cookie *a, struct nlm_cookie *b)
static inline struct nlm_block *
nlmsvc_find_block(struct nlm_cookie *cookie)
static struct nlm_block *
nlmsvc_create_block(struct svc_rqst *rqstp, struct nlm_host *host,
struct nlm_file *file, struct nlm_lock *lock,
struct nlm_cookie *cookie)
static int nlmsvc_unlink_block(struct nlm_block *block)
static void nlmsvc_free_block(struct kref *kref)
static void nlmsvc_release_block(struct nlm_block *block)
void nlmsvc_traverse_blocks(struct nlm_host *host,
struct nlm_file *file,
nlm_host_match_fn_t match)
static int nlmsvc_setgrantargs(struct nlm_rqst *call, struct nlm_lock *lock)
static void nlmsvc_freegrantargs(struct nlm_rqst *call)
static __be32
nlmsvc_defer_lock_rqst(struct svc_rqst *rqstp, struct nlm_block *block)
__be32
nlmsvc_lock(struct svc_rqst *rqstp, struct nlm_file *file,
struct nlm_host *host, struct nlm_lock *lock, int wait,
struct nlm_cookie *cookie, int reclaim)
__be32
nlmsvc_testlock(struct svc_rqst *rqstp, struct nlm_file *file,
struct nlm_host *host, struct nlm_lock *lock,
struct nlm_lock *conflock, struct nlm_cookie *cookie)
__be32
nlmsvc_unlock(struct nlm_file *file, struct nlm_lock *lock)
__be32
nlmsvc_cancel_blocked(struct nlm_file *file, struct nlm_lock *lock)
static void
nlmsvc_update_deferred_block(struct nlm_block *block, struct file_lock *conf,
int result)
static int nlmsvc_grant_deferred(struct file_lock *fl, struct file_lock *conf,
int result)
static void
nlmsvc_notify_blocked(struct file_lock *fl)
static int nlmsvc_same_owner(struct file_lock *fl1, struct file_lock *fl2)
const struct lock_manager_operations nlmsvc_lock_operations = ;
static void
nlmsvc_grant_blocked(struct nlm_block *block)
static void nlmsvc_grant_callback(struct rpc_task *task, void *data)
static void nlmsvc_grant_release(void *data)
static const struct rpc_call_ops nlmsvc_grant_ops = ;
void
nlmsvc_grant_reply(struct nlm_cookie *cookie, __be32 status)
static void
retry_deferred_block(struct nlm_block *block)
unsigned long
nlmsvc_retry_blocked(void)
static const char *nlmdbg_cookie2a(const struct nlm_cookie *cookie)
