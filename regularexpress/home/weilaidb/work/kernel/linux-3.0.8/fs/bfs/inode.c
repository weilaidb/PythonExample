MODULE_AUTHOR("Tigran Aivazian <tigran@aivazian.fsnet.co.uk>");
MODULE_DESCRIPTION("SCO UnixWare BFS filesystem for Linux");
MODULE_LICENSE("GPL");
#undef DEBUG
#define dprintf(x...)	printf(x)
#define dprintf(x...)
void dump_imap(const char *prefix, struct super_block *s);
struct inode *bfs_iget(struct super_block *sb, unsigned long ino)
static struct bfs_inode *find_inode(struct super_block *sb, u16 ino, struct buffer_head **p)
static int bfs_write_inode(struct inode *inode, struct writeback_control *wbc)
static void bfs_evict_inode(struct inode *inode)
static void bfs_put_super(struct super_block *s)
static int bfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static struct kmem_cache *bfs_inode_cachep;
static struct inode *bfs_alloc_inode(struct super_block *sb)
static void bfs_i_callback(struct rcu_head *head)
static void bfs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static const struct super_operations bfs_sops = ;
void dump_imap(const char *prefix, struct super_block *s)
static int bfs_fill_super(struct super_block *s, void *data, int silent)
static struct dentry *bfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type bfs_fs_type = ;
static int __init init_bfs_fs(void)
static void __exit exit_bfs_fs(void)
module_init(init_bfs_fs)
module_exit(exit_bfs_fs)
