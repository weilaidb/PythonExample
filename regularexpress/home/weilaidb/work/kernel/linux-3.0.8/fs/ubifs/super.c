#define UBIFS_KMALLOC_OK (128*1024)
struct kmem_cache *ubifs_inode_slab;
static struct shrinker ubifs_shrinker_info = ;
static int validate_inode(struct ubifs_info *c, const struct inode *inode)
struct inode *ubifs_iget(struct super_block *sb, unsigned long inum)
static struct inode *ubifs_alloc_inode(struct super_block *sb)
;
static void ubifs_i_callback(struct rcu_head *head)
static void ubifs_destroy_inode(struct inode *inode)
static int ubifs_write_inode(struct inode *inode, struct writeback_control *wbc)
static void ubifs_evict_inode(struct inode *inode)
static void ubifs_dirty_inode(struct inode *inode, int flags)
static int ubifs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int ubifs_show_options(struct seq_file *s, struct vfsmount *mnt)
static int ubifs_sync_fs(struct super_block *sb, int wait)
static int init_constants_early(struct ubifs_info *c)
static int bud_wbuf_callback(struct ubifs_info *c, int lnum, int free, int pad)
static int init_constants_sb(struct ubifs_info *c)
static void init_constants_master(struct ubifs_info *c)
static int take_gc_lnum(struct ubifs_info *c)
static int alloc_wbufs(struct ubifs_info *c)
static void free_wbufs(struct ubifs_info *c)
static void free_orphans(struct ubifs_info *c)
static void free_buds(struct ubifs_info *c)
static int check_volume_empty(struct ubifs_info *c)
enum ;
static const match_table_t tokens = ;
static int parse_standard_option(const char *option)
static int ubifs_parse_options(struct ubifs_info *c, char *options,
int is_remount)
static void destroy_journal(struct ubifs_info *c)
static void bu_init(struct ubifs_info *c)
static int check_free_space(struct ubifs_info *c)
static int mount_ubifs(struct ubifs_info *c)
static void ubifs_umount(struct ubifs_info *c)
static int ubifs_remount_rw(struct ubifs_info *c)
static void ubifs_remount_ro(struct ubifs_info *c)
static void ubifs_put_super(struct super_block *sb)
static int ubifs_remount_fs(struct super_block *sb, int *flags, char *data)
const struct super_operations ubifs_super_operations = ;
static struct ubi_volume_desc *open_ubi(const char *name, int mode)
static struct ubifs_info *alloc_ubifs_info(struct ubi_volume_desc *ubi)
static int ubifs_fill_super(struct super_block *sb, void *data, int silent)
static int sb_test(struct super_block *sb, void *data)
static int sb_set(struct super_block *sb, void *data)
static struct dentry *ubifs_mount(struct file_system_type *fs_type, int flags,
const char *name, void *data)
static void kill_ubifs_super(struct super_block *s)
static struct file_system_type ubifs_fs_type = ;
static void inode_slab_ctor(void *obj)
static int __init ubifs_init(void)
late_initcall(ubifs_init);
static void __exit ubifs_exit(void)
module_exit(ubifs_exit);
MODULE_LICENSE("GPL");
MODULE_VERSION(__stringify(UBIFS_VERSION));
MODULE_AUTHOR("Artem Bityutskiy, Adrian Hunter");
MODULE_DESCRIPTION("UBIFS - UBI File System");
