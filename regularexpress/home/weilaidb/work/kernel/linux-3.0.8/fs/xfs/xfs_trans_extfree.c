xfs_efi_log_item_t *
xfs_trans_get_efi(xfs_trans_t	*tp,
uint		nextents)
void
xfs_trans_log_efi_extent(xfs_trans_t		*tp,
xfs_efi_log_item_t	*efip,
xfs_fsblock_t		start_block,
xfs_extlen_t		ext_len)
xfs_efd_log_item_t *
xfs_trans_get_efd(xfs_trans_t		*tp,
xfs_efi_log_item_t	*efip,
uint			nextents)
void
xfs_trans_log_efd_extent(xfs_trans_t		*tp,
xfs_efd_log_item_t	*efdp,
xfs_fsblock_t		start_block,
xfs_extlen_t		ext_len)
