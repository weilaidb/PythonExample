kmem_zone_t *xfs_ifork_zone;
kmem_zone_t *xfs_inode_zone;
#define	XFS_ITRUNC_MAX_EXTENTS	2
STATIC int xfs_iflush_int(xfs_inode_t *, xfs_buf_t *);
STATIC int xfs_iformat_local(xfs_inode_t *, xfs_dinode_t *, int, int);
STATIC int xfs_iformat_extents(xfs_inode_t *, xfs_dinode_t *, int);
STATIC int xfs_iformat_btree(xfs_inode_t *, xfs_dinode_t *, int);
STATIC void
xfs_validate_extents(
xfs_ifork_t		*ifp,
int			nrecs,
xfs_exntfmt_t		fmt)
#define xfs_validate_extents(ifp, nrecs, fmt)
#if defined(DEBUG)
void
xfs_inobp_check(
xfs_mount_t	*mp,
xfs_buf_t	*bp)
STATIC int
xfs_imap_to_bp(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
struct xfs_imap	*imap,
xfs_buf_t	**bpp,
uint		buf_flags,
uint		iget_flags)
int
xfs_inotobp(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_ino_t	ino,
xfs_dinode_t	**dipp,
xfs_buf_t	**bpp,
int		*offset,
uint		imap_flags)
int
xfs_itobp(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_dinode_t	**dipp,
xfs_buf_t	**bpp,
uint		buf_flags)
STATIC int
xfs_iformat(
xfs_inode_t		*ip,
xfs_dinode_t		*dip)
STATIC int
xfs_iformat_local(
xfs_inode_t	*ip,
xfs_dinode_t	*dip,
int		whichfork,
int		size)
STATIC int
xfs_iformat_extents(
xfs_inode_t	*ip,
xfs_dinode_t	*dip,
int		whichfork)
STATIC int
xfs_iformat_btree(
xfs_inode_t		*ip,
xfs_dinode_t		*dip,
int			whichfork)
STATIC void
xfs_dinode_from_disk(
xfs_icdinode_t		*to,
xfs_dinode_t		*from)
void
xfs_dinode_to_disk(
xfs_dinode_t		*to,
xfs_icdinode_t		*from)
STATIC uint
_xfs_dic2xflags(
__uint16_t		di_flags)
uint
xfs_ip2xflags(
xfs_inode_t		*ip)
uint
xfs_dic2xflags(
xfs_dinode_t		*dip)
int
xfs_iread(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_inode_t	*ip,
uint		iget_flags)
int
xfs_iread_extents(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
int		whichfork)
int
xfs_ialloc(
xfs_trans_t	*tp,
xfs_inode_t	*pip,
mode_t		mode,
xfs_nlink_t	nlink,
xfs_dev_t	rdev,
prid_t		prid,
int		okalloc,
xfs_buf_t	**ialloc_context,
boolean_t	*call_again,
xfs_inode_t	**ipp)
void
xfs_isize_check(
xfs_mount_t	*mp,
xfs_inode_t	*ip,
xfs_fsize_t	isize)
STATIC xfs_fsize_t
xfs_file_last_byte(
xfs_inode_t	*ip)
int
xfs_itruncate_start(
xfs_inode_t	*ip,
uint		flags,
xfs_fsize_t	new_size)
int
xfs_itruncate_finish(
xfs_trans_t	**tp,
xfs_inode_t	*ip,
xfs_fsize_t	new_size,
int		fork,
int		sync)
int
xfs_iunlink(
xfs_trans_t	*tp,
xfs_inode_t	*ip)
STATIC int
xfs_iunlink_remove(
xfs_trans_t	*tp,
xfs_inode_t	*ip)
STATIC void
xfs_ifree_cluster(
xfs_inode_t	*free_ip,
xfs_trans_t	*tp,
xfs_ino_t	inum)
int
xfs_ifree(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_bmap_free_t	*flist)
void
xfs_iroot_realloc(
xfs_inode_t		*ip,
int			rec_diff,
int			whichfork)
void
xfs_idata_realloc(
xfs_inode_t	*ip,
int		byte_diff,
int		whichfork)
void
xfs_idestroy_fork(
xfs_inode_t	*ip,
int		whichfork)
static void
xfs_iunpin_nowait(
struct xfs_inode	*ip)
void
xfs_iunpin_wait(
struct xfs_inode	*ip)
int
xfs_iextents_copy(
xfs_inode_t		*ip,
xfs_bmbt_rec_t		*dp,
int			whichfork)
STATIC void
xfs_iflush_fork(
xfs_inode_t		*ip,
xfs_dinode_t		*dip,
xfs_inode_log_item_t	*iip,
int			whichfork,
xfs_buf_t		*bp)
STATIC int
xfs_iflush_cluster(
xfs_inode_t	*ip,
xfs_buf_t	*bp)
int
xfs_iflush(
xfs_inode_t		*ip,
uint			flags)
STATIC int
xfs_iflush_int(
xfs_inode_t		*ip,
xfs_buf_t		*bp)
xfs_bmbt_rec_host_t *
xfs_iext_get_ext(
xfs_ifork_t	*ifp,
xfs_extnum_t	idx)
void
xfs_iext_insert(
xfs_inode_t	*ip,
xfs_extnum_t	idx,
xfs_extnum_t	count,
xfs_bmbt_irec_t	*new,
int		state)
void
xfs_iext_add(
xfs_ifork_t	*ifp,
xfs_extnum_t	idx,
int		ext_diff)
void
xfs_iext_add_indirect_multi(
xfs_ifork_t	*ifp,
int		erp_idx,
xfs_extnum_t	idx,
int		count)
void
xfs_iext_remove(
xfs_inode_t	*ip,
xfs_extnum_t	idx,
int		ext_diff,
int		state)
void
xfs_iext_remove_inline(
xfs_ifork_t	*ifp,
xfs_extnum_t	idx,
int		ext_diff)
void
xfs_iext_remove_direct(
xfs_ifork_t	*ifp,
xfs_extnum_t	idx,
int		ext_diff)
void
xfs_iext_remove_indirect(
xfs_ifork_t	*ifp,
xfs_extnum_t	idx,
int		count)
void
xfs_iext_realloc_direct(
xfs_ifork_t	*ifp,
int		new_size)
void
xfs_iext_direct_to_inline(
xfs_ifork_t	*ifp,
xfs_extnum_t	nextents)
void
xfs_iext_inline_to_direct(
xfs_ifork_t	*ifp,
int		new_size)
STATIC void
xfs_iext_realloc_indirect(
xfs_ifork_t	*ifp,
int		new_size)
STATIC void
xfs_iext_indirect_to_direct(
xfs_ifork_t	*ifp)
void
xfs_iext_destroy(
xfs_ifork_t	*ifp)
xfs_bmbt_rec_host_t *
xfs_iext_bno_to_ext(
xfs_ifork_t	*ifp,
xfs_fileoff_t	bno,
xfs_extnum_t	*idxp)
xfs_ext_irec_t *
xfs_iext_bno_to_irec(
xfs_ifork_t	*ifp,
xfs_fileoff_t	bno,
int		*erp_idxp)
xfs_ext_irec_t *
xfs_iext_idx_to_irec(
xfs_ifork_t	*ifp,
xfs_extnum_t	*idxp,
int		*erp_idxp,
int		realloc)
void
xfs_iext_irec_init(
xfs_ifork_t	*ifp)
xfs_ext_irec_t *
xfs_iext_irec_new(
xfs_ifork_t	*ifp,
int		erp_idx)
void
xfs_iext_irec_remove(
xfs_ifork_t	*ifp,
int		erp_idx)
void
xfs_iext_irec_compact(
xfs_ifork_t	*ifp)
void
xfs_iext_irec_compact_pages(
xfs_ifork_t	*ifp)
void
xfs_iext_irec_update_extoffs(
xfs_ifork_t	*ifp,
int		erp_idx,
int		ext_diff)
