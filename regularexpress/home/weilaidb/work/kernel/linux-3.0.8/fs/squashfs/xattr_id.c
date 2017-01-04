int squashfs_xattr_lookup(struct super_block *sb, unsigned int index,
int *count, unsigned int *size, unsigned long long *xattr)
__le64 *squashfs_read_xattr_id_table(struct super_block *sb, u64 start,
u64 *xattr_table_start, int *xattr_ids)
