#define PAGE_CACHE_BITS	(PAGE_CACHE_SIZE * 8)
int hfsplus_block_allocate(struct super_block *sb, u32 size,
u32 offset, u32 *max)
int hfsplus_block_free(struct super_block *sb, u32 offset, u32 count)
