void ext4_mark_bitmap_end(int start_bit, int end_bit, char *bitmap)
static unsigned ext4_init_inode_bitmap(struct super_block *sb,
struct buffer_head *bh,
ext4_group_t block_group,
struct ext4_group_desc *gdp)
static struct buffer_head *
ext4_read_inode_bitmap(struct super_block *sb, ext4_group_t block_group)
void ext4_free_inode(handle_t *handle, struct inode *inode)
static int find_group_dir(struct super_block *sb, struct inode *parent,
ext4_group_t *best_group)
#define free_block_ratio 10
static int find_group_flex(struct super_block *sb, struct inode *parent,
ext4_group_t *best_group)
struct orlov_stats ;
static void get_orlov_stats(struct super_block *sb, ext4_group_t g,
int flex_size, struct orlov_stats *stats)
static int find_group_orlov(struct super_block *sb, struct inode *parent,
ext4_group_t *group, int mode,
const struct qstr *qstr)
static int find_group_other(struct super_block *sb, struct inode *parent,
ext4_group_t *group, int mode)
static int ext4_claim_inode(struct super_block *sb,
struct buffer_head *inode_bitmap_bh,
unsigned long ino, ext4_group_t group, int mode)
struct inode *ext4_new_inode(handle_t *handle, struct inode *dir, int mode,
const struct qstr *qstr, __u32 goal)
struct inode *ext4_orphan_get(struct super_block *sb, unsigned long ino)
unsigned long ext4_count_free_inodes(struct super_block *sb)
unsigned long ext4_count_dirs(struct super_block * sb)
extern int ext4_init_inode_table(struct super_block *sb, ext4_group_t group,
int barrier)
