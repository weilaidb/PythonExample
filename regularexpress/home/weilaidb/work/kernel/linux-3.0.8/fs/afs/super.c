#define AFS_FS_MAGIC 0x6B414653
static void afs_i_init_once(void *foo);
static struct dentry *afs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data);
static void afs_kill_super(struct super_block *sb);
static struct inode *afs_alloc_inode(struct super_block *sb);
static void afs_destroy_inode(struct inode *inode);
static int afs_statfs(struct dentry *dentry, struct kstatfs *buf);
struct file_system_type afs_fs_type = ;
static const struct super_operations afs_super_ops = ;
static struct kmem_cache *afs_inode_cachep;
static atomic_t afs_count_active_inodes;
enum ;
static const match_table_t afs_options_list = ;
int __init afs_fs_init(void)
void __exit afs_fs_exit(void)
static int afs_parse_options(struct afs_mount_params *params,
char *options, const char **devname)
static int afs_parse_device_name(struct afs_mount_params *params,
const char *name)
static int afs_test_super(struct super_block *sb, void *data)
static int afs_set_super(struct super_block *sb, void *data)
static int afs_fill_super(struct super_block *sb,
struct afs_mount_params *params)
static struct dentry *afs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *options)
static void afs_kill_super(struct super_block *sb)
static void afs_i_init_once(void *_vnode)
static struct inode *afs_alloc_inode(struct super_block *sb)
static void afs_i_callback(struct rcu_head *head)
static void afs_destroy_inode(struct inode *inode)
static int afs_statfs(struct dentry *dentry, struct kstatfs *buf)
