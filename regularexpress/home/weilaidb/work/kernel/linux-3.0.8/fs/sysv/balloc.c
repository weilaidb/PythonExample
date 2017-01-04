static inline sysv_zone_t *get_chunk(struct super_block *sb, struct buffer_head *bh)
void sysv_free_block(struct super_block * sb, sysv_zone_t nr)
sysv_zone_t sysv_new_block(struct super_block * sb)
unsigned long sysv_count_free_blocks(struct super_block * sb)
