#define DO 0
#define UNDO 1
static void gfs2_tune_init(struct gfs2_tune *gt)
static struct gfs2_sbd *init_sbd(struct super_block *sb)
static int gfs2_check_sb(struct gfs2_sbd *sdp, int silent)
static void end_bio_io_page(struct bio *bio, int error)
static void gfs2_sb_in(struct gfs2_sbd *sdp, const void *buf)
static int gfs2_read_super(struct gfs2_sbd *sdp, sector_t sector, int silent)
static int gfs2_read_sb(struct gfs2_sbd *sdp, int silent)
static int init_names(struct gfs2_sbd *sdp, int silent)
static int init_locking(struct gfs2_sbd *sdp, struct gfs2_holder *mount_gh,
int undo)
static int gfs2_lookup_root(struct super_block *sb, struct dentry **dptr,
u64 no_addr, const char *name)
static int init_sb(struct gfs2_sbd *sdp, int silent)
static int map_journal_extents(struct gfs2_sbd *sdp)
static void gfs2_others_may_mount(struct gfs2_sbd *sdp)
static int gfs2_jindex_hold(struct gfs2_sbd *sdp, struct gfs2_holder *ji_gh)
static int init_journal(struct gfs2_sbd *sdp, int undo)
static int init_inodes(struct gfs2_sbd *sdp, int undo)
static int init_per_node(struct gfs2_sbd *sdp, int undo)
static int init_threads(struct gfs2_sbd *sdp, int undo)
static const match_table_t nolock_tokens = ;
static const struct lm_lockops nolock_ops = ;
static int gfs2_lm_mount(struct gfs2_sbd *sdp, int silent)
void gfs2_lm_unmount(struct gfs2_sbd *sdp)
static int gfs2_journalid_wait(void *word)
static int wait_on_journal(struct gfs2_sbd *sdp)
void gfs2_online_uevent(struct gfs2_sbd *sdp)
static int fill_super(struct super_block *sb, struct gfs2_args *args, int silent)
static int set_gfs2_super(struct super_block *s, void *data)
static int test_gfs2_super(struct super_block *s, void *ptr)
static struct dentry *gfs2_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data)
static int set_meta_super(struct super_block *s, void *ptr)
static struct dentry *gfs2_mount_meta(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static void gfs2_kill_sb(struct super_block *sb)
struct file_system_type gfs2_fs_type = ;
struct file_system_type gfs2meta_fs_type = ;
