#define	__XFS_INODE_ITEM_H__
typedef struct xfs_inode_log_format  xfs_inode_log_format_t;
typedef struct xfs_inode_log_format_32  __attribute__((packed)) xfs_inode_log_format_32_t;
typedef struct xfs_inode_log_format_64  xfs_inode_log_format_64_t;
#define	XFS_ILOG_CORE	0x001
#define	XFS_ILOG_DDATA	0x002
#define	XFS_ILOG_DEXT	0x004
#define	XFS_ILOG_DBROOT	0x008
#define	XFS_ILOG_DEV	0x010
#define	XFS_ILOG_UUID	0x020
#define	XFS_ILOG_ADATA	0x040
#define	XFS_ILOG_AEXT	0x080
#define	XFS_ILOG_ABROOT	0x100
#define	XFS_ILOG_NONCORE	(XFS_ILOG_DDATA | XFS_ILOG_DEXT | \
XFS_ILOG_DBROOT | XFS_ILOG_DEV | \
XFS_ILOG_UUID | XFS_ILOG_ADATA | \
XFS_ILOG_AEXT | XFS_ILOG_ABROOT)
#define	XFS_ILOG_DFORK		(XFS_ILOG_DDATA | XFS_ILOG_DEXT | \
XFS_ILOG_DBROOT)
#define	XFS_ILOG_AFORK		(XFS_ILOG_ADATA | XFS_ILOG_AEXT | \
XFS_ILOG_ABROOT)
#define	XFS_ILOG_ALL		(XFS_ILOG_CORE | XFS_ILOG_DDATA | \
XFS_ILOG_DEXT | XFS_ILOG_DBROOT | \
XFS_ILOG_DEV | XFS_ILOG_UUID | \
XFS_ILOG_ADATA | XFS_ILOG_AEXT | \
XFS_ILOG_ABROOT)
static inline int xfs_ilog_fbroot(int w)
static inline int xfs_ilog_fext(int w)
static inline int xfs_ilog_fdata(int w)
struct xfs_buf;
struct xfs_bmbt_rec;
struct xfs_inode;
struct xfs_mount;
typedef struct xfs_inode_log_item  xfs_inode_log_item_t;
static inline int xfs_inode_clean(xfs_inode_t *ip)
extern void xfs_inode_item_init(struct xfs_inode *, struct xfs_mount *);
extern void xfs_inode_item_destroy(struct xfs_inode *);
extern void xfs_iflush_done(struct xfs_buf *, struct xfs_log_item *);
extern void xfs_istale_done(struct xfs_buf *, struct xfs_log_item *);
extern void xfs_iflush_abort(struct xfs_inode *);
extern int xfs_inode_item_format_convert(xfs_log_iovec_t *,
xfs_inode_log_format_t *);
