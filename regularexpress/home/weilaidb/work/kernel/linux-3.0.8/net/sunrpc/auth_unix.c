#define NFS_NGROUPS	16
struct unx_cred ;
#define uc_uid			uc_base.cr_uid
#define UNX_WRITESLACK		(21 + (UNX_MAXNODENAME >> 2))
# define RPCDBG_FACILITY	RPCDBG_AUTH
static struct rpc_auth		unix_auth;
static const struct rpc_credops	unix_credops;
static struct rpc_auth *
unx_create(struct rpc_clnt *clnt, rpc_authflavor_t flavor)
static void
unx_destroy(struct rpc_auth *auth)
static struct rpc_cred *
unx_lookup_cred(struct rpc_auth *auth, struct auth_cred *acred, int flags)
static struct rpc_cred *
unx_create_cred(struct rpc_auth *auth, struct auth_cred *acred, int flags)
static void
unx_free_cred(struct unx_cred *unx_cred)
static void
unx_free_cred_callback(struct rcu_head *head)
static void
unx_destroy_cred(struct rpc_cred *cred)
static int
unx_match(struct auth_cred *acred, struct rpc_cred *rcred, int flags)
static __be32 *
unx_marshal(struct rpc_task *task, __be32 *p)
static int
unx_refresh(struct rpc_task *task)
static __be32 *
unx_validate(struct rpc_task *task, __be32 *p)
int __init rpc_init_authunix(void)
void rpc_destroy_authunix(void)
const struct rpc_authops authunix_ops = ;
static
struct rpc_auth		unix_auth = ;
static
const struct rpc_credops unix_credops = ;
