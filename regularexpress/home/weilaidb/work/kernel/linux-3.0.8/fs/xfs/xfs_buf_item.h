#define	__XFS_BUF_ITEM_H__
extern kmem_zone_t	*xfs_buf_item_zone;
typedef struct xfs_buf_log_format  xfs_buf_log_format_t;
#define	XFS_BLF_INODE_BUF	0x1
#define	XFS_BLF_CANCEL		0x2
#define	XFS_BLF_UDQUOT_BUF	0x4
#define XFS_BLF_PDQUOT_BUF	0x8
#define	XFS_BLF_GDQUOT_BUF	0x10
#define	XFS_BLF_CHUNK		128
#define	XFS_BLF_SHIFT		7
#define	BIT_TO_WORD_SHIFT	5
#define	NBWORD			(NBBY * sizeof(unsigned int))
#define	XFS_BLI_HOLD		0x01
#define	XFS_BLI_DIRTY		0x02
#define	XFS_BLI_STALE		0x04
#define	XFS_BLI_LOGGED		0x08
#define	XFS_BLI_INODE_ALLOC_BUF	0x10
#define XFS_BLI_STALE_INODE	0x20
#define	XFS_BLI_INODE_BUF	0x40
#define XFS_BLI_FLAGS \
, \
, \
, \
, \
, \
, \
struct xfs_buf;
struct xfs_mount;
struct xfs_buf_log_item;
typedef struct xfs_buf_log_item  xfs_buf_log_item_t;
void	xfs_buf_item_init(struct xfs_buf *, struct xfs_mount *);
void	xfs_buf_item_relse(struct xfs_buf *);
void	xfs_buf_item_log(xfs_buf_log_item_t *, uint, uint);
uint	xfs_buf_item_dirty(xfs_buf_log_item_t *);
void	xfs_buf_attach_iodone(struct xfs_buf *,
void(*)(struct xfs_buf *, xfs_log_item_t *),
xfs_log_item_t *);
void	xfs_buf_iodone_callbacks(struct xfs_buf *);
void	xfs_buf_iodone(struct xfs_buf *, struct xfs_log_item *);
void
xfs_buf_item_flush_log_debug(
struct xfs_buf *bp,
uint	first,
uint	last);
#define	xfs_buf_item_flush_log_debug(bp, first, last)
