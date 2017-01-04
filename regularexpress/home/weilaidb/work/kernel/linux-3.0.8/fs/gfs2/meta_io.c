static int gfs2_aspace_writepage(struct page *page, struct writeback_control *wbc)
const struct address_space_operations gfs2_meta_aops = ;
void gfs2_meta_sync(struct gfs2_glock *gl)
struct buffer_head *gfs2_getbuf(struct gfs2_glock *gl, u64 blkno, int create)
static void meta_prep_new(struct buffer_head *bh)
struct buffer_head *gfs2_meta_new(struct gfs2_glock *gl, u64 blkno)
int gfs2_meta_read(struct gfs2_glock *gl, u64 blkno, int flags,
struct buffer_head **bhp)
int gfs2_meta_wait(struct gfs2_sbd *sdp, struct buffer_head *bh)
void gfs2_attach_bufdata(struct gfs2_glock *gl, struct buffer_head *bh,
int meta)
void gfs2_remove_from_journal(struct buffer_head *bh, struct gfs2_trans *tr, int meta)
void gfs2_meta_wipe(struct gfs2_inode *ip, u64 bstart, u32 blen)
int gfs2_meta_indirect_buffer(struct gfs2_inode *ip, int height, u64 num,
int new, struct buffer_head **bhp)
struct buffer_head *gfs2_meta_ra(struct gfs2_glock *gl, u64 dblock, u32 extlen)
