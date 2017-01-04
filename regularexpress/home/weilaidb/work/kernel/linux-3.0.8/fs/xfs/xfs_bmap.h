#define	__XFS_BMAP_H__
struct getbmap;
struct xfs_bmbt_irec;
struct xfs_ifork;
struct xfs_inode;
struct xfs_mount;
struct xfs_trans;
extern kmem_zone_t	*xfs_bmap_free_item_zone;
typedef struct xfs_bmap_free_item
xfs_bmap_free_item_t;
typedef	struct xfs_bmap_free
xfs_bmap_free_t;
#define	XFS_BMAP_MAX_NMAP	4
#define	XFS_BMAPI_WRITE		0x001
#define XFS_BMAPI_DELAY		0x002
#define XFS_BMAPI_ENTIRE	0x004
#define XFS_BMAPI_METADATA	0x008
#define XFS_BMAPI_ATTRFORK	0x010
#define	XFS_BMAPI_PREALLOC	0x040
#define	XFS_BMAPI_IGSTATE	0x080
#define	XFS_BMAPI_CONTIG	0x100
#define XFS_BMAPI_CONVERT	0x200
#define XFS_BMAPI_FLAGS \
, \
, \
, \
, \
, \
, \
, \
, \
static inline int xfs_bmapi_aflag(int w)
#define	DELAYSTARTBLOCK		((xfs_fsblock_t)-1LL)
#define	HOLESTARTBLOCK		((xfs_fsblock_t)-2LL)
static inline void xfs_bmap_init(xfs_bmap_free_t *flp, xfs_fsblock_t *fbp)
typedef struct xfs_bmalloca  xfs_bmalloca_t;
#define BMAP_LEFT_CONTIG	(1 << 0)
#define BMAP_RIGHT_CONTIG	(1 << 1)
#define BMAP_LEFT_FILLING	(1 << 2)
#define BMAP_RIGHT_FILLING	(1 << 3)
#define BMAP_LEFT_DELAY		(1 << 4)
#define BMAP_RIGHT_DELAY	(1 << 5)
#define BMAP_LEFT_VALID		(1 << 6)
#define BMAP_RIGHT_VALID	(1 << 7)
#define BMAP_ATTRFORK		(1 << 8)
#define XFS_BMAP_EXT_FLAGS \
, \
, \
, \
, \
#if defined(__KERNEL) && defined(DEBUG)
void
xfs_bmap_trace_exlist(
struct xfs_inode	*ip,
xfs_extnum_t		cnt,
int			whichfork,
unsigned long		caller_ip);
#define	XFS_BMAP_TRACE_EXLIST(ip,c,w)	\
xfs_bmap_trace_exlist(ip,c,w, _THIS_IP_)
#define	XFS_BMAP_TRACE_EXLIST(ip,c,w)
int
xfs_bmap_add_attrfork(
struct xfs_inode	*ip,
int			size,
int			rsvd);
void
xfs_bmap_add_free(
xfs_fsblock_t		bno,
xfs_filblks_t		len,
xfs_bmap_free_t		*flist,
struct xfs_mount	*mp);
void
xfs_bmap_cancel(
xfs_bmap_free_t		*flist);
void
xfs_bmap_compute_maxlevels(
struct xfs_mount	*mp,
int			whichfork);
int
xfs_bmap_first_unused(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
xfs_extlen_t		len,
xfs_fileoff_t		*unused,
int			whichfork);
int
xfs_bmap_last_before(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
xfs_fileoff_t		*last_block,
int			whichfork);
int
xfs_bmap_last_offset(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
xfs_fileoff_t		*unused,
int			whichfork);
int
xfs_bmap_one_block(
struct xfs_inode	*ip,
int			whichfork);
int
xfs_bmap_read_extents(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
int			whichfork);
int
xfs_bmapi(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
xfs_fileoff_t		bno,
xfs_filblks_t		len,
int			flags,
xfs_fsblock_t		*firstblock,
xfs_extlen_t		total,
struct xfs_bmbt_irec	*mval,
int			*nmap,
xfs_bmap_free_t		*flist);
int
xfs_bmapi_single(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
int			whichfork,
xfs_fsblock_t		*fsb,
xfs_fileoff_t		bno);
int
xfs_bunmapi(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
xfs_fileoff_t		bno,
xfs_filblks_t		len,
int			flags,
xfs_extnum_t		nexts,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
int			*done);
int
xfs_check_nostate_extents(
struct xfs_ifork	*ifp,
xfs_extnum_t		idx,
xfs_extnum_t		num);
uint
xfs_default_attroffset(
struct xfs_inode	*ip);
int
xfs_bmap_finish(
struct xfs_trans	**tp,
xfs_bmap_free_t		*flist,
int			*committed);
typedef int (*xfs_bmap_format_t)(void **, struct getbmapx *, int *);
int
xfs_getbmap(
xfs_inode_t		*ip,
struct getbmapx		*bmv,
xfs_bmap_format_t	formatter,
void			*arg);
int
xfs_bmap_eof(
struct xfs_inode        *ip,
xfs_fileoff_t           endoff,
int                     whichfork,
int                     *eof);
int
xfs_bmap_count_blocks(
xfs_trans_t		*tp,
struct xfs_inode	*ip,
int			whichfork,
int			*count);
int
xfs_bmap_punch_delalloc_range(
struct xfs_inode	*ip,
xfs_fileoff_t		start_fsb,
xfs_fileoff_t		length);
