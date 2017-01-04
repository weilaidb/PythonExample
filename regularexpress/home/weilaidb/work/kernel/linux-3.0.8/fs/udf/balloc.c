#define udf_clear_bit	__test_and_clear_bit_le
#define udf_set_bit	__test_and_set_bit_le
#define udf_test_bit	test_bit_le
#define udf_find_next_one_bit	find_next_bit_le
static int read_block_bitmap(struct super_block *sb,
struct udf_bitmap *bitmap, unsigned int block,
unsigned long bitmap_nr)
static int __load_block_bitmap(struct super_block *sb,
struct udf_bitmap *bitmap,
unsigned int block_group)
static inline int load_block_bitmap(struct super_block *sb,
struct udf_bitmap *bitmap,
unsigned int block_group)
static void udf_add_free_space(struct super_block *sb, u16 partition, u32 cnt)
static void udf_bitmap_free_blocks(struct super_block *sb,
struct inode *inode,
struct udf_bitmap *bitmap,
struct kernel_lb_addr *bloc,
uint32_t offset,
uint32_t count)
static int udf_bitmap_prealloc_blocks(struct super_block *sb,
struct inode *inode,
struct udf_bitmap *bitmap,
uint16_t partition, uint32_t first_block,
uint32_t block_count)
static int udf_bitmap_new_block(struct super_block *sb,
struct inode *inode,
struct udf_bitmap *bitmap, uint16_t partition,
uint32_t goal, int *err)
static void udf_table_free_blocks(struct super_block *sb,
struct inode *inode,
struct inode *table,
struct kernel_lb_addr *bloc,
uint32_t offset,
uint32_t count)
static int udf_table_prealloc_blocks(struct super_block *sb,
struct inode *inode,
struct inode *table, uint16_t partition,
uint32_t first_block, uint32_t block_count)
static int udf_table_new_block(struct super_block *sb,
struct inode *inode,
struct inode *table, uint16_t partition,
uint32_t goal, int *err)
void udf_free_blocks(struct super_block *sb, struct inode *inode,
struct kernel_lb_addr *bloc, uint32_t offset,
uint32_t count)
inline int udf_prealloc_blocks(struct super_block *sb,
struct inode *inode,
uint16_t partition, uint32_t first_block,
uint32_t block_count)
inline int udf_new_block(struct super_block *sb,
struct inode *inode,
uint16_t partition, uint32_t goal, int *err)
