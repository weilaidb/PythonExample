#define ADFS_DEFAULT_OWNER_MASK S_IRWXU
#define ADFS_DEFAULT_OTHER_MASK (S_IRWXG | S_IRWXO)
void __adfs_error(struct super_block *sb, const char *function, const char *fmt, ...)
static int adfs_checkdiscrecord(struct adfs_discrecord *dr)
static unsigned char adfs_calczonecheck(struct super_block *sb, unsigned char *map)
static int adfs_checkmap(struct super_block *sb, struct adfs_discmap *dm)
static void adfs_put_super(struct super_block *sb)
static int adfs_show_options(struct seq_file *seq, struct vfsmount *mnt)
enum ;
static const match_table_t tokens = ;
static int parse_options(struct super_block *sb, char *options)
static int adfs_remount(struct super_block *sb, int *flags, char *data)
static int adfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static struct kmem_cache *adfs_inode_cachep;
static struct inode *adfs_alloc_inode(struct super_block *sb)
static void adfs_i_callback(struct rcu_head *head)
static void adfs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static const struct super_operations adfs_sops = ;
static struct adfs_discmap *adfs_read_map(struct super_block *sb, struct adfs_discrecord *dr)
static inline unsigned long adfs_discsize(struct adfs_discrecord *dr, int block_bits)
static int adfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *adfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type adfs_fs_type = ;
static int __init init_adfs_fs(void)
static void __exit exit_adfs_fs(void)
module_init(init_adfs_fs)
module_exit(exit_adfs_fs)
MODULE_LICENSE("GPL");
