static DEFINE_MUTEX(emergency_mutex);
static struct page *emergency_page;
struct page *emergency_read_begin(struct address_space *mapping, pgoff_t index)
void emergency_read_end(struct page *page)
static void dump_segfile(struct super_block *sb)
void logfs_crash_dump(struct super_block *sb)
void *memchr_inv(const void *s, int c, size_t n)
int logfs_statfs(struct dentry *dentry, struct kstatfs *stats)
static int logfs_sb_set(struct super_block *sb, void *_super)
static int logfs_sb_test(struct super_block *sb, void *_super)
static void set_segment_header(struct logfs_segment_header *sh, u8 type,
u8 level, u32 segno, u32 ec)
static void logfs_write_ds(struct super_block *sb, struct logfs_disk_super *ds,
u32 segno, u32 ec)
static int write_one_sb(struct super_block *sb,
struct page *(*find_sb)(struct super_block *sb, u64 *ofs))
int logfs_write_sb(struct super_block *sb)
static int ds_cmp(const void *ds0, const void *ds1)
static int logfs_recover_sb(struct super_block *sb)
static int logfs_make_writeable(struct super_block *sb)
static int logfs_get_sb_final(struct super_block *sb)
int logfs_check_ds(struct logfs_disk_super *ds)
static struct page *find_super_block(struct super_block *sb)
static int __logfs_read_sb(struct super_block *sb)
static int logfs_read_sb(struct super_block *sb, int read_only)
static void logfs_kill_sb(struct super_block *sb)
static struct dentry *logfs_get_sb_device(struct logfs_super *super,
struct file_system_type *type, int flags)
static struct dentry *logfs_mount(struct file_system_type *type, int flags,
const char *devname, void *data)
static struct file_system_type logfs_fs_type = ;
static int __init logfs_init(void)
static void __exit logfs_exit(void)
module_init(logfs_init);
module_exit(logfs_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Joern Engel <joern@logfs.org>");
MODULE_DESCRIPTION("scalable flash filesystem");
