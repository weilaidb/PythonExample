kmem_zone_t	*xfs_efi_zone;
kmem_zone_t	*xfs_efd_zone;
static inline struct xfs_efi_log_item *EFI_ITEM(struct xfs_log_item *lip)
void
xfs_efi_item_free(
struct xfs_efi_log_item	*efip)
STATIC void
__xfs_efi_release(
struct xfs_efi_log_item	*efip)
STATIC uint
xfs_efi_item_size(
struct xfs_log_item	*lip)
STATIC void
xfs_efi_item_format(
struct xfs_log_item	*lip,
struct xfs_log_iovec	*log_vector)
STATIC void
xfs_efi_item_pin(
struct xfs_log_item	*lip)
STATIC void
xfs_efi_item_unpin(
struct xfs_log_item	*lip,
int			remove)
STATIC uint
xfs_efi_item_trylock(
struct xfs_log_item	*lip)
STATIC void
xfs_efi_item_unlock(
struct xfs_log_item	*lip)
STATIC xfs_lsn_t
xfs_efi_item_committed(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
STATIC void
xfs_efi_item_push(
struct xfs_log_item	*lip)
STATIC void
xfs_efi_item_committing(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
static struct xfs_item_ops xfs_efi_item_ops = ;
struct xfs_efi_log_item *
xfs_efi_init(
struct xfs_mount	*mp,
uint			nextents)
int
xfs_efi_copy_format(xfs_log_iovec_t *buf, xfs_efi_log_format_t *dst_efi_fmt)
void
xfs_efi_release(xfs_efi_log_item_t	*efip,
uint			nextents)
static inline struct xfs_efd_log_item *EFD_ITEM(struct xfs_log_item *lip)
STATIC void
xfs_efd_item_free(struct xfs_efd_log_item *efdp)
STATIC uint
xfs_efd_item_size(
struct xfs_log_item	*lip)
STATIC void
xfs_efd_item_format(
struct xfs_log_item	*lip,
struct xfs_log_iovec	*log_vector)
STATIC void
xfs_efd_item_pin(
struct xfs_log_item	*lip)
STATIC void
xfs_efd_item_unpin(
struct xfs_log_item	*lip,
int			remove)
STATIC uint
xfs_efd_item_trylock(
struct xfs_log_item	*lip)
STATIC void
xfs_efd_item_unlock(
struct xfs_log_item	*lip)
STATIC xfs_lsn_t
xfs_efd_item_committed(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
STATIC void
xfs_efd_item_push(
struct xfs_log_item	*lip)
STATIC void
xfs_efd_item_committing(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
static struct xfs_item_ops xfs_efd_item_ops = ;
struct xfs_efd_log_item *
xfs_efd_init(
struct xfs_mount	*mp,
struct xfs_efi_log_item	*efip,
uint			nextents)
