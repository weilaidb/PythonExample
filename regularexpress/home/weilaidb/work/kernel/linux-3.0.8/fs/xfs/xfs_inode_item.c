kmem_zone_t	*xfs_ili_zone;
static inline struct xfs_inode_log_item *INODE_ITEM(struct xfs_log_item *lip)
STATIC uint
xfs_inode_item_size(
struct xfs_log_item	*lip)
STATIC void
xfs_inode_item_format_extents(
struct xfs_inode	*ip,
struct xfs_log_iovec	*vecp,
int			whichfork,
int			type)
STATIC void
xfs_inode_item_format(
struct xfs_log_item	*lip,
struct xfs_log_iovec	*vecp)
STATIC void
xfs_inode_item_pin(
struct xfs_log_item	*lip)
STATIC void
xfs_inode_item_unpin(
struct xfs_log_item	*lip,
int			remove)
STATIC uint
xfs_inode_item_trylock(
struct xfs_log_item	*lip)
STATIC void
xfs_inode_item_unlock(
struct xfs_log_item	*lip)
STATIC xfs_lsn_t
xfs_inode_item_committed(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
STATIC bool
xfs_inode_item_pushbuf(
struct xfs_log_item	*lip)
STATIC void
xfs_inode_item_push(
struct xfs_log_item	*lip)
STATIC void
xfs_inode_item_committing(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
static struct xfs_item_ops xfs_inode_item_ops = ;
void
xfs_inode_item_init(
struct xfs_inode	*ip,
struct xfs_mount	*mp)
void
xfs_inode_item_destroy(
xfs_inode_t	*ip)
void
xfs_iflush_done(
struct xfs_buf		*bp,
struct xfs_log_item	*lip)
void
xfs_iflush_abort(
xfs_inode_t		*ip)
void
xfs_istale_done(
struct xfs_buf		*bp,
struct xfs_log_item	*lip)
int
xfs_inode_item_format_convert(
xfs_log_iovec_t		*buf,
xfs_inode_log_format_t	*in_f)
