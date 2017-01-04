static DEFINE_MUTEX(op_mutex);
#define OPENPROM_ROOT_INO	0
enum op_inode_type ;
union op_inode_data ;
struct op_inode_info ;
static struct inode *openprom_iget(struct super_block *sb, ino_t ino);
static inline struct op_inode_info *OP_I(struct inode *inode)
static int is_string(unsigned char *p, int len)
static int property_show(struct seq_file *f, void *v)
static void *property_start(struct seq_file *f, loff_t *pos)
static void *property_next(struct seq_file *f, void *v, loff_t *pos)
static void property_stop(struct seq_file *f, void *v)
static const struct seq_operations property_op = ;
static int property_open(struct inode *inode, struct file *file)
static const struct file_operations openpromfs_prop_ops = ;
static int openpromfs_readdir(struct file *, void *, filldir_t);
static const struct file_operations openprom_operations = ;
static struct dentry *openpromfs_lookup(struct inode *, struct dentry *, struct nameidata *);
static const struct inode_operations openprom_inode_operations = ;
static struct dentry *openpromfs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static int openpromfs_readdir(struct file * filp, void * dirent, filldir_t filldir)
static struct kmem_cache *op_inode_cachep;
static struct inode *openprom_alloc_inode(struct super_block *sb)
static void openprom_i_callback(struct rcu_head *head)
static void openprom_destroy_inode(struct inode *inode)
static struct inode *openprom_iget(struct super_block *sb, ino_t ino)
static int openprom_remount(struct super_block *sb, int *flags, char *data)
static const struct super_operations openprom_sops = ;
static int openprom_fill_super(struct super_block *s, void *data, int silent)
static struct dentry *openprom_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type openprom_fs_type = ;
static void op_inode_init_once(void *data)
static int __init init_openprom_fs(void)
static void __exit exit_openprom_fs(void)
module_init(init_openprom_fs)
module_exit(exit_openprom_fs)
MODULE_LICENSE("GPL");
