static int inherit_flags(const struct inode *dir, int mode)
struct inode *ubifs_new_inode(struct ubifs_info *c, const struct inode *dir,
int mode)
static int dbg_check_name(struct ubifs_dent_node *dent, struct qstr *nm)
#define dbg_check_name(dent, nm) 0
static struct dentry *ubifs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int ubifs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static unsigned int vfs_dent_type(uint8_t type)
static int ubifs_readdir(struct file *file, void *dirent, filldir_t filldir)
static loff_t ubifs_dir_llseek(struct file *file, loff_t offset, int origin)
static int ubifs_dir_release(struct inode *dir, struct file *file)
static void lock_2_inodes(struct inode *inode1, struct inode *inode2)
static void unlock_2_inodes(struct inode *inode1, struct inode *inode2)
static int ubifs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int ubifs_unlink(struct inode *dir, struct dentry *dentry)
static int check_dir_empty(struct ubifs_info *c, struct inode *dir)
static int ubifs_rmdir(struct inode *dir, struct dentry *dentry)
static int ubifs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int ubifs_mknod(struct inode *dir, struct dentry *dentry,
int mode, dev_t rdev)
static int ubifs_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static void lock_3_inodes(struct inode *inode1, struct inode *inode2,
struct inode *inode3)
static void unlock_3_inodes(struct inode *inode1, struct inode *inode2,
struct inode *inode3)
static int ubifs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
int ubifs_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
const struct inode_operations ubifs_dir_inode_operations = ;
const struct file_operations ubifs_dir_operations = ;
