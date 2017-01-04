struct kmem_cache *gfs2_glock_cachep __read_mostly;
struct kmem_cache *gfs2_glock_aspace_cachep __read_mostly;
struct kmem_cache *gfs2_inode_cachep __read_mostly;
struct kmem_cache *gfs2_bufdata_cachep __read_mostly;
struct kmem_cache *gfs2_rgrpd_cachep __read_mostly;
struct kmem_cache *gfs2_quotad_cachep __read_mostly;
void gfs2_assert_i(struct gfs2_sbd *sdp)
int gfs2_lm_withdraw(struct gfs2_sbd *sdp, char *fmt, ...)
int gfs2_assert_withdraw_i(struct gfs2_sbd *sdp, char *assertion,
const char *function, char *file, unsigned int line)
int gfs2_assert_warn_i(struct gfs2_sbd *sdp, char *assertion,
const char *function, char *file, unsigned int line)
int gfs2_consist_i(struct gfs2_sbd *sdp, int cluster_wide, const char *function,
char *file, unsigned int line)
int gfs2_consist_inode_i(struct gfs2_inode *ip, int cluster_wide,
const char *function, char *file, unsigned int line)
int gfs2_consist_rgrpd_i(struct gfs2_rgrpd *rgd, int cluster_wide,
const char *function, char *file, unsigned int line)
int gfs2_meta_check_ii(struct gfs2_sbd *sdp, struct buffer_head *bh,
const char *type, const char *function, char *file,
unsigned int line)
int gfs2_metatype_check_ii(struct gfs2_sbd *sdp, struct buffer_head *bh,
u16 type, u16 t, const char *function,
char *file, unsigned int line)
int gfs2_io_error_i(struct gfs2_sbd *sdp, const char *function, char *file,
unsigned int line)
int gfs2_io_error_bh_i(struct gfs2_sbd *sdp, struct buffer_head *bh,
const char *function, char *file, unsigned int line)
void gfs2_icbit_munge(struct gfs2_sbd *sdp, unsigned char **bitmap,
unsigned int bit, int new_value)
