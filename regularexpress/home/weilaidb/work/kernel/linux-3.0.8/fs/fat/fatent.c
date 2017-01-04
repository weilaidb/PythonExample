struct fatent_operations ;
static DEFINE_SPINLOCK(fat12_entry_lock);
static void fat12_ent_blocknr(struct super_block *sb, int entry,
int *offset, sector_t *blocknr)
static void fat_ent_blocknr(struct super_block *sb, int entry,
int *offset, sector_t *blocknr)
static void fat12_ent_set_ptr(struct fat_entry *fatent, int offset)
static void fat16_ent_set_ptr(struct fat_entry *fatent, int offset)
static void fat32_ent_set_ptr(struct fat_entry *fatent, int offset)
static int fat12_ent_bread(struct super_block *sb, struct fat_entry *fatent,
int offset, sector_t blocknr)
static int fat_ent_bread(struct super_block *sb, struct fat_entry *fatent,
int offset, sector_t blocknr)
static int fat12_ent_get(struct fat_entry *fatent)
static int fat16_ent_get(struct fat_entry *fatent)
static int fat32_ent_get(struct fat_entry *fatent)
static void fat12_ent_put(struct fat_entry *fatent, int new)
static void fat16_ent_put(struct fat_entry *fatent, int new)
static void fat32_ent_put(struct fat_entry *fatent, int new)
static int fat12_ent_next(struct fat_entry *fatent)
static int fat16_ent_next(struct fat_entry *fatent)
static int fat32_ent_next(struct fat_entry *fatent)
static struct fatent_operations fat12_ops = ;
static struct fatent_operations fat16_ops = ;
static struct fatent_operations fat32_ops = ;
static inline void lock_fat(struct msdos_sb_info *sbi)
static inline void unlock_fat(struct msdos_sb_info *sbi)
void fat_ent_access_init(struct super_block *sb)
static inline int fat_ent_update_ptr(struct super_block *sb,
struct fat_entry *fatent,
int offset, sector_t blocknr)
int fat_ent_read(struct inode *inode, struct fat_entry *fatent, int entry)
static int fat_mirror_bhs(struct super_block *sb, struct buffer_head **bhs,
int nr_bhs)
int fat_ent_write(struct inode *inode, struct fat_entry *fatent,
int new, int wait)
static inline int fat_ent_next(struct msdos_sb_info *sbi,
struct fat_entry *fatent)
static inline int fat_ent_read_block(struct super_block *sb,
struct fat_entry *fatent)
static void fat_collect_bhs(struct buffer_head **bhs, int *nr_bhs,
struct fat_entry *fatent)
int fat_alloc_clusters(struct inode *inode, int *cluster, int nr_cluster)
int fat_free_clusters(struct inode *inode, int cluster)
EXPORT_SYMBOL_GPL(fat_free_clusters);
#define FAT_READA_SIZE		(128 * 1024)
static void fat_ent_reada(struct super_block *sb, struct fat_entry *fatent,
unsigned long reada_blocks)
int fat_count_free_clusters(struct super_block *sb)
