int squashfs_get_id(struct super_block *sb, unsigned int index,
unsigned int *id)
__le64 *squashfs_read_id_index_table(struct super_block *sb,
u64 id_table_start, u64 next_table, unsigned short no_ids)
