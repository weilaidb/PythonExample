#define _EXT4_JBD2_H
#define EXT4_JOURNAL(inode)	(EXT4_SB((inode)->i_sb)->s_journal)
#define EXT4_SINGLEDATA_TRANS_BLOCKS(sb)				\
(EXT4_HAS_INCOMPAT_FEATURE(sb, EXT4_FEATURE_INCOMPAT_EXTENTS)   \
? 27U : 8U)
#define EXT4_XATTR_TRANS_BLOCKS		6U
#define EXT4_DATA_TRANS_BLOCKS(sb)	(EXT4_SINGLEDATA_TRANS_BLOCKS(sb) + \
EXT4_XATTR_TRANS_BLOCKS - 2 + \
EXT4_MAXQUOTAS_TRANS_BLOCKS(sb))
#define EXT4_META_TRANS_BLOCKS(sb)	(EXT4_XATTR_TRANS_BLOCKS + \
EXT4_MAXQUOTAS_TRANS_BLOCKS(sb))
#define EXT4_DELETE_TRANS_BLOCKS(sb)	(2 * EXT4_DATA_TRANS_BLOCKS(sb) + 64)
#define EXT4_MAX_TRANS_DATA		64U
#define EXT4_RESERVE_TRANS_BLOCKS	12U
#define EXT4_INDEX_EXTRA_TRANS_BLOCKS	8
#define EXT4_QUOTA_TRANS_BLOCKS(sb) (test_opt(sb, QUOTA) ? 1 : 0)
#define EXT4_QUOTA_INIT_BLOCKS(sb) (test_opt(sb, QUOTA) ? (DQUOT_INIT_ALLOC*\
(EXT4_SINGLEDATA_TRANS_BLOCKS(sb)-3)+3+DQUOT_INIT_REWRITE) : 0)
#define EXT4_QUOTA_DEL_BLOCKS(sb) (test_opt(sb, QUOTA) ? (DQUOT_DEL_ALLOC*\
(EXT4_SINGLEDATA_TRANS_BLOCKS(sb)-3)+3+DQUOT_DEL_REWRITE) : 0)
#define EXT4_QUOTA_TRANS_BLOCKS(sb) 0
#define EXT4_QUOTA_INIT_BLOCKS(sb) 0
#define EXT4_QUOTA_DEL_BLOCKS(sb) 0
#define EXT4_MAXQUOTAS_TRANS_BLOCKS(sb) (MAXQUOTAS*EXT4_QUOTA_TRANS_BLOCKS(sb))
#define EXT4_MAXQUOTAS_INIT_BLOCKS(sb) (MAXQUOTAS*EXT4_QUOTA_INIT_BLOCKS(sb))
#define EXT4_MAXQUOTAS_DEL_BLOCKS(sb) (MAXQUOTAS*EXT4_QUOTA_DEL_BLOCKS(sb))
int
ext4_mark_iloc_dirty(handle_t *handle,
struct inode *inode,
struct ext4_iloc *iloc);
int ext4_reserve_inode_write(handle_t *handle, struct inode *inode,
struct ext4_iloc *iloc);
int ext4_mark_inode_dirty(handle_t *handle, struct inode *inode);
void ext4_journal_abort_handle(const char *caller, unsigned int line,
const char *err_fn,
struct buffer_head *bh, handle_t *handle, int err);
int __ext4_journal_get_write_access(const char *where, unsigned int line,
handle_t *handle, struct buffer_head *bh);
int __ext4_forget(const char *where, unsigned int line, handle_t *handle,
int is_metadata, struct inode *inode,
struct buffer_head *bh, ext4_fsblk_t blocknr);
int __ext4_journal_get_create_access(const char *where, unsigned int line,
handle_t *handle, struct buffer_head *bh);
int __ext4_handle_dirty_metadata(const char *where, unsigned int line,
handle_t *handle, struct inode *inode,
struct buffer_head *bh);
int __ext4_handle_dirty_super(const char *where, unsigned int line,
handle_t *handle, struct super_block *sb);
#define ext4_journal_get_write_access(handle, bh) \
__ext4_journal_get_write_access(__func__, __LINE__, (handle), (bh))
#define ext4_forget(handle, is_metadata, inode, bh, block_nr) \
__ext4_forget(__func__, __LINE__, (handle), (is_metadata), (inode), \
(bh), (block_nr))
#define ext4_journal_get_create_access(handle, bh) \
__ext4_journal_get_create_access(__func__, __LINE__, (handle), (bh))
#define ext4_handle_dirty_metadata(handle, inode, bh) \
__ext4_handle_dirty_metadata(__func__, __LINE__, (handle), (inode), \
(bh))
#define ext4_handle_dirty_super(handle, sb) \
__ext4_handle_dirty_super(__func__, __LINE__, (handle), (sb))
handle_t *ext4_journal_start_sb(struct super_block *sb, int nblocks);
int __ext4_journal_stop(const char *where, unsigned int line, handle_t *handle);
#define EXT4_NOJOURNAL_MAX_REF_COUNT ((unsigned long) 4096)
static inline int ext4_handle_valid(handle_t *handle)
static inline void ext4_handle_sync(handle_t *handle)
static inline void ext4_handle_release_buffer(handle_t *handle,
struct buffer_head *bh)
static inline int ext4_handle_is_aborted(handle_t *handle)
static inline int ext4_handle_has_enough_credits(handle_t *handle, int needed)
static inline handle_t *ext4_journal_start(struct inode *inode, int nblocks)
#define ext4_journal_stop(handle) \
__ext4_journal_stop(__func__, __LINE__, (handle))
static inline handle_t *ext4_journal_current_handle(void)
static inline int ext4_journal_extend(handle_t *handle, int nblocks)
static inline int ext4_journal_restart(handle_t *handle, int nblocks)
static inline int ext4_journal_blocks_per_page(struct inode *inode)
static inline int ext4_journal_force_commit(journal_t *journal)
static inline int ext4_jbd2_file_inode(handle_t *handle, struct inode *inode)
static inline void ext4_update_inode_fsync_trans(handle_t *handle,
struct inode *inode,
int datasync)
int ext4_force_commit(struct super_block *sb);
static inline int ext4_should_journal_data(struct inode *inode)
static inline int ext4_should_order_data(struct inode *inode)
static inline int ext4_should_writeback_data(struct inode *inode)
static inline int ext4_should_dioread_nolock(struct inode *inode)
