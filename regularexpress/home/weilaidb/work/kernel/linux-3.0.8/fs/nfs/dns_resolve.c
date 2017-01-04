ssize_t nfs_dns_resolve_name(char *name, size_t namelen,
struct sockaddr *sa, size_t salen)
#define NFS_DNS_HASHBITS 4
#define NFS_DNS_HASHTBL_SIZE (1 << NFS_DNS_HASHBITS)
static struct cache_head *nfs_dns_table[NFS_DNS_HASHTBL_SIZE];
struct nfs_dns_ent ;
static void nfs_dns_ent_update(struct cache_head *cnew,
struct cache_head *ckey)
static void nfs_dns_ent_init(struct cache_head *cnew,
struct cache_head *ckey)
static void nfs_dns_ent_put(struct kref *ref)
static struct cache_head *nfs_dns_ent_alloc(void)
;
static unsigned int nfs_dns_hash(const struct nfs_dns_ent *key)
static void nfs_dns_request(struct cache_detail *cd,
struct cache_head *ch,
char **bpp, int *blen)
static int nfs_dns_upcall(struct cache_detail *cd,
struct cache_head *ch)
static int nfs_dns_match(struct cache_head *ca,
struct cache_head *cb)
static int nfs_dns_show(struct seq_file *m, struct cache_detail *cd,
struct cache_head *h)
static struct nfs_dns_ent *nfs_dns_lookup(struct cache_detail *cd,
struct nfs_dns_ent *key)
static struct nfs_dns_ent *nfs_dns_update(struct cache_detail *cd,
struct nfs_dns_ent *new,
struct nfs_dns_ent *key)
static int nfs_dns_parse(struct cache_detail *cd, char *buf, int buflen)
static struct cache_detail nfs_dns_resolve = ;
static int do_cache_lookup(struct cache_detail *cd,
struct nfs_dns_ent *key,
struct nfs_dns_ent **item,
struct nfs_cache_defer_req *dreq)
static int do_cache_lookup_nowait(struct cache_detail *cd,
struct nfs_dns_ent *key,
struct nfs_dns_ent **item)
static int do_cache_lookup_wait(struct cache_detail *cd,
struct nfs_dns_ent *key,
struct nfs_dns_ent **item)
ssize_t nfs_dns_resolve_name(char *name, size_t namelen,
struct sockaddr *sa, size_t salen)
int nfs_dns_resolver_init(void)
void nfs_dns_resolver_destroy(void)
