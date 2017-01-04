static int efs_readpage(struct file *file, struct page *page)
static sector_t _efs_bmap(struct address_space *mapping, sector_t block)
static const struct address_space_operations efs_aops = ;
static inline void extent_copy(efs_extent *src, efs_extent *dst)
struct inode *efs_iget(struct super_block *super, unsigned long ino)
static inline efs_block_t
efs_extent_check(efs_extent *ptr, efs_block_t block, struct efs_sb_info *sb)
efs_block_t efs_map_block(struct inode *inode, efs_block_t block)
MODULE_LICENSE("GPL");
