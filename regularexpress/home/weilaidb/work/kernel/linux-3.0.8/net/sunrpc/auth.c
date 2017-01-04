# define RPCDBG_FACILITY	RPCDBG_AUTH
#define RPC_CREDCACHE_DEFAULT_HASHBITS	(4)
struct rpc_cred_cache ;
static unsigned int auth_hashbits = RPC_CREDCACHE_DEFAULT_HASHBITS;
static DEFINE_SPINLOCK(rpc_authflavor_lock);
static const struct rpc_authops *auth_flavors[RPC_AUTH_MAXFLAVOR] = ;
static LIST_HEAD(cred_unused);
static unsigned long number_cred_unused;
#define MAX_HASHTABLE_BITS (14)
static int param_set_hashtbl_sz(const char *val, const struct kernel_param *kp)
static int param_get_hashtbl_sz(char *buffer, const struct kernel_param *kp)
#define param_check_hashtbl_sz(name, p) __param_check(name, p, unsigned int);
static struct kernel_param_ops param_ops_hashtbl_sz = ;
module_param_named(auth_hashtable_size, auth_hashbits, hashtbl_sz, 0644);
MODULE_PARM_DESC(auth_hashtable_size, "RPC credential cache hashtable size");
static u32
pseudoflavor_to_flavor(u32 flavor)
int
rpcauth_register(const struct rpc_authops *ops)
EXPORT_SYMBOL_GPL(rpcauth_register);
int
rpcauth_unregister(const struct rpc_authops *ops)
EXPORT_SYMBOL_GPL(rpcauth_unregister);
struct rpc_auth *
rpcauth_create(rpc_authflavor_t pseudoflavor, struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpcauth_create);
void
rpcauth_release(struct rpc_auth *auth)
static DEFINE_SPINLOCK(rpc_credcache_lock);
static void
rpcauth_unhash_cred_locked(struct rpc_cred *cred)
static int
rpcauth_unhash_cred(struct rpc_cred *cred)
int
rpcauth_init_credcache(struct rpc_auth *auth)
EXPORT_SYMBOL_GPL(rpcauth_init_credcache);
static inline
void rpcauth_destroy_credlist(struct list_head *head)
void
rpcauth_clear_credcache(struct rpc_cred_cache *cache)
void
rpcauth_destroy_credcache(struct rpc_auth *auth)
EXPORT_SYMBOL_GPL(rpcauth_destroy_credcache);
#define RPC_AUTH_EXPIRY_MORATORIUM (60 * HZ)
static int
rpcauth_prune_expired(struct list_head *free, int nr_to_scan)
static int
rpcauth_cache_shrinker(struct shrinker *shrink, struct shrink_control *sc)
struct rpc_cred *
rpcauth_lookup_credcache(struct rpc_auth *auth, struct auth_cred * acred,
int flags)
EXPORT_SYMBOL_GPL(rpcauth_lookup_credcache);
struct rpc_cred *
rpcauth_lookupcred(struct rpc_auth *auth, int flags)
void
rpcauth_init_cred(struct rpc_cred *cred, const struct auth_cred *acred,
struct rpc_auth *auth, const struct rpc_credops *ops)
EXPORT_SYMBOL_GPL(rpcauth_init_cred);
struct rpc_cred *
rpcauth_generic_bind_cred(struct rpc_task *task, struct rpc_cred *cred, int lookupflags)
EXPORT_SYMBOL_GPL(rpcauth_generic_bind_cred);
static struct rpc_cred *
rpcauth_bind_root_cred(struct rpc_task *task, int lookupflags)
static struct rpc_cred *
rpcauth_bind_new_cred(struct rpc_task *task, int lookupflags)
static int
rpcauth_bindcred(struct rpc_task *task, struct rpc_cred *cred, int flags)
void
put_rpccred(struct rpc_cred *cred)
EXPORT_SYMBOL_GPL(put_rpccred);
__be32 *
rpcauth_marshcred(struct rpc_task *task, __be32 *p)
__be32 *
rpcauth_checkverf(struct rpc_task *task, __be32 *p)
static void rpcauth_wrap_req_encode(kxdreproc_t encode, struct rpc_rqst *rqstp,
__be32 *data, void *obj)
int
rpcauth_wrap_req(struct rpc_task *task, kxdreproc_t encode, void *rqstp,
__be32 *data, void *obj)
static int
rpcauth_unwrap_req_decode(kxdrdproc_t decode, struct rpc_rqst *rqstp,
__be32 *data, void *obj)
int
rpcauth_unwrap_resp(struct rpc_task *task, kxdrdproc_t decode, void *rqstp,
__be32 *data, void *obj)
int
rpcauth_refreshcred(struct rpc_task *task)
void
rpcauth_invalcred(struct rpc_task *task)
int
rpcauth_uptodatecred(struct rpc_task *task)
static struct shrinker rpc_cred_shrinker = ;
int __init rpcauth_init_module(void)
void rpcauth_remove_module(void)
