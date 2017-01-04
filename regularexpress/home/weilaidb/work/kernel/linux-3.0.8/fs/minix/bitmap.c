static const int nibblemap[] = ;
static DEFINE_SPINLOCK(bitmap_lock);
static unsigned long count_free(struct buffer_head *map[], unsigned numblocks, __u32 numbits)
void minix_free_block(struct inode *inode, unsigned long block)
int minix_new_block(struct inode * inode)
unsigned long minix_count_free_blocks(struct minix_sb_info *sbi)
struct minix_inode *
minix_V1_raw_inode(struct super_block *sb, ino_t ino, struct buffer_head **bh)
struct minix2_inode *
minix_V2_raw_inode(struct super_block *sb, ino_t ino, struct buffer_head **bh)
static void minix_clear_inode(struct inode *inode)
void minix_free_inode(struct inode * inode)
struct inode *minix_new_inode(const struct inode *dir, int mode, int *error)
unsigned long minix_count_free_inodes(struct minix_sb_info *sbi)
