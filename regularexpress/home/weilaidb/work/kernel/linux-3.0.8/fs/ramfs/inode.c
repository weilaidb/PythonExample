#define RAMFS_DEFAULT_MODE	0755
static const struct super_operations ramfs_ops;
static const struct inode_operations ramfs_dir_inode_operations;
static struct backing_dev_info ramfs_backing_dev_info = ;
struct inode *ramfs_get_inode(struct super_block *sb,
const struct inode *dir, int mode, dev_t dev)
static int
ramfs_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t dev)
static int ramfs_mkdir(struct inode * dir, struct dentry * dentry, int mode)
static int ramfs_create(struct inode *dir, struct dentry *dentry, int mode, struct nameidata *nd)
static int ramfs_symlink(struct inode * dir, struct dentry *dentry, const char * symname)
static const struct inode_operations ramfs_dir_inode_operations = ;
static const struct super_operations ramfs_ops = ;
struct ramfs_mount_opts ;
enum ;
static const match_table_t tokens = ;
struct ramfs_fs_info ;
static int ramfs_parse_options(char *data, struct ramfs_mount_opts *opts)
int ramfs_fill_super(struct super_block *sb, void *data, int silent)
struct dentry *ramfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct dentry *rootfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static void ramfs_kill_sb(struct super_block *sb)
static struct file_system_type ramfs_fs_type = ;
static struct file_system_type rootfs_fs_type = ;
static int __init init_ramfs_fs(void)
static void __exit exit_ramfs_fs(void)
module_init(init_ramfs_fs)
module_exit(exit_ramfs_fs)
int __init init_rootfs(void)
MODULE_LICENSE("GPL");
