# define RPCDBG_FACILITY	RPCDBG_AUTH
static struct rpc_auth null_auth;
static struct rpc_cred null_cred;
static struct rpc_auth *
nul_create(struct rpc_clnt *clnt, rpc_authflavor_t flavor)
static void
nul_destroy(struct rpc_auth *auth)
static struct rpc_cred *
nul_lookup_cred(struct rpc_auth *auth, struct auth_cred *acred, int flags)
static void
nul_destroy_cred(struct rpc_cred *cred)
static int
nul_match(struct auth_cred *acred, struct rpc_cred *cred, int taskflags)
static __be32 *
nul_marshal(struct rpc_task *task, __be32 *p)
static int
nul_refresh(struct rpc_task *task)
static __be32 *
nul_validate(struct rpc_task *task, __be32 *p)
const struct rpc_authops authnull_ops = ;
static
struct rpc_auth null_auth = ;
static
const struct rpc_credops null_credops = ;
static
struct rpc_cred null_cred = ;
