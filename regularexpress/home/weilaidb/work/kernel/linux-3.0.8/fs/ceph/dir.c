const struct inode_operations ceph_dir_iops;
const struct file_operations ceph_dir_fops;
const struct dentry_operations ceph_dentry_ops;
int ceph_init_dentry(struct dentry *dentry)
static unsigned fpos_frag(loff_t p)
static unsigned fpos_off(loff_t p)
static int __dcache_readdir(struct file *filp,
void *dirent, filldir_t filldir)
static int note_last_dentry(struct ceph_file_info *fi, const char *name,
int len)
static int ceph_readdir(struct file *filp, void *dirent, filldir_t filldir)
static void reset_readdir(struct ceph_file_info *fi)
static loff_t ceph_dir_llseek(struct file *file, loff_t offset, int origin)
struct dentry *ceph_finish_lookup(struct ceph_mds_request *req,
struct dentry *dentry, int err)
static int is_root_ceph_dentry(struct inode *inode, struct dentry *dentry)
static struct dentry *ceph_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
int ceph_handle_notrace_create(struct inode *dir, struct dentry *dentry)
static int ceph_mknod(struct inode *dir, struct dentry *dentry,
int mode, dev_t rdev)
static int ceph_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int ceph_symlink(struct inode *dir, struct dentry *dentry,
const char *dest)
static int ceph_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int ceph_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int drop_caps_for_unlink(struct inode *inode)
static int ceph_unlink(struct inode *dir, struct dentry *dentry)
static int ceph_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
void ceph_invalidate_dentry_lease(struct dentry *dentry)
static int dentry_lease_is_valid(struct dentry *dentry)
static int dir_lease_is_valid(struct inode *dir, struct dentry *dentry)
static int ceph_d_revalidate(struct dentry *dentry, struct nameidata *nd)
static void ceph_d_release(struct dentry *dentry)
static int ceph_snapdir_d_revalidate(struct dentry *dentry,
struct nameidata *nd)
static ssize_t ceph_read_dir(struct file *file, char __user *buf, size_t size,
loff_t *ppos)
static int ceph_dir_fsync(struct file *file, int datasync)
void ceph_dentry_lru_add(struct dentry *dn)
void ceph_dentry_lru_touch(struct dentry *dn)
void ceph_dentry_lru_del(struct dentry *dn)
unsigned ceph_dentry_hash(struct dentry *dn)
const struct file_operations ceph_dir_fops = ;
const struct inode_operations ceph_dir_iops = ;
const struct dentry_operations ceph_dentry_ops = ;
const struct dentry_operations ceph_snapdir_dentry_ops = ;
const struct dentry_operations ceph_snap_dentry_ops = ;
