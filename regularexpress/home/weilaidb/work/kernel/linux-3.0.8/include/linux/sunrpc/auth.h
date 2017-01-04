#define _LINUX_SUNRPC_AUTH_H
#define UNX_MAXNODENAME	32
struct auth_cred ;
struct rpc_auth;
struct rpc_credops;
struct rpc_cred ;
#define RPCAUTH_CRED_NEW	0
#define RPCAUTH_CRED_UPTODATE	1
#define RPCAUTH_CRED_HASHED	2
#define RPCAUTH_CRED_NEGATIVE	3
#define RPCAUTH_CRED_MAGIC	0x0f4aa4f0
struct rpc_cred_cache;
struct rpc_authops;
struct rpc_auth ;
#define RPCAUTH_LOOKUP_NEW		0x01
struct rpc_authops ;
struct rpc_credops ;
extern const struct rpc_authops	authunix_ops;
extern const struct rpc_authops	authnull_ops;
int __init		rpc_init_authunix(void);
int __init		rpc_init_generic_auth(void);
int __init		rpcauth_init_module(void);
void			rpcauth_remove_module(void);
void			rpc_destroy_generic_auth(void);
void 			rpc_destroy_authunix(void);
struct rpc_cred *	rpc_lookup_cred(void);
struct rpc_cred *	rpc_lookup_machine_cred(void);
int			rpcauth_register(const struct rpc_authops *);
int			rpcauth_unregister(const struct rpc_authops *);
struct rpc_auth *	rpcauth_create(rpc_authflavor_t, struct rpc_clnt *);
void			rpcauth_release(struct rpc_auth *);
struct rpc_cred *	rpcauth_lookup_credcache(struct rpc_auth *, struct auth_cred *, int);
void			rpcauth_init_cred(struct rpc_cred *, const struct auth_cred *, struct rpc_auth *, const struct rpc_credops *);
struct rpc_cred *	rpcauth_lookupcred(struct rpc_auth *, int);
struct rpc_cred *	rpcauth_generic_bind_cred(struct rpc_task *, struct rpc_cred *, int);
void			put_rpccred(struct rpc_cred *);
__be32 *		rpcauth_marshcred(struct rpc_task *, __be32 *);
__be32 *		rpcauth_checkverf(struct rpc_task *, __be32 *);
int			rpcauth_wrap_req(struct rpc_task *task, kxdreproc_t encode, void *rqstp, __be32 *data, void *obj);
int			rpcauth_unwrap_resp(struct rpc_task *task, kxdrdproc_t decode, void *rqstp, __be32 *data, void *obj);
int			rpcauth_refreshcred(struct rpc_task *);
void			rpcauth_invalcred(struct rpc_task *);
int			rpcauth_uptodatecred(struct rpc_task *);
int			rpcauth_init_credcache(struct rpc_auth *);
void			rpcauth_destroy_credcache(struct rpc_auth *);
void			rpcauth_clear_credcache(struct rpc_cred_cache *);
static inline
struct rpc_cred *	get_rpccred(struct rpc_cred *cred)
