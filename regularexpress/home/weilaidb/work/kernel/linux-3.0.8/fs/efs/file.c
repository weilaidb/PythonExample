int efs_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
int efs_bmap(struct inode *inode, efs_block_t block)
