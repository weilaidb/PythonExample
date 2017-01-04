#define _THE_NILFS_H
struct nilfs_sc_info;
enum ;
struct the_nilfs ;
#define THE_NILFS_FNS(bit, name)					\
static inline void set_nilfs_##name(struct the_nilfs *nilfs)		\
\
static inline void clear_nilfs_##name(struct the_nilfs *nilfs)		\
\
static inline int nilfs_##name(struct the_nilfs *nilfs)			\
THE_NILFS_FNS(INIT, init)
THE_NILFS_FNS(DISCONTINUED, discontinued)
THE_NILFS_FNS(GC_RUNNING, gc_running)
THE_NILFS_FNS(SB_DIRTY, sb_dirty)
#define nilfs_clear_opt(nilfs, opt)  \
do  while (0)
#define nilfs_set_opt(nilfs, opt)  \
do  while (0)
#define nilfs_test_opt(nilfs, opt) ((nilfs)->ns_mount_opt & NILFS_MOUNT_##opt)
#define nilfs_write_opt(nilfs, mask, opt)				\
do  while (0)
struct nilfs_root ;
#define NILFS_CPTREE_CURRENT_CNO	0
#define NILFS_SB_FREQ		10
static inline int nilfs_sb_need_update(struct the_nilfs *nilfs)
static inline int nilfs_sb_will_flip(struct the_nilfs *nilfs)
void nilfs_set_last_segment(struct the_nilfs *, sector_t, u64, __u64);
struct the_nilfs *alloc_nilfs(struct block_device *bdev);
void destroy_nilfs(struct the_nilfs *nilfs);
int init_nilfs(struct the_nilfs *nilfs, struct super_block *sb, char *data);
int load_nilfs(struct the_nilfs *nilfs, struct super_block *sb);
unsigned long nilfs_nrsvsegs(struct the_nilfs *nilfs, unsigned long nsegs);
void nilfs_set_nsegments(struct the_nilfs *nilfs, unsigned long nsegs);
int nilfs_discard_segments(struct the_nilfs *, __u64 *, size_t);
int nilfs_count_free_blocks(struct the_nilfs *, sector_t *);
struct nilfs_root *nilfs_lookup_root(struct the_nilfs *nilfs, __u64 cno);
struct nilfs_root *nilfs_find_or_create_root(struct the_nilfs *nilfs,
__u64 cno);
void nilfs_put_root(struct nilfs_root *root);
int nilfs_near_disk_full(struct the_nilfs *);
void nilfs_fall_back_super_block(struct the_nilfs *);
void nilfs_swap_super_block(struct the_nilfs *);
static inline void nilfs_get_root(struct nilfs_root *root)
static inline int nilfs_valid_fs(struct the_nilfs *nilfs)
static inline void
nilfs_get_segment_range(struct the_nilfs *nilfs, __u64 segnum,
sector_t *seg_start, sector_t *seg_end)
static inline sector_t
nilfs_get_segment_start_blocknr(struct the_nilfs *nilfs, __u64 segnum)
static inline __u64
nilfs_get_segnum_of_block(struct the_nilfs *nilfs, sector_t blocknr)
static inline void
nilfs_terminate_segment(struct the_nilfs *nilfs, sector_t seg_start,
sector_t seg_end)
static inline void nilfs_shift_to_next_segment(struct the_nilfs *nilfs)
static inline __u64 nilfs_last_cno(struct the_nilfs *nilfs)
static inline int nilfs_segment_is_active(struct the_nilfs *nilfs, __u64 n)
