#define SUNRPC_SVC_H
typedef int		(*svc_thread_fn)(void *);
struct svc_pool_stats ;
struct svc_pool  ____cacheline_aligned_in_smp;
struct svc_serv ;
static inline void svc_get(struct svc_serv *serv)
#define RPCSVC_MAXPAYLOAD	(1*1024*1024u)
#define RPCSVC_MAXPAYLOAD_TCP	RPCSVC_MAXPAYLOAD
#define RPCSVC_MAXPAYLOAD_UDP	(32*1024u)
extern u32 svc_max_payload(const struct svc_rqst *rqstp);
#define RPCSVC_MAXPAGES		((RPCSVC_MAXPAYLOAD+PAGE_SIZE-1)/PAGE_SIZE \
+ 2 + 1)
static inline u32 svc_getnl(struct kvec *iov)
static inline void svc_putnl(struct kvec *iov, u32 val)
static inline __be32 svc_getu32(struct kvec *iov)
static inline void svc_ungetu32(struct kvec *iov)
static inline void svc_putu32(struct kvec *iov, __be32 val)
union svc_addr_u ;
struct svc_rqst ;
static inline struct sockaddr_in *svc_addr_in(const struct svc_rqst *rqst)
static inline struct sockaddr_in6 *svc_addr_in6(const struct svc_rqst *rqst)
static inline struct sockaddr *svc_addr(const struct svc_rqst *rqst)
static inline int
xdr_argsize_check(struct svc_rqst *rqstp, __be32 *p)
static inline int
xdr_ressize_check(struct svc_rqst *rqstp, __be32 *p)
static inline void svc_free_res_pages(struct svc_rqst *rqstp)
struct svc_deferred_req ;
struct svc_program ;
struct svc_version ;
typedef __be32	(*svc_procfunc)(struct svc_rqst *, void *argp, void *resp);
struct svc_procedure ;
struct svc_serv *svc_create(struct svc_program *, unsigned int,
void (*shutdown)(struct svc_serv *));
struct svc_rqst *svc_prepare_thread(struct svc_serv *serv,
struct svc_pool *pool);
void		   svc_exit_thread(struct svc_rqst *);
struct svc_serv *  svc_create_pooled(struct svc_program *, unsigned int,
void (*shutdown)(struct svc_serv *),
svc_thread_fn, struct module *);
int		   svc_set_num_threads(struct svc_serv *, struct svc_pool *, int);
int		   svc_pool_stats_open(struct svc_serv *serv, struct file *file);
void		   svc_destroy(struct svc_serv *);
int		   svc_process(struct svc_rqst *);
int		   bc_svc_process(struct svc_serv *, struct rpc_rqst *,
struct svc_rqst *);
int		   svc_register(const struct svc_serv *, const int,
const unsigned short, const unsigned short);
void		   svc_wake_up(struct svc_serv *);
void		   svc_reserve(struct svc_rqst *rqstp, int space);
struct svc_pool *  svc_pool_for_cpu(struct svc_serv *serv, int cpu);
char *		   svc_print_addr(struct svc_rqst *, char *, size_t);
#define	RPC_MAX_ADDRBUFLEN	(63U)
static inline void svc_reserve_auth(struct svc_rqst *rqstp, int space)
