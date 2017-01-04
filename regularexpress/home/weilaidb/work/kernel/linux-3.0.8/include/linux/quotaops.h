#define _LINUX_QUOTAOPS_
#define DQUOT_SPACE_WARN	0x1
#define DQUOT_SPACE_RESERVE	0x2
#define DQUOT_SPACE_NOFAIL	0x4
static inline struct quota_info *sb_dqopt(struct super_block *sb)
static inline bool is_quota_modification(struct inode *inode, struct iattr *ia)
#if defined(CONFIG_QUOTA)
#define quota_error(sb, fmt, args...) \
__quota_error((sb), __func__, fmt , ## args)
extern __attribute__((format (printf, 3, 4)))
void __quota_error(struct super_block *sb, const char *func,
const char *fmt, ...);
void inode_add_rsv_space(struct inode *inode, qsize_t number);
void inode_claim_rsv_space(struct inode *inode, qsize_t number);
void inode_sub_rsv_space(struct inode *inode, qsize_t number);
void dquot_initialize(struct inode *inode);
void dquot_drop(struct inode *inode);
struct dquot *dqget(struct super_block *sb, unsigned int id, int type);
void dqput(struct dquot *dquot);
int dquot_scan_active(struct super_block *sb,
int (*fn)(struct dquot *dquot, unsigned long priv),
unsigned long priv);
struct dquot *dquot_alloc(struct super_block *sb, int type);
void dquot_destroy(struct dquot *dquot);
int __dquot_alloc_space(struct inode *inode, qsize_t number, int flags);
void __dquot_free_space(struct inode *inode, qsize_t number, int flags);
int dquot_alloc_inode(const struct inode *inode);
int dquot_claim_space_nodirty(struct inode *inode, qsize_t number);
void dquot_free_inode(const struct inode *inode);
int dquot_disable(struct super_block *sb, int type, unsigned int flags);
static inline int dquot_suspend(struct super_block *sb, int type)
int dquot_resume(struct super_block *sb, int type);
int dquot_commit(struct dquot *dquot);
int dquot_acquire(struct dquot *dquot);
int dquot_release(struct dquot *dquot);
int dquot_commit_info(struct super_block *sb, int type);
int dquot_mark_dquot_dirty(struct dquot *dquot);
int dquot_file_open(struct inode *inode, struct file *file);
int dquot_enable(struct inode *inode, int type, int format_id,
unsigned int flags);
int dquot_quota_on(struct super_block *sb, int type, int format_id,
struct path *path);
int dquot_quota_on_mount(struct super_block *sb, char *qf_name,
int format_id, int type);
int dquot_quota_off(struct super_block *sb, int type);
int dquot_quota_sync(struct super_block *sb, int type, int wait);
int dquot_get_dqinfo(struct super_block *sb, int type, struct if_dqinfo *ii);
int dquot_set_dqinfo(struct super_block *sb, int type, struct if_dqinfo *ii);
int dquot_get_dqblk(struct super_block *sb, int type, qid_t id,
struct fs_disk_quota *di);
int dquot_set_dqblk(struct super_block *sb, int type, qid_t id,
struct fs_disk_quota *di);
int __dquot_transfer(struct inode *inode, struct dquot **transfer_to);
int dquot_transfer(struct inode *inode, struct iattr *iattr);
static inline struct mem_dqinfo *sb_dqinfo(struct super_block *sb, int type)
static inline bool sb_has_quota_usage_enabled(struct super_block *sb, int type)
static inline bool sb_has_quota_limits_enabled(struct super_block *sb, int type)
static inline bool sb_has_quota_suspended(struct super_block *sb, int type)
static inline unsigned sb_any_quota_suspended(struct super_block *sb)
static inline bool sb_has_quota_loaded(struct super_block *sb, int type)
static inline unsigned sb_any_quota_loaded(struct super_block *sb)
static inline bool sb_has_quota_active(struct super_block *sb, int type)
extern const struct dquot_operations dquot_operations;
extern const struct quotactl_ops dquot_quotactl_ops;
static inline int sb_has_quota_usage_enabled(struct super_block *sb, int type)
static inline int sb_has_quota_limits_enabled(struct super_block *sb, int type)
static inline int sb_has_quota_suspended(struct super_block *sb, int type)
static inline int sb_any_quota_suspended(struct super_block *sb)
static inline int sb_has_quota_loaded(struct super_block *sb, int type)
static inline int sb_any_quota_loaded(struct super_block *sb)
static inline int sb_has_quota_active(struct super_block *sb, int type)
static inline void dquot_initialize(struct inode *inode)
static inline void dquot_drop(struct inode *inode)
static inline int dquot_alloc_inode(const struct inode *inode)
static inline void dquot_free_inode(const struct inode *inode)
static inline int dquot_transfer(struct inode *inode, struct iattr *iattr)
static inline int __dquot_alloc_space(struct inode *inode, qsize_t number,
int flags)
static inline void __dquot_free_space(struct inode *inode, qsize_t number,
int flags)
static inline int dquot_claim_space_nodirty(struct inode *inode, qsize_t number)
static inline int dquot_disable(struct super_block *sb, int type,
unsigned int flags)
static inline int dquot_suspend(struct super_block *sb, int type)
static inline int dquot_resume(struct super_block *sb, int type)
#define dquot_file_open		generic_file_open
static inline int dquot_alloc_space_nodirty(struct inode *inode, qsize_t nr)
static inline void dquot_alloc_space_nofail(struct inode *inode, qsize_t nr)
static inline int dquot_alloc_space(struct inode *inode, qsize_t nr)
static inline int dquot_alloc_block_nodirty(struct inode *inode, qsize_t nr)
static inline void dquot_alloc_block_nofail(struct inode *inode, qsize_t nr)
static inline int dquot_alloc_block(struct inode *inode, qsize_t nr)
static inline int dquot_prealloc_block_nodirty(struct inode *inode, qsize_t nr)
static inline int dquot_prealloc_block(struct inode *inode, qsize_t nr)
static inline int dquot_reserve_block(struct inode *inode, qsize_t nr)
static inline int dquot_claim_block(struct inode *inode, qsize_t nr)
static inline void dquot_free_space_nodirty(struct inode *inode, qsize_t nr)
static inline void dquot_free_space(struct inode *inode, qsize_t nr)
static inline void dquot_free_block_nodirty(struct inode *inode, qsize_t nr)
static inline void dquot_free_block(struct inode *inode, qsize_t nr)
static inline void dquot_release_reservation_block(struct inode *inode,
qsize_t nr)
