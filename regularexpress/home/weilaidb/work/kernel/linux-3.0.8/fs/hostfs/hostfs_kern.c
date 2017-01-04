struct hostfs_inode_info ;
static inline struct hostfs_inode_info *HOSTFS_I(struct inode *inode)
#define FILE_HOSTFS_I(file) HOSTFS_I((file)->f_path.dentry->d_inode)
static int hostfs_d_delete(const struct dentry *dentry)
static const struct dentry_operations hostfs_dentry_ops = ;
static char *root_ino = "";
static int append = 0;
#define HOSTFS_SUPER_MAGIC 0x00c0ffee
static const struct inode_operations hostfs_iops;
static const struct inode_operations hostfs_dir_iops;
static const struct inode_operations hostfs_link_iops;
static int __init hostfs_args(char *options, int *add)
__uml_setup("hostfs=", hostfs_args,
"hostfs=<root dir>,<flags>,...\n"
"    This is used to set hostfs parameters.  The root directory argument\n"
"    is used to confine all hostfs mounts to within the specified directory\n"
"    tree on the host.  If this isn't specified, then a user inside UML can\n"
"    mount anything on the host that's accessible to the user that's running\n"
"    it.\n"
"    The only flag currently supported is 'append', which specifies that all\n"
"    files opened by hostfs will be opened in append mode.\n\n"
);
static char *__dentry_name(struct dentry *dentry, char *name)
static char *dentry_name(struct dentry *dentry)
static char *inode_name(struct inode *ino)
static char *follow_link(char *link)
static struct inode *hostfs_iget(struct super_block *sb)
int hostfs_statfs(struct dentry *dentry, struct kstatfs *sf)
static struct inode *hostfs_alloc_inode(struct super_block *sb)
static void hostfs_evict_inode(struct inode *inode)
static void hostfs_i_callback(struct rcu_head *head)
static void hostfs_destroy_inode(struct inode *inode)
static int hostfs_show_options(struct seq_file *seq, struct vfsmount *vfs)
static const struct super_operations hostfs_sbops = ;
int hostfs_readdir(struct file *file, void *ent, filldir_t filldir)
int hostfs_file_open(struct inode *ino, struct file *file)
int hostfs_fsync(struct file *file, int datasync)
static const struct file_operations hostfs_file_fops = ;
static const struct file_operations hostfs_dir_fops = ;
int hostfs_writepage(struct page *page, struct writeback_control *wbc)
int hostfs_readpage(struct file *file, struct page *page)
int hostfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
int hostfs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static const struct address_space_operations hostfs_aops = ;
static int read_name(struct inode *ino, char *name)
int hostfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
struct dentry *hostfs_lookup(struct inode *ino, struct dentry *dentry,
struct nameidata *nd)
int hostfs_link(struct dentry *to, struct inode *ino, struct dentry *from)
int hostfs_unlink(struct inode *ino, struct dentry *dentry)
int hostfs_symlink(struct inode *ino, struct dentry *dentry, const char *to)
int hostfs_mkdir(struct inode *ino, struct dentry *dentry, int mode)
int hostfs_rmdir(struct inode *ino, struct dentry *dentry)
int hostfs_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t dev)
int hostfs_rename(struct inode *from_ino, struct dentry *from,
struct inode *to_ino, struct dentry *to)
int hostfs_permission(struct inode *ino, int desired, unsigned int flags)
int hostfs_setattr(struct dentry *dentry, struct iattr *attr)
static const struct inode_operations hostfs_iops = ;
static const struct inode_operations hostfs_dir_iops = ;
static void *hostfs_follow_link(struct dentry *dentry, struct nameidata *nd)
static void hostfs_put_link(struct dentry *dentry, struct nameidata *nd, void *cookie)
static const struct inode_operations hostfs_link_iops = ;
static int hostfs_fill_sb_common(struct super_block *sb, void *d, int silent)
static struct dentry *hostfs_read_sb(struct file_system_type *type,
int flags, const char *dev_name,
void *data)
static void hostfs_kill_sb(struct super_block *s)
static struct file_system_type hostfs_type = ;
static int __init init_hostfs(void)
static void __exit exit_hostfs(void)
module_init(init_hostfs)
module_exit(exit_hostfs)
MODULE_LICENSE("GPL");
