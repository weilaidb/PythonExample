#define __DIO_DOT_H__
static inline void gfs2_buffer_clear(struct buffer_head *bh)
static inline void gfs2_buffer_clear_tail(struct buffer_head *bh, int head)
static inline void gfs2_buffer_copy_tail(struct buffer_head *to_bh,
int to_head,
struct buffer_head *from_bh,
int from_head)
extern const struct address_space_operations gfs2_meta_aops;
static inline struct gfs2_sbd *gfs2_mapping2sbd(struct address_space *mapping)
void gfs2_meta_sync(struct gfs2_glock *gl);
struct buffer_head *gfs2_meta_new(struct gfs2_glock *gl, u64 blkno);
int gfs2_meta_read(struct gfs2_glock *gl, u64 blkno,
int flags, struct buffer_head **bhp);
int gfs2_meta_wait(struct gfs2_sbd *sdp, struct buffer_head *bh);
struct buffer_head *gfs2_getbuf(struct gfs2_glock *gl, u64 blkno, int create);
void gfs2_attach_bufdata(struct gfs2_glock *gl, struct buffer_head *bh,
int meta);
void gfs2_remove_from_journal(struct buffer_head *bh, struct gfs2_trans *tr,
int meta);
void gfs2_meta_wipe(struct gfs2_inode *ip, u64 bstart, u32 blen);
int gfs2_meta_indirect_buffer(struct gfs2_inode *ip, int height, u64 num,
int new, struct buffer_head **bhp);
static inline int gfs2_meta_inode_buffer(struct gfs2_inode *ip,
struct buffer_head **bhp)
struct buffer_head *gfs2_meta_ra(struct gfs2_glock *gl, u64 dblock, u32 extlen);
#define buffer_busy(bh) \
((bh)->b_state & ((1ul << BH_Dirty) | (1ul << BH_Lock) | (1ul << BH_Pinned)))
