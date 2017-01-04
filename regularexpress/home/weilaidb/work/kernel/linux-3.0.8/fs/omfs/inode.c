MODULE_AUTHOR("Bob Copeland <me@bobcopeland.com>");
MODULE_DESCRIPTION("OMFS (ReplayTV/Karma) Filesystem for Linux");
MODULE_LICENSE("GPL");
struct buffer_head *omfs_bread(struct super_block *sb, sector_t block)
struct inode *omfs_new_inode(struct inode *dir, int mode)
static void omfs_update_checksums(struct omfs_inode *oi)
static int __omfs_write_inode(struct inode *inode, int wait)
static int omfs_write_inode(struct inode *inode, struct writeback_control *wbc)
int omfs_sync_inode(struct inode *inode)
static void omfs_evict_inode(struct inode *inode)
struct inode *omfs_iget(struct super_block *sb, ino_t ino)
static void omfs_put_super(struct super_block *sb)
static int omfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static const struct super_operations omfs_sops = ;
static int omfs_get_imap(struct super_block *sb)
enum ;
static const match_table_t tokens = ;
static int parse_options(char *options, struct omfs_sb_info *sbi)
static int omfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *omfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type omfs_fs_type = ;
static int __init init_omfs_fs(void)
static void __exit exit_omfs_fs(void)
module_init(init_omfs_fs);
module_exit(exit_omfs_fs);
