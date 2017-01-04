#define XFS_WRITEIO_ALIGN(mp,off)	(((off) >> mp->m_writeio_log) \
<< mp->m_writeio_log)
#define XFS_WRITE_IMAPS		XFS_BMAP_MAX_NMAP
STATIC int
xfs_iomap_eof_align_last_fsb(
xfs_mount_t	*mp,
xfs_inode_t	*ip,
xfs_extlen_t	extsize,
xfs_fileoff_t	*last_fsb)
STATIC int
xfs_alert_fsblock_zero(
xfs_inode_t	*ip,
xfs_bmbt_irec_t	*imap)
int
xfs_iomap_write_direct(
xfs_inode_t	*ip,
xfs_off_t	offset,
size_t		count,
xfs_bmbt_irec_t *imap,
int		nmaps)
STATIC int
xfs_iomap_eof_want_preallocate(
xfs_mount_t	*mp,
xfs_inode_t	*ip,
xfs_off_t	offset,
size_t		count,
xfs_bmbt_irec_t *imap,
int		nimaps,
int		*prealloc)
STATIC xfs_fsblock_t
xfs_iomap_prealloc_size(
struct xfs_mount	*mp,
struct xfs_inode	*ip)
int
xfs_iomap_write_delay(
xfs_inode_t	*ip,
xfs_off_t	offset,
size_t		count,
xfs_bmbt_irec_t *ret_imap)
int
xfs_iomap_write_allocate(
xfs_inode_t	*ip,
xfs_off_t	offset,
size_t		count,
xfs_bmbt_irec_t *imap)
int
xfs_iomap_write_unwritten(
xfs_inode_t	*ip,
xfs_off_t	offset,
size_t		count)
