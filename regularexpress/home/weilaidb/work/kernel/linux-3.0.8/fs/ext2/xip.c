static inline int
__inode_direct_access(struct inode *inode, sector_t block,
void **kaddr, unsigned long *pfn)
static inline int
__ext2_get_block(struct inode *inode, pgoff_t pgoff, int create,
sector_t *result)
int
ext2_clear_xip_target(struct inode *inode, sector_t block)
void ext2_xip_verify_sb(struct super_block *sb)
int ext2_get_xip_mem(struct address_space *mapping, pgoff_t pgoff, int create,
void **kmem, unsigned long *pfn)
