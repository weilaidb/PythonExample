#define NLMDBG_FACILITY		NLMDBG_CLIENT
static int			reclaimer(void *ptr);
struct nlm_wait ;
static LIST_HEAD(nlm_blocked);
static DEFINE_SPINLOCK(nlm_blocked_lock);
struct nlm_host *nlmclnt_init(const struct nlmclnt_initdata *nlm_init)
EXPORT_SYMBOL_GPL(nlmclnt_init);
void nlmclnt_done(struct nlm_host *host)
EXPORT_SYMBOL_GPL(nlmclnt_done);
struct nlm_wait *nlmclnt_prepare_block(struct nlm_host *host, struct file_lock *fl)
void nlmclnt_finish_block(struct nlm_wait *block)
int nlmclnt_block(struct nlm_wait *block, struct nlm_rqst *req, long timeout)
__be32 nlmclnt_grant(const struct sockaddr *addr, const struct nlm_lock *lock)
void
nlmclnt_recovery(struct nlm_host *host)
static int
reclaimer(void *ptr)
