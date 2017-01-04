#define OCFS2_BUFFER_HEAD_IO_H
void ocfs2_end_buffer_io_sync(struct buffer_head *bh,
int uptodate);
int ocfs2_write_block(struct ocfs2_super          *osb,
struct buffer_head  *bh,
struct ocfs2_caching_info   *ci);
int ocfs2_read_blocks_sync(struct ocfs2_super *osb, u64 block,
unsigned int nr, struct buffer_head *bhs[]);
int ocfs2_read_blocks(struct ocfs2_caching_info *ci, u64 block, int nr,
struct buffer_head *bhs[], int flags,
int (*validate)(struct super_block *sb,
struct buffer_head *bh));
int ocfs2_write_super_or_backup(struct ocfs2_super *osb,
struct buffer_head *bh);
#define OCFS2_BH_IGNORE_CACHE      1
#define OCFS2_BH_READAHEAD         8
static inline int ocfs2_read_block(struct ocfs2_caching_info *ci, u64 off,
struct buffer_head **bh,
int (*validate)(struct super_block *sb,
struct buffer_head *bh))
