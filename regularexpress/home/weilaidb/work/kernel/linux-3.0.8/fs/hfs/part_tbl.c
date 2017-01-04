struct new_pmap  __packed;
struct old_pmap  __packed;
int hfs_part_find(struct super_block *sb,
sector_t *part_start, sector_t *part_size)
