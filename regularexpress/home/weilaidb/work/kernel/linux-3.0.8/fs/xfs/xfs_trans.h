#define	__XFS_TRANS_H__
struct xfs_log_item;
typedef struct xfs_trans_header  xfs_trans_header_t;
#define	XFS_TRANS_HEADER_MAGIC	0x5452414e
#define	XFS_LI_EFI		0x1236
#define	XFS_LI_EFD		0x1237
#define	XFS_LI_IUNLINK		0x1238
#define	XFS_LI_INODE		0x123b
#define	XFS_LI_BUF		0x123c
#define	XFS_LI_DQUOT		0x123d
#define	XFS_LI_QUOTAOFF		0x123e
#define XFS_LI_TYPE_DESC \
, \
, \
, \
, \
, \
, \
#define XFS_TRANS_SETATTR_NOT_SIZE	1
#define XFS_TRANS_SETATTR_SIZE		2
#define XFS_TRANS_INACTIVE		3
#define XFS_TRANS_CREATE		4
#define XFS_TRANS_CREATE_TRUNC		5
#define XFS_TRANS_TRUNCATE_FILE		6
#define XFS_TRANS_REMOVE		7
#define XFS_TRANS_LINK			8
#define XFS_TRANS_RENAME		9
#define XFS_TRANS_MKDIR			10
#define XFS_TRANS_RMDIR			11
#define XFS_TRANS_SYMLINK		12
#define XFS_TRANS_SET_DMATTRS		13
#define XFS_TRANS_GROWFS		14
#define XFS_TRANS_STRAT_WRITE		15
#define XFS_TRANS_DIOSTRAT		16
#define	XFS_TRANS_WRITEID		18
#define	XFS_TRANS_ADDAFORK		19
#define	XFS_TRANS_ATTRINVAL		20
#define	XFS_TRANS_ATRUNCATE		21
#define	XFS_TRANS_ATTR_SET		22
#define	XFS_TRANS_ATTR_RM		23
#define	XFS_TRANS_ATTR_FLAG		24
#define	XFS_TRANS_CLEAR_AGI_BUCKET	25
#define XFS_TRANS_QM_SBCHANGE		26
#define XFS_TRANS_DUMMY1		27
#define XFS_TRANS_DUMMY2		28
#define XFS_TRANS_QM_QUOTAOFF		29
#define XFS_TRANS_QM_DQALLOC		30
#define XFS_TRANS_QM_SETQLIM		31
#define XFS_TRANS_QM_DQCLUSTER		32
#define XFS_TRANS_QM_QINOCREATE		33
#define XFS_TRANS_QM_QUOTAOFF_END	34
#define XFS_TRANS_SB_UNIT		35
#define XFS_TRANS_FSYNC_TS		36
#define	XFS_TRANS_GROWFSRT_ALLOC	37
#define	XFS_TRANS_GROWFSRT_ZERO		38
#define	XFS_TRANS_GROWFSRT_FREE		39
#define	XFS_TRANS_SWAPEXT		40
#define	XFS_TRANS_SB_COUNT		41
#define	XFS_TRANS_CHECKPOINT		42
#define	XFS_TRANS_TYPE_MAX		42
#define XFS_TRANS_TYPES \
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
, \
, \
, \
, \
, \
, \
, \
, \
struct xfs_log_item_desc ;
#define XFS_LID_DIRTY		0x1
#define	XFS_TRANS_MAGIC		0x5452414E
#define	XFS_TRANS_DIRTY		0x01
#define	XFS_TRANS_SB_DIRTY	0x02
#define	XFS_TRANS_PERM_LOG_RES	0x04
#define	XFS_TRANS_SYNC		0x08
#define XFS_TRANS_DQ_DIRTY	0x10
#define XFS_TRANS_RESERVE	0x20
#define	XFS_TRANS_RELEASE_LOG_RES	0x4
#define	XFS_TRANS_ABORT			0x8
#define	XFS_TRANS_SB_ICOUNT		0x00000001
#define	XFS_TRANS_SB_IFREE		0x00000002
#define	XFS_TRANS_SB_FDBLOCKS		0x00000004
#define	XFS_TRANS_SB_RES_FDBLOCKS	0x00000008
#define	XFS_TRANS_SB_FREXTENTS		0x00000010
#define	XFS_TRANS_SB_RES_FREXTENTS	0x00000020
#define	XFS_TRANS_SB_DBLOCKS		0x00000040
#define	XFS_TRANS_SB_AGCOUNT		0x00000080
#define	XFS_TRANS_SB_IMAXPCT		0x00000100
#define	XFS_TRANS_SB_REXTSIZE		0x00000200
#define	XFS_TRANS_SB_RBMBLOCKS		0x00000400
#define	XFS_TRANS_SB_RBLOCKS		0x00000800
#define	XFS_TRANS_SB_REXTENTS		0x00001000
#define	XFS_TRANS_SB_REXTSLOG		0x00002000
#define	XFS_ALLOCFREE_LOG_RES(mp,nx) \
((nx) * (2 * XFS_FSB_TO_B((mp), 2 * XFS_AG_MAXLEVELS(mp) - 1)))
#define	XFS_ALLOCFREE_LOG_COUNT(mp,nx) \
((nx) * (2 * (2 * XFS_AG_MAXLEVELS(mp) - 1)))
#define	XFS_DIROP_LOG_RES(mp)	\
(XFS_FSB_TO_B(mp, XFS_DAENTER_BLOCKS(mp, XFS_DATA_FORK)) + \
(XFS_FSB_TO_B(mp, XFS_DAENTER_BMAPS(mp, XFS_DATA_FORK) + 1)))
#define	XFS_DIROP_LOG_COUNT(mp)	\
(XFS_DAENTER_BLOCKS(mp, XFS_DATA_FORK) + \
XFS_DAENTER_BMAPS(mp, XFS_DATA_FORK) + 1)
#define	XFS_WRITE_LOG_RES(mp)	((mp)->m_reservations.tr_write)
#define	XFS_ITRUNCATE_LOG_RES(mp)   ((mp)->m_reservations.tr_itruncate)
#define	XFS_RENAME_LOG_RES(mp)	((mp)->m_reservations.tr_rename)
#define	XFS_LINK_LOG_RES(mp)	((mp)->m_reservations.tr_link)
#define	XFS_REMOVE_LOG_RES(mp)	((mp)->m_reservations.tr_remove)
#define	XFS_SYMLINK_LOG_RES(mp)	((mp)->m_reservations.tr_symlink)
#define	XFS_CREATE_LOG_RES(mp)	((mp)->m_reservations.tr_create)
#define	XFS_MKDIR_LOG_RES(mp)	((mp)->m_reservations.tr_mkdir)
#define	XFS_IFREE_LOG_RES(mp)	((mp)->m_reservations.tr_ifree)
#define	XFS_ICHANGE_LOG_RES(mp)	((mp)->m_reservations.tr_ichange)
#define	XFS_GROWDATA_LOG_RES(mp)    ((mp)->m_reservations.tr_growdata)
#define	XFS_GROWRTALLOC_LOG_RES(mp)	((mp)->m_reservations.tr_growrtalloc)
#define	XFS_GROWRTZERO_LOG_RES(mp)	((mp)->m_reservations.tr_growrtzero)
#define	XFS_GROWRTFREE_LOG_RES(mp)	((mp)->m_reservations.tr_growrtfree)
#define	XFS_SWRITE_LOG_RES(mp)	((mp)->m_reservations.tr_swrite)
#define XFS_FSYNC_TS_LOG_RES(mp)        ((mp)->m_reservations.tr_swrite)
#define	XFS_WRITEID_LOG_RES(mp)	((mp)->m_reservations.tr_swrite)
#define	XFS_ADDAFORK_LOG_RES(mp)	((mp)->m_reservations.tr_addafork)
#define	XFS_ATTRINVAL_LOG_RES(mp)	((mp)->m_reservations.tr_attrinval)
#define	XFS_ATTRSET_LOG_RES(mp, ext)	\
((mp)->m_reservations.tr_attrset + \
(ext * (mp)->m_sb.sb_sectsize) + \
(ext * XFS_FSB_TO_B((mp), XFS_BM_MAXLEVELS(mp, XFS_ATTR_FORK))) + \
(128 * (ext + (ext * XFS_BM_MAXLEVELS(mp, XFS_ATTR_FORK)))))
#define	XFS_ATTRRM_LOG_RES(mp)	((mp)->m_reservations.tr_attrrm)
#define	XFS_CLEAR_AGI_BUCKET_LOG_RES(mp)  ((mp)->m_reservations.tr_clearagi)
#define	XFS_DEFAULT_LOG_COUNT		1
#define	XFS_DEFAULT_PERM_LOG_COUNT	2
#define	XFS_ITRUNCATE_LOG_COUNT		2
#define XFS_INACTIVE_LOG_COUNT		2
#define	XFS_CREATE_LOG_COUNT		2
#define	XFS_MKDIR_LOG_COUNT		3
#define	XFS_SYMLINK_LOG_COUNT		3
#define	XFS_REMOVE_LOG_COUNT		2
#define	XFS_LINK_LOG_COUNT		2
#define	XFS_RENAME_LOG_COUNT		2
#define	XFS_WRITE_LOG_COUNT		2
#define	XFS_ADDAFORK_LOG_COUNT		2
#define	XFS_ATTRINVAL_LOG_COUNT		1
#define	XFS_ATTRSET_LOG_COUNT		3
#define	XFS_ATTRRM_LOG_COUNT		3
#define	XFS_AGF_REF		4
#define	XFS_AGI_REF		4
#define	XFS_AGFL_REF		3
#define	XFS_INO_BTREE_REF	3
#define	XFS_ALLOC_BTREE_REF	2
#define	XFS_BMAP_BTREE_REF	2
#define	XFS_DIR_BTREE_REF	2
#define	XFS_INO_REF		2
#define	XFS_ATTR_BTREE_REF	1
#define	XFS_DQUOT_REF		1
struct xfs_buf;
struct xfs_buftarg;
struct xfs_efd_log_item;
struct xfs_efi_log_item;
struct xfs_inode;
struct xfs_item_ops;
struct xfs_log_iovec;
struct xfs_log_item_desc;
struct xfs_mount;
struct xfs_trans;
struct xfs_dquot_acct;
struct xfs_busy_extent;
typedef struct xfs_log_item  xfs_log_item_t;
#define	XFS_LI_IN_AIL	0x1
#define XFS_LI_ABORTED	0x2
#define XFS_LI_FLAGS \
, \
typedef struct xfs_item_ops  xfs_item_ops_t;
#define IOP_SIZE(ip)		(*(ip)->li_ops->iop_size)(ip)
#define IOP_FORMAT(ip,vp)	(*(ip)->li_ops->iop_format)(ip, vp)
#define IOP_PIN(ip)		(*(ip)->li_ops->iop_pin)(ip)
#define IOP_UNPIN(ip, remove)	(*(ip)->li_ops->iop_unpin)(ip, remove)
#define IOP_TRYLOCK(ip)		(*(ip)->li_ops->iop_trylock)(ip)
#define IOP_UNLOCK(ip)		(*(ip)->li_ops->iop_unlock)(ip)
#define IOP_COMMITTED(ip, lsn)	(*(ip)->li_ops->iop_committed)(ip, lsn)
#define IOP_PUSH(ip)		(*(ip)->li_ops->iop_push)(ip)
#define IOP_PUSHBUF(ip)		(*(ip)->li_ops->iop_pushbuf)(ip)
#define IOP_COMMITTING(ip, lsn) (*(ip)->li_ops->iop_committing)(ip, lsn)
#define	XFS_ITEM_SUCCESS	0
#define	XFS_ITEM_PINNED		1
#define	XFS_ITEM_LOCKED		2
#define XFS_ITEM_PUSHBUF	3
typedef void (*xfs_trans_callback_t)(struct xfs_trans *, void *);
typedef struct xfs_trans  xfs_trans_t;
#define	xfs_trans_get_log_res(tp)	((tp)->t_log_res)
#define	xfs_trans_get_log_count(tp)	((tp)->t_log_count)
#define	xfs_trans_get_block_res(tp)	((tp)->t_blk_res)
#define	xfs_trans_set_sync(tp)		((tp)->t_flags |= XFS_TRANS_SYNC)
#define	xfs_trans_agblocks_delta(tp, d)	((tp)->t_ag_freeblks_delta += (int64_t)d)
#define	xfs_trans_agflist_delta(tp, d)	((tp)->t_ag_flist_delta += (int64_t)d)
#define	xfs_trans_agbtree_delta(tp, d)	((tp)->t_ag_btree_delta += (int64_t)d)
#define	xfs_trans_agblocks_delta(tp, d)
#define	xfs_trans_agflist_delta(tp, d)
#define	xfs_trans_agbtree_delta(tp, d)
xfs_trans_t	*xfs_trans_alloc(struct xfs_mount *, uint);
xfs_trans_t	*_xfs_trans_alloc(struct xfs_mount *, uint, uint);
xfs_trans_t	*xfs_trans_dup(xfs_trans_t *);
int		xfs_trans_reserve(xfs_trans_t *, uint, uint, uint,
uint, uint);
void		xfs_trans_mod_sb(xfs_trans_t *, uint, int64_t);
struct xfs_buf	*xfs_trans_get_buf(xfs_trans_t *, struct xfs_buftarg *, xfs_daddr_t,
int, uint);
int		xfs_trans_read_buf(struct xfs_mount *, xfs_trans_t *,
struct xfs_buftarg *, xfs_daddr_t, int, uint,
struct xfs_buf **);
struct xfs_buf	*xfs_trans_getsb(xfs_trans_t *, struct xfs_mount *, int);
void		xfs_trans_brelse(xfs_trans_t *, struct xfs_buf *);
void		xfs_trans_bjoin(xfs_trans_t *, struct xfs_buf *);
void		xfs_trans_bhold(xfs_trans_t *, struct xfs_buf *);
void		xfs_trans_bhold_release(xfs_trans_t *, struct xfs_buf *);
void		xfs_trans_binval(xfs_trans_t *, struct xfs_buf *);
void		xfs_trans_inode_buf(xfs_trans_t *, struct xfs_buf *);
void		xfs_trans_stale_inode_buf(xfs_trans_t *, struct xfs_buf *);
void		xfs_trans_dquot_buf(xfs_trans_t *, struct xfs_buf *, uint);
void		xfs_trans_inode_alloc_buf(xfs_trans_t *, struct xfs_buf *);
void		xfs_trans_ichgtime(struct xfs_trans *, struct xfs_inode *, int);
void		xfs_trans_ijoin_ref(struct xfs_trans *, struct xfs_inode *, uint);
void		xfs_trans_ijoin(struct xfs_trans *, struct xfs_inode *);
void		xfs_trans_log_buf(xfs_trans_t *, struct xfs_buf *, uint, uint);
void		xfs_trans_log_inode(xfs_trans_t *, struct xfs_inode *, uint);
struct xfs_efi_log_item	*xfs_trans_get_efi(xfs_trans_t *, uint);
void		xfs_efi_release(struct xfs_efi_log_item *, uint);
void		xfs_trans_log_efi_extent(xfs_trans_t *,
struct xfs_efi_log_item *,
xfs_fsblock_t,
xfs_extlen_t);
struct xfs_efd_log_item	*xfs_trans_get_efd(xfs_trans_t *,
struct xfs_efi_log_item *,
uint);
void		xfs_trans_log_efd_extent(xfs_trans_t *,
struct xfs_efd_log_item *,
xfs_fsblock_t,
xfs_extlen_t);
int		_xfs_trans_commit(xfs_trans_t *,
uint flags,
int *);
#define xfs_trans_commit(tp, flags)	_xfs_trans_commit(tp, flags, NULL)
void		xfs_trans_cancel(xfs_trans_t *, int);
int		xfs_trans_ail_init(struct xfs_mount *);
void		xfs_trans_ail_destroy(struct xfs_mount *);
extern kmem_zone_t	*xfs_trans_zone;
extern kmem_zone_t	*xfs_log_item_desc_zone;
void		xfs_trans_init(struct xfs_mount *);
int		xfs_trans_roll(struct xfs_trans **, struct xfs_inode *);
