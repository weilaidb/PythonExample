#define NFSDDBG_FACILITY		NFSDDBG_FILEOP
struct raparms ;
struct raparm_hbucket  ____cacheline_aligned_in_smp;
#define RAPARM_HASH_BITS	4
#define RAPARM_HASH_SIZE	(1<<RAPARM_HASH_BITS)
#define RAPARM_HASH_MASK	(RAPARM_HASH_SIZE-1)
static struct raparm_hbucket	raparm_hash[RAPARM_HASH_SIZE];
int
nfsd_cross_mnt(struct svc_rqst *rqstp, struct dentry **dpp,
struct svc_export **expp)
static void follow_to_parent(struct path *path)
static int nfsd_lookup_parent(struct svc_rqst *rqstp, struct dentry *dparent, struct svc_export **exp, struct dentry **dentryp)
int nfsd_mountpoint(struct dentry *dentry, struct svc_export *exp)
__be32
nfsd_lookup_dentry(struct svc_rqst *rqstp, struct svc_fh *fhp,
const char *name, unsigned int len,
struct svc_export **exp_ret, struct dentry **dentry_ret)
__be32
nfsd_lookup(struct svc_rqst *rqstp, struct svc_fh *fhp, const char *name,
unsigned int len, struct svc_fh *resfh)
static int nfsd_break_lease(struct inode *inode)
static int
commit_metadata(struct svc_fh *fhp)
__be32
nfsd_setattr(struct svc_rqst *rqstp, struct svc_fh *fhp, struct iattr *iap,
int check_guard, time_t guardtime)
#if defined(CONFIG_NFSD_V2_ACL) || \
defined(CONFIG_NFSD_V3_ACL) || \
defined(CONFIG_NFSD_V4)
static ssize_t nfsd_getxattr(struct dentry *dentry, char *key, void **buf)
#if defined(CONFIG_NFSD_V4)
static int
set_nfsv4_acl_one(struct dentry *dentry, struct posix_acl *pacl, char *key)
__be32
nfsd4_set_nfs4_acl(struct svc_rqst *rqstp, struct svc_fh *fhp,
struct nfs4_acl *acl)
static struct posix_acl *
_get_posix_acl(struct dentry *dentry, char *key)
int
nfsd4_get_nfs4_acl(struct svc_rqst *rqstp, struct dentry *dentry, struct nfs4_acl **acl)
struct accessmap ;
static struct accessmap	nfs3_regaccess[] = ;
static struct accessmap	nfs3_diraccess[] = ;
static struct accessmap	nfs3_anyaccess[] = ;
__be32
nfsd_access(struct svc_rqst *rqstp, struct svc_fh *fhp, u32 *access, u32 *supported)
static int nfsd_open_break_lease(struct inode *inode, int access)
__be32
nfsd_open(struct svc_rqst *rqstp, struct svc_fh *fhp, int type,
int access, struct file **filp)
void
nfsd_close(struct file *filp)
static inline struct raparms *
nfsd_get_raparms(dev_t dev, ino_t ino)
static int
nfsd_splice_actor(struct pipe_inode_info *pipe, struct pipe_buffer *buf,
struct splice_desc *sd)
static int nfsd_direct_splice_actor(struct pipe_inode_info *pipe,
struct splice_desc *sd)
static __be32
nfsd_vfs_read(struct svc_rqst *rqstp, struct svc_fh *fhp, struct file *file,
loff_t offset, struct kvec *vec, int vlen, unsigned long *count)
static void kill_suid(struct dentry *dentry)
static int wait_for_concurrent_writes(struct file *file)
static __be32
nfsd_vfs_write(struct svc_rqst *rqstp, struct svc_fh *fhp, struct file *file,
loff_t offset, struct kvec *vec, int vlen,
unsigned long *cnt, int *stablep)
__be32 nfsd_read(struct svc_rqst *rqstp, struct svc_fh *fhp,
loff_t offset, struct kvec *vec, int vlen, unsigned long *count)
__be32
nfsd_read_file(struct svc_rqst *rqstp, struct svc_fh *fhp, struct file *file,
loff_t offset, struct kvec *vec, int vlen,
unsigned long *count)
__be32
nfsd_write(struct svc_rqst *rqstp, struct svc_fh *fhp, struct file *file,
loff_t offset, struct kvec *vec, int vlen, unsigned long *cnt,
int *stablep)
__be32
nfsd_commit(struct svc_rqst *rqstp, struct svc_fh *fhp,
loff_t offset, unsigned long count)
static __be32
nfsd_create_setattr(struct svc_rqst *rqstp, struct svc_fh *resfhp,
struct iattr *iap)
static void
nfsd_check_ignore_resizing(struct iattr *iap)
__be32
nfsd_create(struct svc_rqst *rqstp, struct svc_fh *fhp,
char *fname, int flen, struct iattr *iap,
int type, dev_t rdev, struct svc_fh *resfhp)
static inline int nfsd_create_is_exclusive(int createmode)
__be32
do_nfsd_create(struct svc_rqst *rqstp, struct svc_fh *fhp,
char *fname, int flen, struct iattr *iap,
struct svc_fh *resfhp, int createmode, u32 *verifier,
int *truncp, int *created)
__be32
nfsd_readlink(struct svc_rqst *rqstp, struct svc_fh *fhp, char *buf, int *lenp)
__be32
nfsd_symlink(struct svc_rqst *rqstp, struct svc_fh *fhp,
char *fname, int flen,
char *path,  int plen,
struct svc_fh *resfhp,
struct iattr *iap)
__be32
nfsd_link(struct svc_rqst *rqstp, struct svc_fh *ffhp,
char *name, int len, struct svc_fh *tfhp)
__be32
nfsd_rename(struct svc_rqst *rqstp, struct svc_fh *ffhp, char *fname, int flen,
struct svc_fh *tfhp, char *tname, int tlen)
__be32
nfsd_unlink(struct svc_rqst *rqstp, struct svc_fh *fhp, int type,
char *fname, int flen)
struct buffered_dirent ;
struct readdir_data ;
static int nfsd_buffered_filldir(void *__buf, const char *name, int namlen,
loff_t offset, u64 ino, unsigned int d_type)
static __be32 nfsd_buffered_readdir(struct file *file, filldir_t func,
struct readdir_cd *cdp, loff_t *offsetp)
__be32
nfsd_readdir(struct svc_rqst *rqstp, struct svc_fh *fhp, loff_t *offsetp,
struct readdir_cd *cdp, filldir_t func)
__be32
nfsd_statfs(struct svc_rqst *rqstp, struct svc_fh *fhp, struct kstatfs *stat, int access)
static int exp_rdonly(struct svc_rqst *rqstp, struct svc_export *exp)
__be32
nfsd_permission(struct svc_rqst *rqstp, struct svc_export *exp,
struct dentry *dentry, int acc)
void
nfsd_racache_shutdown(void)
int
nfsd_racache_init(int cache_size)
#if defined(CONFIG_NFSD_V2_ACL) || defined(CONFIG_NFSD_V3_ACL)
struct posix_acl *
nfsd_get_posix_acl(struct svc_fh *fhp, int type)
int
nfsd_set_posix_acl(struct svc_fh *fhp, int type, struct posix_acl *acl)
