static void mark_dirty(struct super_block *s, int remount)
static void unmark_dirty(struct super_block *s)
static char err_buf[1024];
void hpfs_error(struct super_block *s, const char *fmt, ...)
int hpfs_stop_cycles(struct super_block *s, int key, int *c1, int *c2,
char *msg)
static void hpfs_put_super(struct super_block *s)
unsigned hpfs_count_one_bitmap(struct super_block *s, secno secno)
static unsigned count_bitmaps(struct super_block *s)
static int hpfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static struct kmem_cache * hpfs_inode_cachep;
static struct inode *hpfs_alloc_inode(struct super_block *sb)
static void hpfs_i_callback(struct rcu_head *head)
static void hpfs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
enum ;
static const match_table_t tokens = ;
static int parse_opts(char *opts, uid_t *uid, gid_t *gid, umode_t *umask,
int *lowercase, int *eas, int *chk, int *errs,
int *chkdsk, int *timeshift)
static inline void hpfs_help(void)
static int hpfs_remount_fs(struct super_block *s, int *flags, char *data)
static const struct super_operations hpfs_sops =
;
static int hpfs_fill_super(struct super_block *s, void *options, int silent)
static struct dentry *hpfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type hpfs_fs_type = ;
static int __init init_hpfs_fs(void)
static void __exit exit_hpfs_fs(void)
module_init(init_hpfs_fs)
module_exit(exit_hpfs_fs)
MODULE_LICENSE("GPL");
