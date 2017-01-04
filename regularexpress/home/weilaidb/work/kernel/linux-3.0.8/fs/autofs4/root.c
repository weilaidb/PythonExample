static int autofs4_dir_symlink(struct inode *,struct dentry *,const char *);
static int autofs4_dir_unlink(struct inode *,struct dentry *);
static int autofs4_dir_rmdir(struct inode *,struct dentry *);
static int autofs4_dir_mkdir(struct inode *,struct dentry *,int);
static long autofs4_root_ioctl(struct file *,unsigned int,unsigned long);
static long autofs4_root_compat_ioctl(struct file *,unsigned int,unsigned long);
static int autofs4_dir_open(struct inode *inode, struct file *file);
static struct dentry *autofs4_lookup(struct inode *,struct dentry *, struct nameidata *);
static struct vfsmount *autofs4_d_automount(struct path *);
static int autofs4_d_manage(struct dentry *, bool);
static void autofs4_dentry_release(struct dentry *);
const struct file_operations autofs4_root_operations = ;
const struct file_operations autofs4_dir_operations = ;
const struct inode_operations autofs4_dir_inode_operations = ;
const struct dentry_operations autofs4_dentry_operations = ;
static void autofs4_add_active(struct dentry *dentry)
static void autofs4_del_active(struct dentry *dentry)
static int autofs4_dir_open(struct inode *inode, struct file *file)
static void autofs4_dentry_release(struct dentry *de)
static struct dentry *autofs4_lookup_active(struct dentry *dentry)
static struct dentry *autofs4_lookup_expiring(struct dentry *dentry)
static int autofs4_mount_wait(struct dentry *dentry)
static int do_expire_wait(struct dentry *dentry)
static struct dentry *autofs4_mountpoint_changed(struct path *path)
static struct vfsmount *autofs4_d_automount(struct path *path)
int autofs4_d_manage(struct dentry *dentry, bool rcu_walk)
static struct dentry *autofs4_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static int autofs4_dir_symlink(struct inode *dir,
struct dentry *dentry,
const char *symname)
static int autofs4_dir_unlink(struct inode *dir, struct dentry *dentry)
static void autofs_set_leaf_automount_flags(struct dentry *dentry)
static void autofs_clear_leaf_automount_flags(struct dentry *dentry)
static int autofs4_dir_rmdir(struct inode *dir, struct dentry *dentry)
static int autofs4_dir_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static inline int autofs4_compat_get_set_timeout(struct autofs_sb_info *sbi,
compat_ulong_t __user *p)
static inline int autofs4_get_set_timeout(struct autofs_sb_info *sbi,
unsigned long __user *p)
static inline int autofs4_get_protover(struct autofs_sb_info *sbi, int __user *p)
static inline int autofs4_get_protosubver(struct autofs_sb_info *sbi, int __user *p)
static inline int autofs4_ask_umount(struct vfsmount *mnt, int __user *p)
int is_autofs4_dentry(struct dentry *dentry)
static int autofs4_root_ioctl_unlocked(struct inode *inode, struct file *filp,
unsigned int cmd, unsigned long arg)
static long autofs4_root_ioctl(struct file *filp,
unsigned int cmd, unsigned long arg)
static long autofs4_root_compat_ioctl(struct file *filp,
unsigned int cmd, unsigned long arg)
