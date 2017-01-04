#define QUOTA_USER 1
#define QUOTA_GROUP 0
struct gfs2_quota_change_host ;
static LIST_HEAD(qd_lru_list);
static atomic_t qd_lru_count = ATOMIC_INIT(0);
static DEFINE_SPINLOCK(qd_lru_lock);
int gfs2_shrink_qd_memory(struct shrinker *shrink, struct shrink_control *sc)
static u64 qd2offset(struct gfs2_quota_data *qd)
static int qd_alloc(struct gfs2_sbd *sdp, int user, u32 id,
struct gfs2_quota_data **qdp)
static int qd_get(struct gfs2_sbd *sdp, int user, u32 id,
struct gfs2_quota_data **qdp)
static void qd_hold(struct gfs2_quota_data *qd)
static void qd_put(struct gfs2_quota_data *qd)
static int slot_get(struct gfs2_quota_data *qd)
static void slot_hold(struct gfs2_quota_data *qd)
static void slot_put(struct gfs2_quota_data *qd)
static int bh_get(struct gfs2_quota_data *qd)
static void bh_put(struct gfs2_quota_data *qd)
static int qd_fish(struct gfs2_sbd *sdp, struct gfs2_quota_data **qdp)
static int qd_trylock(struct gfs2_quota_data *qd)
static void qd_unlock(struct gfs2_quota_data *qd)
static int qdsb_get(struct gfs2_sbd *sdp, int user, u32 id,
struct gfs2_quota_data **qdp)
static void qdsb_put(struct gfs2_quota_data *qd)
int gfs2_quota_hold(struct gfs2_inode *ip, u32 uid, u32 gid)
void gfs2_quota_unhold(struct gfs2_inode *ip)
static int sort_qd(const void *a, const void *b)
static void do_qc(struct gfs2_quota_data *qd, s64 change)
static int gfs2_adjust_quota(struct gfs2_inode *ip, loff_t loc,
s64 change, struct gfs2_quota_data *qd,
struct fs_disk_quota *fdq)
static int do_sync(unsigned int num_qd, struct gfs2_quota_data **qda)
static int update_qd(struct gfs2_sbd *sdp, struct gfs2_quota_data *qd)
static int do_glock(struct gfs2_quota_data *qd, int force_refresh,
struct gfs2_holder *q_gh)
int gfs2_quota_lock(struct gfs2_inode *ip, u32 uid, u32 gid)
static int need_sync(struct gfs2_quota_data *qd)
void gfs2_quota_unlock(struct gfs2_inode *ip)
#define MAX_LINE 256
static int print_message(struct gfs2_quota_data *qd, char *type)
int gfs2_quota_check(struct gfs2_inode *ip, u32 uid, u32 gid)
void gfs2_quota_change(struct gfs2_inode *ip, s64 change,
u32 uid, u32 gid)
int gfs2_quota_sync(struct super_block *sb, int type, int wait)
static int gfs2_quota_sync_timeo(struct super_block *sb, int type)
int gfs2_quota_refresh(struct gfs2_sbd *sdp, int user, u32 id)
static void gfs2_quota_change_in(struct gfs2_quota_change_host *qc, const void *buf)
int gfs2_quota_init(struct gfs2_sbd *sdp)
void gfs2_quota_cleanup(struct gfs2_sbd *sdp)
static void quotad_error(struct gfs2_sbd *sdp, const char *msg, int error)
static void quotad_check_timeo(struct gfs2_sbd *sdp, const char *msg,
int (*fxn)(struct super_block *sb, int type),
unsigned long t, unsigned long *timeo,
unsigned int *new_timeo)
static void quotad_check_trunc_list(struct gfs2_sbd *sdp)
void gfs2_wake_up_statfs(struct gfs2_sbd *sdp)
int gfs2_quotad(void *data)
static int gfs2_quota_get_xstate(struct super_block *sb,
struct fs_quota_stat *fqs)
static int gfs2_get_dqblk(struct super_block *sb, int type, qid_t id,
struct fs_disk_quota *fdq)
#define GFS2_FIELDMASK (FS_DQ_BSOFT|FS_DQ_BHARD|FS_DQ_BCOUNT)
static int gfs2_set_dqblk(struct super_block *sb, int type, qid_t id,
struct fs_disk_quota *fdq)
const struct quotactl_ops gfs2_quotactl_ops = ;
