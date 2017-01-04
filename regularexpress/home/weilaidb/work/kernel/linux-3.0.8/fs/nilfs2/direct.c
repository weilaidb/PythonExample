static inline __le64 *nilfs_direct_dptrs(const struct nilfs_bmap *direct)
static inline __u64
nilfs_direct_get_ptr(const struct nilfs_bmap *direct, __u64 key)
static inline void nilfs_direct_set_ptr(struct nilfs_bmap *direct,
__u64 key, __u64 ptr)
static int nilfs_direct_lookup(const struct nilfs_bmap *direct,
__u64 key, int level, __u64 *ptrp)
static int nilfs_direct_lookup_contig(const struct nilfs_bmap *direct,
__u64 key, __u64 *ptrp,
unsigned maxblocks)
static __u64
nilfs_direct_find_target_v(const struct nilfs_bmap *direct, __u64 key)
static int nilfs_direct_insert(struct nilfs_bmap *bmap, __u64 key, __u64 ptr)
static int nilfs_direct_delete(struct nilfs_bmap *bmap, __u64 key)
static int nilfs_direct_last_key(const struct nilfs_bmap *direct, __u64 *keyp)
static int nilfs_direct_check_insert(const struct nilfs_bmap *bmap, __u64 key)
static int nilfs_direct_gather_data(struct nilfs_bmap *direct,
__u64 *keys, __u64 *ptrs, int nitems)
int nilfs_direct_delete_and_convert(struct nilfs_bmap *bmap,
__u64 key, __u64 *keys, __u64 *ptrs, int n)
static int nilfs_direct_propagate(struct nilfs_bmap *bmap,
struct buffer_head *bh)
static int nilfs_direct_assign_v(struct nilfs_bmap *direct,
__u64 key, __u64 ptr,
struct buffer_head **bh,
sector_t blocknr,
union nilfs_binfo *binfo)
static int nilfs_direct_assign_p(struct nilfs_bmap *direct,
__u64 key, __u64 ptr,
struct buffer_head **bh,
sector_t blocknr,
union nilfs_binfo *binfo)
static int nilfs_direct_assign(struct nilfs_bmap *bmap,
struct buffer_head **bh,
sector_t blocknr,
union nilfs_binfo *binfo)
static const struct nilfs_bmap_operations nilfs_direct_ops = ;
int nilfs_direct_init(struct nilfs_bmap *bmap)
