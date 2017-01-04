#define NFSDDBG_FACILITY	NFSDDBG_EXPORT
typedef struct auth_domain	svc_client;
typedef struct svc_export	svc_export;
#define	EXPKEY_HASHBITS		8
#define	EXPKEY_HASHMAX		(1 << EXPKEY_HASHBITS)
#define	EXPKEY_HASHMASK		(EXPKEY_HASHMAX -1)
static struct cache_head *expkey_table[EXPKEY_HASHMAX];
static void expkey_put(struct kref *ref)
static void expkey_request(struct cache_detail *cd,
struct cache_head *h,
char **bpp, int *blen)
static int expkey_upcall(struct cache_detail *cd, struct cache_head *h)
static struct svc_expkey *svc_expkey_update(struct svc_expkey *new, struct svc_expkey *old);
static struct svc_expkey *svc_expkey_lookup(struct svc_expkey *);
static struct cache_detail svc_expkey_cache;
static int expkey_parse(struct cache_detail *cd, char *mesg, int mlen)
static int expkey_show(struct seq_file *m,
struct cache_detail *cd,
struct cache_head *h)
static inline int expkey_match (struct cache_head *a, struct cache_head *b)
static inline void expkey_init(struct cache_head *cnew,
struct cache_head *citem)
static inline void expkey_update(struct cache_head *cnew,
struct cache_head *citem)
static struct cache_head *expkey_alloc(void)
static struct cache_detail svc_expkey_cache = ;
static int
svc_expkey_hash(struct svc_expkey *item)
static struct svc_expkey *
svc_expkey_lookup(struct svc_expkey *item)
static struct svc_expkey *
svc_expkey_update(struct svc_expkey *new, struct svc_expkey *old)
#define	EXPORT_HASHBITS		8
#define	EXPORT_HASHMAX		(1<< EXPORT_HASHBITS)
static struct cache_head *export_table[EXPORT_HASHMAX];
static void nfsd4_fslocs_free(struct nfsd4_fs_locations *fsloc)
static void svc_export_put(struct kref *ref)
static void svc_export_request(struct cache_detail *cd,
struct cache_head *h,
char **bpp, int *blen)
static int svc_export_upcall(struct cache_detail *cd, struct cache_head *h)
static struct svc_export *svc_export_update(struct svc_export *new,
struct svc_export *old);
static struct svc_export *svc_export_lookup(struct svc_export *);
static int check_export(struct inode *inode, int *flags, unsigned char *uuid)
static int
fsloc_parse(char **mesg, char *buf, struct nfsd4_fs_locations *fsloc)
static int secinfo_parse(char **mesg, char *buf, struct svc_export *exp)
static inline int
fsloc_parse(char **mesg, char *buf, struct nfsd4_fs_locations *fsloc)
static inline int
secinfo_parse(char **mesg, char *buf, struct svc_export *exp)
static int svc_export_parse(struct cache_detail *cd, char *mesg, int mlen)
static void exp_flags(struct seq_file *m, int flag, int fsid,
uid_t anonu, uid_t anong, struct nfsd4_fs_locations *fslocs);
static void show_secinfo(struct seq_file *m, struct svc_export *exp);
static int svc_export_show(struct seq_file *m,
struct cache_detail *cd,
struct cache_head *h)
static int svc_export_match(struct cache_head *a, struct cache_head *b)
static void svc_export_init(struct cache_head *cnew, struct cache_head *citem)
static void export_update(struct cache_head *cnew, struct cache_head *citem)
static struct cache_head *svc_export_alloc(void)
struct cache_detail svc_export_cache = ;
static int
svc_export_hash(struct svc_export *exp)
static struct svc_export *
svc_export_lookup(struct svc_export *exp)
static struct svc_export *
svc_export_update(struct svc_export *new, struct svc_export *old)
static struct svc_expkey *
exp_find_key(svc_client *clp, int fsid_type, u32 *fsidv, struct cache_req *reqp)
static int exp_set_key(svc_client *clp, int fsid_type, u32 *fsidv,
struct svc_export *exp)
static inline struct svc_expkey *
exp_get_key(svc_client *clp, dev_t dev, ino_t ino)
static inline struct svc_expkey *
exp_get_fsid_key(svc_client *clp, int fsid)
static svc_export *exp_get_by_name(svc_client *clp, const struct path *path,
struct cache_req *reqp)
static struct svc_export *exp_parent(svc_client *clp, struct path *path)
static DECLARE_RWSEM(hash_sem);
void
exp_readlock(void)
static inline void
exp_writelock(void)
void
exp_readunlock(void)
static inline void
exp_writeunlock(void)
void exp_readlock(void)
static inline void exp_writelock(void)
void exp_readunlock(void)
static inline void exp_writeunlock(void)
static void		exp_do_unexport(svc_export *unexp);
static int		exp_verify_string(char *cp, int max);
static void exp_fsid_unhash(struct svc_export *exp)
static int exp_fsid_hash(svc_client *clp, struct svc_export *exp)
static int exp_hash(struct auth_domain *clp, struct svc_export *exp)
static void exp_unhash(struct svc_export *exp)
int
exp_export(struct nfsctl_export *nxp)
static void
exp_do_unexport(svc_export *unexp)
int
exp_unexport(struct nfsctl_export *nxp)
int
exp_rootfh(svc_client *clp, char *name, struct knfsd_fh *f, int maxsize)
static struct svc_export *exp_find(struct auth_domain *clp, int fsid_type,
u32 *fsidv, struct cache_req *reqp)
__be32 check_nfsd_access(struct svc_export *exp, struct svc_rqst *rqstp)
struct svc_export *
rqst_exp_get_by_name(struct svc_rqst *rqstp, struct path *path)
struct svc_export *
rqst_exp_find(struct svc_rqst *rqstp, int fsid_type, u32 *fsidv)
struct svc_export *
rqst_exp_parent(struct svc_rqst *rqstp, struct path *path)
static struct svc_export *find_fsidzero_export(struct svc_rqst *rqstp)
__be32
exp_pseudoroot(struct svc_rqst *rqstp, struct svc_fh *fhp)
static void *e_start(struct seq_file *m, loff_t *pos)
__acquires(svc_export_cache.hash_lock)
static void *e_next(struct seq_file *m, void *p, loff_t *pos)
static void e_stop(struct seq_file *m, void *p)
__releases(svc_export_cache.hash_lock)
static struct flags  expflags[] = ;
static void show_expflags(struct seq_file *m, int flags, int mask)
static void show_secinfo_flags(struct seq_file *m, int flags)
static bool secinfo_flags_equal(int f, int g)
static int show_secinfo_run(struct seq_file *m, struct exp_flavor_info **fp, struct exp_flavor_info *end)
static void show_secinfo(struct seq_file *m, struct svc_export *exp)
static void exp_flags(struct seq_file *m, int flag, int fsid,
uid_t anonu, uid_t anong, struct nfsd4_fs_locations *fsloc)
static int e_show(struct seq_file *m, void *p)
const struct seq_operations nfs_exports_op = ;
int
exp_addclient(struct nfsctl_client *ncp)
int
exp_delclient(struct nfsctl_client *ncp)
static int
exp_verify_string(char *cp, int max)
int
nfsd_export_init(void)
void
nfsd_export_flush(void)
void
nfsd_export_shutdown(void)
