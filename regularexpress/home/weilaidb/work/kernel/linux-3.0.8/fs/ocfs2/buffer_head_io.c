enum ocfs2_state_bits ;
BUFFER_FNS(NeedsValidate, needs_validate);
int ocfs2_write_block(struct ocfs2_super *osb, struct buffer_head *bh,
struct ocfs2_caching_info *ci)
int ocfs2_read_blocks_sync(struct ocfs2_super *osb, u64 block,
unsigned int nr, struct buffer_head *bhs[])
int ocfs2_read_blocks(struct ocfs2_caching_info *ci, u64 block, int nr,
struct buffer_head *bhs[], int flags,
int (*validate)(struct super_block *sb,
struct buffer_head *bh))
static void ocfs2_check_super_or_backup(struct super_block *sb,
sector_t blkno)
int ocfs2_write_super_or_backup(struct ocfs2_super *osb,
struct buffer_head *bh)
