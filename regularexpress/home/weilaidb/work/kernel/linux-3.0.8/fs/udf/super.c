#define VDS_POS_PRIMARY_VOL_DESC	0
#define VDS_POS_UNALLOC_SPACE_DESC	1
#define VDS_POS_LOGICAL_VOL_DESC	2
#define VDS_POS_PARTITION_DESC		3
#define VDS_POS_IMP_USE_VOL_DESC	4
#define VDS_POS_VOL_DESC_PTR		5
#define VDS_POS_TERMINATING_DESC	6
#define VDS_POS_LENGTH			7
#define UDF_DEFAULT_BLOCKSIZE 2048
static char error_buf[1024];
static int udf_fill_super(struct super_block *, void *, int);
static void udf_put_super(struct super_block *);
static int udf_sync_fs(struct super_block *, int);
static int udf_remount_fs(struct super_block *, int *, char *);
static void udf_load_logicalvolint(struct super_block *, struct kernel_extent_ad);
static int udf_find_fileset(struct super_block *, struct kernel_lb_addr *,
struct kernel_lb_addr *);
static void udf_load_fileset(struct super_block *, struct buffer_head *,
struct kernel_lb_addr *);
static void udf_open_lvid(struct super_block *);
static void udf_close_lvid(struct super_block *);
static unsigned int udf_count_free(struct super_block *);
static int udf_statfs(struct dentry *, struct kstatfs *);
static int udf_show_options(struct seq_file *, struct vfsmount *);
static void udf_error(struct super_block *sb, const char *function,
const char *fmt, ...);
struct logicalVolIntegrityDescImpUse *udf_sb_lvidiu(struct udf_sb_info *sbi)
static struct dentry *udf_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type udf_fstype = ;
static struct kmem_cache *udf_inode_cachep;
static struct inode *udf_alloc_inode(struct super_block *sb)
static void udf_i_callback(struct rcu_head *head)
static void udf_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static const struct super_operations udf_sb_ops = ;
struct udf_options ;
static int __init init_udf_fs(void)
static void __exit exit_udf_fs(void)
module_init(init_udf_fs)
module_exit(exit_udf_fs)
static int udf_sb_alloc_partition_maps(struct super_block *sb, u32 count)
static int udf_show_options(struct seq_file *seq, struct vfsmount *mnt)
enum ;
static const match_table_t tokens = ;
static int udf_parse_options(char *options, struct udf_options *uopt,
bool remount)
static int udf_remount_fs(struct super_block *sb, int *flags, char *options)
static loff_t udf_check_vsd(struct super_block *sb)
static int udf_find_fileset(struct super_block *sb,
struct kernel_lb_addr *fileset,
struct kernel_lb_addr *root)
static int udf_load_pvoldesc(struct super_block *sb, sector_t block)
static int udf_load_metadata_files(struct super_block *sb, int partition)
static void udf_load_fileset(struct super_block *sb, struct buffer_head *bh,
struct kernel_lb_addr *root)
int udf_compute_nr_groups(struct super_block *sb, u32 partition)
static struct udf_bitmap *udf_sb_alloc_bitmap(struct super_block *sb, u32 index)
static int udf_fill_partdesc_info(struct super_block *sb,
struct partitionDesc *p, int p_index)
static void udf_find_vat_block(struct super_block *sb, int p_index,
int type1_index, sector_t start_block)
static int udf_load_vat(struct super_block *sb, int p_index, int type1_index)
static int udf_load_partdesc(struct super_block *sb, sector_t block)
static int udf_load_logicalvol(struct super_block *sb, sector_t block,
struct kernel_lb_addr *fileset)
static void udf_load_logicalvolint(struct super_block *sb, struct kernel_extent_ad loc)
static noinline int udf_process_sequence(struct super_block *sb, long block,
long lastblock, struct kernel_lb_addr *fileset)
static int udf_load_sequence(struct super_block *sb, struct buffer_head *bh,
struct kernel_lb_addr *fileset)
static int udf_check_anchor_block(struct super_block *sb, sector_t block,
struct kernel_lb_addr *fileset)
static sector_t udf_scan_anchors(struct super_block *sb, sector_t lastblock,
struct kernel_lb_addr *fileset)
static int udf_find_anchor(struct super_block *sb,
struct kernel_lb_addr *fileset)
static int udf_load_vrs(struct super_block *sb, struct udf_options *uopt,
int silent, struct kernel_lb_addr *fileset)
static void udf_open_lvid(struct super_block *sb)
static void udf_close_lvid(struct super_block *sb)
u64 lvid_get_unique_id(struct super_block *sb)
static void udf_sb_free_bitmap(struct udf_bitmap *bitmap)
static void udf_free_partition(struct udf_part_map *map)
static int udf_fill_super(struct super_block *sb, void *options, int silent)
static void udf_error(struct super_block *sb, const char *function,
const char *fmt, ...)
void udf_warning(struct super_block *sb, const char *function,
const char *fmt, ...)
static void udf_put_super(struct super_block *sb)
static int udf_sync_fs(struct super_block *sb, int wait)
static int udf_statfs(struct dentry *dentry, struct kstatfs *buf)
static unsigned int udf_count_free_bitmap(struct super_block *sb,
struct udf_bitmap *bitmap)
static unsigned int udf_count_free_table(struct super_block *sb,
struct inode *table)
static unsigned int udf_count_free(struct super_block *sb)
