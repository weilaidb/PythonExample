#define __XFS_LOG_PRIV_H__
struct xfs_buf;
struct log;
struct xlog_ticket;
struct xfs_mount;
#define XLOG_MIN_ICLOGS		2
#define XLOG_MAX_ICLOGS		8
#define XLOG_HEADER_MAGIC_NUM	0xFEEDbabe
#define XLOG_VERSION_1		1
#define XLOG_VERSION_2		2
#define XLOG_VERSION_OKBITS	(XLOG_VERSION_1 | XLOG_VERSION_2)
#define XLOG_MIN_RECORD_BSIZE	(16*1024)
#define XLOG_BIG_RECORD_BSIZE	(32*1024)
#define XLOG_MAX_RECORD_BSIZE	(256*1024)
#define XLOG_HEADER_CYCLE_SIZE	(32*1024)
#define XLOG_MIN_RECORD_BSHIFT	14
#define XLOG_BIG_RECORD_BSHIFT	15
#define XLOG_MAX_RECORD_BSHIFT	18
#define XLOG_BTOLSUNIT(log, b)  (((b)+(log)->l_mp->m_sb.sb_logsunit-1) / \
(log)->l_mp->m_sb.sb_logsunit)
#define XLOG_LSUNITTOB(log, su) ((su) * (log)->l_mp->m_sb.sb_logsunit)
#define XLOG_HEADER_SIZE	512
#define XLOG_REC_SHIFT(log) \
BTOBB(1 << (xfs_sb_version_haslogv2(&log->l_mp->m_sb) ? \
XLOG_MAX_RECORD_BSHIFT : XLOG_BIG_RECORD_BSHIFT))
#define XLOG_TOTAL_REC_SHIFT(log) \
BTOBB(XLOG_MAX_ICLOGS << (xfs_sb_version_haslogv2(&log->l_mp->m_sb) ? \
XLOG_MAX_RECORD_BSHIFT : XLOG_BIG_RECORD_BSHIFT))
static inline xfs_lsn_t xlog_assign_lsn(uint cycle, uint block)
static inline uint xlog_get_cycle(char *ptr)
#define BLK_AVG(blk1, blk2)	((blk1+blk2) >> 1)
static inline uint xlog_get_client_id(__be32 i)
#define XLOG_STATE_ACTIVE    0x0001
#define XLOG_STATE_WANT_SYNC 0x0002
#define XLOG_STATE_SYNCING   0x0004
#define XLOG_STATE_DONE_SYNC 0x0008
#define XLOG_STATE_DO_CALLBACK \
0x0010
#define XLOG_STATE_CALLBACK  0x0020
#define XLOG_STATE_DIRTY     0x0040
#define XLOG_STATE_IOERROR   0x0080
#define XLOG_STATE_ALL	     0x7FFF
#define XLOG_STATE_NOTUSED   0x8000
#define XLOG_START_TRANS	0x01
#define XLOG_COMMIT_TRANS	0x02
#define XLOG_CONTINUE_TRANS	0x04
#define XLOG_WAS_CONT_TRANS	0x08
#define XLOG_END_TRANS		0x10
#define XLOG_UNMOUNT_TRANS	0x20
#define XLOG_TIC_INITED		0x1
#define XLOG_TIC_PERM_RESERV	0x2
#define XLOG_TIC_FLAGS \
, \
#define XLOG_UNMOUNT_TYPE	0x556e
#define XLOG_CHKSUM_MISMATCH	0x1
#define XLOG_ACTIVE_RECOVERY	0x2
#define	XLOG_RECOVERY_NEEDED	0x4
#define XLOG_IO_ERROR		0x8
#define XLOG_TAIL_WARN		0x10
typedef __uint32_t xlog_tid_t;
#define XLOG_STATE_COVER_IDLE	0
#define XLOG_STATE_COVER_NEED	1
#define XLOG_STATE_COVER_DONE	2
#define XLOG_STATE_COVER_NEED2	3
#define XLOG_STATE_COVER_DONE2	4
#define XLOG_COVER_OPS		5
#define XLOG_TIC_LEN_MAX	15
typedef struct xlog_res  xlog_res_t;
typedef struct xlog_ticket  xlog_ticket_t;
typedef struct xlog_op_header  xlog_op_header_t;
#define XLOG_FMT_UNKNOWN  0
#define XLOG_FMT_LINUX_LE 1
#define XLOG_FMT_LINUX_BE 2
#define XLOG_FMT_IRIX_BE  3
#define XLOG_FMT XLOG_FMT_LINUX_BE
#define XLOG_FMT XLOG_FMT_LINUX_LE
typedef struct xlog_rec_header  xlog_rec_header_t;
typedef struct xlog_rec_ext_header  xlog_rec_ext_header_t;
typedef union xlog_in_core2  xlog_in_core_2_t;
typedef struct xlog_in_core  xlog_in_core_t;
struct xfs_cil;
struct xfs_cil_ctx ;
struct xfs_cil ;
#define XLOG_CIL_SPACE_LIMIT(log)	(log->l_logsize >> 3)
#define XLOG_CIL_HARD_SPACE_LIMIT(log)	(3 * (log->l_logsize >> 4))
typedef struct log  xlog_t;
#define XLOG_BUF_CANCEL_BUCKET(log, blkno) \
((log)->l_buf_cancel_table + ((__uint64_t)blkno % XLOG_BC_TABLE_SIZE))
#define XLOG_FORCED_SHUTDOWN(log)	((log)->l_flags & XLOG_IO_ERROR)
extern xfs_lsn_t xlog_assign_tail_lsn(struct xfs_mount *mp);
extern int	 xlog_recover(xlog_t *log);
extern int	 xlog_recover_finish(xlog_t *log);
extern void	 xlog_pack_data(xlog_t *log, xlog_in_core_t *iclog, int);
extern kmem_zone_t *xfs_log_ticket_zone;
struct xlog_ticket *xlog_ticket_alloc(struct log *log, int unit_bytes,
int count, char client, uint xflags,
int alloc_flags);
static inline void
xlog_write_adv_cnt(void **ptr, int *len, int *off, size_t bytes)
void	xlog_print_tic_res(struct xfs_mount *mp, struct xlog_ticket *ticket);
int	xlog_write(struct log *log, struct xfs_log_vec *log_vector,
struct xlog_ticket *tic, xfs_lsn_t *start_lsn,
xlog_in_core_t **commit_iclog, uint flags);
static inline void
xlog_crack_atomic_lsn(atomic64_t *lsn, uint *cycle, uint *block)
static inline void
xlog_assign_atomic_lsn(atomic64_t *lsn, uint cycle, uint block)
static inline void
xlog_crack_grant_head_val(int64_t val, int *cycle, int *space)
static inline void
xlog_crack_grant_head(atomic64_t *head, int *cycle, int *space)
static inline int64_t
xlog_assign_grant_head_val(int cycle, int space)
static inline void
xlog_assign_grant_head(atomic64_t *head, int cycle, int space)
int	xlog_cil_init(struct log *log);
void	xlog_cil_init_post_recovery(struct log *log);
void	xlog_cil_destroy(struct log *log);
xfs_lsn_t xlog_cil_force_lsn(struct log *log, xfs_lsn_t sequence);
static inline void
xlog_cil_force(struct log *log)
#define XLOG_UNMOUNT_REC_TYPE	(-1U)
static inline void xlog_wait(wait_queue_head_t *wq, spinlock_t *lock)
