static inline unsigned int ol_quota_entries_per_block(struct super_block *sb)
static inline unsigned int ol_chunk_blocks(struct super_block *sb)
static unsigned int ol_chunk_entries(struct super_block *sb)
static unsigned int ol_quota_chunk_block(struct super_block *sb, int c)
static unsigned int ol_dqblk_block(struct super_block *sb, int c, int off)
static unsigned int ol_dqblk_block_off(struct super_block *sb, int c, int off)
static loff_t ol_dqblk_off(struct super_block *sb, int c, int off)
static inline unsigned int ol_dqblk_file_block(struct super_block *sb, loff_t off)
static inline unsigned int ol_dqblk_block_offset(struct super_block *sb, loff_t off)
static int ol_dqblk_chunk_off(struct super_block *sb, int c, loff_t off)
static int ocfs2_modify_bh(struct inode *inode, struct buffer_head *bh,
void (*modify)(struct buffer_head *, void *), void *private)
static int ocfs2_read_quota_block(struct inode *inode, u64 v_block,
struct buffer_head **bh)
static int ocfs2_local_check_quota_file(struct super_block *sb, int type)
static void ocfs2_release_local_quota_bitmaps(struct list_head *head)
static int ocfs2_load_local_quota_bitmaps(struct inode *inode,
struct ocfs2_local_disk_dqinfo *ldinfo,
struct list_head *head)
static void olq_update_info(struct buffer_head *bh, void *private)
static int ocfs2_add_recovery_chunk(struct super_block *sb,
struct ocfs2_local_disk_chunk *dchunk,
int chunk,
struct list_head *head)
static void free_recovery_list(struct list_head *head)
void ocfs2_free_quota_recovery(struct ocfs2_quota_recovery *rec)
static int ocfs2_recovery_load_quota(struct inode *lqinode,
struct ocfs2_local_disk_dqinfo *ldinfo,
int type,
struct list_head *head)
static struct ocfs2_quota_recovery *ocfs2_alloc_quota_recovery(void)
struct ocfs2_quota_recovery *ocfs2_begin_quota_recovery(
struct ocfs2_super *osb,
int slot_num)
static int ocfs2_recover_local_quota_file(struct inode *lqinode,
int type,
struct ocfs2_quota_recovery *rec)
int ocfs2_finish_quota_recovery(struct ocfs2_super *osb,
struct ocfs2_quota_recovery *rec,
int slot_num)
static int ocfs2_local_read_info(struct super_block *sb, int type)
static int ocfs2_local_write_info(struct super_block *sb, int type)
static int ocfs2_local_free_info(struct super_block *sb, int type)
static void olq_set_dquot(struct buffer_head *bh, void *private)
int ocfs2_local_write_dquot(struct dquot *dquot)
static struct ocfs2_quota_chunk *ocfs2_find_free_entry(struct super_block *sb,
int type,
int *offset)
static struct ocfs2_quota_chunk *ocfs2_local_quota_add_chunk(
struct super_block *sb,
int type,
int *offset)
static struct ocfs2_quota_chunk *ocfs2_extend_local_quota_file(
struct super_block *sb,
int type,
int *offset)
static void olq_alloc_dquot(struct buffer_head *bh, void *private)
int ocfs2_create_local_dquot(struct dquot *dquot)
int ocfs2_local_release_dquot(handle_t *handle, struct dquot *dquot)
static const struct quota_format_ops ocfs2_format_ops = ;
struct quota_format_type ocfs2_quota_format = ;
