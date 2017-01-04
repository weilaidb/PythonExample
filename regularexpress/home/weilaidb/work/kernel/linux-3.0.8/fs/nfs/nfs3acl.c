#define NFSDBG_FACILITY	NFSDBG_PROC
ssize_t nfs3_listxattr(struct dentry *dentry, char *buffer, size_t size)
ssize_t nfs3_getxattr(struct dentry *dentry, const char *name,
void *buffer, size_t size)
int nfs3_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
int nfs3_removexattr(struct dentry *dentry, const char *name)
static void __nfs3_forget_cached_acls(struct nfs_inode *nfsi)
void nfs3_forget_cached_acls(struct inode *inode)
static struct posix_acl *nfs3_get_cached_acl(struct inode *inode, int type)
static void nfs3_cache_acls(struct inode *inode, struct posix_acl *acl,
struct posix_acl *dfacl)
struct posix_acl *nfs3_proc_getacl(struct inode *inode, int type)
static int nfs3_proc_setacls(struct inode *inode, struct posix_acl *acl,
struct posix_acl *dfacl)
int nfs3_proc_setacl(struct inode *inode, int type, struct posix_acl *acl)
int nfs3_proc_set_default_acl(struct inode *dir, struct inode *inode,
mode_t mode)
