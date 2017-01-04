static int hfs_get_last_session(struct super_block *sb,
sector_t *start, sector_t *size)
int hfs_mdb_get(struct super_block *sb)
void hfs_mdb_commit(struct super_block *sb)
void hfs_mdb_close(struct super_block *sb)
void hfs_mdb_put(struct super_block *sb)
