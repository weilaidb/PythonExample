#if BITS_PER_LONG >= 64
static inline void fuse_dentry_settime(struct dentry *entry, u64 time)
static inline u64 fuse_dentry_time(struct dentry *entry)
static void fuse_dentry_settime(struct dentry *entry, u64 time)
static u64 fuse_dentry_time(struct dentry *entry)
static u64 time_to_jiffies(unsigned long sec, unsigned long nsec)
static void fuse_change_entry_timeout(struct dentry *entry,
struct fuse_entry_out *o)
static u64 attr_timeout(struct fuse_attr_out *o)
static u64 entry_attr_timeout(struct fuse_entry_out *o)
void fuse_invalidate_attr(struct inode *inode)
void fuse_invalidate_entry_cache(struct dentry *entry)
static void fuse_invalidate_entry(struct dentry *entry)
static void fuse_lookup_init(struct fuse_conn *fc, struct fuse_req *req,
u64 nodeid, struct qstr *name,
struct fuse_entry_out *outarg)
u64 fuse_get_attr_version(struct fuse_conn *fc)
static int fuse_dentry_revalidate(struct dentry *entry, struct nameidata *nd)
static int invalid_nodeid(u64 nodeid)
const struct dentry_operations fuse_dentry_operations = ;
int fuse_valid_type(int m)
static struct dentry *fuse_d_add_directory(struct dentry *entry,
struct inode *inode)
int fuse_lookup_name(struct super_block *sb, u64 nodeid, struct qstr *name,
struct fuse_entry_out *outarg, struct inode **inode)
static struct dentry *fuse_lookup(struct inode *dir, struct dentry *entry,
struct nameidata *nd)
static int fuse_create_open(struct inode *dir, struct dentry *entry, int mode,
struct nameidata *nd)
static int create_new_entry(struct fuse_conn *fc, struct fuse_req *req,
struct inode *dir, struct dentry *entry,
int mode)
static int fuse_mknod(struct inode *dir, struct dentry *entry, int mode,
dev_t rdev)
static int fuse_create(struct inode *dir, struct dentry *entry, int mode,
struct nameidata *nd)
static int fuse_mkdir(struct inode *dir, struct dentry *entry, int mode)
static int fuse_symlink(struct inode *dir, struct dentry *entry,
const char *link)
static int fuse_unlink(struct inode *dir, struct dentry *entry)
static int fuse_rmdir(struct inode *dir, struct dentry *entry)
static int fuse_rename(struct inode *olddir, struct dentry *oldent,
struct inode *newdir, struct dentry *newent)
static int fuse_link(struct dentry *entry, struct inode *newdir,
struct dentry *newent)
static void fuse_fillattr(struct inode *inode, struct fuse_attr *attr,
struct kstat *stat)
static int fuse_do_getattr(struct inode *inode, struct kstat *stat,
struct file *file)
int fuse_update_attributes(struct inode *inode, struct kstat *stat,
struct file *file, bool *refreshed)
int fuse_reverse_inval_entry(struct super_block *sb, u64 parent_nodeid,
struct qstr *name)
int fuse_allow_task(struct fuse_conn *fc, struct task_struct *task)
static int fuse_access(struct inode *inode, int mask)
static int fuse_perm_getattr(struct inode *inode, int flags)
static int fuse_permission(struct inode *inode, int mask, unsigned int flags)
static int parse_dirfile(char *buf, size_t nbytes, struct file *file,
void *dstbuf, filldir_t filldir)
static int fuse_readdir(struct file *file, void *dstbuf, filldir_t filldir)
static char *read_link(struct dentry *dentry)
static void free_link(char *link)
static void *fuse_follow_link(struct dentry *dentry, struct nameidata *nd)
static void fuse_put_link(struct dentry *dentry, struct nameidata *nd, void *c)
static int fuse_dir_open(struct inode *inode, struct file *file)
static int fuse_dir_release(struct inode *inode, struct file *file)
static int fuse_dir_fsync(struct file *file, int datasync)
static bool update_mtime(unsigned ivalid)
static void iattr_to_fattr(struct iattr *iattr, struct fuse_setattr_in *arg)
void fuse_set_nowrite(struct inode *inode)
static void __fuse_release_nowrite(struct inode *inode)
void fuse_release_nowrite(struct inode *inode)
static int fuse_do_setattr(struct dentry *entry, struct iattr *attr,
struct file *file)
static int fuse_setattr(struct dentry *entry, struct iattr *attr)
static int fuse_getattr(struct vfsmount *mnt, struct dentry *entry,
struct kstat *stat)
static int fuse_setxattr(struct dentry *entry, const char *name,
const void *value, size_t size, int flags)
static ssize_t fuse_getxattr(struct dentry *entry, const char *name,
void *value, size_t size)
static ssize_t fuse_listxattr(struct dentry *entry, char *list, size_t size)
static int fuse_removexattr(struct dentry *entry, const char *name)
static const struct inode_operations fuse_dir_inode_operations = ;
static const struct file_operations fuse_dir_operations = ;
static const struct inode_operations fuse_common_inode_operations = ;
static const struct inode_operations fuse_symlink_inode_operations = ;
void fuse_init_common(struct inode *inode)
void fuse_init_dir(struct inode *inode)
void fuse_init_symlink(struct inode *inode)
