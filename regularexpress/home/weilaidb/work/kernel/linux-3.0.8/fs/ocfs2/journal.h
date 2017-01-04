#define OCFS2_JOURNAL_H
enum ocfs2_journal_state ;
struct ocfs2_super;
struct ocfs2_dinode;
struct ocfs2_recovery_map ;
struct ocfs2_journal ;
extern spinlock_t trans_inc_lock;
static inline unsigned long ocfs2_inc_trans_id(struct ocfs2_journal *j)
static inline void ocfs2_set_ci_lock_trans(struct ocfs2_journal *journal,
struct ocfs2_caching_info *ci)
static inline int ocfs2_ci_fully_checkpointed(struct ocfs2_caching_info *ci)
static inline int ocfs2_ci_is_new(struct ocfs2_caching_info *ci)
static inline int ocfs2_inode_is_new(struct inode *inode)
static inline void ocfs2_ci_set_new(struct ocfs2_super *osb,
struct ocfs2_caching_info *ci)
void ocfs2_orphan_scan_init(struct ocfs2_super *osb);
void ocfs2_orphan_scan_start(struct ocfs2_super *osb);
void ocfs2_orphan_scan_stop(struct ocfs2_super *osb);
void ocfs2_orphan_scan_exit(struct ocfs2_super *osb);
void ocfs2_complete_recovery(struct work_struct *work);
void ocfs2_wait_for_recovery(struct ocfs2_super *osb);
int ocfs2_recovery_init(struct ocfs2_super *osb);
void ocfs2_recovery_exit(struct ocfs2_super *osb);
int ocfs2_compute_replay_slots(struct ocfs2_super *osb);
void   ocfs2_set_journal_params(struct ocfs2_super *osb);
int    ocfs2_journal_init(struct ocfs2_journal *journal,
int *dirty);
void   ocfs2_journal_shutdown(struct ocfs2_super *osb);
int    ocfs2_journal_wipe(struct ocfs2_journal *journal,
int full);
int    ocfs2_journal_load(struct ocfs2_journal *journal, int local,
int replayed);
int    ocfs2_check_journals_nolocks(struct ocfs2_super *osb);
void   ocfs2_recovery_thread(struct ocfs2_super *osb,
int node_num);
int    ocfs2_mark_dead_nodes(struct ocfs2_super *osb);
void   ocfs2_complete_mount_recovery(struct ocfs2_super *osb);
void ocfs2_complete_quota_recovery(struct ocfs2_super *osb);
static inline void ocfs2_start_checkpoint(struct ocfs2_super *osb)
static inline void ocfs2_checkpoint_inode(struct inode *inode)
handle_t		    *ocfs2_start_trans(struct ocfs2_super *osb,
int max_buffs);
int			     ocfs2_commit_trans(struct ocfs2_super *osb,
handle_t *handle);
int			     ocfs2_extend_trans(handle_t *handle, int nblocks);
#define OCFS2_JOURNAL_ACCESS_CREATE 0
#define OCFS2_JOURNAL_ACCESS_WRITE  1
#define OCFS2_JOURNAL_ACCESS_UNDO   2
int ocfs2_journal_access_di(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access_eb(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access_rb(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access_gd(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access_xb(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access_dq(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access_db(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access_dr(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access_dl(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
int ocfs2_journal_access(handle_t *handle, struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
void ocfs2_journal_dirty(handle_t *handle, struct buffer_head *bh);
#define OCFS2_INODE_UPDATE_CREDITS 1
#define OCFS2_XATTR_BLOCK_UPDATE_CREDITS 1
#define OCFS2_QUOTA_BLOCK_UPDATE_CREDITS 1
#define OCFS2_QINFO_WRITE_CREDITS (OCFS2_INODE_UPDATE_CREDITS + \
OCFS2_QUOTA_BLOCK_UPDATE_CREDITS)
#define OCFS2_LOCAL_QINFO_WRITE_CREDITS OCFS2_QUOTA_BLOCK_UPDATE_CREDITS
#define OCFS2_QWRITE_CREDITS (OCFS2_QINFO_WRITE_CREDITS + \
OCFS2_QUOTA_BLOCK_UPDATE_CREDITS)
#define OCFS2_QSYNC_CREDITS (OCFS2_QINFO_WRITE_CREDITS + \
2 * OCFS2_QUOTA_BLOCK_UPDATE_CREDITS)
static inline int ocfs2_quota_trans_credits(struct super_block *sb)
#define OCFS2_GROUP_EXTEND_CREDITS	(OCFS2_INODE_UPDATE_CREDITS + 1)
#define OCFS2_GROUP_ADD_CREDITS	(OCFS2_INODE_UPDATE_CREDITS + 1)
#define OCFS2_SUBALLOC_ALLOC (3)
static inline int ocfs2_inline_to_extents_credits(struct super_block *sb)
#define OCFS2_SUBALLOC_FREE  (2)
#define OCFS2_TRUNCATE_LOG_UPDATE OCFS2_INODE_UPDATE_CREDITS
#define OCFS2_TRUNCATE_LOG_FLUSH_ONE_REC (OCFS2_SUBALLOC_FREE 		      \
+ OCFS2_TRUNCATE_LOG_UPDATE)
static inline int ocfs2_remove_extent_credits(struct super_block *sb)
#define OCFS2_DIR_LINK_ADDITIONAL_CREDITS (1 + OCFS2_SUBALLOC_ALLOC + 1)
static inline int ocfs2_add_dir_index_credits(struct super_block *sb)
static inline int ocfs2_mknod_credits(struct super_block *sb, int is_dir,
int xattr_credits)
#define OCFS2_WINDOW_MOVE_CREDITS (OCFS2_INODE_UPDATE_CREDITS                 \
+ OCFS2_SUBALLOC_ALLOC + OCFS2_SUBALLOC_FREE)
#define OCFS2_SIMPLE_DIR_EXTEND_CREDITS (2)
static inline int ocfs2_link_credits(struct super_block *sb)
static inline int ocfs2_unlink_credits(struct super_block *sb)
#define OCFS2_DELETE_INODE_CREDITS (3 * OCFS2_INODE_UPDATE_CREDITS + 4)
static inline int ocfs2_rename_credits(struct super_block *sb)
#define OCFS2_XATTR_BLOCK_CREATE_CREDITS (OCFS2_SUBALLOC_ALLOC * 2 + \
+ OCFS2_INODE_UPDATE_CREDITS \
+ OCFS2_XATTR_BLOCK_UPDATE_CREDITS)
#define OCFS2_DX_ROOT_REMOVE_CREDITS (OCFS2_INODE_UPDATE_CREDITS +	\
OCFS2_SUBALLOC_FREE)
static inline int ocfs2_calc_dxi_expand_credits(struct super_block *sb)
#define OCFS2_REFCOUNT_TREE_CREATE_CREDITS (OCFS2_INODE_UPDATE_CREDITS + 1 \
+ OCFS2_SUBALLOC_ALLOC)
#define OCFS2_REFCOUNT_TREE_SET_CREDITS (OCFS2_INODE_UPDATE_CREDITS + 1)
#define OCFS2_REFCOUNT_TREE_REMOVE_CREDITS (OCFS2_INODE_UPDATE_CREDITS + 1)
#define OCFS2_EXPAND_REFCOUNT_TREE_CREDITS (OCFS2_SUBALLOC_ALLOC * 2 + 3)
static inline int ocfs2_calc_extend_credits(struct super_block *sb,
struct ocfs2_extent_list *root_el,
u32 bits_wanted)
static inline int ocfs2_calc_symlink_credits(struct super_block *sb)
static inline int ocfs2_calc_group_alloc_credits(struct super_block *sb,
unsigned int cpg)
static inline int ocfs2_calc_bg_discontig_credits(struct super_block *sb)
static inline int ocfs2_calc_tree_trunc_credits(struct super_block *sb,
unsigned int clusters_to_del,
struct ocfs2_dinode *fe,
struct ocfs2_extent_list *last_el)
static inline int ocfs2_jbd2_file_inode(handle_t *handle, struct inode *inode)
static inline int ocfs2_begin_ordered_truncate(struct inode *inode,
loff_t new_size)
