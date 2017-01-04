#define	__XFS_MOUNT_H__
typedef struct xfs_trans_reservations  xfs_trans_reservations_t;
#define xfs_daddr_to_agno(mp,d) \
((xfs_agnumber_t)(XFS_BB_TO_FSBT(mp, d) / (mp)->m_sb.sb_agblocks))
#define xfs_daddr_to_agbno(mp,d) \
((xfs_agblock_t)(XFS_BB_TO_FSBT(mp, d) % (mp)->m_sb.sb_agblocks))
struct log;
struct xfs_mount_args;
struct xfs_inode;
struct xfs_bmbt_irec;
struct xfs_bmap_free;
struct xfs_extdelta;
struct xfs_swapext;
struct xfs_mru_cache;
struct xfs_nameops;
struct xfs_ail;
struct xfs_quotainfo;
typedef struct xfs_icsb_cnts  xfs_icsb_cnts_t;
#define XFS_ICSB_FLAG_LOCK	(1 << 0)
#define XFS_ICSB_LAZY_COUNT	(1 << 1)
extern int	xfs_icsb_init_counters(struct xfs_mount *);
extern void	xfs_icsb_reinit_counters(struct xfs_mount *);
extern void	xfs_icsb_destroy_counters(struct xfs_mount *);
extern void	xfs_icsb_sync_counters(struct xfs_mount *, int);
extern void	xfs_icsb_sync_counters_locked(struct xfs_mount *, int);
extern int	xfs_icsb_modify_counters(struct xfs_mount *, xfs_sb_field_t,
int64_t, int);
#define xfs_icsb_init_counters(mp)		(0)
#define xfs_icsb_destroy_counters(mp)		do  while (0)
#define xfs_icsb_reinit_counters(mp)		do  while (0)
#define xfs_icsb_sync_counters(mp, flags)	do  while (0)
#define xfs_icsb_sync_counters_locked(mp, flags) do  while (0)
#define xfs_icsb_modify_counters(mp, field, delta, rsvd) \
xfs_mod_incore_sb(mp, field, delta, rsvd)
enum ;
typedef struct xfs_mount  xfs_mount_t;
#define XFS_MOUNT_WSYNC		(1ULL << 0)
#define XFS_MOUNT_DELAYLOG	(1ULL << 1)
#define XFS_MOUNT_WAS_CLEAN	(1ULL << 3)
#define XFS_MOUNT_FS_SHUTDOWN	(1ULL << 4)
#define XFS_MOUNT_DISCARD	(1ULL << 5)
#define XFS_MOUNT_RETERR	(1ULL << 6)
#define XFS_MOUNT_NOALIGN	(1ULL << 7)
#define XFS_MOUNT_ATTR2		(1ULL << 8)
#define XFS_MOUNT_GRPID		(1ULL << 9)
#define XFS_MOUNT_NORECOVERY	(1ULL << 10)
#define XFS_MOUNT_DFLT_IOSIZE	(1ULL << 12)
#define XFS_MOUNT_32BITINODES	(1ULL << 14)
#define XFS_MOUNT_SMALL_INUMS	(1ULL << 15)
#define XFS_MOUNT_NOUUID	(1ULL << 16)
#define XFS_MOUNT_BARRIER	(1ULL << 17)
#define XFS_MOUNT_IKEEP		(1ULL << 18)
#define XFS_MOUNT_SWALLOC	(1ULL << 19)
#define XFS_MOUNT_RDONLY	(1ULL << 20)
#define XFS_MOUNT_DIRSYNC	(1ULL << 21)
#define XFS_MOUNT_COMPAT_IOSIZE	(1ULL << 22)
#define XFS_MOUNT_FILESTREAMS	(1ULL << 24)
#define XFS_MOUNT_NOATTR2	(1ULL << 25)
#define XFS_READIO_LOG_LARGE	16
#define XFS_WRITEIO_LOG_LARGE	16
#define XFS_MAX_IO_LOG		30
#define XFS_MIN_IO_LOG		PAGE_SHIFT
#define	XFS_WSYNC_READIO_LOG	15
#define	XFS_WSYNC_WRITEIO_LOG	14
static inline unsigned long
xfs_preferred_iosize(xfs_mount_t *mp)
#define XFS_MAXIOFFSET(mp)	((mp)->m_maxioffset)
#define XFS_LAST_UNMOUNT_WAS_CLEAN(mp)	\
((mp)->m_flags & XFS_MOUNT_WAS_CLEAN)
#define XFS_FORCED_SHUTDOWN(mp)	((mp)->m_flags & XFS_MOUNT_FS_SHUTDOWN)
void xfs_do_force_shutdown(struct xfs_mount *mp, int flags, char *fname,
int lnnum);
#define xfs_force_shutdown(m,f)	\
xfs_do_force_shutdown(m, f, __FILE__, __LINE__)
#define SHUTDOWN_META_IO_ERROR	0x0001
#define SHUTDOWN_LOG_IO_ERROR	0x0002
#define SHUTDOWN_FORCE_UMOUNT	0x0004
#define SHUTDOWN_CORRUPT_INCORE	0x0008
#define SHUTDOWN_REMOTE_REQ	0x0010
#define SHUTDOWN_DEVICE_REQ	0x0020
#define xfs_test_for_freeze(mp)		((mp)->m_super->s_frozen)
#define xfs_wait_for_freeze(mp,l)	vfs_check_frozen((mp)->m_super, (l))
#define XFS_MFSI_QUIET		0x40
static inline xfs_agnumber_t
xfs_daddr_to_agno(struct xfs_mount *mp, xfs_daddr_t d)
static inline xfs_agblock_t
xfs_daddr_to_agbno(struct xfs_mount *mp, xfs_daddr_t d)
struct xfs_perag *xfs_perag_get(struct xfs_mount *mp, xfs_agnumber_t agno);
struct xfs_perag *xfs_perag_get_tag(struct xfs_mount *mp, xfs_agnumber_t agno,
int tag);
void	xfs_perag_put(struct xfs_perag *pag);
static inline void
xfs_icsb_lock(xfs_mount_t *mp)
static inline void
xfs_icsb_unlock(xfs_mount_t *mp)
#define xfs_icsb_lock(mp)
#define xfs_icsb_unlock(mp)
typedef struct xfs_mod_sb  xfs_mod_sb_t;
extern int	xfs_log_sbcount(xfs_mount_t *, uint);
extern __uint64_t xfs_default_resblks(xfs_mount_t *mp);
extern int	xfs_mountfs(xfs_mount_t *mp);
extern void	xfs_unmountfs(xfs_mount_t *);
extern int	xfs_unmountfs_writesb(xfs_mount_t *);
extern int	xfs_mod_incore_sb(xfs_mount_t *, xfs_sb_field_t, int64_t, int);
extern int	xfs_mod_incore_sb_batch(xfs_mount_t *, xfs_mod_sb_t *,
uint, int);
extern int	xfs_mount_log_sb(xfs_mount_t *, __int64_t);
extern struct xfs_buf *xfs_getsb(xfs_mount_t *, int);
extern int	xfs_readsb(xfs_mount_t *, int);
extern void	xfs_freesb(xfs_mount_t *);
extern int	xfs_fs_writable(xfs_mount_t *);
extern int	xfs_sb_validate_fsb_count(struct xfs_sb *, __uint64_t);
extern int	xfs_dev_is_read_only(struct xfs_mount *, char *);
extern void	xfs_set_low_space_thresholds(struct xfs_mount *);
extern void	xfs_mod_sb(struct xfs_trans *, __int64_t);
extern int	xfs_initialize_perag(struct xfs_mount *, xfs_agnumber_t,
xfs_agnumber_t *);
extern void	xfs_sb_from_disk(struct xfs_sb *, struct xfs_dsb *);
extern void	xfs_sb_to_disk(struct xfs_dsb *, struct xfs_sb *, __int64_t);
