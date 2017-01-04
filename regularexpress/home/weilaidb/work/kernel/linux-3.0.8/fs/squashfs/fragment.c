int squashfs_frag_lookup(struct super_block *sb, unsigned int fragment,
u64 *fragment_block)
__le64 *squashfs_read_fragment_index_table(struct super_block *sb,
u64 fragment_table_start, u64 next_table, unsigned int fragments)
