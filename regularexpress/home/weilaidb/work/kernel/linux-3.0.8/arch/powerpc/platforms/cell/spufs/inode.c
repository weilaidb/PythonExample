struct spufs_sb_info ;
static struct kmem_cache *spufs_inode_cache;
char *isolated_loader;
static int isolated_loader_size;
static struct spufs_sb_info *spufs_get_sb_info(struct super_block *sb)
static struct inode *
spufs_alloc_inode(struct super_block *sb)
static void spufs_i_callback(struct rcu_head *head)
static void spufs_destroy_inode(struct inode *inode)
static void
spufs_init_once(void *p)
static struct inode *
spufs_new_inode(struct super_block *sb, int mode)
static int
spufs_setattr(struct dentry *dentry, struct iattr *attr)
static int
spufs_new_file(struct super_block *sb, struct dentry *dentry,
const struct file_operations *fops, int mode,
size_t size, struct spu_context *ctx)
static void
spufs_evict_inode(struct inode *inode)
static void spufs_prune_dir(struct dentry *dir)
static int spufs_rmdir(struct inode *parent, struct dentry *dir)
static int spufs_fill_dir(struct dentry *dir,
const struct spufs_tree_descr *files, int mode,
struct spu_context *ctx)
static int spufs_dir_close(struct inode *inode, struct file *file)
const struct file_operations spufs_context_fops = ;
EXPORT_SYMBOL_GPL(spufs_context_fops);
static int
spufs_mkdir(struct inode *dir, struct dentry *dentry, unsigned int flags,
int mode)
static int spufs_context_open(struct dentry *dentry, struct vfsmount *mnt)
static struct spu_context *
spufs_assert_affinity(unsigned int flags, struct spu_gang *gang,
struct file *filp)
static void
spufs_set_affinity(unsigned int flags, struct spu_context *ctx,
struct spu_context *neighbor)
static int
spufs_create_context(struct inode *inode, struct dentry *dentry,
struct vfsmount *mnt, int flags, int mode,
struct file *aff_filp)
static int
spufs_mkgang(struct inode *dir, struct dentry *dentry, int mode)
static int spufs_gang_open(struct dentry *dentry, struct vfsmount *mnt)
static int spufs_create_gang(struct inode *inode,
struct dentry *dentry,
struct vfsmount *mnt, int mode)
static struct file_system_type spufs_type;
long spufs_create(struct nameidata *nd, unsigned int flags, mode_t mode,
struct file *filp)
enum ;
static const match_table_t spufs_tokens = ;
static int
spufs_parse_options(struct super_block *sb, char *options, struct inode *root)
static void spufs_exit_isolated_loader(void)
static void
spufs_init_isolated_loader(void)
static int
spufs_create_root(struct super_block *sb, void *data)
static int
spufs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *
spufs_mount(struct file_system_type *fstype, int flags,
const char *name, void *data)
static struct file_system_type spufs_type = ;
static int __init spufs_init(void)
module_init(spufs_init);
static void __exit spufs_exit(void)
module_exit(spufs_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnd Bergmann <arndb@de.ibm.com>");
