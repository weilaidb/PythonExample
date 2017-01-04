struct metapath ;
typedef int (*block_call_t) (struct gfs2_inode *ip, struct buffer_head *dibh,
struct buffer_head *bh, __be64 *top,
__be64 *bottom, unsigned int height,
void *data);
struct strip_mine ;
static int gfs2_unstuffer_page(struct gfs2_inode *ip, struct buffer_head *dibh,
u64 block, struct page *page)
int gfs2_unstuff_dinode(struct gfs2_inode *ip, struct page *page)
static void find_metapath(const struct gfs2_sbd *sdp, u64 block,
struct metapath *mp, unsigned int height)
static inline unsigned int metapath_branch_start(const struct metapath *mp)
static inline __be64 *metapointer(unsigned int height, const struct metapath *mp)
static int lookup_metapath(struct gfs2_inode *ip, struct metapath *mp)
static inline void release_metapath(struct metapath *mp)
static inline unsigned int gfs2_extent_length(void *start, unsigned int len, __be64 *ptr, unsigned limit, int *eob)
static inline void bmap_lock(struct gfs2_inode *ip, int create)
static inline void bmap_unlock(struct gfs2_inode *ip, int create)
static inline __be64 *gfs2_indirect_init(struct metapath *mp,
struct gfs2_glock *gl, unsigned int i,
unsigned offset, u64 bn)
enum alloc_state ;
static int gfs2_bmap_alloc(struct inode *inode, const sector_t lblock,
struct buffer_head *bh_map, struct metapath *mp,
const unsigned int sheight,
const unsigned int height,
const unsigned int maxlen)
int gfs2_block_map(struct inode *inode, sector_t lblock,
struct buffer_head *bh_map, int create)
int gfs2_extent_map(struct inode *inode, u64 lblock, int *new, u64 *dblock, unsigned *extlen)
static int recursive_scan(struct gfs2_inode *ip, struct buffer_head *dibh,
struct metapath *mp, unsigned int height,
u64 block, int first, block_call_t bc,
void *data)
static int do_strip(struct gfs2_inode *ip, struct buffer_head *dibh,
struct buffer_head *bh, __be64 *top, __be64 *bottom,
unsigned int height, void *data)
static int gfs2_block_truncate_page(struct address_space *mapping, loff_t from)
static int trunc_start(struct inode *inode, u64 oldsize, u64 newsize)
static int trunc_dealloc(struct gfs2_inode *ip, u64 size)
static int trunc_end(struct gfs2_inode *ip)
static int do_shrink(struct inode *inode, u64 oldsize, u64 newsize)
void gfs2_trim_blocks(struct inode *inode)
static int do_grow(struct inode *inode, u64 size)
int gfs2_setattr_size(struct inode *inode, u64 newsize)
int gfs2_truncatei_resume(struct gfs2_inode *ip)
int gfs2_file_dealloc(struct gfs2_inode *ip)
int gfs2_write_alloc_required(struct gfs2_inode *ip, u64 offset,
unsigned int len)
