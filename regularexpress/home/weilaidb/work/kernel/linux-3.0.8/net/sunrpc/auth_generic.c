# define RPCDBG_FACILITY	RPCDBG_AUTH
#define RPC_MACHINE_CRED_USERID		((uid_t)0)
#define RPC_MACHINE_CRED_GROUPID	((gid_t)0)
struct generic_cred ;
static struct rpc_auth generic_auth;
static const struct rpc_credops generic_credops;
struct rpc_cred *rpc_lookup_cred(void)
EXPORT_SYMBOL_GPL(rpc_lookup_cred);
struct rpc_cred *rpc_lookup_machine_cred(void)
EXPORT_SYMBOL_GPL(rpc_lookup_machine_cred);
static struct rpc_cred *generic_bind_cred(struct rpc_task *task,
struct rpc_cred *cred, int lookupflags)
static struct rpc_cred *
generic_lookup_cred(struct rpc_auth *auth, struct auth_cred *acred, int flags)
static struct rpc_cred *
generic_create_cred(struct rpc_auth *auth, struct auth_cred *acred, int flags)
static void
generic_free_cred(struct rpc_cred *cred)
static void
generic_free_cred_callback(struct rcu_head *head)
static void
generic_destroy_cred(struct rpc_cred *cred)
static int
generic_match(struct auth_cred *acred, struct rpc_cred *cred, int flags)
int __init rpc_init_generic_auth(void)
void rpc_destroy_generic_auth(void)
static const struct rpc_authops generic_auth_ops = ;
static struct rpc_auth generic_auth = ;
static const struct rpc_credops generic_credops = ;
