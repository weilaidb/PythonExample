#define	__XFS_EXTFREE_ITEM_H__
struct xfs_mount;
struct kmem_zone;
typedef struct xfs_extent  xfs_extent_t;
typedef struct xfs_extent_32  __attribute__((packed)) xfs_extent_32_t;
typedef struct xfs_extent_64  xfs_extent_64_t;
typedef struct xfs_efi_log_format  xfs_efi_log_format_t;
typedef struct xfs_efi_log_format_32  __attribute__((packed)) xfs_efi_log_format_32_t;
typedef struct xfs_efi_log_format_64  xfs_efi_log_format_64_t;
typedef struct xfs_efd_log_format  xfs_efd_log_format_t;
typedef struct xfs_efd_log_format_32  __attribute__((packed)) xfs_efd_log_format_32_t;
typedef struct xfs_efd_log_format_64  xfs_efd_log_format_64_t;
#define	XFS_EFI_MAX_FAST_EXTENTS	16
#define	XFS_EFI_RECOVERED	1
#define	XFS_EFI_COMMITTED	2
typedef struct xfs_efi_log_item  xfs_efi_log_item_t;
typedef struct xfs_efd_log_item  xfs_efd_log_item_t;
#define	XFS_EFD_MAX_FAST_EXTENTS	16
extern struct kmem_zone	*xfs_efi_zone;
extern struct kmem_zone	*xfs_efd_zone;
xfs_efi_log_item_t	*xfs_efi_init(struct xfs_mount *, uint);
xfs_efd_log_item_t	*xfs_efd_init(struct xfs_mount *, xfs_efi_log_item_t *,
uint);
int			xfs_efi_copy_format(xfs_log_iovec_t *buf,
xfs_efi_log_format_t *dst_efi_fmt);
void			xfs_efi_item_free(xfs_efi_log_item_t *);
