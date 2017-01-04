struct ext4_system_zone ;
static struct kmem_cache *ext4_system_zone_cachep;
int __init ext4_init_system_zone(void)
void ext4_exit_system_zone(void)
static inline int can_merge(struct ext4_system_zone *entry1,
struct ext4_system_zone *entry2)
static int add_system_zone(struct ext4_sb_info *sbi,
ext4_fsblk_t start_blk,
unsigned int count)
static void debug_print_tree(struct ext4_sb_info *sbi)
int ext4_setup_system_zone(struct super_block *sb)
void ext4_release_system_zone(struct super_block *sb)
int ext4_data_block_valid(struct ext4_sb_info *sbi, ext4_fsblk_t start_blk,
unsigned int count)
