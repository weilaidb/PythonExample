static void qsync_work_fn(struct work_struct *work);
static void ocfs2_global_disk2memdqb(struct dquot *dquot, void *dp)
static void ocfs2_global_mem2diskdqb(void *dp, struct dquot *dquot)
static int ocfs2_global_is_id(void *dp, struct dquot *dquot)
struct qtree_fmt_operations ocfs2_global_ops = ;
int ocfs2_validate_quota_block(struct super_block *sb, struct buffer_head *bh)
int ocfs2_read_quota_phys_block(struct inode *inode, u64 p_block,
struct buffer_head **bhp)
ssize_t ocfs2_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off)
ssize_t ocfs2_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off)
int ocfs2_lock_global_qf(struct ocfs2_mem_dqinfo *oinfo, int ex)
void ocfs2_unlock_global_qf(struct ocfs2_mem_dqinfo *oinfo, int ex)
int ocfs2_global_read_info(struct super_block *sb, int type)
static int __ocfs2_global_write_info(struct super_block *sb, int type)
int ocfs2_global_write_info(struct super_block *sb, int type)
static int ocfs2_global_qinit_alloc(struct super_block *sb, int type)
static int ocfs2_calc_global_qinit_credits(struct super_block *sb, int type)
int __ocfs2_sync_dquot(struct dquot *dquot, int freeing)
static int ocfs2_sync_dquot_helper(struct dquot *dquot, unsigned long type)
static void qsync_work_fn(struct work_struct *work)
static int ocfs2_write_dquot(struct dquot *dquot)
static int ocfs2_calc_qdel_credits(struct super_block *sb, int type)
static int ocfs2_release_dquot(struct dquot *dquot)
static int ocfs2_acquire_dquot(struct dquot *dquot)
static int ocfs2_mark_dquot_dirty(struct dquot *dquot)
static int ocfs2_write_info(struct super_block *sb, int type)
static struct dquot *ocfs2_alloc_dquot(struct super_block *sb, int type)
static void ocfs2_destroy_dquot(struct dquot *dquot)
const struct dquot_operations ocfs2_quota_operations = ;
