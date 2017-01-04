uint32_t udf_get_pblock(struct super_block *sb, uint32_t block,
uint16_t partition, uint32_t offset)
uint32_t udf_get_pblock_virt15(struct super_block *sb, uint32_t block,
uint16_t partition, uint32_t offset)
inline uint32_t udf_get_pblock_virt20(struct super_block *sb, uint32_t block,
uint16_t partition, uint32_t offset)
uint32_t udf_get_pblock_spar15(struct super_block *sb, uint32_t block,
uint16_t partition, uint32_t offset)
int udf_relocate_blocks(struct super_block *sb, long old_block, long *new_block)
static uint32_t udf_try_read_meta(struct inode *inode, uint32_t block,
uint16_t partition, uint32_t offset)
uint32_t udf_get_pblock_meta25(struct super_block *sb, uint32_t block,
uint16_t partition, uint32_t offset)
