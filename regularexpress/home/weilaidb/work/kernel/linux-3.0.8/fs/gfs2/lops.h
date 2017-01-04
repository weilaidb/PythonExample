#define __LOPS_DOT_H__
#define BUF_OFFSET \
((sizeof(struct gfs2_log_descriptor) + sizeof(__be64) - 1) & \
~(sizeof(__be64) - 1))
#define DATABUF_OFFSET \
((sizeof(struct gfs2_log_descriptor) + (2 * sizeof(__be64) - 1)) & \
~(2 * sizeof(__be64) - 1))
extern const struct gfs2_log_operations gfs2_glock_lops;
extern const struct gfs2_log_operations gfs2_buf_lops;
extern const struct gfs2_log_operations gfs2_revoke_lops;
extern const struct gfs2_log_operations gfs2_rg_lops;
extern const struct gfs2_log_operations gfs2_databuf_lops;
extern const struct gfs2_log_operations *gfs2_log_ops[];
static inline unsigned int buf_limit(struct gfs2_sbd *sdp)
static inline unsigned int databuf_limit(struct gfs2_sbd *sdp)
static inline void lops_init_le(struct gfs2_log_element *le,
const struct gfs2_log_operations *lops)
static inline void lops_add(struct gfs2_sbd *sdp, struct gfs2_log_element *le)
static inline void lops_before_commit(struct gfs2_sbd *sdp)
static inline void lops_after_commit(struct gfs2_sbd *sdp, struct gfs2_ail *ai)
static inline void lops_before_scan(struct gfs2_jdesc *jd,
struct gfs2_log_header_host *head,
unsigned int pass)
static inline int lops_scan_elements(struct gfs2_jdesc *jd, unsigned int start,
struct gfs2_log_descriptor *ld,
__be64 *ptr,
unsigned int pass)
static inline void lops_after_scan(struct gfs2_jdesc *jd, int error,
unsigned int pass)
