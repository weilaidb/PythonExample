#define CONFIG_FAT_DEFAULT_IOCHARSET	""
static int fat_default_codepage = CONFIG_FAT_DEFAULT_CODEPAGE;
static char fat_default_iocharset[] = CONFIG_FAT_DEFAULT_IOCHARSET;
static int fat_add_cluster(struct inode *inode)
static inline int __fat_get_block(struct inode *inode, sector_t iblock,
unsigned long *max_blocks,
struct buffer_head *bh_result, int create)
static int fat_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
static int fat_writepage(struct page *page, struct writeback_control *wbc)
static int fat_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int fat_readpage(struct file *file, struct page *page)
static int fat_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static void fat_write_failed(struct address_space *mapping, loff_t to)
static int fat_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int fat_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *pagep, void *fsdata)
static ssize_t fat_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov,
loff_t offset, unsigned long nr_segs)
static sector_t _fat_bmap(struct address_space *mapping, sector_t block)
static const struct address_space_operations fat_aops = ;
static void fat_hash_init(struct super_block *sb)
static inline unsigned long fat_hash(loff_t i_pos)
void fat_attach(struct inode *inode, loff_t i_pos)
EXPORT_SYMBOL_GPL(fat_attach);
void fat_detach(struct inode *inode)
EXPORT_SYMBOL_GPL(fat_detach);
struct inode *fat_iget(struct super_block *sb, loff_t i_pos)
static int is_exec(unsigned char *extension)
static int fat_calc_dir_size(struct inode *inode)
static int fat_fill_inode(struct inode *inode, struct msdos_dir_entry *de)
struct inode *fat_build_inode(struct super_block *sb,
struct msdos_dir_entry *de, loff_t i_pos)
EXPORT_SYMBOL_GPL(fat_build_inode);
static void fat_evict_inode(struct inode *inode)
static void fat_write_super(struct super_block *sb)
static int fat_sync_fs(struct super_block *sb, int wait)
static void fat_put_super(struct super_block *sb)
static struct kmem_cache *fat_inode_cachep;
static struct inode *fat_alloc_inode(struct super_block *sb)
static void fat_i_callback(struct rcu_head *head)
static void fat_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int __init fat_init_inodecache(void)
static void __exit fat_destroy_inodecache(void)
static int fat_remount(struct super_block *sb, int *flags, char *data)
static int fat_statfs(struct dentry *dentry, struct kstatfs *buf)
static inline loff_t fat_i_pos_read(struct msdos_sb_info *sbi,
struct inode *inode)
static int __fat_write_inode(struct inode *inode, int wait)
static int fat_write_inode(struct inode *inode, struct writeback_control *wbc)
int fat_sync_inode(struct inode *inode)
EXPORT_SYMBOL_GPL(fat_sync_inode);
static int fat_show_options(struct seq_file *m, struct vfsmount *mnt);
static const struct super_operations fat_sops = ;
static struct dentry *fat_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static int
fat_encode_fh(struct dentry *de, __u32 *fh, int *lenp, int connectable)
static struct dentry *fat_get_parent(struct dentry *child)
static const struct export_operations fat_export_ops = ;
static int fat_show_options(struct seq_file *m, struct vfsmount *mnt)
enum ;
static const match_table_t fat_tokens = ;
static const match_table_t msdos_tokens = ;
static const match_table_t vfat_tokens = ;
static int parse_options(struct super_block *sb, char *options, int is_vfat,
int silent, int *debug, struct fat_mount_options *opts)
static int fat_read_root(struct inode *inode)
int fat_fill_super(struct super_block *sb, void *data, int silent, int isvfat,
void (*setup)(struct super_block *))
EXPORT_SYMBOL_GPL(fat_fill_super);
static int writeback_inode(struct inode *inode)
int fat_flush_inodes(struct super_block *sb, struct inode *i1, struct inode *i2)
EXPORT_SYMBOL_GPL(fat_flush_inodes);
static int __init init_fat_fs(void)
static void __exit exit_fat_fs(void)
module_init(init_fat_fs)
module_exit(exit_fat_fs)
MODULE_LICENSE("GPL");
