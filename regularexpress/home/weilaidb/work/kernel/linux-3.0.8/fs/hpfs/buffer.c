void *hpfs_map_sector(struct super_block *s, unsigned secno, struct buffer_head **bhp,
int ahead)
void *hpfs_get_sector(struct super_block *s, unsigned secno, struct buffer_head **bhp)
void *hpfs_map_4sectors(struct super_block *s, unsigned secno, struct quad_buffer_head *qbh,
int ahead)
void *hpfs_get_4sectors(struct super_block *s, unsigned secno,
struct quad_buffer_head *qbh)
void hpfs_brelse4(struct quad_buffer_head *qbh)
void hpfs_mark_4buffers_dirty(struct quad_buffer_head *qbh)
