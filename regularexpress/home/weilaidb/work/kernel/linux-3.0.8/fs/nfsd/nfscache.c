#define CACHESIZE		1024
#define HASHSIZE		64
static struct hlist_head *	cache_hash;
static struct list_head 	lru_head;
static int			cache_disabled = 1;
static inline u32 request_hash(u32 xid)
static int	nfsd_cache_append(struct svc_rqst *rqstp, struct kvec *vec);
static DEFINE_SPINLOCK(cache_lock);
int nfsd_reply_cache_init(void)
void nfsd_reply_cache_shutdown(void)
static void
lru_put_end(struct svc_cacherep *rp)
static void
hash_refile(struct svc_cacherep *rp)
int
nfsd_cache_lookup(struct svc_rqst *rqstp, int type)
void
nfsd_cache_update(struct svc_rqst *rqstp, int cachetype, __be32 *statp)
static int
nfsd_cache_append(struct svc_rqst *rqstp, struct kvec *data)
