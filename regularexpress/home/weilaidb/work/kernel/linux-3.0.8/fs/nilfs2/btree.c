static struct nilfs_btree_path *nilfs_btree_alloc_path(void)
static void nilfs_btree_free_path(struct nilfs_btree_path *path)
static int nilfs_btree_get_new_block(const struct nilfs_bmap *btree,
__u64 ptr, struct buffer_head **bhp)
static int nilfs_btree_node_get_flags(const struct nilfs_btree_node *node)
static void
nilfs_btree_node_set_flags(struct nilfs_btree_node *node, int flags)
static int nilfs_btree_node_root(const struct nilfs_btree_node *node)
static int nilfs_btree_node_get_level(const struct nilfs_btree_node *node)
static void
nilfs_btree_node_set_level(struct nilfs_btree_node *node, int level)
static int nilfs_btree_node_get_nchildren(const struct nilfs_btree_node *node)
static void
nilfs_btree_node_set_nchildren(struct nilfs_btree_node *node, int nchildren)
static int nilfs_btree_node_size(const struct nilfs_bmap *btree)
static int nilfs_btree_nchildren_per_block(const struct nilfs_bmap *btree)
static __le64 *
nilfs_btree_node_dkeys(const struct nilfs_btree_node *node)
static __le64 *
nilfs_btree_node_dptrs(const struct nilfs_btree_node *node, int ncmax)
static __u64
nilfs_btree_node_get_key(const struct nilfs_btree_node *node, int index)
static void
nilfs_btree_node_set_key(struct nilfs_btree_node *node, int index, __u64 key)
static __u64
nilfs_btree_node_get_ptr(const struct nilfs_btree_node *node, int index,
int ncmax)
static void
nilfs_btree_node_set_ptr(struct nilfs_btree_node *node, int index, __u64 ptr,
int ncmax)
static void nilfs_btree_node_init(struct nilfs_btree_node *node, int flags,
int level, int nchildren, int ncmax,
const __u64 *keys, const __u64 *ptrs)
static void nilfs_btree_node_move_left(struct nilfs_btree_node *left,
struct nilfs_btree_node *right,
int n, int lncmax, int rncmax)
static void nilfs_btree_node_move_right(struct nilfs_btree_node *left,
struct nilfs_btree_node *right,
int n, int lncmax, int rncmax)
static void nilfs_btree_node_insert(struct nilfs_btree_node *node, int index,
__u64 key, __u64 ptr, int ncmax)
static void nilfs_btree_node_delete(struct nilfs_btree_node *node, int index,
__u64 *keyp, __u64 *ptrp, int ncmax)
static int nilfs_btree_node_lookup(const struct nilfs_btree_node *node,
__u64 key, int *indexp)
static int nilfs_btree_node_broken(const struct nilfs_btree_node *node,
size_t size, sector_t blocknr)
int nilfs_btree_broken_node_block(struct buffer_head *bh)
static struct nilfs_btree_node *
nilfs_btree_get_root(const struct nilfs_bmap *btree)
static struct nilfs_btree_node *
nilfs_btree_get_nonroot_node(const struct nilfs_btree_path *path, int level)
static struct nilfs_btree_node *
nilfs_btree_get_sib_node(const struct nilfs_btree_path *path, int level)
static int nilfs_btree_height(const struct nilfs_bmap *btree)
static struct nilfs_btree_node *
nilfs_btree_get_node(const struct nilfs_bmap *btree,
const struct nilfs_btree_path *path,
int level, int *ncmaxp)
static int
nilfs_btree_bad_node(struct nilfs_btree_node *node, int level)
struct nilfs_btree_readahead_info ;
static int __nilfs_btree_get_block(const struct nilfs_bmap *btree, __u64 ptr,
struct buffer_head **bhp,
const struct nilfs_btree_readahead_info *ra)
static int nilfs_btree_get_block(const struct nilfs_bmap *btree, __u64 ptr,
struct buffer_head **bhp)
static int nilfs_btree_do_lookup(const struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
__u64 key, __u64 *ptrp, int minlevel,
int readahead)
static int nilfs_btree_do_lookup_last(const struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
__u64 *keyp, __u64 *ptrp)
static int nilfs_btree_lookup(const struct nilfs_bmap *btree,
__u64 key, int level, __u64 *ptrp)
static int nilfs_btree_lookup_contig(const struct nilfs_bmap *btree,
__u64 key, __u64 *ptrp, unsigned maxblocks)
static void nilfs_btree_promote_key(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 key)
static void nilfs_btree_do_insert(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_carry_left(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_carry_right(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_split(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_grow(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static __u64 nilfs_btree_find_near(const struct nilfs_bmap *btree,
const struct nilfs_btree_path *path)
static __u64 nilfs_btree_find_target_v(const struct nilfs_bmap *btree,
const struct nilfs_btree_path *path,
__u64 key)
static int nilfs_btree_prepare_insert(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int *levelp, __u64 key, __u64 ptr,
struct nilfs_bmap_stats *stats)
static void nilfs_btree_commit_insert(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int maxlevel, __u64 key, __u64 ptr)
static int nilfs_btree_insert(struct nilfs_bmap *btree, __u64 key, __u64 ptr)
static void nilfs_btree_do_delete(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_borrow_left(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_borrow_right(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_concat_left(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_concat_right(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_shrink(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static void nilfs_btree_nop(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, __u64 *keyp, __u64 *ptrp)
static int nilfs_btree_prepare_delete(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int *levelp,
struct nilfs_bmap_stats *stats,
struct inode *dat)
static void nilfs_btree_commit_delete(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int maxlevel, struct inode *dat)
static int nilfs_btree_delete(struct nilfs_bmap *btree, __u64 key)
static int nilfs_btree_last_key(const struct nilfs_bmap *btree, __u64 *keyp)
static int nilfs_btree_check_delete(struct nilfs_bmap *btree, __u64 key)
static int nilfs_btree_gather_data(struct nilfs_bmap *btree,
__u64 *keys, __u64 *ptrs, int nitems)
static int
nilfs_btree_prepare_convert_and_insert(struct nilfs_bmap *btree, __u64 key,
union nilfs_bmap_ptr_req *dreq,
union nilfs_bmap_ptr_req *nreq,
struct buffer_head **bhp,
struct nilfs_bmap_stats *stats)
static void
nilfs_btree_commit_convert_and_insert(struct nilfs_bmap *btree,
__u64 key, __u64 ptr,
const __u64 *keys, const __u64 *ptrs,
int n,
union nilfs_bmap_ptr_req *dreq,
union nilfs_bmap_ptr_req *nreq,
struct buffer_head *bh)
int nilfs_btree_convert_and_insert(struct nilfs_bmap *btree,
__u64 key, __u64 ptr,
const __u64 *keys, const __u64 *ptrs, int n)
static int nilfs_btree_propagate_p(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level,
struct buffer_head *bh)
static int nilfs_btree_prepare_update_v(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, struct inode *dat)
static void nilfs_btree_commit_update_v(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, struct inode *dat)
static void nilfs_btree_abort_update_v(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, struct inode *dat)
static int nilfs_btree_prepare_propagate_v(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int minlevel, int *maxlevelp,
struct inode *dat)
static void nilfs_btree_commit_propagate_v(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int minlevel, int maxlevel,
struct buffer_head *bh,
struct inode *dat)
static int nilfs_btree_propagate_v(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level, struct buffer_head *bh)
static int nilfs_btree_propagate(struct nilfs_bmap *btree,
struct buffer_head *bh)
static int nilfs_btree_propagate_gc(struct nilfs_bmap *btree,
struct buffer_head *bh)
static void nilfs_btree_add_dirty_buffer(struct nilfs_bmap *btree,
struct list_head *lists,
struct buffer_head *bh)
static void nilfs_btree_lookup_dirty_buffers(struct nilfs_bmap *btree,
struct list_head *listp)
static int nilfs_btree_assign_p(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level,
struct buffer_head **bh,
sector_t blocknr,
union nilfs_binfo *binfo)
static int nilfs_btree_assign_v(struct nilfs_bmap *btree,
struct nilfs_btree_path *path,
int level,
struct buffer_head **bh,
sector_t blocknr,
union nilfs_binfo *binfo)
static int nilfs_btree_assign(struct nilfs_bmap *btree,
struct buffer_head **bh,
sector_t blocknr,
union nilfs_binfo *binfo)
static int nilfs_btree_assign_gc(struct nilfs_bmap *btree,
struct buffer_head **bh,
sector_t blocknr,
union nilfs_binfo *binfo)
static int nilfs_btree_mark(struct nilfs_bmap *btree, __u64 key, int level)
static const struct nilfs_bmap_operations nilfs_btree_ops = ;
static const struct nilfs_bmap_operations nilfs_btree_ops_gc = ;
int nilfs_btree_init(struct nilfs_bmap *bmap)
void nilfs_btree_init_gc(struct nilfs_bmap *bmap)
