#define __TRANS_DOT_H__
struct gfs2_sbd;
struct gfs2_rgrpd;
struct gfs2_glock;
#define RES_DINODE	1
#define RES_INDIRECT	1
#define RES_JDATA	1
#define RES_DATA	1
#define RES_LEAF	1
#define RES_RG_HDR	1
#define RES_RG_BIT	2
#define RES_EATTR	1
#define RES_STATFS	1
#define RES_QUOTA	2
static inline unsigned int gfs2_rg_blocks(const struct gfs2_alloc *al)
int gfs2_trans_begin(struct gfs2_sbd *sdp, unsigned int blocks,
unsigned int revokes);
void gfs2_trans_end(struct gfs2_sbd *sdp);
void gfs2_trans_add_bh(struct gfs2_glock *gl, struct buffer_head *bh, int meta);
void gfs2_trans_add_revoke(struct gfs2_sbd *sdp, struct gfs2_bufdata *bd);
void gfs2_trans_add_unrevoke(struct gfs2_sbd *sdp, u64 blkno, unsigned int len);
void gfs2_trans_add_rg(struct gfs2_rgrpd *rgd);
