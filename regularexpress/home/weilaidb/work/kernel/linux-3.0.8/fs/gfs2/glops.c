static void __gfs2_ail_flush(struct gfs2_glock *gl)
static void gfs2_ail_empty_gl(struct gfs2_glock *gl)
void gfs2_ail_flush(struct gfs2_glock *gl)
static void rgrp_go_sync(struct gfs2_glock *gl)
static void rgrp_go_inval(struct gfs2_glock *gl, int flags)
static void inode_go_sync(struct gfs2_glock *gl)
static void inode_go_inval(struct gfs2_glock *gl, int flags)
static int inode_go_demote_ok(const struct gfs2_glock *gl)
static void gfs2_set_nlink(struct inode *inode, u32 nlink)
static int gfs2_dinode_in(struct gfs2_inode *ip, const void *buf)
int gfs2_inode_refresh(struct gfs2_inode *ip)
static int inode_go_lock(struct gfs2_holder *gh)
static int inode_go_dump(struct seq_file *seq, const struct gfs2_glock *gl)
static int rgrp_go_lock(struct gfs2_holder *gh)
static void rgrp_go_unlock(struct gfs2_holder *gh)
static void trans_go_sync(struct gfs2_glock *gl)
static int trans_go_xmote_bh(struct gfs2_glock *gl, struct gfs2_holder *gh)
static int trans_go_demote_ok(const struct gfs2_glock *gl)
static void iopen_go_callback(struct gfs2_glock *gl)
const struct gfs2_glock_operations gfs2_meta_glops = ;
const struct gfs2_glock_operations gfs2_inode_glops = ;
const struct gfs2_glock_operations gfs2_rgrp_glops = ;
const struct gfs2_glock_operations gfs2_trans_glops = ;
const struct gfs2_glock_operations gfs2_iopen_glops = ;
const struct gfs2_glock_operations gfs2_flock_glops = ;
const struct gfs2_glock_operations gfs2_nondisk_glops = ;
const struct gfs2_glock_operations gfs2_quota_glops = ;
const struct gfs2_glock_operations gfs2_journal_glops = ;
const struct gfs2_glock_operations *gfs2_glops_list[] = ;
