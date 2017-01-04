static struct kmem_cache *romfs_inode_cachep;
static const umode_t romfs_modemap[8] = ;
static const unsigned char romfs_dtype_table[] = ;
static struct inode *romfs_iget(struct super_block *sb, unsigned long pos);
static int romfs_readpage(struct file *file, struct page *page)
static const struct address_space_operations romfs_aops = ;
static int romfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
static struct dentry *romfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static const struct file_operations romfs_dir_operations = ;
static const struct inode_operations romfs_dir_inode_operations = ;
static struct inode *romfs_iget(struct super_block *sb, unsigned long pos)
static struct inode *romfs_alloc_inode(struct super_block *sb)
static void romfs_i_callback(struct rcu_head *head)
static void romfs_destroy_inode(struct inode *inode)
static int romfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int romfs_remount(struct super_block *sb, int *flags, char *data)
static const struct super_operations romfs_super_ops = ;
static __u32 romfs_checksum(const void *data, int size)
static int romfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *romfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static void romfs_kill_sb(struct super_block *sb)
static struct file_system_type romfs_fs_type = ;
static void romfs_i_init_once(void *_inode)
static int __init init_romfs_fs(void)
static void __exit exit_romfs_fs(void)
module_init(init_romfs_fs);
module_exit(exit_romfs_fs);
MODULE_DESCRIPTION("Direct-MTD Capable RomFS");
MODULE_AUTHOR("Red Hat, Inc.");
MODULE_LICENSE("GPL");
