#define RPCDBG_FACILITY	RPCDBG_AUTH
struct unix_domain ;
extern struct auth_ops svcauth_unix;
static void svcauth_unix_domain_release(struct auth_domain *dom)
struct auth_domain *unix_domain_find(char *name)
EXPORT_SYMBOL_GPL(unix_domain_find);
#define	IP_HASHBITS	8
#define	IP_HASHMAX	(1<<IP_HASHBITS)
struct ip_map ;
static void ip_map_put(struct kref *kref)
#if IP_HASHBITS == 8
static inline int hash_ip(__be32 ip)
static inline int hash_ip6(struct in6_addr ip)
static int ip_map_match(struct cache_head *corig, struct cache_head *cnew)
static void ip_map_init(struct cache_head *cnew, struct cache_head *citem)
static void update(struct cache_head *cnew, struct cache_head *citem)
static struct cache_head *ip_map_alloc(void)
static void ip_map_request(struct cache_detail *cd,
struct cache_head *h,
char **bpp, int *blen)
static int ip_map_upcall(struct cache_detail *cd, struct cache_head *h)
static struct ip_map *__ip_map_lookup(struct cache_detail *cd, char *class, struct in6_addr *addr);
static int __ip_map_update(struct cache_detail *cd, struct ip_map *ipm, struct unix_domain *udom, time_t expiry);
static int ip_map_parse(struct cache_detail *cd,
char *mesg, int mlen)
static int ip_map_show(struct seq_file *m,
struct cache_detail *cd,
struct cache_head *h)
static struct ip_map *__ip_map_lookup(struct cache_detail *cd, char *class,
struct in6_addr *addr)
static inline struct ip_map *ip_map_lookup(struct net *net, char *class,
struct in6_addr *addr)
static int __ip_map_update(struct cache_detail *cd, struct ip_map *ipm,
struct unix_domain *udom, time_t expiry)
static inline int ip_map_update(struct net *net, struct ip_map *ipm,
struct unix_domain *udom, time_t expiry)
int auth_unix_add_addr(struct net *net, struct in6_addr *addr, struct auth_domain *dom)
EXPORT_SYMBOL_GPL(auth_unix_add_addr);
int auth_unix_forget_old(struct auth_domain *dom)
EXPORT_SYMBOL_GPL(auth_unix_forget_old);
struct auth_domain *auth_unix_lookup(struct net *net, struct in6_addr *addr)
EXPORT_SYMBOL_GPL(auth_unix_lookup);
void svcauth_unix_purge(void)
EXPORT_SYMBOL_GPL(svcauth_unix_purge);
static inline struct ip_map *
ip_map_cached_get(struct svc_xprt *xprt)
static inline void
ip_map_cached_put(struct svc_xprt *xprt, struct ip_map *ipm)
void
svcauth_unix_info_release(struct svc_xprt *xpt)
#define	GID_HASHBITS	8
#define	GID_HASHMAX	(1<<GID_HASHBITS)
struct unix_gid ;
static struct cache_head	*gid_table[GID_HASHMAX];
static void unix_gid_put(struct kref *kref)
static int unix_gid_match(struct cache_head *corig, struct cache_head *cnew)
static void unix_gid_init(struct cache_head *cnew, struct cache_head *citem)
static void unix_gid_update(struct cache_head *cnew, struct cache_head *citem)
static struct cache_head *unix_gid_alloc(void)
static void unix_gid_request(struct cache_detail *cd,
struct cache_head *h,
char **bpp, int *blen)
static int unix_gid_upcall(struct cache_detail *cd, struct cache_head *h)
static struct unix_gid *unix_gid_lookup(uid_t uid);
extern struct cache_detail unix_gid_cache;
static int unix_gid_parse(struct cache_detail *cd,
char *mesg, int mlen)
static int unix_gid_show(struct seq_file *m,
struct cache_detail *cd,
struct cache_head *h)
struct cache_detail unix_gid_cache = ;
static struct unix_gid *unix_gid_lookup(uid_t uid)
static struct group_info *unix_gid_find(uid_t uid, struct svc_rqst *rqstp)
int
svcauth_unix_set_client(struct svc_rqst *rqstp)
EXPORT_SYMBOL_GPL(svcauth_unix_set_client);
static int
svcauth_null_accept(struct svc_rqst *rqstp, __be32 *authp)
static int
svcauth_null_release(struct svc_rqst *rqstp)
struct auth_ops svcauth_null = ;
static int
svcauth_unix_accept(struct svc_rqst *rqstp, __be32 *authp)
static int
svcauth_unix_release(struct svc_rqst *rqstp)
struct auth_ops svcauth_unix = ;
int ip_map_cache_create(struct net *net)
void ip_map_cache_destroy(struct net *net)
