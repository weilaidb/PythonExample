#define _LINUX_JBD2_H
#define JBD2_DEBUG
#define jfs_debug jbd_debug
#define journal_oom_retry 1
#undef JBD2_PARANOID_IOFAIL
#define JBD2_DEFAULT_MAX_COMMIT_AGE 5
#define JBD2_EXPENSIVE_CHECKING
extern u8 jbd2_journal_enable_debug;
#define jbd_debug(n, f, a...)						\
do  while (0)
#define jbd_debug(f, a...)
extern void *jbd2_alloc(size_t size, gfp_t flags);
extern void jbd2_free(void *ptr, size_t size);
#define JBD2_MIN_JOURNAL_BLOCKS 1024
typedef struct jbd2_journal_handle handle_t;
typedef struct journal_s	journal_t;
#define JBD2_MAGIC_NUMBER 0xc03b3998U
#define JBD2_DESCRIPTOR_BLOCK	1
#define JBD2_COMMIT_BLOCK	2
#define JBD2_SUPERBLOCK_V1	3
#define JBD2_SUPERBLOCK_V2	4
#define JBD2_REVOKE_BLOCK	5
typedef struct journal_header_s
journal_header_t;
#define JBD2_CRC32_CHKSUM   1
#define JBD2_MD5_CHKSUM     2
#define JBD2_SHA1_CHKSUM    3
#define JBD2_CRC32_CHKSUM_SIZE 4
#define JBD2_CHECKSUM_BYTES (32 / sizeof(u32))
struct commit_header ;
typedef struct journal_block_tag_s
journal_block_tag_t;
#define JBD2_TAG_SIZE32 (offsetof(journal_block_tag_t, t_blocknr_high))
#define JBD2_TAG_SIZE64 (sizeof(journal_block_tag_t))
typedef struct jbd2_journal_revoke_header_s
jbd2_journal_revoke_header_t;
#define JBD2_FLAG_ESCAPE		1
#define JBD2_FLAG_SAME_UUID	2
#define JBD2_FLAG_DELETED	4
#define JBD2_FLAG_LAST_TAG	8
typedef struct journal_superblock_s
journal_superblock_t;
#define JBD2_HAS_COMPAT_FEATURE(j,mask)					\
((j)->j_format_version >= 2 &&					\
((j)->j_superblock->s_feature_compat & cpu_to_be32((mask))))
#define JBD2_HAS_RO_COMPAT_FEATURE(j,mask)				\
((j)->j_format_version >= 2 &&					\
((j)->j_superblock->s_feature_ro_compat & cpu_to_be32((mask))))
#define JBD2_HAS_INCOMPAT_FEATURE(j,mask)				\
((j)->j_format_version >= 2 &&					\
((j)->j_superblock->s_feature_incompat & cpu_to_be32((mask))))
#define JBD2_FEATURE_COMPAT_CHECKSUM	0x00000001
#define JBD2_FEATURE_INCOMPAT_REVOKE		0x00000001
#define JBD2_FEATURE_INCOMPAT_64BIT		0x00000002
#define JBD2_FEATURE_INCOMPAT_ASYNC_COMMIT	0x00000004
#define JBD2_KNOWN_COMPAT_FEATURES	JBD2_FEATURE_COMPAT_CHECKSUM
#define JBD2_KNOWN_ROCOMPAT_FEATURES	0
#define JBD2_KNOWN_INCOMPAT_FEATURES	(JBD2_FEATURE_INCOMPAT_REVOKE | \
JBD2_FEATURE_INCOMPAT_64BIT | \
JBD2_FEATURE_INCOMPAT_ASYNC_COMMIT)
#define J_ASSERT(assert)	BUG_ON(!(assert))
#define J_ASSERT_BH(bh, expr)	J_ASSERT(expr)
#define J_ASSERT_JH(jh, expr)	J_ASSERT(expr)
#if defined(JBD2_PARANOID_IOFAIL)
#define J_EXPECT(expr, why...)		J_ASSERT(expr)
#define J_EXPECT_BH(bh, expr, why...)	J_ASSERT_BH(bh, expr)
#define J_EXPECT_JH(jh, expr, why...)	J_ASSERT_JH(jh, expr)
#define __journal_expect(expr, why...)					     \
()
#define J_EXPECT(expr, why...)		__journal_expect(expr, ## why)
#define J_EXPECT_BH(bh, expr, why...)	__journal_expect(expr, ## why)
#define J_EXPECT_JH(jh, expr, why...)	__journal_expect(expr, ## why)
enum jbd_state_bits ;
BUFFER_FNS(JBD, jbd)
BUFFER_FNS(JWrite, jwrite)
BUFFER_FNS(JBDDirty, jbddirty)
TAS_BUFFER_FNS(JBDDirty, jbddirty)
BUFFER_FNS(Revoked, revoked)
TAS_BUFFER_FNS(Revoked, revoked)
BUFFER_FNS(RevokeValid, revokevalid)
TAS_BUFFER_FNS(RevokeValid, revokevalid)
BUFFER_FNS(Freed, freed)
static inline struct buffer_head *jh2bh(struct journal_head *jh)
static inline struct journal_head *bh2jh(struct buffer_head *bh)
static inline void jbd_lock_bh_state(struct buffer_head *bh)
static inline int jbd_trylock_bh_state(struct buffer_head *bh)
static inline int jbd_is_locked_bh_state(struct buffer_head *bh)
static inline void jbd_unlock_bh_state(struct buffer_head *bh)
static inline void jbd_lock_bh_journal_head(struct buffer_head *bh)
static inline void jbd_unlock_bh_journal_head(struct buffer_head *bh)
#define __JI_COMMIT_RUNNING 0
#define JI_COMMIT_RUNNING (1 << __JI_COMMIT_RUNNING)
struct jbd2_inode ;
struct jbd2_revoke_table_s;
struct jbd2_journal_handle
;
struct transaction_chp_stats_s ;
struct transaction_s
;
struct transaction_run_stats_s ;
struct transaction_stats_s ;
static inline unsigned long
jbd2_time_diff(unsigned long start, unsigned long end)
#define JBD2_NR_BATCH	64
struct journal_s
;
#define JBD2_UNMOUNT	0x001
#define JBD2_ABORT	0x002
#define JBD2_ACK_ERR	0x004
#define JBD2_FLUSHED	0x008
#define JBD2_LOADED	0x010
#define JBD2_BARRIER	0x020
#define JBD2_ABORT_ON_SYNCDATA_ERR	0x040
extern void jbd2_journal_unfile_buffer(journal_t *, struct journal_head *);
extern void __jbd2_journal_refile_buffer(struct journal_head *);
extern void jbd2_journal_refile_buffer(journal_t *, struct journal_head *);
extern void __jbd2_journal_file_buffer(struct journal_head *, transaction_t *, int);
extern void __journal_free_buffer(struct journal_head *bh);
extern void jbd2_journal_file_buffer(struct journal_head *, transaction_t *, int);
extern void __journal_clean_data_list(transaction_t *transaction);
extern struct journal_head * jbd2_journal_get_descriptor_buffer(journal_t *);
int jbd2_journal_next_log_block(journal_t *, unsigned long long *);
extern void jbd2_journal_commit_transaction(journal_t *);
int __jbd2_journal_clean_checkpoint_list(journal_t *journal);
int __jbd2_journal_remove_checkpoint(struct journal_head *);
void __jbd2_journal_insert_checkpoint(struct journal_head *, transaction_t *);
struct jbd2_buffer_trigger_type ;
extern void jbd2_buffer_frozen_trigger(struct journal_head *jh,
void *mapped_data,
struct jbd2_buffer_trigger_type *triggers);
extern void jbd2_buffer_abort_trigger(struct journal_head *jh,
struct jbd2_buffer_trigger_type *triggers);
extern int
jbd2_journal_write_metadata_buffer(transaction_t	  *transaction,
struct journal_head  *jh_in,
struct journal_head **jh_out,
unsigned long long   blocknr);
extern void		__wait_on_journal (journal_t *);
static inline handle_t *journal_current_handle(void)
extern handle_t *jbd2_journal_start(journal_t *, int nblocks);
extern handle_t *jbd2__journal_start(journal_t *, int nblocks, int gfp_mask);
extern int	 jbd2_journal_restart(handle_t *, int nblocks);
extern int	 jbd2__journal_restart(handle_t *, int nblocks, int gfp_mask);
extern int	 jbd2_journal_extend (handle_t *, int nblocks);
extern int	 jbd2_journal_get_write_access(handle_t *, struct buffer_head *);
extern int	 jbd2_journal_get_create_access (handle_t *, struct buffer_head *);
extern int	 jbd2_journal_get_undo_access(handle_t *, struct buffer_head *);
void		 jbd2_journal_set_triggers(struct buffer_head *,
struct jbd2_buffer_trigger_type *type);
extern int	 jbd2_journal_dirty_metadata (handle_t *, struct buffer_head *);
extern void	 jbd2_journal_release_buffer (handle_t *, struct buffer_head *);
extern int	 jbd2_journal_forget (handle_t *, struct buffer_head *);
extern void	 journal_sync_buffer (struct buffer_head *);
extern void	 jbd2_journal_invalidatepage(journal_t *,
struct page *, unsigned long);
extern int	 jbd2_journal_try_to_free_buffers(journal_t *, struct page *, gfp_t);
extern int	 jbd2_journal_stop(handle_t *);
extern int	 jbd2_journal_flush (journal_t *);
extern void	 jbd2_journal_lock_updates (journal_t *);
extern void	 jbd2_journal_unlock_updates (journal_t *);
extern journal_t * jbd2_journal_init_dev(struct block_device *bdev,
struct block_device *fs_dev,
unsigned long long start, int len, int bsize);
extern journal_t * jbd2_journal_init_inode (struct inode *);
extern int	   jbd2_journal_update_format (journal_t *);
extern int	   jbd2_journal_check_used_features
(journal_t *, unsigned long, unsigned long, unsigned long);
extern int	   jbd2_journal_check_available_features
(journal_t *, unsigned long, unsigned long, unsigned long);
extern int	   jbd2_journal_set_features
(journal_t *, unsigned long, unsigned long, unsigned long);
extern void	   jbd2_journal_clear_features
(journal_t *, unsigned long, unsigned long, unsigned long);
extern int	   jbd2_journal_load       (journal_t *journal);
extern int	   jbd2_journal_destroy    (journal_t *);
extern int	   jbd2_journal_recover    (journal_t *journal);
extern int	   jbd2_journal_wipe       (journal_t *, int);
extern int	   jbd2_journal_skip_recovery	(journal_t *);
extern void	   jbd2_journal_update_superblock	(journal_t *, int);
extern void	   __jbd2_journal_abort_hard	(journal_t *);
extern void	   jbd2_journal_abort      (journal_t *, int);
extern int	   jbd2_journal_errno      (journal_t *);
extern void	   jbd2_journal_ack_err    (journal_t *);
extern int	   jbd2_journal_clear_err  (journal_t *);
extern int	   jbd2_journal_bmap(journal_t *, unsigned long, unsigned long long *);
extern int	   jbd2_journal_force_commit(journal_t *);
extern int	   jbd2_journal_file_inode(handle_t *handle, struct jbd2_inode *inode);
extern int	   jbd2_journal_begin_ordered_truncate(journal_t *journal,
struct jbd2_inode *inode, loff_t new_size);
extern void	   jbd2_journal_init_jbd_inode(struct jbd2_inode *jinode, struct inode *inode);
extern void	   jbd2_journal_release_jbd_inode(journal_t *journal, struct jbd2_inode *jinode);
struct journal_head *jbd2_journal_add_journal_head(struct buffer_head *bh);
struct journal_head *jbd2_journal_grab_journal_head(struct buffer_head *bh);
void jbd2_journal_put_journal_head(struct journal_head *jh);
extern struct kmem_cache *jbd2_handle_cache;
static inline handle_t *jbd2_alloc_handle(gfp_t gfp_flags)
static inline void jbd2_free_handle(handle_t *handle)
extern struct kmem_cache *jbd2_inode_cache;
static inline struct jbd2_inode *jbd2_alloc_inode(gfp_t gfp_flags)
static inline void jbd2_free_inode(struct jbd2_inode *jinode)
#define JOURNAL_REVOKE_DEFAULT_HASH 256
extern int	   jbd2_journal_init_revoke(journal_t *, int);
extern void	   jbd2_journal_destroy_revoke_caches(void);
extern int	   jbd2_journal_init_revoke_caches(void);
extern void	   jbd2_journal_destroy_revoke(journal_t *);
extern int	   jbd2_journal_revoke (handle_t *, unsigned long long, struct buffer_head *);
extern int	   jbd2_journal_cancel_revoke(handle_t *, struct journal_head *);
extern void	   jbd2_journal_write_revoke_records(journal_t *,
transaction_t *, int);
extern int	jbd2_journal_set_revoke(journal_t *, unsigned long long, tid_t);
extern int	jbd2_journal_test_revoke(journal_t *, unsigned long long, tid_t);
extern void	jbd2_journal_clear_revoke(journal_t *);
extern void	jbd2_journal_switch_revoke_table(journal_t *journal);
int __jbd2_log_space_left(journal_t *);
int jbd2_log_start_commit(journal_t *journal, tid_t tid);
int __jbd2_log_start_commit(journal_t *journal, tid_t tid);
int jbd2_journal_start_commit(journal_t *journal, tid_t *tid);
int jbd2_journal_force_commit_nested(journal_t *journal);
int jbd2_log_wait_commit(journal_t *journal, tid_t tid);
int jbd2_log_do_checkpoint(journal_t *journal);
int jbd2_trans_will_send_data_barrier(journal_t *journal, tid_t tid);
void __jbd2_log_wait_for_space(journal_t *journal);
extern void __jbd2_journal_drop_transaction(journal_t *, transaction_t *);
extern int jbd2_cleanup_journal_tail(journal_t *);
#define jbd_ENOSYS() \
do  while (1)
static inline int is_journal_aborted(journal_t *journal)
static inline int is_handle_aborted(handle_t *handle)
static inline void jbd2_journal_abort_handle(handle_t *handle)
static inline int tid_gt(tid_t x, tid_t y)
static inline int tid_geq(tid_t x, tid_t y)
extern int jbd2_journal_blocks_per_page(struct inode *inode);
extern size_t journal_tag_bytes(journal_t *journal);
static inline int jbd_space_needed(journal_t *journal)
#define BJ_None		0
#define BJ_Metadata	1
#define BJ_Forget	2
#define BJ_IO		3
#define BJ_Shadow	4
#define BJ_LogCtl	5
#define BJ_Reserved	6
#define BJ_Types	7
extern int jbd_blocks_per_page(struct inode *inode);
#define buffer_trace_init(bh)	do  while (0)
#define print_buffer_fields(bh)	do  while (0)
#define print_buffer_trace(bh)	do  while (0)
#define BUFFER_TRACE(bh, info)	do  while (0)
#define BUFFER_TRACE2(bh, bh2, info)	do  while (0)
#define JBUFFER_TRACE(jh, info)	do  while (0)
extern const char *jbd2_dev_to_name(dev_t device);
