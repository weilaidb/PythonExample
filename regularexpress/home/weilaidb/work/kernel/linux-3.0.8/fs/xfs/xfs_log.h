#define __XFS_LOG_H__
#define CYCLE_LSN(lsn) ((uint)((lsn)>>32))
#define BLOCK_LSN(lsn) ((uint)(lsn))
#define CYCLE_LSN_DISK(lsn) (((__be32 *)&(lsn))[0])
static inline xfs_lsn_t	_lsn_cmp(xfs_lsn_t lsn1, xfs_lsn_t lsn2)
#define	XFS_LSN_CMP(x,y) _lsn_cmp(x,y)
#define XFS_LOG_REL_PERM_RESERV	0x1
#define XFS_LOG_PERM_RESERV	0x2
#define XFS_LOG_SYNC		0x1
#define XFS_TRANSACTION		0x69
#define XFS_VOLUME		0x2
#define XFS_LOG			0xaa
#define XLOG_REG_TYPE_BFORMAT		1
#define XLOG_REG_TYPE_BCHUNK		2
#define XLOG_REG_TYPE_EFI_FORMAT	3
#define XLOG_REG_TYPE_EFD_FORMAT	4
#define XLOG_REG_TYPE_IFORMAT		5
#define XLOG_REG_TYPE_ICORE		6
#define XLOG_REG_TYPE_IEXT		7
#define XLOG_REG_TYPE_IBROOT		8
#define XLOG_REG_TYPE_ILOCAL		9
#define XLOG_REG_TYPE_IATTR_EXT		10
#define XLOG_REG_TYPE_IATTR_BROOT	11
#define XLOG_REG_TYPE_IATTR_LOCAL	12
#define XLOG_REG_TYPE_QFORMAT		13
#define XLOG_REG_TYPE_DQUOT		14
#define XLOG_REG_TYPE_QUOTAOFF		15
#define XLOG_REG_TYPE_LRHEADER		16
#define XLOG_REG_TYPE_UNMOUNT		17
#define XLOG_REG_TYPE_COMMIT		18
#define XLOG_REG_TYPE_TRANSHDR		19
#define XLOG_REG_TYPE_MAX		19
typedef struct xfs_log_iovec  xfs_log_iovec_t;
struct xfs_log_vec ;
typedef struct xfs_log_callback  xfs_log_callback_t;
struct xfs_mount;
struct xlog_in_core;
struct xlog_ticket;
struct xfs_log_item;
struct xfs_item_ops;
struct xfs_trans;
void	xfs_log_item_init(struct xfs_mount	*mp,
struct xfs_log_item	*item,
int			type,
struct xfs_item_ops	*ops);
xfs_lsn_t xfs_log_done(struct xfs_mount *mp,
struct xlog_ticket *ticket,
struct xlog_in_core **iclog,
uint		flags);
int	  _xfs_log_force(struct xfs_mount *mp,
uint		flags,
int		*log_forced);
void	  xfs_log_force(struct xfs_mount	*mp,
uint			flags);
int	  _xfs_log_force_lsn(struct xfs_mount *mp,
xfs_lsn_t		lsn,
uint		flags,
int		*log_forced);
void	  xfs_log_force_lsn(struct xfs_mount	*mp,
xfs_lsn_t		lsn,
uint		flags);
int	  xfs_log_mount(struct xfs_mount	*mp,
struct xfs_buftarg	*log_target,
xfs_daddr_t		start_block,
int		 	num_bblocks);
int	  xfs_log_mount_finish(struct xfs_mount *mp);
void	  xfs_log_move_tail(struct xfs_mount	*mp,
xfs_lsn_t		tail_lsn);
int	  xfs_log_notify(struct xfs_mount	*mp,
struct xlog_in_core	*iclog,
xfs_log_callback_t	*callback_entry);
int	  xfs_log_release_iclog(struct xfs_mount *mp,
struct xlog_in_core	 *iclog);
int	  xfs_log_reserve(struct xfs_mount *mp,
int		   length,
int		   count,
struct xlog_ticket **ticket,
__uint8_t	   clientid,
uint		   flags,
uint		   t_type);
int	  xfs_log_write(struct xfs_mount *mp,
xfs_log_iovec_t  region[],
int		 nentries,
struct xlog_ticket *ticket,
xfs_lsn_t	 *start_lsn);
int	  xfs_log_unmount_write(struct xfs_mount *mp);
void      xfs_log_unmount(struct xfs_mount *mp);
int	  xfs_log_force_umount(struct xfs_mount *mp, int logerror);
int	  xfs_log_need_covered(struct xfs_mount *mp);
void	  xlog_iodone(struct xfs_buf *);
struct xlog_ticket *xfs_log_ticket_get(struct xlog_ticket *ticket);
void	  xfs_log_ticket_put(struct xlog_ticket *ticket);
void	xfs_log_commit_cil(struct xfs_mount *mp, struct xfs_trans *tp,
struct xfs_log_vec *log_vector,
xfs_lsn_t *commit_lsn, int flags);
bool	xfs_log_item_in_current_chkpt(struct xfs_log_item *lip);
