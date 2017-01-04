static inline unsigned long
nilfs_palloc_groups_per_desc_block(const struct inode *inode)
static inline unsigned long
nilfs_palloc_groups_count(const struct inode *inode)
int nilfs_palloc_init_blockgroup(struct inode *inode, unsigned entry_size)
static unsigned long nilfs_palloc_group(const struct inode *inode, __u64 nr,
unsigned long *offset)
static unsigned long
nilfs_palloc_desc_blkoff(const struct inode *inode, unsigned long group)
static unsigned long
nilfs_palloc_bitmap_blkoff(const struct inode *inode, unsigned long group)
static unsigned long
nilfs_palloc_group_desc_nfrees(struct inode *inode, unsigned long group,
const struct nilfs_palloc_group_desc *desc)
static void
nilfs_palloc_group_desc_add_entries(struct inode *inode,
unsigned long group,
struct nilfs_palloc_group_desc *desc,
u32 n)
static unsigned long
nilfs_palloc_entry_blkoff(const struct inode *inode, __u64 nr)
static void nilfs_palloc_desc_block_init(struct inode *inode,
struct buffer_head *bh, void *kaddr)
static int nilfs_palloc_get_block(struct inode *inode, unsigned long blkoff,
int create,
void (*init_block)(struct inode *,
struct buffer_head *,
void *),
struct buffer_head **bhp,
struct nilfs_bh_assoc *prev,
spinlock_t *lock)
static int nilfs_palloc_get_desc_block(struct inode *inode,
unsigned long group,
int create, struct buffer_head **bhp)
static int nilfs_palloc_get_bitmap_block(struct inode *inode,
unsigned long group,
int create, struct buffer_head **bhp)
int nilfs_palloc_get_entry_block(struct inode *inode, __u64 nr,
int create, struct buffer_head **bhp)
static struct nilfs_palloc_group_desc *
nilfs_palloc_block_get_group_desc(const struct inode *inode,
unsigned long group,
const struct buffer_head *bh, void *kaddr)
void *nilfs_palloc_block_get_entry(const struct inode *inode, __u64 nr,
const struct buffer_head *bh, void *kaddr)
static int nilfs_palloc_find_available_slot(struct inode *inode,
unsigned long group,
unsigned long target,
unsigned char *bitmap,
int bsize)
static unsigned long
nilfs_palloc_rest_groups_in_desc_block(const struct inode *inode,
unsigned long curr, unsigned long max)
int nilfs_palloc_prepare_alloc_entry(struct inode *inode,
struct nilfs_palloc_req *req)
void nilfs_palloc_commit_alloc_entry(struct inode *inode,
struct nilfs_palloc_req *req)
void nilfs_palloc_commit_free_entry(struct inode *inode,
struct nilfs_palloc_req *req)
void nilfs_palloc_abort_alloc_entry(struct inode *inode,
struct nilfs_palloc_req *req)
int nilfs_palloc_prepare_free_entry(struct inode *inode,
struct nilfs_palloc_req *req)
void nilfs_palloc_abort_free_entry(struct inode *inode,
struct nilfs_palloc_req *req)
static int
nilfs_palloc_group_is_in(struct inode *inode, unsigned long group, __u64 nr)
int nilfs_palloc_freev(struct inode *inode, __u64 *entry_nrs, size_t nitems)
void nilfs_palloc_setup_cache(struct inode *inode,
struct nilfs_palloc_cache *cache)
void nilfs_palloc_clear_cache(struct inode *inode)
void nilfs_palloc_destroy_cache(struct inode *inode)
