STATIC void
xfs_bmap_check_leaf_extents(xfs_btree_cur_t *cur, xfs_inode_t *ip, int whichfork);
kmem_zone_t		*xfs_bmap_free_item_zone;
STATIC int
xfs_bmap_add_attrfork_extents(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
int			*flags);
STATIC int
xfs_bmap_add_attrfork_local(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
int			*flags);
STATIC int
xfs_bmap_add_extent_delay_real(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_btree_cur_t		**curp,
xfs_bmbt_irec_t		*new,
xfs_filblks_t		*dnew,
xfs_fsblock_t		*first,
xfs_bmap_free_t		*flist,
int			*logflagsp);
STATIC int
xfs_bmap_add_extent_hole_delay(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_bmbt_irec_t		*new,
int			*logflagsp);
STATIC int
xfs_bmap_add_extent_hole_real(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_btree_cur_t		*cur,
xfs_bmbt_irec_t		*new,
int			*logflagsp,
int			whichfork);
STATIC int
xfs_bmap_add_extent_unwritten_real(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_btree_cur_t		**curp,
xfs_bmbt_irec_t		*new,
int			*logflagsp);
STATIC int
xfs_bmap_alloc(
xfs_bmalloca_t		*ap);
STATIC int
xfs_bmap_btree_to_extents(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_btree_cur_t		*cur,
int			*logflagsp,
int			whichfork);
STATIC void
xfs_bmap_del_free(
xfs_bmap_free_t		*flist,
xfs_bmap_free_item_t	*prev,
xfs_bmap_free_item_t	*free);
STATIC int
xfs_bmap_extents_to_btree(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
xfs_btree_cur_t		**curp,
int			wasdel,
int			*logflagsp,
int			whichfork);
STATIC int
xfs_bmap_local_to_extents(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_fsblock_t	*firstblock,
xfs_extlen_t	total,
int		*logflagsp,
int		whichfork);
STATIC xfs_bmbt_rec_host_t *
xfs_bmap_search_extents(
xfs_inode_t	*ip,
xfs_fileoff_t	bno,
int		whichfork,
int		*eofp,
xfs_extnum_t	*lastxp,
xfs_bmbt_irec_t	*gotp,
xfs_bmbt_irec_t	*prevp);
STATIC int
xfs_bmap_isaeof(
xfs_inode_t	*ip,
xfs_fileoff_t   off,
int             whichfork,
char		*aeof);
STATIC xfs_filblks_t
xfs_bmap_worst_indlen(
xfs_inode_t		*ip,
xfs_filblks_t		len);
STATIC void
xfs_bmap_validate_ret(
xfs_fileoff_t		bno,
xfs_filblks_t		len,
int			flags,
xfs_bmbt_irec_t		*mval,
int			nmap,
int			ret_nmap);
#define	xfs_bmap_validate_ret(bno,len,flags,mval,onmap,nmap)
STATIC int
xfs_bmap_count_tree(
xfs_mount_t     *mp,
xfs_trans_t     *tp,
xfs_ifork_t	*ifp,
xfs_fsblock_t   blockno,
int             levelin,
int		*count);
STATIC void
xfs_bmap_count_leaves(
xfs_ifork_t		*ifp,
xfs_extnum_t		idx,
int			numrecs,
int			*count);
STATIC void
xfs_bmap_disk_count_leaves(
struct xfs_mount	*mp,
struct xfs_btree_block	*block,
int			numrecs,
int			*count);
STATIC int
xfs_bmbt_lookup_eq(
struct xfs_btree_cur	*cur,
xfs_fileoff_t		off,
xfs_fsblock_t		bno,
xfs_filblks_t		len,
int			*stat)
STATIC int
xfs_bmbt_lookup_ge(
struct xfs_btree_cur	*cur,
xfs_fileoff_t		off,
xfs_fsblock_t		bno,
xfs_filblks_t		len,
int			*stat)
STATIC int
xfs_bmbt_update(
struct xfs_btree_cur	*cur,
xfs_fileoff_t		off,
xfs_fsblock_t		bno,
xfs_filblks_t		len,
xfs_exntst_t		state)
STATIC int
xfs_bmap_add_attrfork_btree(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
int			*flags)
STATIC int
xfs_bmap_add_attrfork_extents(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
int			*flags)
STATIC int
xfs_bmap_add_attrfork_local(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
int			*flags)
STATIC int
xfs_bmap_add_extent(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_btree_cur_t		**curp,
xfs_bmbt_irec_t		*new,
xfs_fsblock_t		*first,
xfs_bmap_free_t		*flist,
int			*logflagsp,
int			whichfork)
STATIC int
xfs_bmap_add_extent_delay_real(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_btree_cur_t		**curp,
xfs_bmbt_irec_t		*new,
xfs_filblks_t		*dnew,
xfs_fsblock_t		*first,
xfs_bmap_free_t		*flist,
int			*logflagsp)
STATIC int
xfs_bmap_add_extent_unwritten_real(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_btree_cur_t		**curp,
xfs_bmbt_irec_t		*new,
int			*logflagsp)
STATIC int
xfs_bmap_add_extent_hole_delay(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_bmbt_irec_t		*new,
int			*logflagsp)
STATIC int
xfs_bmap_add_extent_hole_real(
xfs_inode_t		*ip,
xfs_extnum_t		*idx,
xfs_btree_cur_t		*cur,
xfs_bmbt_irec_t		*new,
int			*logflagsp,
int			whichfork)
STATIC int
xfs_bmap_extsize_align(
xfs_mount_t	*mp,
xfs_bmbt_irec_t	*gotp,
xfs_bmbt_irec_t	*prevp,
xfs_extlen_t	extsz,
int		rt,
int		eof,
int		delay,
int		convert,
xfs_fileoff_t	*offp,
xfs_extlen_t	*lenp)
#define XFS_ALLOC_GAP_UNITS	4
STATIC void
xfs_bmap_adjacent(
xfs_bmalloca_t	*ap)
STATIC int
xfs_bmap_rtalloc(
xfs_bmalloca_t	*ap)
STATIC int
xfs_bmap_btalloc_nullfb(
struct xfs_bmalloca	*ap,
struct xfs_alloc_arg	*args,
xfs_extlen_t		*blen)
STATIC int
xfs_bmap_btalloc(
xfs_bmalloca_t	*ap)
STATIC int
xfs_bmap_alloc(
xfs_bmalloca_t	*ap)
STATIC int
xfs_bmap_btree_to_extents(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_btree_cur_t		*cur,
int			*logflagsp,
int			whichfork)
STATIC int
xfs_bmap_del_extent(
xfs_inode_t		*ip,
xfs_trans_t		*tp,
xfs_extnum_t		*idx,
xfs_bmap_free_t		*flist,
xfs_btree_cur_t		*cur,
xfs_bmbt_irec_t		*del,
int			*logflagsp,
int			whichfork)
STATIC void
xfs_bmap_del_free(
xfs_bmap_free_t		*flist,
xfs_bmap_free_item_t	*prev,
xfs_bmap_free_item_t	*free)
STATIC int
xfs_bmap_extents_to_btree(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
xfs_btree_cur_t		**curp,
int			wasdel,
int			*logflagsp,
int			whichfork)
uint
xfs_default_attroffset(
struct xfs_inode	*ip)
STATIC void
xfs_bmap_forkoff_reset(
xfs_mount_t	*mp,
xfs_inode_t	*ip,
int		whichfork)
STATIC int
xfs_bmap_local_to_extents(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_fsblock_t	*firstblock,
xfs_extlen_t	total,
int		*logflagsp,
int		whichfork)
STATIC xfs_bmbt_rec_host_t *
xfs_bmap_search_multi_extents(
xfs_ifork_t	*ifp,
xfs_fileoff_t	bno,
int		*eofp,
xfs_extnum_t	*lastxp,
xfs_bmbt_irec_t	*gotp,
xfs_bmbt_irec_t	*prevp)
STATIC xfs_bmbt_rec_host_t *
xfs_bmap_search_extents(
xfs_inode_t     *ip,
xfs_fileoff_t   bno,
int             fork,
int             *eofp,
xfs_extnum_t    *lastxp,
xfs_bmbt_irec_t *gotp,
xfs_bmbt_irec_t *prevp)
STATIC xfs_filblks_t
xfs_bmap_worst_indlen(
xfs_inode_t	*ip,
xfs_filblks_t	len)
int
xfs_bmap_add_attrfork(
xfs_inode_t		*ip,
int			size,
int			rsvd)
void
xfs_bmap_add_free(
xfs_fsblock_t		bno,
xfs_filblks_t		len,
xfs_bmap_free_t		*flist,
xfs_mount_t		*mp)
void
xfs_bmap_compute_maxlevels(
xfs_mount_t	*mp,
int		whichfork)
int
xfs_bmap_finish(
xfs_trans_t		**tp,
xfs_bmap_free_t		*flist,
int			*committed)
void
xfs_bmap_cancel(
xfs_bmap_free_t		*flist)
int
xfs_bmap_first_unused(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_extlen_t	len,
xfs_fileoff_t	*first_unused,
int		whichfork)
int
xfs_bmap_last_before(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_fileoff_t	*last_block,
int		whichfork)
int
xfs_bmap_last_offset(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_fileoff_t	*last_block,
int		whichfork)
int
xfs_bmap_one_block(
xfs_inode_t	*ip,
int		whichfork)
STATIC int
xfs_bmap_sanity_check(
struct xfs_mount	*mp,
struct xfs_buf		*bp,
int			level)
int
xfs_bmap_read_extents(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
int			whichfork)
void
xfs_bmap_trace_exlist(
xfs_inode_t	*ip,
xfs_extnum_t	cnt,
int		whichfork,
unsigned long	caller_ip)
STATIC void
xfs_bmap_validate_ret(
xfs_fileoff_t		bno,
xfs_filblks_t		len,
int			flags,
xfs_bmbt_irec_t		*mval,
int			nmap,
int			ret_nmap)
int
xfs_bmapi(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_fileoff_t	bno,
xfs_filblks_t	len,
int		flags,
xfs_fsblock_t	*firstblock,
xfs_extlen_t	total,
xfs_bmbt_irec_t	*mval,
int		*nmap,
xfs_bmap_free_t	*flist)
int
xfs_bmapi_single(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
int		whichfork,
xfs_fsblock_t	*fsb,
xfs_fileoff_t	bno)
int
xfs_bunmapi(
xfs_trans_t		*tp,
struct xfs_inode	*ip,
xfs_fileoff_t		bno,
xfs_filblks_t		len,
int			flags,
xfs_extnum_t		nexts,
xfs_fsblock_t		*firstblock,
xfs_bmap_free_t		*flist,
int			*done)
STATIC int
xfs_getbmapx_fix_eof_hole(
xfs_inode_t		*ip,
struct getbmapx		*out,
int			prealloced,
__int64_t		end,
xfs_fsblock_t		startblock)
int
xfs_getbmap(
xfs_inode_t		*ip,
struct getbmapx		*bmv,
xfs_bmap_format_t	formatter,
void			*arg)
STATIC int
xfs_bmap_isaeof(
xfs_inode_t	*ip,
xfs_fileoff_t   off,
int             whichfork,
char		*aeof)
int
xfs_bmap_eof(
xfs_inode_t	*ip,
xfs_fileoff_t	endoff,
int		whichfork,
int		*eof)
STATIC struct xfs_buf *
xfs_bmap_get_bp(
struct xfs_btree_cur	*cur,
xfs_fsblock_t		bno)
STATIC void
xfs_check_block(
struct xfs_btree_block	*block,
xfs_mount_t		*mp,
int			root,
short			sz)
STATIC void
xfs_bmap_check_leaf_extents(
xfs_btree_cur_t		*cur,
xfs_inode_t		*ip,
int			whichfork)
int
xfs_bmap_count_blocks(
xfs_trans_t		*tp,
xfs_inode_t		*ip,
int			whichfork,
int			*count)
STATIC int
xfs_bmap_count_tree(
xfs_mount_t     *mp,
xfs_trans_t     *tp,
xfs_ifork_t	*ifp,
xfs_fsblock_t   blockno,
int             levelin,
int		*count)
STATIC void
xfs_bmap_count_leaves(
xfs_ifork_t		*ifp,
xfs_extnum_t		idx,
int			numrecs,
int			*count)
STATIC void
xfs_bmap_disk_count_leaves(
struct xfs_mount	*mp,
struct xfs_btree_block	*block,
int			numrecs,
int			*count)
int
xfs_bmap_punch_delalloc_range(
struct xfs_inode	*ip,
xfs_fileoff_t		start_fsb,
xfs_fileoff_t		length)
