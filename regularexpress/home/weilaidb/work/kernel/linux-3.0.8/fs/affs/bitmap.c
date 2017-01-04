static const int nibblemap[] = ;
static u32
affs_count_free_bits(u32 blocksize, const void *data)
u32
affs_count_free_blocks(struct super_block *sb)
void
affs_free_block(struct super_block *sb, u32 block)
u32
affs_alloc_block(struct inode *inode, u32 goal)
int affs_init_bitmap(struct super_block *sb, int *flags)
void affs_free_bitmap(struct super_block *sb)
