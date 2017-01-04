static const struct rpc_authops authgss_ops;
static const struct rpc_credops gss_credops;
static const struct rpc_credops gss_nullops;
#define GSS_RETRY_EXPIRED 5
static unsigned int gss_expired_cred_retry_delay = GSS_RETRY_EXPIRED;
# define RPCDBG_FACILITY	RPCDBG_AUTH
#define GSS_CRED_SLACK		(RPC_MAX_AUTH_SIZE * 2)
#define GSS_VERF_SLACK		100
struct gss_auth ;
static int pipe_version = -1;
static atomic_t pipe_users = ATOMIC_INIT(0);
static DEFINE_SPINLOCK(pipe_version_lock);
static struct rpc_wait_queue pipe_version_rpc_waitqueue;
static DECLARE_WAIT_QUEUE_HEAD(pipe_version_waitqueue);
static void gss_free_ctx(struct gss_cl_ctx *);
static const struct rpc_pipe_ops gss_upcall_ops_v0;
static const struct rpc_pipe_ops gss_upcall_ops_v1;
static inline struct gss_cl_ctx *
gss_get_ctx(struct gss_cl_ctx *ctx)
static inline void
gss_put_ctx(struct gss_cl_ctx *ctx)
static void
gss_cred_set_ctx(struct rpc_cred *cred, struct gss_cl_ctx *ctx)
static const void *
simple_get_bytes(const void *p, const void *end, void *res, size_t len)
static inline const void *
simple_get_netobj(const void *p, const void *end, struct xdr_netobj *dest)
static struct gss_cl_ctx *
gss_cred_get_ctx(struct rpc_cred *cred)
static struct gss_cl_ctx *
gss_alloc_context(void)
#define GSSD_MIN_TIMEOUT (60 * 60)
static const void *
gss_fill_context(const void *p, const void *end, struct gss_cl_ctx *ctx, struct gss_api_mech *gm)
#define UPCALL_BUF_LEN 128
struct gss_upcall_msg ;
static int get_pipe_version(void)
static void put_pipe_version(void)
static void
gss_release_msg(struct gss_upcall_msg *gss_msg)
static struct gss_upcall_msg *
__gss_find_upcall(struct rpc_inode *rpci, uid_t uid)
static inline struct gss_upcall_msg *
gss_add_msg(struct gss_upcall_msg *gss_msg)
static void
__gss_unhash_msg(struct gss_upcall_msg *gss_msg)
static void
gss_unhash_msg(struct gss_upcall_msg *gss_msg)
static void
gss_handle_downcall_result(struct gss_cred *gss_cred, struct gss_upcall_msg *gss_msg)
static void
gss_upcall_callback(struct rpc_task *task)
static void gss_encode_v0_msg(struct gss_upcall_msg *gss_msg)
static void gss_encode_v1_msg(struct gss_upcall_msg *gss_msg,
struct rpc_clnt *clnt, int machine_cred)
static void gss_encode_msg(struct gss_upcall_msg *gss_msg,
struct rpc_clnt *clnt, int machine_cred)
static inline struct gss_upcall_msg *
gss_alloc_msg(struct gss_auth *gss_auth, uid_t uid, struct rpc_clnt *clnt,
int machine_cred)
static struct gss_upcall_msg *
gss_setup_upcall(struct rpc_clnt *clnt, struct gss_auth *gss_auth, struct rpc_cred *cred)
static void warn_gssd(void)
static inline int
gss_refresh_upcall(struct rpc_task *task)
static inline int
gss_create_upcall(struct gss_auth *gss_auth, struct gss_cred *gss_cred)
static ssize_t
gss_pipe_upcall(struct file *filp, struct rpc_pipe_msg *msg,
char __user *dst, size_t buflen)
#define MSG_BUF_MAXSIZE 1024
static ssize_t
gss_pipe_downcall(struct file *filp, const char __user *src, size_t mlen)
static int gss_pipe_open(struct inode *inode, int new_version)
static int gss_pipe_open_v0(struct inode *inode)
static int gss_pipe_open_v1(struct inode *inode)
static void
gss_pipe_release(struct inode *inode)
static void
gss_pipe_destroy_msg(struct rpc_pipe_msg *msg)
static struct rpc_auth *
gss_create(struct rpc_clnt *clnt, rpc_authflavor_t flavor)
static void
gss_free(struct gss_auth *gss_auth)
static void
gss_free_callback(struct kref *kref)
static void
gss_destroy(struct rpc_auth *auth)
static int
gss_destroying_context(struct rpc_cred *cred)
static void
gss_do_free_ctx(struct gss_cl_ctx *ctx)
static void
gss_free_ctx_callback(struct rcu_head *head)
static void
gss_free_ctx(struct gss_cl_ctx *ctx)
static void
gss_free_cred(struct gss_cred *gss_cred)
static void
gss_free_cred_callback(struct rcu_head *head)
static void
gss_destroy_nullcred(struct rpc_cred *cred)
static void
gss_destroy_cred(struct rpc_cred *cred)
static struct rpc_cred *
gss_lookup_cred(struct rpc_auth *auth, struct auth_cred *acred, int flags)
static struct rpc_cred *
gss_create_cred(struct rpc_auth *auth, struct auth_cred *acred, int flags)
static int
gss_cred_init(struct rpc_auth *auth, struct rpc_cred *cred)
static int
gss_match(struct auth_cred *acred, struct rpc_cred *rc, int flags)
static __be32 *
gss_marshal(struct rpc_task *task, __be32 *p)
static int gss_renew_cred(struct rpc_task *task)
static int gss_cred_is_negative_entry(struct rpc_cred *cred)
static int
gss_refresh(struct rpc_task *task)
static int
gss_refresh_null(struct rpc_task *task)
static __be32 *
gss_validate(struct rpc_task *task, __be32 *p)
static void gss_wrap_req_encode(kxdreproc_t encode, struct rpc_rqst *rqstp,
__be32 *p, void *obj)
static inline int
gss_wrap_req_integ(struct rpc_cred *cred, struct gss_cl_ctx *ctx,
kxdreproc_t encode, struct rpc_rqst *rqstp,
__be32 *p, void *obj)
static void
priv_release_snd_buf(struct rpc_rqst *rqstp)
static int
alloc_enc_pages(struct rpc_rqst *rqstp)
static inline int
gss_wrap_req_priv(struct rpc_cred *cred, struct gss_cl_ctx *ctx,
kxdreproc_t encode, struct rpc_rqst *rqstp,
__be32 *p, void *obj)
static int
gss_wrap_req(struct rpc_task *task,
kxdreproc_t encode, void *rqstp, __be32 *p, void *obj)
static inline int
gss_unwrap_resp_integ(struct rpc_cred *cred, struct gss_cl_ctx *ctx,
struct rpc_rqst *rqstp, __be32 **p)
static inline int
gss_unwrap_resp_priv(struct rpc_cred *cred, struct gss_cl_ctx *ctx,
struct rpc_rqst *rqstp, __be32 **p)
static int
gss_unwrap_req_decode(kxdrdproc_t decode, struct rpc_rqst *rqstp,
__be32 *p, void *obj)
static int
gss_unwrap_resp(struct rpc_task *task,
kxdrdproc_t decode, void *rqstp, __be32 *p, void *obj)
static const struct rpc_authops authgss_ops = ;
static const struct rpc_credops gss_credops = ;
static const struct rpc_credops gss_nullops = ;
static const struct rpc_pipe_ops gss_upcall_ops_v0 = ;
static const struct rpc_pipe_ops gss_upcall_ops_v1 = ;
static int __init init_rpcsec_gss(void)
static void __exit exit_rpcsec_gss(void)
MODULE_LICENSE("GPL");
module_param_named(expired_cred_retry_delay,
gss_expired_cred_retry_delay,
uint, 0644);
MODULE_PARM_DESC(expired_cred_retry_delay, "Timeout (in seconds) until "
"the RPC engine retries an expired credential");
module_init(init_rpcsec_gss)
module_exit(exit_rpcsec_gss)
