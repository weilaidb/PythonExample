struct workqueue_struct *gfs_recovery_wq;
int gfs2_replay_read_block(struct gfs2_jdesc *jd, unsigned int blk,
struct buffer_head **bh)
int gfs2_revoke_add(struct gfs2_sbd *sdp, u64 blkno, unsigned int where)
int gfs2_revoke_check(struct gfs2_sbd *sdp, u64 blkno, unsigned int where)
void gfs2_revoke_clean(struct gfs2_sbd *sdp)
static int gfs2_log_header_in(struct gfs2_log_header_host *lh, const void *buf)
static int get_log_header(struct gfs2_jdesc *jd, unsigned int blk,
struct gfs2_log_header_host *head)
static int find_good_lh(struct gfs2_jdesc *jd, unsigned int *blk,
struct gfs2_log_header_host *head)
static int jhead_scan(struct gfs2_jdesc *jd, struct gfs2_log_header_host *head)
int gfs2_find_jhead(struct gfs2_jdesc *jd, struct gfs2_log_header_host *head)
static int foreach_descriptor(struct gfs2_jdesc *jd, unsigned int start,
unsigned int end, int pass)
static int clean_journal(struct gfs2_jdesc *jd, struct gfs2_log_header_host *head)
static void gfs2_recovery_done(struct gfs2_sbd *sdp, unsigned int jid,
unsigned int message)
void gfs2_recover_func(struct work_struct *work)
static int gfs2_recovery_wait(void *word)
int gfs2_recover_journal(struct gfs2_jdesc *jd, bool wait)
