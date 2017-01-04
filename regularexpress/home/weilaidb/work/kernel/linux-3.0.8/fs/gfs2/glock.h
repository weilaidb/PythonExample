#define __GLOCK_DOT_H__
enum ;
#define LM_TYPE_RESERVED	0x00
#define LM_TYPE_NONDISK		0x01
#define LM_TYPE_INODE		0x02
#define LM_TYPE_RGRP		0x03
#define LM_TYPE_META		0x04
#define LM_TYPE_IOPEN		0x05
#define LM_TYPE_FLOCK		0x06
#define LM_TYPE_PLOCK		0x07
#define LM_TYPE_QUOTA		0x08
#define LM_TYPE_JOURNAL		0x09
#define LM_ST_UNLOCKED		0
#define LM_ST_EXCLUSIVE		1
#define LM_ST_DEFERRED		2
#define LM_ST_SHARED		3
#define LM_FLAG_TRY		0x00000001
#define LM_FLAG_TRY_1CB		0x00000002
#define LM_FLAG_NOEXP		0x00000004
#define LM_FLAG_ANY		0x00000008
#define LM_FLAG_PRIORITY	0x00000010
#define GL_ASYNC		0x00000040
#define GL_EXACT		0x00000080
#define GL_SKIP			0x00000100
#define GL_NOCACHE		0x00000400
#define LM_OUT_ST_MASK		0x00000003
#define LM_OUT_CANCELED		0x00000008
#define LM_OUT_ERROR		0x00000004
#define LM_RD_GAVEUP		308
#define LM_RD_SUCCESS		309
#define GLR_TRYFAILED		13
struct lm_lockops ;
extern struct workqueue_struct *gfs2_delete_workqueue;
static inline struct gfs2_holder *gfs2_glock_is_locked_by_me(struct gfs2_glock *gl)
static inline int gfs2_glock_is_held_excl(struct gfs2_glock *gl)
static inline int gfs2_glock_is_held_dfrd(struct gfs2_glock *gl)
static inline int gfs2_glock_is_held_shrd(struct gfs2_glock *gl)
static inline struct address_space *gfs2_glock2aspace(struct gfs2_glock *gl)
int gfs2_glock_get(struct gfs2_sbd *sdp,
u64 number, const struct gfs2_glock_operations *glops,
int create, struct gfs2_glock **glp);
void gfs2_glock_hold(struct gfs2_glock *gl);
void gfs2_glock_put_nolock(struct gfs2_glock *gl);
void gfs2_glock_put(struct gfs2_glock *gl);
void gfs2_holder_init(struct gfs2_glock *gl, unsigned int state, unsigned flags,
struct gfs2_holder *gh);
void gfs2_holder_reinit(unsigned int state, unsigned flags,
struct gfs2_holder *gh);
void gfs2_holder_uninit(struct gfs2_holder *gh);
int gfs2_glock_nq(struct gfs2_holder *gh);
int gfs2_glock_poll(struct gfs2_holder *gh);
int gfs2_glock_wait(struct gfs2_holder *gh);
void gfs2_glock_dq(struct gfs2_holder *gh);
void gfs2_glock_dq_wait(struct gfs2_holder *gh);
void gfs2_glock_dq_uninit(struct gfs2_holder *gh);
int gfs2_glock_nq_num(struct gfs2_sbd *sdp,
u64 number, const struct gfs2_glock_operations *glops,
unsigned int state, int flags, struct gfs2_holder *gh);
int gfs2_glock_nq_m(unsigned int num_gh, struct gfs2_holder *ghs);
void gfs2_glock_dq_m(unsigned int num_gh, struct gfs2_holder *ghs);
void gfs2_glock_dq_uninit_m(unsigned int num_gh, struct gfs2_holder *ghs);
__attribute__ ((format(printf, 2, 3)))
void gfs2_print_dbg(struct seq_file *seq, const char *fmt, ...);
static inline int gfs2_glock_nq_init(struct gfs2_glock *gl,
unsigned int state, int flags,
struct gfs2_holder *gh)
extern void gfs2_glock_cb(struct gfs2_glock *gl, unsigned int state);
extern void gfs2_glock_complete(struct gfs2_glock *gl, int ret);
extern void gfs2_gl_hash_clear(struct gfs2_sbd *sdp);
extern void gfs2_glock_finish_truncate(struct gfs2_inode *ip);
extern void gfs2_glock_thaw(struct gfs2_sbd *sdp);
extern void gfs2_glock_add_to_lru(struct gfs2_glock *gl);
extern void gfs2_glock_free(struct gfs2_glock *gl);
extern int __init gfs2_glock_init(void);
extern void gfs2_glock_exit(void);
extern int gfs2_create_debugfs_file(struct gfs2_sbd *sdp);
extern void gfs2_delete_debugfs_file(struct gfs2_sbd *sdp);
extern int gfs2_register_debugfs(void);
extern void gfs2_unregister_debugfs(void);
extern const struct lm_lockops gfs2_dlm_ops;
