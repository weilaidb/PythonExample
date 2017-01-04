enum ;
typedef u32 block_t;
static inline unsigned long block_to_cpu(block_t n)
static inline block_t cpu_to_block(unsigned long n)
static inline block_t *i_data(struct inode *inode)
#define DIRCOUNT 7
#define INDIRCOUNT(sb) (1 << ((sb)->s_blocksize_bits - 2))
static int block_to_path(struct inode * inode, long block, int offsets[DEPTH])
int V2_minix_get_block(struct inode * inode, long block,
struct buffer_head *bh_result, int create)
void V2_minix_truncate(struct inode * inode)
unsigned V2_minix_blocks(loff_t size, struct super_block *sb)
