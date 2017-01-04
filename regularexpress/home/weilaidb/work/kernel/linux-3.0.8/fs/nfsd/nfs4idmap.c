#define IDMAP_TYPE_USER  0
#define IDMAP_TYPE_GROUP 1
struct ent ;
#define ENT_HASHBITS          8
#define ENT_HASHMAX           (1 << ENT_HASHBITS)
static void
ent_init(struct cache_head *cnew, struct cache_head *citm)
static void
ent_put(struct kref *ref)
static struct cache_head *
ent_alloc(void)
static struct cache_head *idtoname_table[ENT_HASHMAX];
static uint32_t
idtoname_hash(struct ent *ent)
static void
idtoname_request(struct cache_detail *cd, struct cache_head *ch, char **bpp,
int *blen)
static int
idtoname_upcall(struct cache_detail *cd, struct cache_head *ch)
static int
idtoname_match(struct cache_head *ca, struct cache_head *cb)
static int
idtoname_show(struct seq_file *m, struct cache_detail *cd, struct cache_head *h)
static void
warn_no_idmapd(struct cache_detail *detail, int has_died)
static int         idtoname_parse(struct cache_detail *, char *, int);
static struct ent *idtoname_lookup(struct ent *);
static struct ent *idtoname_update(struct ent *, struct ent *);
static struct cache_detail idtoname_cache = ;
static int
idtoname_parse(struct cache_detail *cd, char *buf, int buflen)
static struct ent *
idtoname_lookup(struct ent *item)
static struct ent *
idtoname_update(struct ent *new, struct ent *old)
static struct cache_head *nametoid_table[ENT_HASHMAX];
static inline int
nametoid_hash(struct ent *ent)
static void
nametoid_request(struct cache_detail *cd, struct cache_head *ch, char **bpp,
int *blen)
static int
nametoid_upcall(struct cache_detail *cd, struct cache_head *ch)
static int
nametoid_match(struct cache_head *ca, struct cache_head *cb)
static int
nametoid_show(struct seq_file *m, struct cache_detail *cd, struct cache_head *h)
static struct ent *nametoid_lookup(struct ent *);
static struct ent *nametoid_update(struct ent *, struct ent *);
static int         nametoid_parse(struct cache_detail *, char *, int);
static struct cache_detail nametoid_cache = ;
static int
nametoid_parse(struct cache_detail *cd, char *buf, int buflen)
static struct ent *
nametoid_lookup(struct ent *item)
static struct ent *
nametoid_update(struct ent *new, struct ent *old)
int
nfsd_idmap_init(void)
void
nfsd_idmap_shutdown(void)
static int
idmap_lookup(struct svc_rqst *rqstp,
struct ent *(*lookup_fn)(struct ent *), struct ent *key,
struct cache_detail *detail, struct ent **item)
static char *
rqst_authname(struct svc_rqst *rqstp)
static __be32
idmap_name_to_id(struct svc_rqst *rqstp, int type, const char *name, u32 namelen,
uid_t *id)
static int
idmap_id_to_name(struct svc_rqst *rqstp, int type, uid_t id, char *name)
__be32
nfsd_map_name_to_uid(struct svc_rqst *rqstp, const char *name, size_t namelen,
__u32 *id)
__be32
nfsd_map_name_to_gid(struct svc_rqst *rqstp, const char *name, size_t namelen,
__u32 *id)
int
nfsd_map_uid_to_name(struct svc_rqst *rqstp, __u32 id, char *name)
int
nfsd_map_gid_to_name(struct svc_rqst *rqstp, __u32 id, char *name)
