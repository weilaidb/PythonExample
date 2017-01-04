int gfs2_trans_begin(struct gfs2_sbd *sdp, unsigned int blocks,
unsigned int revokes)
static void gfs2_log_release(struct gfs2_sbd *sdp, unsigned int blks)
void gfs2_trans_end(struct gfs2_sbd *sdp)
void gfs2_trans_add_bh(struct gfs2_glock *gl, struct buffer_head *bh, int meta)
void gfs2_trans_add_revoke(struct gfs2_sbd *sdp, struct gfs2_bufdata *bd)
void gfs2_trans_add_unrevoke(struct gfs2_sbd *sdp, u64 blkno, unsigned int len)
void gfs2_trans_add_rg(struct gfs2_rgrpd *rgd)
