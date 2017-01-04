kmem_zone_t	*xfs_buf_item_zone;
static inline struct xfs_buf_log_item *BUF_ITEM(struct xfs_log_item *lip)
STATIC void
xfs_buf_item_log_debug(
xfs_buf_log_item_t	*bip,
uint			first,
uint			last)
void
xfs_buf_item_flush_log_debug(
xfs_buf_t	*bp,
uint		first,
uint		last)
STATIC void
xfs_buf_item_log_check(
xfs_buf_log_item_t	*bip)
#define		xfs_buf_item_log_debug(x,y,z)
#define		xfs_buf_item_log_check(x)
STATIC void	xfs_buf_do_callbacks(struct xfs_buf *bp);
STATIC uint
xfs_buf_item_size(
struct xfs_log_item	*lip)
STATIC void
xfs_buf_item_format(
struct xfs_log_item	*lip,
struct xfs_log_iovec	*vecp)
STATIC void
xfs_buf_item_pin(
struct xfs_log_item	*lip)
STATIC void
xfs_buf_item_unpin(
struct xfs_log_item	*lip,
int			remove)
STATIC uint
xfs_buf_item_trylock(
struct xfs_log_item	*lip)
STATIC void
xfs_buf_item_unlock(
struct xfs_log_item	*lip)
STATIC xfs_lsn_t
xfs_buf_item_committed(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
STATIC void
xfs_buf_item_push(
struct xfs_log_item	*lip)
STATIC bool
xfs_buf_item_pushbuf(
struct xfs_log_item	*lip)
STATIC void
xfs_buf_item_committing(
struct xfs_log_item	*lip,
xfs_lsn_t		commit_lsn)
static struct xfs_item_ops xfs_buf_item_ops = ;
void
xfs_buf_item_init(
xfs_buf_t	*bp,
xfs_mount_t	*mp)
void
xfs_buf_item_log(
xfs_buf_log_item_t	*bip,
uint			first,
uint			last)
uint
xfs_buf_item_dirty(
xfs_buf_log_item_t	*bip)
STATIC void
xfs_buf_item_free(
xfs_buf_log_item_t	*bip)
void
xfs_buf_item_relse(
xfs_buf_t	*bp)
void
xfs_buf_attach_iodone(
xfs_buf_t	*bp,
void		(*cb)(xfs_buf_t *, xfs_log_item_t *),
xfs_log_item_t	*lip)
STATIC void
xfs_buf_do_callbacks(
struct xfs_buf		*bp)
void
xfs_buf_iodone_callbacks(
struct xfs_buf		*bp)
void
xfs_buf_iodone(
struct xfs_buf		*bp,
struct xfs_log_item	*lip)
