#define __LOG_DOT_H__
static inline void gfs2_log_lock(struct gfs2_sbd *sdp)
__acquires(&sdp->sd_log_lock)
static inline void gfs2_log_unlock(struct gfs2_sbd *sdp)
__releases(&sdp->sd_log_lock)
static inline void gfs2_log_pointers_init(struct gfs2_sbd *sdp,
unsigned int value)
extern unsigned int gfs2_struct2blk(struct gfs2_sbd *sdp, unsigned int nstruct,
unsigned int ssize);
extern int gfs2_log_reserve(struct gfs2_sbd *sdp, unsigned int blks);
extern void gfs2_log_incr_head(struct gfs2_sbd *sdp);
extern struct buffer_head *gfs2_log_get_buf(struct gfs2_sbd *sdp);
extern struct buffer_head *gfs2_log_fake_buf(struct gfs2_sbd *sdp,
struct buffer_head *real);
extern void gfs2_log_flush(struct gfs2_sbd *sdp, struct gfs2_glock *gl);
extern void gfs2_log_commit(struct gfs2_sbd *sdp, struct gfs2_trans *trans);
extern void gfs2_remove_from_ail(struct gfs2_bufdata *bd);
extern void gfs2_ail1_flush(struct gfs2_sbd *sdp, struct writeback_control *wbc);
extern void gfs2_log_shutdown(struct gfs2_sbd *sdp);
extern void gfs2_meta_syncfs(struct gfs2_sbd *sdp);
extern int gfs2_logd(void *data);
