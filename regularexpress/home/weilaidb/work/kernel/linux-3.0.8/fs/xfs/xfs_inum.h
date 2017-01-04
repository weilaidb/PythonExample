#define	__XFS_INUM_H__
typedef	__uint32_t	xfs_agino_t;
#if XFS_BIG_INUMS
typedef	xfs_ino_t	xfs_intino_t;
typedef	__uint32_t	xfs_intino_t;
#define	NULLFSINO	((xfs_ino_t)-1)
#define	NULLAGINO	((xfs_agino_t)-1)
struct xfs_mount;
#define	XFS_INO_MASK(k)			(__uint32_t)((1ULL << (k)) - 1)
#define	XFS_INO_OFFSET_BITS(mp)		(mp)->m_sb.sb_inopblog
#define	XFS_INO_AGBNO_BITS(mp)		(mp)->m_sb.sb_agblklog
#define	XFS_INO_AGINO_BITS(mp)		(mp)->m_agino_log
#define	XFS_INO_AGNO_BITS(mp)		(mp)->m_agno_log
#define	XFS_INO_BITS(mp)		\
XFS_INO_AGNO_BITS(mp) + XFS_INO_AGINO_BITS(mp)
#define	XFS_INO_TO_AGNO(mp,i)		\
((xfs_agnumber_t)((i) >> XFS_INO_AGINO_BITS(mp)))
#define	XFS_INO_TO_AGINO(mp,i)		\
((xfs_agino_t)(i) & XFS_INO_MASK(XFS_INO_AGINO_BITS(mp)))
#define	XFS_INO_TO_AGBNO(mp,i)		\
(((xfs_agblock_t)(i) >> XFS_INO_OFFSET_BITS(mp)) & \
XFS_INO_MASK(XFS_INO_AGBNO_BITS(mp)))
#define	XFS_INO_TO_OFFSET(mp,i)		\
((int)(i) & XFS_INO_MASK(XFS_INO_OFFSET_BITS(mp)))
#define	XFS_INO_TO_FSB(mp,i)		\
XFS_AGB_TO_FSB(mp, XFS_INO_TO_AGNO(mp,i), XFS_INO_TO_AGBNO(mp,i))
#define	XFS_AGINO_TO_INO(mp,a,i)	\
(((xfs_ino_t)(a) << XFS_INO_AGINO_BITS(mp)) | (i))
#define	XFS_AGINO_TO_AGBNO(mp,i)	((i) >> XFS_INO_OFFSET_BITS(mp))
#define	XFS_AGINO_TO_OFFSET(mp,i)	\
((i) & XFS_INO_MASK(XFS_INO_OFFSET_BITS(mp)))
#define	XFS_OFFBNO_TO_AGINO(mp,b,o)	\
((xfs_agino_t)(((b) << XFS_INO_OFFSET_BITS(mp)) | (o)))
#if XFS_BIG_INUMS
#define	XFS_MAXINUMBER		((xfs_ino_t)((1ULL << 56) - 1ULL))
#define	XFS_MAXINUMBER		((xfs_ino_t)((1ULL << 32) - 1ULL))
#define	XFS_MAXINUMBER_32	((xfs_ino_t)((1ULL << 32) - 1ULL))
