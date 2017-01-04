enum ;
typedef u16 block_t;
static inline unsigned long block_to_cpu(block_t n)
static inline block_t cpu_to_block(unsigned long n)
static inline block_t *i_data(struct inode *inode)
static int block_to_path(struct inode * inode, long block, int offsets[DEPTH])
int V1_minix_get_block(struct inode * inode, long block,
struct buffer_head *bh_result, int create)
void V1_minix_truncate(struct inode * inode)
unsigned V1_minix_blocks(loff_t size, struct super_block *sb)
