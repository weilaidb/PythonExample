ktrace_t *xfs_filestreams_trace_buf;
STATIC void
xfs_filestreams_trace(
xfs_mount_t	*mp,
int		type,
const char	*func,
int		line,
__psunsigned_t	arg0,
__psunsigned_t	arg1,
__psunsigned_t	arg2,
__psunsigned_t	arg3,
__psunsigned_t	arg4,
__psunsigned_t	arg5)
#define TRACE0(mp,t)			TRACE6(mp,t,0,0,0,0,0,0)
#define TRACE1(mp,t,a0)			TRACE6(mp,t,a0,0,0,0,0,0)
#define TRACE2(mp,t,a0,a1)		TRACE6(mp,t,a0,a1,0,0,0,0)
#define TRACE3(mp,t,a0,a1,a2)		TRACE6(mp,t,a0,a1,a2,0,0,0)
#define TRACE4(mp,t,a0,a1,a2,a3)	TRACE6(mp,t,a0,a1,a2,a3,0,0)
#define TRACE5(mp,t,a0,a1,a2,a3,a4)	TRACE6(mp,t,a0,a1,a2,a3,a4,0)
#define TRACE6(mp,t,a0,a1,a2,a3,a4,a5) \
xfs_filestreams_trace(mp, t, __func__, __LINE__, \
(__psunsigned_t)a0, (__psunsigned_t)a1, \
(__psunsigned_t)a2, (__psunsigned_t)a3, \
(__psunsigned_t)a4, (__psunsigned_t)a5)
#define TRACE_AG_SCAN(mp, ag, ag2) \
TRACE2(mp, XFS_FSTRM_KTRACE_AGSCAN, ag, ag2);
#define TRACE_AG_PICK1(mp, max_ag, maxfree) \
TRACE2(mp, XFS_FSTRM_KTRACE_AGPICK1, max_ag, maxfree);
#define TRACE_AG_PICK2(mp, ag, ag2, cnt, free, scan, flag) \
TRACE6(mp, XFS_FSTRM_KTRACE_AGPICK2, ag, ag2, \
cnt, free, scan, flag)
#define TRACE_UPDATE(mp, ip, ag, cnt, ag2, cnt2) \
TRACE5(mp, XFS_FSTRM_KTRACE_UPDATE, ip, ag, cnt, ag2, cnt2)
#define TRACE_FREE(mp, ip, pip, ag, cnt) \
TRACE4(mp, XFS_FSTRM_KTRACE_FREE, ip, pip, ag, cnt)
#define TRACE_LOOKUP(mp, ip, pip, ag, cnt) \
TRACE4(mp, XFS_FSTRM_KTRACE_ITEM_LOOKUP, ip, pip, ag, cnt)
#define TRACE_ASSOCIATE(mp, ip, pip, ag, cnt) \
TRACE4(mp, XFS_FSTRM_KTRACE_ASSOCIATE, ip, pip, ag, cnt)
#define TRACE_MOVEAG(mp, ip, pip, oag, ocnt, nag, ncnt) \
TRACE6(mp, XFS_FSTRM_KTRACE_MOVEAG, ip, pip, oag, ocnt, nag, ncnt)
#define TRACE_ORPHAN(mp, ip, ag) \
TRACE2(mp, XFS_FSTRM_KTRACE_ORPHAN, ip, ag);
#define TRACE_AG_SCAN(mp, ag, ag2)
#define TRACE_AG_PICK1(mp, max_ag, maxfree)
#define TRACE_AG_PICK2(mp, ag, ag2, cnt, free, scan, flag)
#define TRACE_UPDATE(mp, ip, ag, cnt, ag2, cnt2)
#define TRACE_FREE(mp, ip, pip, ag, cnt)
#define TRACE_LOOKUP(mp, ip, pip, ag, cnt)
#define TRACE_ASSOCIATE(mp, ip, pip, ag, cnt)
#define TRACE_MOVEAG(mp, ip, pip, oag, ocnt, nag, ncnt)
#define TRACE_ORPHAN(mp, ip, ag)
static kmem_zone_t *item_zone;
typedef struct fstrm_item
fstrm_item_t;
static int
xfs_filestream_peek_ag(
xfs_mount_t	*mp,
xfs_agnumber_t	agno)
static int
xfs_filestream_get_ag(
xfs_mount_t	*mp,
xfs_agnumber_t	agno)
static void
xfs_filestream_put_ag(
xfs_mount_t	*mp,
xfs_agnumber_t	agno)
static int
_xfs_filestream_pick_ag(
xfs_mount_t	*mp,
xfs_agnumber_t	startag,
xfs_agnumber_t	*agp,
int		flags,
xfs_extlen_t	minlen)
static int
_xfs_filestream_update_ag(
xfs_inode_t	*ip,
xfs_inode_t	*pip,
xfs_agnumber_t	ag)
STATIC void
xfs_fstrm_free_func(
unsigned long	ino,
void		*data)
int
xfs_filestream_init(void)
void
xfs_filestream_uninit(void)
int
xfs_filestream_mount(
xfs_mount_t	*mp)
void
xfs_filestream_unmount(
xfs_mount_t	*mp)
xfs_agnumber_t
xfs_filestream_lookup_ag(
xfs_inode_t	*ip)
int
xfs_filestream_associate(
xfs_inode_t	*pip,
xfs_inode_t	*ip)
int
xfs_filestream_new_ag(
xfs_bmalloca_t	*ap,
xfs_agnumber_t	*agp)
void
xfs_filestream_deassociate(
xfs_inode_t	*ip)
