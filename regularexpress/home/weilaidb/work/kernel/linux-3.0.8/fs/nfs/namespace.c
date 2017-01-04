#define NFSDBG_FACILITY		NFSDBG_VFS
static void nfs_expire_automounts(struct work_struct *work);
static LIST_HEAD(nfs_automount_list);
static DECLARE_DELAYED_WORK(nfs_automount_task, nfs_expire_automounts);
int nfs_mountpoint_expiry_timeout = 500 * HZ;
static struct vfsmount *nfs_do_submount(struct dentry *dentry,
struct nfs_fh *fh,
struct nfs_fattr *fattr,
rpc_authflavor_t authflavor);
char *nfs_path(char **p, struct dentry *dentry, char *buffer, ssize_t buflen)
static rpc_authflavor_t nfs_find_best_sec(struct nfs4_secinfo_flavors *flavors)
static int nfs_negotiate_security(const struct dentry *parent,
const struct dentry *dentry,
rpc_authflavor_t *flavor)
static int nfs_lookup_with_sec(struct nfs_server *server, struct dentry *parent,
struct dentry *dentry, struct path *path,
struct nfs_fh *fh, struct nfs_fattr *fattr,
rpc_authflavor_t *flavor)
static inline int nfs_lookup_with_sec(struct nfs_server *server,
struct dentry *parent, struct dentry *dentry,
struct path *path, struct nfs_fh *fh,
struct nfs_fattr *fattr,
rpc_authflavor_t *flavor)
struct vfsmount *nfs_d_automount(struct path *path)
const struct inode_operations nfs_mountpoint_inode_operations = ;
const struct inode_operations nfs_referral_inode_operations = ;
static void nfs_expire_automounts(struct work_struct *work)
void nfs_release_automount_timer(void)
static struct vfsmount *nfs_do_clone_mount(struct nfs_server *server,
const char *devname,
struct nfs_clone_mount *mountdata)
static struct vfsmount *nfs_do_submount(struct dentry *dentry,
struct nfs_fh *fh,
struct nfs_fattr *fattr,
rpc_authflavor_t authflavor)
