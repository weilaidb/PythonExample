#define _NILFS_BMAP_H
#define NILFS_BMAP_INVALID_PTR	0
#define nilfs_bmap_keydiff_abs(diff)	((diff) < 0 ? -(diff) : (diff))
struct nilfs_bmap;
union nilfs_bmap_ptr_req ;
struct nilfs_bmap_stats ;
struct nilfs_bmap_operations ;
#define NILFS_BMAP_SIZE		(NILFS_INODE_BMAP_SIZE * sizeof(__le64))
#define NILFS_BMAP_KEY_BIT	(sizeof(unsigned long) * 8)
#define NILFS_BMAP_NEW_PTR_INIT	\
(1UL << (sizeof(unsigned long) * 8 - 1))
static inline int nilfs_bmap_is_new_ptr(unsigned long ptr)
struct nilfs_bmap ;
#define NILFS_BMAP_PTR_P	0
#define NILFS_BMAP_PTR_VS	1
#define NILFS_BMAP_PTR_VM	2
#define NILFS_BMAP_PTR_U	(-1)
#define NILFS_BMAP_USE_VBN(bmap)	((bmap)->b_ptr_type > 0)
#define NILFS_BMAP_DIRTY	0x00000001
struct nilfs_bmap_store ;
int nilfs_bmap_test_and_clear_dirty(struct nilfs_bmap *);
int nilfs_bmap_read(struct nilfs_bmap *, struct nilfs_inode *);
void nilfs_bmap_write(struct nilfs_bmap *, struct nilfs_inode *);
int nilfs_bmap_lookup_contig(struct nilfs_bmap *, __u64, __u64 *, unsigned);
int nilfs_bmap_insert(struct nilfs_bmap *, unsigned long, unsigned long);
int nilfs_bmap_delete(struct nilfs_bmap *, unsigned long);
int nilfs_bmap_last_key(struct nilfs_bmap *, unsigned long *);
int nilfs_bmap_truncate(struct nilfs_bmap *, unsigned long);
void nilfs_bmap_clear(struct nilfs_bmap *);
int nilfs_bmap_propagate(struct nilfs_bmap *, struct buffer_head *);
void nilfs_bmap_lookup_dirty_buffers(struct nilfs_bmap *, struct list_head *);
int nilfs_bmap_assign(struct nilfs_bmap *, struct buffer_head **,
unsigned long, union nilfs_binfo *);
int nilfs_bmap_lookup_at_level(struct nilfs_bmap *, __u64, int, __u64 *);
int nilfs_bmap_mark(struct nilfs_bmap *, __u64, int);
void nilfs_bmap_init_gc(struct nilfs_bmap *);
void nilfs_bmap_save(const struct nilfs_bmap *, struct nilfs_bmap_store *);
void nilfs_bmap_restore(struct nilfs_bmap *, const struct nilfs_bmap_store *);
static inline int nilfs_bmap_lookup(struct nilfs_bmap *bmap, __u64 key,
__u64 *ptr)
struct inode *nilfs_bmap_get_dat(const struct nilfs_bmap *);
static inline int nilfs_bmap_prepare_alloc_ptr(struct nilfs_bmap *bmap,
union nilfs_bmap_ptr_req *req,
struct inode *dat)
static inline void nilfs_bmap_commit_alloc_ptr(struct nilfs_bmap *bmap,
union nilfs_bmap_ptr_req *req,
struct inode *dat)
static inline void nilfs_bmap_abort_alloc_ptr(struct nilfs_bmap *bmap,
union nilfs_bmap_ptr_req *req,
struct inode *dat)
static inline int nilfs_bmap_prepare_end_ptr(struct nilfs_bmap *bmap,
union nilfs_bmap_ptr_req *req,
struct inode *dat)
static inline void nilfs_bmap_commit_end_ptr(struct nilfs_bmap *bmap,
union nilfs_bmap_ptr_req *req,
struct inode *dat)
static inline void nilfs_bmap_abort_end_ptr(struct nilfs_bmap *bmap,
union nilfs_bmap_ptr_req *req,
struct inode *dat)
static inline void nilfs_bmap_set_target_v(struct nilfs_bmap *bmap, __u64 key,
__u64 ptr)
__u64 nilfs_bmap_data_get_key(const struct nilfs_bmap *,
const struct buffer_head *);
__u64 nilfs_bmap_find_target_seq(const struct nilfs_bmap *, __u64);
__u64 nilfs_bmap_find_target_in_group(const struct nilfs_bmap *);
static inline int nilfs_bmap_dirty(const struct nilfs_bmap *bmap)
static inline void nilfs_bmap_set_dirty(struct nilfs_bmap *bmap)
static inline void nilfs_bmap_clear_dirty(struct nilfs_bmap *bmap)
#define NILFS_BMAP_LARGE	0x1
#define NILFS_BMAP_SMALL_LOW	NILFS_DIRECT_KEY_MIN
#define NILFS_BMAP_SMALL_HIGH	NILFS_DIRECT_KEY_MAX
#define NILFS_BMAP_LARGE_LOW	NILFS_BTREE_ROOT_NCHILDREN_MAX
#define NILFS_BMAP_LARGE_HIGH	NILFS_BTREE_KEY_MAX
