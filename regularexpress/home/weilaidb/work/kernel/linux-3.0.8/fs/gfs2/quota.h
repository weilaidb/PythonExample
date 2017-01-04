#define __QUOTA_DOT_H__
struct gfs2_inode;
struct gfs2_sbd;
struct shrink_control;
#define NO_QUOTA_CHANGE ((u32)-1)
extern int gfs2_quota_hold(struct gfs2_inode *ip, u32 uid, u32 gid);
extern void gfs2_quota_unhold(struct gfs2_inode *ip);
extern int gfs2_quota_lock(struct gfs2_inode *ip, u32 uid, u32 gid);
extern void gfs2_quota_unlock(struct gfs2_inode *ip);
extern int gfs2_quota_check(struct gfs2_inode *ip, u32 uid, u32 gid);
extern void gfs2_quota_change(struct gfs2_inode *ip, s64 change,
u32 uid, u32 gid);
extern int gfs2_quota_sync(struct super_block *sb, int type, int wait);
extern int gfs2_quota_refresh(struct gfs2_sbd *sdp, int user, u32 id);
extern int gfs2_quota_init(struct gfs2_sbd *sdp);
extern void gfs2_quota_cleanup(struct gfs2_sbd *sdp);
extern int gfs2_quotad(void *data);
extern void gfs2_wake_up_statfs(struct gfs2_sbd *sdp);
static inline int gfs2_quota_lock_check(struct gfs2_inode *ip)
extern int gfs2_shrink_qd_memory(struct shrinker *shrink,
struct shrink_control *sc);
extern const struct quotactl_ops gfs2_quotactl_ops;
