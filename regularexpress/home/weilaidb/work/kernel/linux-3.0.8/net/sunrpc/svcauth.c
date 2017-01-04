#define RPCDBG_FACILITY	RPCDBG_AUTH
extern struct auth_ops svcauth_null;
extern struct auth_ops svcauth_unix;
static DEFINE_SPINLOCK(authtab_lock);
static struct auth_ops	*authtab[RPC_AUTH_MAXFLAVOR] = ;
int
svc_authenticate(struct svc_rqst *rqstp, __be32 *authp)
EXPORT_SYMBOL_GPL(svc_authenticate);
int svc_set_client(struct svc_rqst *rqstp)
EXPORT_SYMBOL_GPL(svc_set_client);
int svc_authorise(struct svc_rqst *rqstp)
int
svc_auth_register(rpc_authflavor_t flavor, struct auth_ops *aops)
EXPORT_SYMBOL_GPL(svc_auth_register);
void
svc_auth_unregister(rpc_authflavor_t flavor)
EXPORT_SYMBOL_GPL(svc_auth_unregister);
#define	DN_HASHBITS	6
#define	DN_HASHMAX	(1<<DN_HASHBITS)
static struct hlist_head	auth_domain_table[DN_HASHMAX];
static spinlock_t	auth_domain_lock =
__SPIN_LOCK_UNLOCKED(auth_domain_lock);
void auth_domain_put(struct auth_domain *dom)
EXPORT_SYMBOL_GPL(auth_domain_put);
struct auth_domain *
auth_domain_lookup(char *name, struct auth_domain *new)
EXPORT_SYMBOL_GPL(auth_domain_lookup);
struct auth_domain *auth_domain_find(char *name)
EXPORT_SYMBOL_GPL(auth_domain_find);
