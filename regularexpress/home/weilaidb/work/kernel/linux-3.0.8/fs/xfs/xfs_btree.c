kmem_zone_t	*xfs_btree_cur_zone;
const __uint32_t xfs_magics[XFS_BTNUM_MAX] = ;
STATIC int
xfs_btree_check_lblock(
struct xfs_btree_cur	*cur,
struct xfs_btree_block	*block,
int			level,
struct xfs_buf		*bp)
STATIC int
xfs_btree_check_sblock(
struct xfs_btree_cur	*cur,
struct xfs_btree_block	*block,
int			level,
struct xfs_buf		*bp)
int
xfs_btree_check_block(
struct xfs_btree_cur	*cur,
struct xfs_btree_block	*block,
int			level,
struct xfs_buf		*bp)
int
xfs_btree_check_lptr(
struct xfs_btree_cur	*cur,
xfs_dfsbno_t		bno,
int			level)
STATIC int
xfs_btree_check_sptr(
struct xfs_btree_cur	*cur,
xfs_agblock_t		bno,
int			level)
STATIC int
xfs_btree_check_ptr(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr,
int			index,
int			level)
void
xfs_btree_del_cursor(
xfs_btree_cur_t	*cur,
int		error)
int
xfs_btree_dup_cursor(
xfs_btree_cur_t	*cur,
xfs_btree_cur_t	**ncur)
static inline size_t xfs_btree_block_len(struct xfs_btree_cur *cur)
static inline size_t xfs_btree_ptr_len(struct xfs_btree_cur *cur)
STATIC size_t
xfs_btree_rec_offset(
struct xfs_btree_cur	*cur,
int			n)
STATIC size_t
xfs_btree_key_offset(
struct xfs_btree_cur	*cur,
int			n)
STATIC size_t
xfs_btree_ptr_offset(
struct xfs_btree_cur	*cur,
int			n,
int			level)
STATIC union xfs_btree_rec *
xfs_btree_rec_addr(
struct xfs_btree_cur	*cur,
int			n,
struct xfs_btree_block	*block)
STATIC union xfs_btree_key *
xfs_btree_key_addr(
struct xfs_btree_cur	*cur,
int			n,
struct xfs_btree_block	*block)
STATIC union xfs_btree_ptr *
xfs_btree_ptr_addr(
struct xfs_btree_cur	*cur,
int			n,
struct xfs_btree_block	*block)
STATIC struct xfs_btree_block *
xfs_btree_get_iroot(
struct xfs_btree_cur    *cur)
STATIC struct xfs_btree_block *
xfs_btree_get_block(
struct xfs_btree_cur	*cur,
int			level,
struct xfs_buf		**bpp)
xfs_buf_t *
xfs_btree_get_bufl(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_fsblock_t	fsbno,
uint		lock)
xfs_buf_t *
xfs_btree_get_bufs(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_agnumber_t	agno,
xfs_agblock_t	agbno,
uint		lock)
int
xfs_btree_islastblock(
xfs_btree_cur_t		*cur,
int			level)
STATIC int
xfs_btree_firstrec(
xfs_btree_cur_t		*cur,
int			level)
STATIC int
xfs_btree_lastrec(
xfs_btree_cur_t		*cur,
int			level)
void
xfs_btree_offsets(
__int64_t	fields,
const short	*offsets,
int		nbits,
int		*first,
int		*last)
int
xfs_btree_read_bufl(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_fsblock_t	fsbno,
uint		lock,
xfs_buf_t	**bpp,
int		refval)
void
xfs_btree_reada_bufl(
xfs_mount_t	*mp,
xfs_fsblock_t	fsbno,
xfs_extlen_t	count)
void
xfs_btree_reada_bufs(
xfs_mount_t	*mp,
xfs_agnumber_t	agno,
xfs_agblock_t	agbno,
xfs_extlen_t	count)
STATIC int
xfs_btree_readahead_lblock(
struct xfs_btree_cur	*cur,
int			lr,
struct xfs_btree_block	*block)
STATIC int
xfs_btree_readahead_sblock(
struct xfs_btree_cur	*cur,
int			lr,
struct xfs_btree_block *block)
STATIC int
xfs_btree_readahead(
struct xfs_btree_cur	*cur,
int			lev,
int			lr)
STATIC void
xfs_btree_setbuf(
xfs_btree_cur_t		*cur,
int			lev,
xfs_buf_t		*bp)
STATIC int
xfs_btree_ptr_is_null(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr)
STATIC void
xfs_btree_set_ptr_null(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr)
STATIC void
xfs_btree_get_sibling(
struct xfs_btree_cur	*cur,
struct xfs_btree_block	*block,
union xfs_btree_ptr	*ptr,
int			lr)
STATIC void
xfs_btree_set_sibling(
struct xfs_btree_cur	*cur,
struct xfs_btree_block	*block,
union xfs_btree_ptr	*ptr,
int			lr)
STATIC void
xfs_btree_init_block(
struct xfs_btree_cur	*cur,
int			level,
int			numrecs,
struct xfs_btree_block	*new)
STATIC int
xfs_btree_is_lastrec(
struct xfs_btree_cur	*cur,
struct xfs_btree_block	*block,
int			level)
STATIC void
xfs_btree_buf_to_ptr(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp,
union xfs_btree_ptr	*ptr)
STATIC xfs_daddr_t
xfs_btree_ptr_to_daddr(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr)
STATIC void
xfs_btree_set_refs(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp)
STATIC int
xfs_btree_get_buf_block(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr,
int			flags,
struct xfs_btree_block	**block,
struct xfs_buf		**bpp)
STATIC int
xfs_btree_read_buf_block(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr,
int			level,
int			flags,
struct xfs_btree_block	**block,
struct xfs_buf		**bpp)
STATIC void
xfs_btree_copy_keys(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*dst_key,
union xfs_btree_key	*src_key,
int			numkeys)
STATIC void
xfs_btree_copy_recs(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*dst_rec,
union xfs_btree_rec	*src_rec,
int			numrecs)
STATIC void
xfs_btree_copy_ptrs(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*dst_ptr,
union xfs_btree_ptr	*src_ptr,
int			numptrs)
STATIC void
xfs_btree_shift_keys(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*key,
int			dir,
int			numkeys)
STATIC void
xfs_btree_shift_recs(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*rec,
int			dir,
int			numrecs)
STATIC void
xfs_btree_shift_ptrs(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr,
int			dir,
int			numptrs)
STATIC void
xfs_btree_log_keys(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp,
int			first,
int			last)
void
xfs_btree_log_recs(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp,
int			first,
int			last)
STATIC void
xfs_btree_log_ptrs(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp,
int			first,
int			last)
void
xfs_btree_log_block(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp,
int			fields)
int
xfs_btree_increment(
struct xfs_btree_cur	*cur,
int			level,
int			*stat)
int
xfs_btree_decrement(
struct xfs_btree_cur	*cur,
int			level,
int			*stat)
STATIC int
xfs_btree_lookup_get_block(
struct xfs_btree_cur	*cur,
int			level,
union xfs_btree_ptr	*pp,
struct xfs_btree_block	**blkp)
STATIC union xfs_btree_key *
xfs_lookup_get_search_key(
struct xfs_btree_cur	*cur,
int			level,
int			keyno,
struct xfs_btree_block	*block,
union xfs_btree_key	*kp)
int
xfs_btree_lookup(
struct xfs_btree_cur	*cur,
xfs_lookup_t		dir,
int			*stat)
STATIC int
xfs_btree_updkey(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*keyp,
int			level)
int
xfs_btree_update(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*rec)
STATIC int
xfs_btree_lshift(
struct xfs_btree_cur	*cur,
int			level,
int			*stat)
STATIC int
xfs_btree_rshift(
struct xfs_btree_cur	*cur,
int			level,
int			*stat)
STATIC int
xfs_btree_split(
struct xfs_btree_cur	*cur,
int			level,
union xfs_btree_ptr	*ptrp,
union xfs_btree_key	*key,
struct xfs_btree_cur	**curp,
int			*stat)
int
xfs_btree_new_iroot(
struct xfs_btree_cur	*cur,
int			*logflags,
int			*stat)
STATIC int
xfs_btree_new_root(
struct xfs_btree_cur	*cur,
int			*stat)
STATIC int
xfs_btree_make_block_unfull(
struct xfs_btree_cur	*cur,
int			level,
int			numrecs,
int			*oindex,
int			*index,
union xfs_btree_ptr	*nptr,
struct xfs_btree_cur	**ncur,
union xfs_btree_rec	*nrec,
int			*stat)
STATIC int
xfs_btree_insrec(
struct xfs_btree_cur	*cur,
int			level,
union xfs_btree_ptr	*ptrp,
union xfs_btree_rec	*recp,
struct xfs_btree_cur	**curp,
int			*stat)
int
xfs_btree_insert(
struct xfs_btree_cur	*cur,
int			*stat)
STATIC int
xfs_btree_kill_iroot(
struct xfs_btree_cur	*cur)
STATIC int
xfs_btree_kill_root(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp,
int			level,
union xfs_btree_ptr	*newroot)
STATIC int
xfs_btree_dec_cursor(
struct xfs_btree_cur	*cur,
int			level,
int			*stat)
STATIC int
xfs_btree_delrec(
struct xfs_btree_cur	*cur,
int			level,
int			*stat)
int
xfs_btree_delete(
struct xfs_btree_cur	*cur,
int			*stat)
int
xfs_btree_get_rec(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	**recp,
int			*stat)
