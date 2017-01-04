#define NFSDBG_FACILITY		NFSDBG_VFS
static inline char *nfs4_pathname_string(const struct nfs4_pathname *pathname,
char *buffer, ssize_t buflen)
static char *nfs4_path(struct dentry *dentry, char *buffer, ssize_t buflen)
static int nfs4_validate_fspath(struct dentry *dentry,
const struct nfs4_fs_locations *locations,
char *page, char *page2)
static size_t nfs_parse_server_name(char *string, size_t len,
struct sockaddr *sa, size_t salen)
static struct vfsmount *try_location(struct nfs_clone_mount *mountdata,
char *page, char *page2,
const struct nfs4_fs_location *location)
static struct vfsmount *nfs_follow_referral(struct dentry *dentry,
const struct nfs4_fs_locations *locations)
struct vfsmount *nfs_do_refmount(struct dentry *dentry)
