#define	__XFS_AG_H__
struct xfs_buf;
struct xfs_mount;
struct xfs_trans;
#define	XFS_AGF_MAGIC	0x58414746
#define	XFS_AGI_MAGIC	0x58414749
#define	XFS_AGF_VERSION	1
#define	XFS_AGI_VERSION	1
#define	XFS_AGF_GOOD_VERSION(v)	((v) == XFS_AGF_VERSION)
#define	XFS_AGI_GOOD_VERSION(v)	((v) == XFS_AGI_VERSION)
#define	XFS_BTNUM_AGF	((int)XFS_BTNUM_CNTi + 1)
typedef struct xfs_agf  xfs_agf_t;
#define	XFS_AGF_MAGICNUM	0x00000001
#define	XFS_AGF_VERSIONNUM	0x00000002
#define	XFS_AGF_SEQNO		0x00000004
#define	XFS_AGF_LENGTH		0x00000008
#define	XFS_AGF_ROOTS		0x00000010
#define	XFS_AGF_LEVELS		0x00000020
#define	XFS_AGF_FLFIRST		0x00000040
#define	XFS_AGF_FLLAST		0x00000080
#define	XFS_AGF_FLCOUNT		0x00000100
#define	XFS_AGF_FREEBLKS	0x00000200
#define	XFS_AGF_LONGEST		0x00000400
#define	XFS_AGF_BTREEBLKS	0x00000800
#define	XFS_AGF_NUM_BITS	12
#define	XFS_AGF_ALL_BITS	((1 << XFS_AGF_NUM_BITS) - 1)
#define XFS_AGF_FLAGS \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
#define XFS_AGF_DADDR(mp)	((xfs_daddr_t)(1 << (mp)->m_sectbb_log))
#define	XFS_AGF_BLOCK(mp)	XFS_HDR_BLOCK(mp, XFS_AGF_DADDR(mp))
#define	XFS_BUF_TO_AGF(bp)	((xfs_agf_t *)XFS_BUF_PTR(bp))
extern int xfs_read_agf(struct xfs_mount *mp, struct xfs_trans *tp,
xfs_agnumber_t agno, int flags, struct xfs_buf **bpp);
#define	XFS_AGI_UNLINKED_BUCKETS	64
typedef struct xfs_agi  xfs_agi_t;
#define	XFS_AGI_MAGICNUM	0x00000001
#define	XFS_AGI_VERSIONNUM	0x00000002
#define	XFS_AGI_SEQNO		0x00000004
#define	XFS_AGI_LENGTH		0x00000008
#define	XFS_AGI_COUNT		0x00000010
#define	XFS_AGI_ROOT		0x00000020
#define	XFS_AGI_LEVEL		0x00000040
#define	XFS_AGI_FREECOUNT	0x00000080
#define	XFS_AGI_NEWINO		0x00000100
#define	XFS_AGI_DIRINO		0x00000200
#define	XFS_AGI_UNLINKED	0x00000400
#define	XFS_AGI_NUM_BITS	11
#define	XFS_AGI_ALL_BITS	((1 << XFS_AGI_NUM_BITS) - 1)
#define XFS_AGI_DADDR(mp)	((xfs_daddr_t)(2 << (mp)->m_sectbb_log))
#define	XFS_AGI_BLOCK(mp)	XFS_HDR_BLOCK(mp, XFS_AGI_DADDR(mp))
#define	XFS_BUF_TO_AGI(bp)	((xfs_agi_t *)XFS_BUF_PTR(bp))
extern int xfs_read_agi(struct xfs_mount *mp, struct xfs_trans *tp,
xfs_agnumber_t agno, struct xfs_buf **bpp);
#define XFS_AGFL_DADDR(mp)	((xfs_daddr_t)(3 << (mp)->m_sectbb_log))
#define	XFS_AGFL_BLOCK(mp)	XFS_HDR_BLOCK(mp, XFS_AGFL_DADDR(mp))
#define XFS_AGFL_SIZE(mp)	((mp)->m_sb.sb_sectsize / sizeof(xfs_agblock_t))
#define	XFS_BUF_TO_AGFL(bp)	((xfs_agfl_t *)XFS_BUF_PTR(bp))
typedef struct xfs_agfl  xfs_agfl_t;
struct xfs_busy_extent ;
#define XFS_PAGB_NUM_SLOTS	128
typedef struct xfs_perag  xfs_perag_t;
#define XFS_ICI_NO_TAG		(-1)
#define XFS_ICI_RECLAIM_TAG	0
#define	XFS_AG_MAXLEVELS(mp)		((mp)->m_ag_maxlevels)
#define	XFS_MIN_FREELIST_RAW(bl,cl,mp)	\
(MIN(bl + 1, XFS_AG_MAXLEVELS(mp)) + MIN(cl + 1, XFS_AG_MAXLEVELS(mp)))
#define	XFS_MIN_FREELIST(a,mp)		\
(XFS_MIN_FREELIST_RAW(		\
be32_to_cpu((a)->agf_levels[XFS_BTNUM_BNOi]), \
be32_to_cpu((a)->agf_levels[XFS_BTNUM_CNTi]), mp))
#define	XFS_MIN_FREELIST_PAG(pag,mp)	\
(XFS_MIN_FREELIST_RAW(		\
(unsigned int)(pag)->pagf_levels[XFS_BTNUM_BNOi], \
(unsigned int)(pag)->pagf_levels[XFS_BTNUM_CNTi], mp))
#define XFS_AGB_TO_FSB(mp,agno,agbno)	\
(((xfs_fsblock_t)(agno) << (mp)->m_sb.sb_agblklog) | (agbno))
#define	XFS_FSB_TO_AGNO(mp,fsbno)	\
((xfs_agnumber_t)((fsbno) >> (mp)->m_sb.sb_agblklog))
#define	XFS_FSB_TO_AGBNO(mp,fsbno)	\
((xfs_agblock_t)((fsbno) & xfs_mask32lo((mp)->m_sb.sb_agblklog)))
#define	XFS_AGB_TO_DADDR(mp,agno,agbno)	\
((xfs_daddr_t)XFS_FSB_TO_BB(mp, \
(xfs_fsblock_t)(agno) * (mp)->m_sb.sb_agblocks + (agbno)))
#define	XFS_AG_DADDR(mp,agno,d)		(XFS_AGB_TO_DADDR(mp, agno, 0) + (d))
#define	XFS_AG_CHECK_DADDR(mp,d,len)	\
((len) == 1 ? \
ASSERT((d) == XFS_SB_DADDR || \
xfs_daddr_to_agbno(mp, d) != XFS_SB_DADDR) : \
ASSERT(xfs_daddr_to_agno(mp, d) == \
xfs_daddr_to_agno(mp, (d) + (len) - 1)))
