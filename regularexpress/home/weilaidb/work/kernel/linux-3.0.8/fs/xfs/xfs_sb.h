#define	__XFS_SB_H__
struct xfs_buf;
struct xfs_mount;
#define	XFS_SB_MAGIC		0x58465342
#define	XFS_SB_VERSION_1	1
#define	XFS_SB_VERSION_2	2
#define	XFS_SB_VERSION_3	3
#define	XFS_SB_VERSION_4	4
#define	XFS_SB_VERSION_NUMBITS		0x000f
#define	XFS_SB_VERSION_ALLFBITS		0xfff0
#define	XFS_SB_VERSION_SASHFBITS	0xf000
#define	XFS_SB_VERSION_REALFBITS	0x0ff0
#define	XFS_SB_VERSION_ATTRBIT		0x0010
#define	XFS_SB_VERSION_NLINKBIT		0x0020
#define	XFS_SB_VERSION_QUOTABIT		0x0040
#define	XFS_SB_VERSION_ALIGNBIT		0x0080
#define	XFS_SB_VERSION_DALIGNBIT	0x0100
#define	XFS_SB_VERSION_SHAREDBIT	0x0200
#define XFS_SB_VERSION_LOGV2BIT		0x0400
#define XFS_SB_VERSION_SECTORBIT	0x0800
#define	XFS_SB_VERSION_EXTFLGBIT	0x1000
#define	XFS_SB_VERSION_DIRV2BIT		0x2000
#define	XFS_SB_VERSION_BORGBIT		0x4000
#define	XFS_SB_VERSION_MOREBITSBIT	0x8000
#define	XFS_SB_VERSION_OKSASHFBITS	\
(XFS_SB_VERSION_EXTFLGBIT | \
XFS_SB_VERSION_DIRV2BIT | \
XFS_SB_VERSION_BORGBIT)
#define	XFS_SB_VERSION_OKREALFBITS	\
(XFS_SB_VERSION_ATTRBIT | \
XFS_SB_VERSION_NLINKBIT | \
XFS_SB_VERSION_QUOTABIT | \
XFS_SB_VERSION_ALIGNBIT | \
XFS_SB_VERSION_DALIGNBIT | \
XFS_SB_VERSION_SHAREDBIT | \
XFS_SB_VERSION_LOGV2BIT | \
XFS_SB_VERSION_SECTORBIT | \
XFS_SB_VERSION_MOREBITSBIT)
#define	XFS_SB_VERSION_OKREALBITS	\
(XFS_SB_VERSION_NUMBITS | \
XFS_SB_VERSION_OKREALFBITS | \
XFS_SB_VERSION_OKSASHFBITS)
#define XFS_SB_VERSION2_REALFBITS	0x00ffffff
#define XFS_SB_VERSION2_RESERVED1BIT	0x00000001
#define XFS_SB_VERSION2_LAZYSBCOUNTBIT	0x00000002
#define XFS_SB_VERSION2_RESERVED4BIT	0x00000004
#define XFS_SB_VERSION2_ATTR2BIT	0x00000008
#define XFS_SB_VERSION2_PARENTBIT	0x00000010
#define XFS_SB_VERSION2_PROJID32BIT	0x00000080
#define	XFS_SB_VERSION2_OKREALFBITS	\
(XFS_SB_VERSION2_LAZYSBCOUNTBIT	| \
XFS_SB_VERSION2_ATTR2BIT	| \
XFS_SB_VERSION2_PROJID32BIT)
#define	XFS_SB_VERSION2_OKSASHFBITS	\
(0)
#define XFS_SB_VERSION2_OKREALBITS	\
(XFS_SB_VERSION2_OKREALFBITS |	\
XFS_SB_VERSION2_OKSASHFBITS )
typedef struct xfs_sb  xfs_sb_t;
typedef struct xfs_dsb  xfs_dsb_t;
typedef enum  xfs_sb_field_t;
#define	XFS_SB_MVAL(x)		(1LL << XFS_SBS_ ## x)
#define	XFS_SB_UUID		XFS_SB_MVAL(UUID)
#define	XFS_SB_FNAME		XFS_SB_MVAL(FNAME)
#define	XFS_SB_ROOTINO		XFS_SB_MVAL(ROOTINO)
#define	XFS_SB_RBMINO		XFS_SB_MVAL(RBMINO)
#define	XFS_SB_RSUMINO		XFS_SB_MVAL(RSUMINO)
#define	XFS_SB_VERSIONNUM	XFS_SB_MVAL(VERSIONNUM)
#define XFS_SB_UQUOTINO		XFS_SB_MVAL(UQUOTINO)
#define XFS_SB_GQUOTINO		XFS_SB_MVAL(GQUOTINO)
#define XFS_SB_QFLAGS		XFS_SB_MVAL(QFLAGS)
#define XFS_SB_SHARED_VN	XFS_SB_MVAL(SHARED_VN)
#define XFS_SB_UNIT		XFS_SB_MVAL(UNIT)
#define XFS_SB_WIDTH		XFS_SB_MVAL(WIDTH)
#define XFS_SB_ICOUNT		XFS_SB_MVAL(ICOUNT)
#define XFS_SB_IFREE		XFS_SB_MVAL(IFREE)
#define XFS_SB_FDBLOCKS		XFS_SB_MVAL(FDBLOCKS)
#define XFS_SB_FEATURES2	XFS_SB_MVAL(FEATURES2)
#define XFS_SB_BAD_FEATURES2	XFS_SB_MVAL(BAD_FEATURES2)
#define	XFS_SB_NUM_BITS		((int)XFS_SBS_FIELDCOUNT)
#define	XFS_SB_ALL_BITS		((1LL << XFS_SB_NUM_BITS) - 1)
#define	XFS_SB_MOD_BITS		\
(XFS_SB_UUID | XFS_SB_ROOTINO | XFS_SB_RBMINO | XFS_SB_RSUMINO | \
XFS_SB_VERSIONNUM | XFS_SB_UQUOTINO | XFS_SB_GQUOTINO | \
XFS_SB_QFLAGS | XFS_SB_SHARED_VN | XFS_SB_UNIT | XFS_SB_WIDTH | \
XFS_SB_ICOUNT | XFS_SB_IFREE | XFS_SB_FDBLOCKS | XFS_SB_FEATURES2 | \
XFS_SB_BAD_FEATURES2)
#define XFS_SBF_NOFLAGS		0x00
#define XFS_SBF_READONLY	0x01
#define XFS_SB_MAX_SHARED_VN	0
#define	XFS_SB_VERSION_NUM(sbp)	((sbp)->sb_versionnum & XFS_SB_VERSION_NUMBITS)
static inline int xfs_sb_good_version(xfs_sb_t *sbp)
static inline int xfs_sb_has_mismatched_features2(xfs_sb_t *sbp)
static inline unsigned xfs_sb_version_tonew(unsigned v)
static inline unsigned xfs_sb_version_toold(unsigned v)
static inline int xfs_sb_version_hasattr(xfs_sb_t *sbp)
static inline void xfs_sb_version_addattr(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasnlink(xfs_sb_t *sbp)
static inline void xfs_sb_version_addnlink(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasquota(xfs_sb_t *sbp)
static inline void xfs_sb_version_addquota(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasalign(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasdalign(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasshared(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasdirv2(xfs_sb_t *sbp)
static inline int xfs_sb_version_haslogv2(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasextflgbit(xfs_sb_t *sbp)
static inline int xfs_sb_version_hassector(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasasciici(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasmorebits(xfs_sb_t *sbp)
static inline int xfs_sb_version_haslazysbcount(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasattr2(xfs_sb_t *sbp)
static inline void xfs_sb_version_addattr2(xfs_sb_t *sbp)
static inline void xfs_sb_version_removeattr2(xfs_sb_t *sbp)
static inline int xfs_sb_version_hasprojid32bit(xfs_sb_t *sbp)
#define XFS_SB_DADDR		((xfs_daddr_t)0)
#define	XFS_SB_BLOCK(mp)	XFS_HDR_BLOCK(mp, XFS_SB_DADDR)
#define XFS_BUF_TO_SBP(bp)	((xfs_dsb_t *)XFS_BUF_PTR(bp))
#define	XFS_HDR_BLOCK(mp,d)	((xfs_agblock_t)XFS_BB_TO_FSBT(mp,d))
#define	XFS_DADDR_TO_FSB(mp,d)	XFS_AGB_TO_FSB(mp, \
xfs_daddr_to_agno(mp,d), xfs_daddr_to_agbno(mp,d))
#define	XFS_FSB_TO_DADDR(mp,fsbno)	XFS_AGB_TO_DADDR(mp, \
XFS_FSB_TO_AGNO(mp,fsbno), XFS_FSB_TO_AGBNO(mp,fsbno))
#define XFS_FSS_TO_BB(mp,sec)	((sec) << (mp)->m_sectbb_log)
#define	XFS_FSB_TO_BB(mp,fsbno)	((fsbno) << (mp)->m_blkbb_log)
#define	XFS_BB_TO_FSB(mp,bb)	\
(((bb) + (XFS_FSB_TO_BB(mp,1) - 1)) >> (mp)->m_blkbb_log)
#define	XFS_BB_TO_FSBT(mp,bb)	((bb) >> (mp)->m_blkbb_log)
#define	XFS_BB_FSB_OFFSET(mp,bb) ((bb) & ((mp)->m_bsize - 1))
#define XFS_FSB_TO_B(mp,fsbno)	((xfs_fsize_t)(fsbno) << (mp)->m_sb.sb_blocklog)
#define XFS_B_TO_FSB(mp,b)	\
((((__uint64_t)(b)) + (mp)->m_blockmask) >> (mp)->m_sb.sb_blocklog)
#define XFS_B_TO_FSBT(mp,b)	(((__uint64_t)(b)) >> (mp)->m_sb.sb_blocklog)
#define XFS_B_FSB_OFFSET(mp,b)	((b) & (mp)->m_blockmask)
