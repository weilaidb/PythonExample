struct inode *nilfs_bmap_get_dat(const struct nilfs_bmap *bmap)
static int nilfs_bmap_convert_error(struct nilfs_bmap *bmap,
const char *fname, int err)
int nilfs_bmap_lookup_at_level(struct nilfs_bmap *bmap, __u64 key, int level,
__u64 *ptrp)
int nilfs_bmap_lookup_contig(struct nilfs_bmap *bmap, __u64 key, __u64 *ptrp,
unsigned maxblocks)
static int nilfs_bmap_do_insert(struct nilfs_bmap *bmap, __u64 key, __u64 ptr)
int nilfs_bmap_insert(struct nilfs_bmap *bmap,
unsigned long key,
unsigned long rec)
static int nilfs_bmap_do_delete(struct nilfs_bmap *bmap, __u64 key)
int nilfs_bmap_last_key(struct nilfs_bmap *bmap, unsigned long *key)
int nilfs_bmap_delete(struct nilfs_bmap *bmap, unsigned long key)
static int nilfs_bmap_do_truncate(struct nilfs_bmap *bmap, unsigned long key)
int nilfs_bmap_truncate(struct nilfs_bmap *bmap, unsigned long key)
void nilfs_bmap_clear(struct nilfs_bmap *bmap)
int nilfs_bmap_propagate(struct nilfs_bmap *bmap, struct buffer_head *bh)
void nilfs_bmap_lookup_dirty_buffers(struct nilfs_bmap *bmap,
struct list_head *listp)
int nilfs_bmap_assign(struct nilfs_bmap *bmap,
struct buffer_head **bh,
unsigned long blocknr,
union nilfs_binfo *binfo)
int nilfs_bmap_mark(struct nilfs_bmap *bmap, __u64 key, int level)
int nilfs_bmap_test_and_clear_dirty(struct nilfs_bmap *bmap)
__u64 nilfs_bmap_data_get_key(const struct nilfs_bmap *bmap,
const struct buffer_head *bh)
__u64 nilfs_bmap_find_target_seq(const struct nilfs_bmap *bmap, __u64 key)
#define NILFS_BMAP_GROUP_DIV	8
__u64 nilfs_bmap_find_target_in_group(const struct nilfs_bmap *bmap)
static struct lock_class_key nilfs_bmap_dat_lock_key;
static struct lock_class_key nilfs_bmap_mdt_lock_key;
int nilfs_bmap_read(struct nilfs_bmap *bmap, struct nilfs_inode *raw_inode)
void nilfs_bmap_write(struct nilfs_bmap *bmap, struct nilfs_inode *raw_inode)
void nilfs_bmap_init_gc(struct nilfs_bmap *bmap)
void nilfs_bmap_save(const struct nilfs_bmap *bmap,
struct nilfs_bmap_store *store)
void nilfs_bmap_restore(struct nilfs_bmap *bmap,
const struct nilfs_bmap_store *store)
