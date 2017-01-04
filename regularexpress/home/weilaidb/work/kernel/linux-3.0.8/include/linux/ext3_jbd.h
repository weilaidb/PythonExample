#define _LINUX_EXT3_JBD_H
#define EXT3_JOURNAL(inode)	(EXT3_SB((inode)->i_sb)->s_journal)
#define EXT3_SINGLEDATA_TRANS_BLOCKS	8U
#define EXT3_XATTR_TRANS_BLOCKS		6U
#define EXT3_DATA_TRANS_BLOCKS(sb)	(EXT3_SINGLEDATA_TRANS_BLOCKS + \
EXT3_XATTR_TRANS_BLOCKS - 2 + \
EXT3_MAXQUOTAS_TRANS_BLOCKS(sb))
#define EXT3_DELETE_TRANS_BLOCKS(sb)   (EXT3_MAXQUOTAS_TRANS_BLOCKS(sb) + 64)
#define EXT3_MAX_TRANS_DATA		64U
#define EXT3_RESERVE_TRANS_BLOCKS	12U
#define EXT3_INDEX_EXTRA_TRANS_BLOCKS	8
#define EXT3_QUOTA_TRANS_BLOCKS(sb) (test_opt(sb, QUOTA) ? 2 : 0)
#define EXT3_QUOTA_INIT_BLOCKS(sb) (test_opt(sb, QUOTA) ? (DQUOT_INIT_ALLOC*\
(EXT3_SINGLEDATA_TRANS_BLOCKS-3)+3+DQUOT_INIT_REWRITE) : 0)
#define EXT3_QUOTA_DEL_BLOCKS(sb) (test_opt(sb, QUOTA) ? (DQUOT_DEL_ALLOC*\
(EXT3_SINGLEDATA_TRANS_BLOCKS-3)+3+DQUOT_DEL_REWRITE) : 0)
#define EXT3_QUOTA_TRANS_BLOCKS(sb) 0
#define EXT3_QUOTA_INIT_BLOCKS(sb) 0
#define EXT3_QUOTA_DEL_BLOCKS(sb) 0
#define EXT3_MAXQUOTAS_TRANS_BLOCKS(sb) (MAXQUOTAS*EXT3_QUOTA_TRANS_BLOCKS(sb))
#define EXT3_MAXQUOTAS_INIT_BLOCKS(sb) (MAXQUOTAS*EXT3_QUOTA_INIT_BLOCKS(sb))
#define EXT3_MAXQUOTAS_DEL_BLOCKS(sb) (MAXQUOTAS*EXT3_QUOTA_DEL_BLOCKS(sb))
int
ext3_mark_iloc_dirty(handle_t *handle,
struct inode *inode,
struct ext3_iloc *iloc);
int ext3_reserve_inode_write(handle_t *handle, struct inode *inode,
struct ext3_iloc *iloc);
int ext3_mark_inode_dirty(handle_t *handle, struct inode *inode);
static inline void ext3_journal_release_buffer(handle_t *handle,
struct buffer_head *bh)
void ext3_journal_abort_handle(const char *caller, const char *err_fn,
struct buffer_head *bh, handle_t *handle, int err);
int __ext3_journal_get_undo_access(const char *where, handle_t *handle,
struct buffer_head *bh);
int __ext3_journal_get_write_access(const char *where, handle_t *handle,
struct buffer_head *bh);
int __ext3_journal_forget(const char *where, handle_t *handle,
struct buffer_head *bh);
int __ext3_journal_revoke(const char *where, handle_t *handle,
unsigned long blocknr, struct buffer_head *bh);
int __ext3_journal_get_create_access(const char *where,
handle_t *handle, struct buffer_head *bh);
int __ext3_journal_dirty_metadata(const char *where,
handle_t *handle, struct buffer_head *bh);
#define ext3_journal_get_undo_access(handle, bh) \
__ext3_journal_get_undo_access(__func__, (handle), (bh))
#define ext3_journal_get_write_access(handle, bh) \
__ext3_journal_get_write_access(__func__, (handle), (bh))
#define ext3_journal_revoke(handle, blocknr, bh) \
__ext3_journal_revoke(__func__, (handle), (blocknr), (bh))
#define ext3_journal_get_create_access(handle, bh) \
__ext3_journal_get_create_access(__func__, (handle), (bh))
#define ext3_journal_dirty_metadata(handle, bh) \
__ext3_journal_dirty_metadata(__func__, (handle), (bh))
#define ext3_journal_forget(handle, bh) \
__ext3_journal_forget(__func__, (handle), (bh))
int ext3_journal_dirty_data(handle_t *handle, struct buffer_head *bh);
handle_t *ext3_journal_start_sb(struct super_block *sb, int nblocks);
int __ext3_journal_stop(const char *where, handle_t *handle);
static inline handle_t *ext3_journal_start(struct inode *inode, int nblocks)
#define ext3_journal_stop(handle) \
__ext3_journal_stop(__func__, (handle))
static inline handle_t *ext3_journal_current_handle(void)
static inline int ext3_journal_extend(handle_t *handle, int nblocks)
static inline int ext3_journal_restart(handle_t *handle, int nblocks)
static inline int ext3_journal_blocks_per_page(struct inode *inode)
static inline int ext3_journal_force_commit(journal_t *journal)
int ext3_force_commit(struct super_block *sb);
static inline int ext3_should_journal_data(struct inode *inode)
static inline int ext3_should_order_data(struct inode *inode)
static inline int ext3_should_writeback_data(struct inode *inode)
