#define _OCFS2_QUOTA_H
struct ocfs2_dquot ;
struct ocfs2_recovery_chunk ;
struct ocfs2_quota_recovery ;
struct ocfs2_mem_dqinfo ;
static inline struct ocfs2_dquot *OCFS2_DQUOT(struct dquot *dquot)
struct ocfs2_quota_chunk ;
extern struct kmem_cache *ocfs2_dquot_cachep;
extern struct kmem_cache *ocfs2_qf_chunk_cachep;
extern struct qtree_fmt_operations ocfs2_global_ops;
struct ocfs2_quota_recovery *ocfs2_begin_quota_recovery(
struct ocfs2_super *osb, int slot_num);
int ocfs2_finish_quota_recovery(struct ocfs2_super *osb,
struct ocfs2_quota_recovery *rec,
int slot_num);
void ocfs2_free_quota_recovery(struct ocfs2_quota_recovery *rec);
ssize_t ocfs2_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off);
ssize_t ocfs2_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off);
int ocfs2_global_read_info(struct super_block *sb, int type);
int ocfs2_global_write_info(struct super_block *sb, int type);
int ocfs2_global_read_dquot(struct dquot *dquot);
int __ocfs2_sync_dquot(struct dquot *dquot, int freeing);
static inline int ocfs2_sync_dquot(struct dquot *dquot)
static inline int ocfs2_global_release_dquot(struct dquot *dquot)
int ocfs2_lock_global_qf(struct ocfs2_mem_dqinfo *oinfo, int ex);
void ocfs2_unlock_global_qf(struct ocfs2_mem_dqinfo *oinfo, int ex);
int ocfs2_validate_quota_block(struct super_block *sb, struct buffer_head *bh);
int ocfs2_read_quota_phys_block(struct inode *inode, u64 p_block,
struct buffer_head **bh);
int ocfs2_create_local_dquot(struct dquot *dquot);
int ocfs2_local_release_dquot(handle_t *handle, struct dquot *dquot);
int ocfs2_local_write_dquot(struct dquot *dquot);
extern const struct dquot_operations ocfs2_quota_operations;
extern struct quota_format_type ocfs2_quota_format;
