#define _EXT4_EXTENTS
#define AGGRESSIVE_TEST_
#define EXTENTS_STATS__
#define CHECK_BINSEARCH__
#define EXT_DEBUG__
#define ext_debug(a...)		printk(a)
#define ext_debug(a...)
#define EXT_STATS_
struct ext4_extent ;
struct ext4_extent_idx ;
struct ext4_extent_header ;
#define EXT4_EXT_MAGIC		cpu_to_le16(0xf30a)
struct ext4_ext_path ;
typedef int (*ext_prepare_callback)(struct inode *, ext4_lblk_t,
struct ext4_ext_cache *,
struct ext4_extent *, void *);
#define EXT_CONTINUE   0
#define EXT_BREAK      1
#define EXT_REPEAT     2
#define EXT_MAX_BLOCKS	0xffffffff
#define EXT_INIT_MAX_LEN	(1UL << 15)
#define EXT_UNINIT_MAX_LEN	(EXT_INIT_MAX_LEN - 1)
#define EXT_FIRST_EXTENT(__hdr__) \
((struct ext4_extent *) (((char *) (__hdr__)) +		\
sizeof(struct ext4_extent_header)))
#define EXT_FIRST_INDEX(__hdr__) \
((struct ext4_extent_idx *) (((char *) (__hdr__)) +	\
sizeof(struct ext4_extent_header)))
#define EXT_HAS_FREE_INDEX(__path__) \
(le16_to_cpu((__path__)->p_hdr->eh_entries) \
< le16_to_cpu((__path__)->p_hdr->eh_max))
#define EXT_LAST_EXTENT(__hdr__) \
(EXT_FIRST_EXTENT((__hdr__)) + le16_to_cpu((__hdr__)->eh_entries) - 1)
#define EXT_LAST_INDEX(__hdr__) \
(EXT_FIRST_INDEX((__hdr__)) + le16_to_cpu((__hdr__)->eh_entries) - 1)
#define EXT_MAX_EXTENT(__hdr__) \
(EXT_FIRST_EXTENT((__hdr__)) + le16_to_cpu((__hdr__)->eh_max) - 1)
#define EXT_MAX_INDEX(__hdr__) \
(EXT_FIRST_INDEX((__hdr__)) + le16_to_cpu((__hdr__)->eh_max) - 1)
static inline struct ext4_extent_header *ext_inode_hdr(struct inode *inode)
static inline struct ext4_extent_header *ext_block_hdr(struct buffer_head *bh)
static inline unsigned short ext_depth(struct inode *inode)
static inline void
ext4_ext_invalidate_cache(struct inode *inode)
static inline void ext4_ext_mark_uninitialized(struct ext4_extent *ext)
static inline int ext4_ext_is_uninitialized(struct ext4_extent *ext)
static inline int ext4_ext_get_actual_len(struct ext4_extent *ext)
static inline void ext4_ext_mark_initialized(struct ext4_extent *ext)
static inline ext4_fsblk_t ext4_ext_pblock(struct ext4_extent *ex)
static inline ext4_fsblk_t ext4_idx_pblock(struct ext4_extent_idx *ix)
static inline void ext4_ext_store_pblock(struct ext4_extent *ex,
ext4_fsblk_t pb)
static inline void ext4_idx_store_pblock(struct ext4_extent_idx *ix,
ext4_fsblk_t pb)
extern int ext4_ext_calc_metadata_amount(struct inode *inode,
ext4_lblk_t lblocks);
extern int ext4_extent_tree_init(handle_t *, struct inode *);
extern int ext4_ext_calc_credits_for_single_extent(struct inode *inode,
int num,
struct ext4_ext_path *path);
extern int ext4_can_extents_be_merged(struct inode *inode,
struct ext4_extent *ex1,
struct ext4_extent *ex2);
extern int ext4_ext_insert_extent(handle_t *, struct inode *, struct ext4_ext_path *, struct ext4_extent *, int);
extern struct ext4_ext_path *ext4_ext_find_extent(struct inode *, ext4_lblk_t,
struct ext4_ext_path *);
extern void ext4_ext_drop_refs(struct ext4_ext_path *);
extern int ext4_ext_check_inode(struct inode *inode);
