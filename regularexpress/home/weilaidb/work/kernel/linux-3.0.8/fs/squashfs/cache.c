struct squashfs_cache_entry *squashfs_cache_get(struct super_block *sb,
struct squashfs_cache *cache, u64 block, int length)
void squashfs_cache_put(struct squashfs_cache_entry *entry)
void squashfs_cache_delete(struct squashfs_cache *cache)
struct squashfs_cache *squashfs_cache_init(char *name, int entries,
int block_size)
int squashfs_copy_data(void *buffer, struct squashfs_cache_entry *entry,
int offset, int length)
int squashfs_read_metadata(struct super_block *sb, void *buffer,
u64 *block, int *offset, int length)
struct squashfs_cache_entry *squashfs_get_fragment(struct super_block *sb,
u64 start_block, int length)
struct squashfs_cache_entry *squashfs_get_datablock(struct super_block *sb,
u64 start_block, int length)
void *squashfs_read_table(struct super_block *sb, u64 block, int length)
