struct exofs_mountopt ;
enum ;
static match_table_t tokens = ;
static int parse_options(char *options, struct exofs_mountopt *opts)
static struct kmem_cache *exofs_inode_cachep;
static struct inode *exofs_alloc_inode(struct super_block *sb)
static void exofs_i_callback(struct rcu_head *head)
static void exofs_destroy_inode(struct inode *inode)
static void exofs_init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static const struct super_operations exofs_sops;
static const struct export_operations exofs_export_ops;
static const struct osd_attr g_attr_sb_stats = ATTR_DEF(
EXOFS_APAGE_SB_DATA,
EXOFS_ATTR_SB_STATS,
sizeof(struct exofs_sb_stats));
static int __sbi_read_stats(struct exofs_sb_info *sbi)
static void stats_done(struct exofs_io_state *ios, void *p)
int exofs_sbi_write_stats(struct exofs_sb_info *sbi)
int exofs_sync_fs(struct super_block *sb, int wait)
static void exofs_write_super(struct super_block *sb)
static void _exofs_print_device(const char *msg, const char *dev_path,
struct osd_dev *od, u64 pid)
void exofs_free_sbi(struct exofs_sb_info *sbi)
static void exofs_put_super(struct super_block *sb)
static int _read_and_match_data_map(struct exofs_sb_info *sbi, unsigned numdevs,
struct exofs_device_table *dt)
static unsigned __ra_pages(struct exofs_layout *layout)
static int exofs_devs_2_odi(struct exofs_dt_device_info *dt_dev,
struct osd_dev_info *odi)
static int exofs_read_lookup_dev_table(struct exofs_sb_info **psbi,
unsigned table_count)
static int exofs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *exofs_mount(struct file_system_type *type,
int flags, const char *dev_name,
void *data)
static int exofs_statfs(struct dentry *dentry, struct kstatfs *buf)
static const struct super_operations exofs_sops = ;
struct dentry *exofs_get_parent(struct dentry *child)
static struct inode *exofs_nfs_get_inode(struct super_block *sb,
u64 ino, u32 generation)
static struct dentry *exofs_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static struct dentry *exofs_fh_to_parent(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static const struct export_operations exofs_export_ops = ;
static struct file_system_type exofs_type = ;
static int __init init_exofs(void)
static void __exit exit_exofs(void)
MODULE_AUTHOR("Avishay Traeger <avishay@gmail.com>");
MODULE_DESCRIPTION("exofs");
MODULE_LICENSE("GPL");
module_init(init_exofs)
module_exit(exit_exofs)
