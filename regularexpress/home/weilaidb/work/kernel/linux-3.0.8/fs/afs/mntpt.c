static struct dentry *afs_mntpt_lookup(struct inode *dir,
struct dentry *dentry,
struct nameidata *nd);
static int afs_mntpt_open(struct inode *inode, struct file *file);
static void afs_mntpt_expiry_timed_out(struct work_struct *work);
const struct file_operations afs_mntpt_file_operations = ;
const struct inode_operations afs_mntpt_inode_operations = ;
const struct inode_operations afs_autocell_inode_operations = ;
static LIST_HEAD(afs_vfsmounts);
static DECLARE_DELAYED_WORK(afs_mntpt_expiry_timer, afs_mntpt_expiry_timed_out);
static unsigned long afs_mntpt_expiry_timeout = 10 * 60;
int afs_mntpt_check_symlink(struct afs_vnode *vnode, struct key *key)
static struct dentry *afs_mntpt_lookup(struct inode *dir,
struct dentry *dentry,
struct nameidata *nd)
static int afs_mntpt_open(struct inode *inode, struct file *file)
static struct vfsmount *afs_mntpt_do_automount(struct dentry *mntpt)
struct vfsmount *afs_d_automount(struct path *path)
static void afs_mntpt_expiry_timed_out(struct work_struct *work)
void afs_mntpt_kill_timer(void)
