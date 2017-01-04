static struct buffer_head *get_block_length(struct super_block *sb,
u64 *cur_index, int *offset, int *length)
int squashfs_read_data(struct super_block *sb, void **buffer, u64 index,
int length, u64 *next_index, int srclength, int pages)
