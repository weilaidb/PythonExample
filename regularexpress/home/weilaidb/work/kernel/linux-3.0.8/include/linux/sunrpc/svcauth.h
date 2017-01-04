#define _LINUX_SUNRPC_SVCAUTH_H_
#define SVC_CRED_NGROUPS	32
struct svc_cred ;
struct svc_rqst;
struct in6_addr;
struct auth_domain ;
struct auth_ops ;
#define	SVC_GARBAGE	1
#define	SVC_SYSERR	2
#define	SVC_VALID	3
#define	SVC_NEGATIVE	4
#define	SVC_OK		5
#define	SVC_DROP	6
#define	SVC_CLOSE	7
#define	SVC_DENIED	8
#define	SVC_PENDING	9
#define	SVC_COMPLETE	10
struct svc_xprt;
extern int	svc_authenticate(struct svc_rqst *rqstp, __be32 *authp);
extern int	svc_authorise(struct svc_rqst *rqstp);
extern int	svc_set_client(struct svc_rqst *rqstp);
extern int	svc_auth_register(rpc_authflavor_t flavor, struct auth_ops *aops);
extern void	svc_auth_unregister(rpc_authflavor_t flavor);
extern struct auth_domain *unix_domain_find(char *name);
extern void auth_domain_put(struct auth_domain *item);
extern int auth_unix_add_addr(struct net *net, struct in6_addr *addr, struct auth_domain *dom);
extern struct auth_domain *auth_domain_lookup(char *name, struct auth_domain *new);
extern struct auth_domain *auth_domain_find(char *name);
extern struct auth_domain *auth_unix_lookup(struct net *net, struct in6_addr *addr);
extern int auth_unix_forget_old(struct auth_domain *dom);
extern void svcauth_unix_purge(void);
extern void svcauth_unix_info_release(struct svc_xprt *xpt);
extern int svcauth_unix_set_client(struct svc_rqst *rqstp);
static inline unsigned long hash_str(char *name, int bits)
static inline unsigned long hash_mem(char *buf, int length, int bits)
