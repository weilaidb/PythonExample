static int sysv_sync_fs(struct super_block *sb, int wait)
static void sysv_write_super(struct super_block *sb)
static int sysv_remount(struct super_block *sb, int *flags, char *data)
static void sysv_put_super(struct super_block *sb)
static int sysv_statfs(struct dentry *dentry, struct kstatfs *buf)
static inline void read3byte(struct sysv_sb_info *sbi,
unsigned char * from, unsigned char * to)
static inline void write3byte(struct sysv_sb_info *sbi,
unsigned char * from, unsigned char * to)
static const struct inode_operations sysv_symlink_inode_operations = ;
void sysv_set_inode(struct inode *inode, dev_t rdev)
struct inode *sysv_iget(struct super_block *sb, unsigned int ino)
static int __sysv_write_inode(struct inode *inode, int wait)
int sysv_write_inode(struct inode *inode, struct writeback_control *wbc)
int sysv_sync_inode(struct inode *inode)
static void sysv_evict_inode(struct inode *inode)
static struct kmem_cache *sysv_inode_cachep;
static struct inode *sysv_alloc_inode(struct super_block *sb)
static void sysv_i_callback(struct rcu_head *head)
static void sysv_destroy_inode(struct inode *inode)
static void init_once(void *p)
const struct super_operations sysv_sops = ;
int __init sysv_init_icache(void)
void sysv_destroy_icache(void)
