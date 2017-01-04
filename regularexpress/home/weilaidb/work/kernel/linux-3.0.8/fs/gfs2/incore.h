#define __INCORE_DOT_H__
#define DIO_WAIT	0x00000010
#define DIO_METADATA	0x00000020
struct gfs2_log_operations;
struct gfs2_log_element;
struct gfs2_holder;
struct gfs2_glock;
struct gfs2_quota_data;
struct gfs2_trans;
struct gfs2_ail;
struct gfs2_jdesc;
struct gfs2_sbd;
struct lm_lockops;
typedef void (*gfs2_glop_bh_t) (struct gfs2_glock *gl, unsigned int ret);
struct gfs2_log_header_host ;
struct gfs2_log_operations ;
struct gfs2_log_element ;
#define GBF_FULL 1
struct gfs2_bitmap ;
struct gfs2_rgrpd ;
enum gfs2_state_bits ;
BUFFER_FNS(Pinned, pinned)
TAS_BUFFER_FNS(Pinned, pinned)
BUFFER_FNS(Escaped, escaped)
TAS_BUFFER_FNS(Escaped, escaped)
struct gfs2_bufdata ;
#define GDLM_STRNAME_BYTES	25
#define GDLM_LVB_SIZE		32
enum ;
struct lm_lockname ;
#define lm_name_equal(name1, name2) \
(((name1)->ln_number == (name2)->ln_number) && \
((name1)->ln_type == (name2)->ln_type))
struct gfs2_glock_operations ;
enum ;
struct gfs2_holder ;
enum ;
struct gfs2_glock ;
#define GFS2_MIN_LVB_SIZE 32
struct gfs2_alloc ;
enum ;
struct gfs2_inode ;
static inline struct gfs2_inode *GFS2_I(struct inode *inode)
static inline struct gfs2_sbd *GFS2_SB(const struct inode *inode)
struct gfs2_file ;
struct gfs2_revoke_replay ;
enum ;
struct gfs2_quota_data ;
struct gfs2_trans ;
struct gfs2_ail ;
struct gfs2_journal_extent ;
struct gfs2_jdesc ;
struct gfs2_statfs_change_host ;
#define GFS2_QUOTA_DEFAULT	GFS2_QUOTA_OFF
#define GFS2_QUOTA_OFF		0
#define GFS2_QUOTA_ACCOUNT	1
#define GFS2_QUOTA_ON		2
#define GFS2_DATA_DEFAULT	GFS2_DATA_ORDERED
#define GFS2_DATA_WRITEBACK	1
#define GFS2_DATA_ORDERED	2
#define GFS2_ERRORS_DEFAULT     GFS2_ERRORS_WITHDRAW
#define GFS2_ERRORS_WITHDRAW    0
#define GFS2_ERRORS_CONTINUE    1
#define GFS2_ERRORS_RO          2
#define GFS2_ERRORS_PANIC       3
struct gfs2_args ;
struct gfs2_tune ;
enum ;
#define GFS2_FSNAME_LEN		256
struct gfs2_inum_host ;
struct gfs2_sb_host ;
struct lm_lockstruct ;
struct gfs2_sbd ;
