#define	__XFS_DINODE_H__
#define	XFS_DINODE_MAGIC		0x494e
#define XFS_DINODE_GOOD_VERSION(v)	(((v) == 1 || (v) == 2))
typedef struct xfs_timestamp  xfs_timestamp_t;
typedef struct xfs_dinode  __attribute__((packed)) xfs_dinode_t;
#define DI_MAX_FLUSH 0xffff
#define	XFS_MAXLINK		((1U << 31) - 1U)
#define	XFS_MAXLINK_1		65535U
typedef enum xfs_dinode_fmt  xfs_dinode_fmt_t;
#define	XFS_DINODE_MIN_LOG	8
#define	XFS_DINODE_MAX_LOG	11
#define	XFS_DINODE_MIN_SIZE	(1 << XFS_DINODE_MIN_LOG)
#define	XFS_DINODE_MAX_SIZE	(1 << XFS_DINODE_MAX_LOG)
#define XFS_LITINO(mp) \
((int)(((mp)->m_sb.sb_inodesize) - sizeof(struct xfs_dinode)))
#define	XFS_BROOT_SIZE_ADJ	\
(XFS_BTREE_LBLOCK_LEN - sizeof(xfs_bmdr_block_t))
#define XFS_DFORK_Q(dip)		((dip)->di_forkoff != 0)
#define XFS_DFORK_BOFF(dip)		((int)((dip)->di_forkoff << 3))
#define XFS_DFORK_DSIZE(dip,mp) \
(XFS_DFORK_Q(dip) ? \
XFS_DFORK_BOFF(dip) : \
XFS_LITINO(mp))
#define XFS_DFORK_ASIZE(dip,mp) \
(XFS_DFORK_Q(dip) ? \
XFS_LITINO(mp) - XFS_DFORK_BOFF(dip) : \
0)
#define XFS_DFORK_SIZE(dip,mp,w) \
((w) == XFS_DATA_FORK ? \
XFS_DFORK_DSIZE(dip, mp) : \
XFS_DFORK_ASIZE(dip, mp))
#define XFS_DFORK_DPTR(dip) \
((char *)(dip) + sizeof(struct xfs_dinode))
#define XFS_DFORK_APTR(dip)	\
(XFS_DFORK_DPTR(dip) + XFS_DFORK_BOFF(dip))
#define XFS_DFORK_PTR(dip,w)	\
((w) == XFS_DATA_FORK ? XFS_DFORK_DPTR(dip) : XFS_DFORK_APTR(dip))
#define XFS_DFORK_FORMAT(dip,w) \
((w) == XFS_DATA_FORK ? \
(dip)->di_format : \
(dip)->di_aformat)
#define XFS_DFORK_NEXTENTS(dip,w) \
((w) == XFS_DATA_FORK ? \
be32_to_cpu((dip)->di_nextents) : \
be16_to_cpu((dip)->di_anextents))
#define	XFS_BUF_TO_DINODE(bp)	((xfs_dinode_t *)XFS_BUF_PTR(bp))
static inline xfs_dev_t xfs_dinode_get_rdev(struct xfs_dinode *dip)
static inline void xfs_dinode_put_rdev(struct xfs_dinode *dip, xfs_dev_t rdev)
#define XFS_DIFLAG_REALTIME_BIT  0
#define XFS_DIFLAG_PREALLOC_BIT  1
#define XFS_DIFLAG_NEWRTBM_BIT   2
#define XFS_DIFLAG_IMMUTABLE_BIT 3
#define XFS_DIFLAG_APPEND_BIT    4
#define XFS_DIFLAG_SYNC_BIT      5
#define XFS_DIFLAG_NOATIME_BIT   6
#define XFS_DIFLAG_NODUMP_BIT    7
#define XFS_DIFLAG_RTINHERIT_BIT 8
#define XFS_DIFLAG_PROJINHERIT_BIT   9
#define XFS_DIFLAG_NOSYMLINKS_BIT   10
#define XFS_DIFLAG_EXTSIZE_BIT      11
#define XFS_DIFLAG_EXTSZINHERIT_BIT 12
#define XFS_DIFLAG_NODEFRAG_BIT     13
#define XFS_DIFLAG_FILESTREAM_BIT   14
#define XFS_DIFLAG_REALTIME      (1 << XFS_DIFLAG_REALTIME_BIT)
#define XFS_DIFLAG_PREALLOC      (1 << XFS_DIFLAG_PREALLOC_BIT)
#define XFS_DIFLAG_NEWRTBM       (1 << XFS_DIFLAG_NEWRTBM_BIT)
#define XFS_DIFLAG_IMMUTABLE     (1 << XFS_DIFLAG_IMMUTABLE_BIT)
#define XFS_DIFLAG_APPEND        (1 << XFS_DIFLAG_APPEND_BIT)
#define XFS_DIFLAG_SYNC          (1 << XFS_DIFLAG_SYNC_BIT)
#define XFS_DIFLAG_NOATIME       (1 << XFS_DIFLAG_NOATIME_BIT)
#define XFS_DIFLAG_NODUMP        (1 << XFS_DIFLAG_NODUMP_BIT)
#define XFS_DIFLAG_RTINHERIT     (1 << XFS_DIFLAG_RTINHERIT_BIT)
#define XFS_DIFLAG_PROJINHERIT   (1 << XFS_DIFLAG_PROJINHERIT_BIT)
#define XFS_DIFLAG_NOSYMLINKS    (1 << XFS_DIFLAG_NOSYMLINKS_BIT)
#define XFS_DIFLAG_EXTSIZE       (1 << XFS_DIFLAG_EXTSIZE_BIT)
#define XFS_DIFLAG_EXTSZINHERIT  (1 << XFS_DIFLAG_EXTSZINHERIT_BIT)
#define XFS_DIFLAG_NODEFRAG      (1 << XFS_DIFLAG_NODEFRAG_BIT)
#define XFS_DIFLAG_FILESTREAM    (1 << XFS_DIFLAG_FILESTREAM_BIT)
#define XFS_IS_REALTIME_INODE(ip) ((ip)->i_d.di_flags & XFS_DIFLAG_REALTIME)
#define XFS_IS_REALTIME_INODE(ip) (0)
#define XFS_DIFLAG_ANY \
(XFS_DIFLAG_REALTIME | XFS_DIFLAG_PREALLOC | XFS_DIFLAG_NEWRTBM | \
XFS_DIFLAG_IMMUTABLE | XFS_DIFLAG_APPEND | XFS_DIFLAG_SYNC | \
XFS_DIFLAG_NOATIME | XFS_DIFLAG_NODUMP | XFS_DIFLAG_RTINHERIT | \
XFS_DIFLAG_PROJINHERIT | XFS_DIFLAG_NOSYMLINKS | XFS_DIFLAG_EXTSIZE | \
XFS_DIFLAG_EXTSZINHERIT | XFS_DIFLAG_NODEFRAG | XFS_DIFLAG_FILESTREAM)
