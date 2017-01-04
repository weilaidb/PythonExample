#define __UTIL_DOT_H__
#define fs_printk(level, fs, fmt, arg...) \
printk(level "GFS2: fsid=%s: " fmt , (fs)->sd_fsname , ## arg)
#define fs_info(fs, fmt, arg...) \
fs_printk(KERN_INFO , fs , fmt , ## arg)
#define fs_warn(fs, fmt, arg...) \
fs_printk(KERN_WARNING , fs , fmt , ## arg)
#define fs_err(fs, fmt, arg...) \
fs_printk(KERN_ERR, fs , fmt , ## arg)
void gfs2_assert_i(struct gfs2_sbd *sdp);
#define gfs2_assert(sdp, assertion) \
do  while (0)
int gfs2_assert_withdraw_i(struct gfs2_sbd *sdp, char *assertion,
const char *function, char *file, unsigned int line);
#define gfs2_assert_withdraw(sdp, assertion) \
((likely(assertion)) ? 0 : gfs2_assert_withdraw_i((sdp), #assertion, \
__func__, __FILE__, __LINE__))
int gfs2_assert_warn_i(struct gfs2_sbd *sdp, char *assertion,
const char *function, char *file, unsigned int line);
#define gfs2_assert_warn(sdp, assertion) \
((likely(assertion)) ? 0 : gfs2_assert_warn_i((sdp), #assertion, \
__func__, __FILE__, __LINE__))
int gfs2_consist_i(struct gfs2_sbd *sdp, int cluster_wide,
const char *function, char *file, unsigned int line);
#define gfs2_consist(sdp) \
gfs2_consist_i((sdp), 0, __func__, __FILE__, __LINE__)
int gfs2_consist_inode_i(struct gfs2_inode *ip, int cluster_wide,
const char *function, char *file, unsigned int line);
#define gfs2_consist_inode(ip) \
gfs2_consist_inode_i((ip), 0, __func__, __FILE__, __LINE__)
int gfs2_consist_rgrpd_i(struct gfs2_rgrpd *rgd, int cluster_wide,
const char *function, char *file, unsigned int line);
#define gfs2_consist_rgrpd(rgd) \
gfs2_consist_rgrpd_i((rgd), 0, __func__, __FILE__, __LINE__)
int gfs2_meta_check_ii(struct gfs2_sbd *sdp, struct buffer_head *bh,
const char *type, const char *function,
char *file, unsigned int line);
static inline int gfs2_meta_check_i(struct gfs2_sbd *sdp,
struct buffer_head *bh,
const char *function,
char *file, unsigned int line)
#define gfs2_meta_check(sdp, bh) \
gfs2_meta_check_i((sdp), (bh), __func__, __FILE__, __LINE__)
int gfs2_metatype_check_ii(struct gfs2_sbd *sdp, struct buffer_head *bh,
u16 type, u16 t,
const char *function,
char *file, unsigned int line);
static inline int gfs2_metatype_check_i(struct gfs2_sbd *sdp,
struct buffer_head *bh,
u16 type,
const char *function,
char *file, unsigned int line)
#define gfs2_metatype_check(sdp, bh, type) \
gfs2_metatype_check_i((sdp), (bh), (type), __func__, __FILE__, __LINE__)
static inline void gfs2_metatype_set(struct buffer_head *bh, u16 type,
u16 format)
int gfs2_io_error_i(struct gfs2_sbd *sdp, const char *function,
char *file, unsigned int line);
#define gfs2_io_error(sdp) \
gfs2_io_error_i((sdp), __func__, __FILE__, __LINE__);
int gfs2_io_error_bh_i(struct gfs2_sbd *sdp, struct buffer_head *bh,
const char *function, char *file, unsigned int line);
#define gfs2_io_error_bh(sdp, bh) \
gfs2_io_error_bh_i((sdp), (bh), __func__, __FILE__, __LINE__);
extern struct kmem_cache *gfs2_glock_cachep;
extern struct kmem_cache *gfs2_glock_aspace_cachep;
extern struct kmem_cache *gfs2_inode_cachep;
extern struct kmem_cache *gfs2_bufdata_cachep;
extern struct kmem_cache *gfs2_rgrpd_cachep;
extern struct kmem_cache *gfs2_quotad_cachep;
static inline unsigned int gfs2_tune_get_i(struct gfs2_tune *gt,
unsigned int *p)
#define gfs2_tune_get(sdp, field) \
gfs2_tune_get_i(&(sdp)->sd_tune, &(sdp)->sd_tune.field)
void gfs2_icbit_munge(struct gfs2_sbd *sdp, unsigned char **bitmap,
unsigned int bit, int new_value);
int gfs2_lm_withdraw(struct gfs2_sbd *sdp, char *fmt, ...);
