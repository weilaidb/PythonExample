void
xfs_dir2_data_check(
xfs_inode_t		*dp,
xfs_dabuf_t		*bp)
xfs_dir2_data_free_t *
xfs_dir2_data_freefind(
xfs_dir2_data_t		*d,
xfs_dir2_data_unused_t	*dup)
xfs_dir2_data_free_t *
xfs_dir2_data_freeinsert(
xfs_dir2_data_t		*d,
xfs_dir2_data_unused_t	*dup,
int			*loghead)
STATIC void
xfs_dir2_data_freeremove(
xfs_dir2_data_t		*d,
xfs_dir2_data_free_t	*dfp,
int			*loghead)
void
xfs_dir2_data_freescan(
xfs_mount_t		*mp,
xfs_dir2_data_t		*d,
int			*loghead)
int
xfs_dir2_data_init(
xfs_da_args_t		*args,
xfs_dir2_db_t		blkno,
xfs_dabuf_t		**bpp)
void
xfs_dir2_data_log_entry(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp,
xfs_dir2_data_entry_t	*dep)
void
xfs_dir2_data_log_header(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp)
void
xfs_dir2_data_log_unused(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp,
xfs_dir2_data_unused_t	*dup)
void
xfs_dir2_data_make_free(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp,
xfs_dir2_data_aoff_t	offset,
xfs_dir2_data_aoff_t	len,
int			*needlogp,
int			*needscanp)
void
xfs_dir2_data_use_free(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp,
xfs_dir2_data_unused_t	*dup,
xfs_dir2_data_aoff_t	offset,
xfs_dir2_data_aoff_t	len,
int			*needlogp,
int			*needscanp)
