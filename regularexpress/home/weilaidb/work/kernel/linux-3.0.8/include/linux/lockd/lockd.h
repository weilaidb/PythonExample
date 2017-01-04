#define LINUX_LOCKD_LOCKD_H
#define LOCKD_VERSION		"0.5"
#define LOCKD_DFLT_TIMEO	10
struct nlm_host ;
#define NSM_ADDRBUF		((8 * 4 + 7) + (1 + 10) + 1)
struct nsm_handle ;
static inline struct sockaddr_in *nlm_addr_in(const struct nlm_host *host)
static inline struct sockaddr *nlm_addr(const struct nlm_host *host)
static inline struct sockaddr_in *nlm_srcaddr_in(const struct nlm_host *host)
static inline struct sockaddr *nlm_srcaddr(const struct nlm_host *host)
struct nlm_lockowner ;
struct nlm_wait;
#define NLMCLNT_OHSIZE		((__NEW_UTS_LEN) + 10u)
struct nlm_rqst ;
struct nlm_file ;
#define NLM_NEVER		(~(unsigned long) 0)
#define NLM_TIMEOUT		(7 * HZ)
struct nlm_block ;
extern struct rpc_program	nlm_program;
extern struct svc_procedure	nlmsvc_procedures[];
extern struct svc_procedure	nlmsvc_procedures4[];
extern int			nlmsvc_grace_period;
extern unsigned long		nlmsvc_timeout;
extern int			nsm_use_hostnames;
extern u32			nsm_local_state;
struct nlm_rqst * nlm_alloc_call(struct nlm_host *host);
int		  nlm_async_call(struct nlm_rqst *, u32, const struct rpc_call_ops *);
int		  nlm_async_reply(struct nlm_rqst *, u32, const struct rpc_call_ops *);
void		  nlmclnt_release_call(struct nlm_rqst *);
struct nlm_wait * nlmclnt_prepare_block(struct nlm_host *host, struct file_lock *fl);
void		  nlmclnt_finish_block(struct nlm_wait *block);
int		  nlmclnt_block(struct nlm_wait *block, struct nlm_rqst *req, long timeout);
__be32		  nlmclnt_grant(const struct sockaddr *addr,
const struct nlm_lock *lock);
void		  nlmclnt_recovery(struct nlm_host *);
int		  nlmclnt_reclaim(struct nlm_host *, struct file_lock *);
void		  nlmclnt_next_cookie(struct nlm_cookie *);
struct nlm_host  *nlmclnt_lookup_host(const struct sockaddr *sap,
const size_t salen,
const unsigned short protocol,
const u32 version,
const char *hostname,
int noresvport);
void		  nlmclnt_release_host(struct nlm_host *);
struct nlm_host  *nlmsvc_lookup_host(const struct svc_rqst *rqstp,
const char *hostname,
const size_t hostname_len);
void		  nlmsvc_release_host(struct nlm_host *);
struct rpc_clnt * nlm_bind_host(struct nlm_host *);
void		  nlm_rebind_host(struct nlm_host *);
struct nlm_host * nlm_get_host(struct nlm_host *);
void		  nlm_shutdown_hosts(void);
void		  nlm_host_rebooted(const struct nlm_reboot *);
int		  nsm_monitor(const struct nlm_host *host);
void		  nsm_unmonitor(const struct nlm_host *host);
struct nsm_handle *nsm_get_handle(const struct sockaddr *sap,
const size_t salen,
const char *hostname,
const size_t hostname_len);
struct nsm_handle *nsm_reboot_lookup(const struct nlm_reboot *info);
void		  nsm_release(struct nsm_handle *nsm);
typedef int	  (*nlm_host_match_fn_t)(void *cur, struct nlm_host *ref);
__be32		  nlmsvc_lock(struct svc_rqst *, struct nlm_file *,
struct nlm_host *, struct nlm_lock *, int,
struct nlm_cookie *, int);
__be32		  nlmsvc_unlock(struct nlm_file *, struct nlm_lock *);
__be32		  nlmsvc_testlock(struct svc_rqst *, struct nlm_file *,
struct nlm_host *, struct nlm_lock *,
struct nlm_lock *, struct nlm_cookie *);
__be32		  nlmsvc_cancel_blocked(struct nlm_file *, struct nlm_lock *);
unsigned long	  nlmsvc_retry_blocked(void);
void		  nlmsvc_traverse_blocks(struct nlm_host *, struct nlm_file *,
nlm_host_match_fn_t match);
void		  nlmsvc_grant_reply(struct nlm_cookie *, __be32);
void		  nlmsvc_release_call(struct nlm_rqst *);
__be32		  nlm_lookup_file(struct svc_rqst *, struct nlm_file **,
struct nfs_fh *);
void		  nlm_release_file(struct nlm_file *);
void		  nlmsvc_mark_resources(void);
void		  nlmsvc_free_host_resources(struct nlm_host *);
void		  nlmsvc_invalidate_all(void);
int           nlmsvc_unlock_all_by_sb(struct super_block *sb);
int           nlmsvc_unlock_all_by_ip(struct sockaddr *server_addr);
static inline struct inode *nlmsvc_file_inode(struct nlm_file *file)
static inline int __nlm_privileged_request4(const struct sockaddr *sap)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static inline int __nlm_privileged_request6(const struct sockaddr *sap)
static inline int __nlm_privileged_request6(const struct sockaddr *sap)
static inline int nlm_privileged_requester(const struct svc_rqst *rqstp)
static inline int nlm_compare_locks(const struct file_lock *fl1,
const struct file_lock *fl2)
extern const struct lock_manager_operations nlmsvc_lock_operations;
