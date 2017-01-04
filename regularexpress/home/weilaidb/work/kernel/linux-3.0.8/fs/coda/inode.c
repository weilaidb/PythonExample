static void coda_evict_inode(struct inode *);
static void coda_put_super(struct super_block *);
static int coda_statfs(struct dentry *dentry, struct kstatfs *buf);
static struct kmem_cache * coda_inode_cachep;
static struct inode *coda_alloc_inode(struct super_block *sb)
static void coda_i_callback(struct rcu_head *head)
static void coda_destroy_inode(struct inode *inode)
static void init_once(void *foo)
int coda_init_inodecache(void)
void coda_destroy_inodecache(void)
static int coda_remount(struct super_block *sb, int *flags, char *data)
static const struct super_operations coda_super_operations =
;
static int get_device_index(struct coda_mount_data *data)
static int coda_fill_super(struct super_block *sb, void *data, int silent)
static void coda_put_super(struct super_block *sb)
static void coda_evict_inode(struct inode *inode)
int coda_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
int coda_setattr(struct dentry *de, struct iattr *iattr)
const struct inode_operations coda_file_inode_operations = ;
static int coda_statfs(struct dentry *dentry, struct kstatfs *buf)
static struct dentry *coda_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
struct file_system_type coda_fs_type = ;
