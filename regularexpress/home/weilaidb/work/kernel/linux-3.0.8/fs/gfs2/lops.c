static void gfs2_pin(struct gfs2_sbd *sdp, struct buffer_head *bh)
static void gfs2_unpin(struct gfs2_sbd *sdp, struct buffer_head *bh,
struct gfs2_ail *ai)
static inline struct gfs2_log_descriptor *bh_log_desc(struct buffer_head *bh)
static inline __be64 *bh_log_ptr(struct buffer_head *bh)
static inline __be64 *bh_ptr_end(struct buffer_head *bh)
static struct buffer_head *gfs2_get_log_desc(struct gfs2_sbd *sdp, u32 ld_type)
static void buf_lo_add(struct gfs2_sbd *sdp, struct gfs2_log_element *le)
static void buf_lo_before_commit(struct gfs2_sbd *sdp)
static void buf_lo_after_commit(struct gfs2_sbd *sdp, struct gfs2_ail *ai)
static void buf_lo_before_scan(struct gfs2_jdesc *jd,
struct gfs2_log_header_host *head, int pass)
static int buf_lo_scan_elements(struct gfs2_jdesc *jd, unsigned int start,
struct gfs2_log_descriptor *ld, __be64 *ptr,
int pass)
static void buf_lo_after_scan(struct gfs2_jdesc *jd, int error, int pass)
static void revoke_lo_add(struct gfs2_sbd *sdp, struct gfs2_log_element *le)
static void revoke_lo_before_commit(struct gfs2_sbd *sdp)
static void revoke_lo_after_commit(struct gfs2_sbd *sdp, struct gfs2_ail *ai)
static void revoke_lo_before_scan(struct gfs2_jdesc *jd,
struct gfs2_log_header_host *head, int pass)
static int revoke_lo_scan_elements(struct gfs2_jdesc *jd, unsigned int start,
struct gfs2_log_descriptor *ld, __be64 *ptr,
int pass)
static void revoke_lo_after_scan(struct gfs2_jdesc *jd, int error, int pass)
static void rg_lo_add(struct gfs2_sbd *sdp, struct gfs2_log_element *le)
static void rg_lo_after_commit(struct gfs2_sbd *sdp, struct gfs2_ail *ai)
static void databuf_lo_add(struct gfs2_sbd *sdp, struct gfs2_log_element *le)
static void gfs2_check_magic(struct buffer_head *bh)
static void gfs2_write_blocks(struct gfs2_sbd *sdp, struct buffer_head *bh,
struct list_head *list, struct list_head *done,
unsigned int n)
static void databuf_lo_before_commit(struct gfs2_sbd *sdp)
static int databuf_lo_scan_elements(struct gfs2_jdesc *jd, unsigned int start,
struct gfs2_log_descriptor *ld,
__be64 *ptr, int pass)
static void databuf_lo_after_scan(struct gfs2_jdesc *jd, int error, int pass)
static void databuf_lo_after_commit(struct gfs2_sbd *sdp, struct gfs2_ail *ai)
const struct gfs2_log_operations gfs2_buf_lops = ;
const struct gfs2_log_operations gfs2_revoke_lops = ;
const struct gfs2_log_operations gfs2_rg_lops = ;
const struct gfs2_log_operations gfs2_databuf_lops = ;
const struct gfs2_log_operations *gfs2_log_ops[] = ;
