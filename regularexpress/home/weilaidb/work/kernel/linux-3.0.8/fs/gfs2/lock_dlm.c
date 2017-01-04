static void gdlm_ast(void *arg)
static void gdlm_bast(void *arg, int mode)
static int make_mode(const unsigned int lmstate)
static u32 make_flags(const u32 lkid, const unsigned int gfs_flags,
const int req)
static int gdlm_lock(struct gfs2_glock *gl, unsigned int req_state,
unsigned int flags)
static void gdlm_put_lock(struct gfs2_glock *gl)
static void gdlm_cancel(struct gfs2_glock *gl)
static int gdlm_mount(struct gfs2_sbd *sdp, const char *fsname)
static void gdlm_unmount(struct gfs2_sbd *sdp)
static const match_table_t dlm_tokens = ;
const struct lm_lockops gfs2_dlm_ops = ;
