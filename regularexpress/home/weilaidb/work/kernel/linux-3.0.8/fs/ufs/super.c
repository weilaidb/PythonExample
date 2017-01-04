void lock_ufs(struct super_block *sb)
void unlock_ufs(struct super_block *sb)
static struct inode *ufs_nfs_get_inode(struct super_block *sb, u64 ino, u32 generation)
static struct dentry *ufs_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *ufs_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *ufs_get_parent(struct dentry *child)
static const struct export_operations ufs_export_ops = ;
static void ufs_print_super_stuff(struct super_block *sb,
struct ufs_super_block_first *usb1,
struct ufs_super_block_second *usb2,
struct ufs_super_block_third *usb3)
static void ufs_print_cylinder_stuff(struct super_block *sb,
struct ufs_cylinder_group *cg)
#  define ufs_print_super_stuff(sb, usb1, usb2, usb3)
#  define ufs_print_cylinder_stuff(sb, cg)
static const struct super_operations ufs_super_ops;
static char error_buf[1024];
void ufs_error (struct super_block * sb, const char * function,
const char * fmt, ...)
void ufs_panic (struct super_block * sb, const char * function,
const char * fmt, ...)
void ufs_warning (struct super_block * sb, const char * function,
const char * fmt, ...)
enum ;
static const match_table_t tokens = ;
static int ufs_parse_options (char * options, unsigned * mount_options)
static void ufs_setup_cstotal(struct super_block *sb)
static int ufs_read_cylinder_structures(struct super_block *sb)
static void ufs_put_cstotal(struct super_block *sb)
static void ufs_put_super_internal(struct super_block *sb)
static int ufs_fill_super(struct super_block *sb, void *data, int silent)
static int ufs_sync_fs(struct super_block *sb, int wait)
static void ufs_write_super(struct super_block *sb)
static void ufs_put_super(struct super_block *sb)
static int ufs_remount (struct super_block *sb, int *mount_flags, char *data)
static int ufs_show_options(struct seq_file *seq, struct vfsmount *vfs)
static int ufs_statfs(struct dentry *dentry, struct kstatfs *buf)
static struct kmem_cache * ufs_inode_cachep;
static struct inode *ufs_alloc_inode(struct super_block *sb)
static void ufs_i_callback(struct rcu_head *head)
static void ufs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static const struct super_operations ufs_super_ops = ;
static struct dentry *ufs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type ufs_fs_type = ;
static int __init init_ufs_fs(void)
static void __exit exit_ufs_fs(void)
module_init(init_ufs_fs)
module_exit(exit_ufs_fs)
MODULE_LICENSE("GPL");
