#define _NILFS_ALLOC_H
static inline unsigned long
nilfs_palloc_entries_per_group(const struct inode *inode)
int nilfs_palloc_init_blockgroup(struct inode *, unsigned);
int nilfs_palloc_get_entry_block(struct inode *, __u64, int,
struct buffer_head **);
void *nilfs_palloc_block_get_entry(const struct inode *, __u64,
const struct buffer_head *, void *);
struct nilfs_palloc_req ;
int nilfs_palloc_prepare_alloc_entry(struct inode *,
struct nilfs_palloc_req *);
void nilfs_palloc_commit_alloc_entry(struct inode *,
struct nilfs_palloc_req *);
void nilfs_palloc_abort_alloc_entry(struct inode *, struct nilfs_palloc_req *);
void nilfs_palloc_commit_free_entry(struct inode *, struct nilfs_palloc_req *);
int nilfs_palloc_prepare_free_entry(struct inode *, struct nilfs_palloc_req *);
void nilfs_palloc_abort_free_entry(struct inode *, struct nilfs_palloc_req *);
int nilfs_palloc_freev(struct inode *, __u64 *, size_t);
#define nilfs_set_bit_atomic		ext2_set_bit_atomic
#define nilfs_clear_bit_atomic		ext2_clear_bit_atomic
#define nilfs_find_next_zero_bit	find_next_zero_bit_le
struct nilfs_bh_assoc ;
struct nilfs_palloc_cache ;
void nilfs_palloc_setup_cache(struct inode *inode,
struct nilfs_palloc_cache *cache);
void nilfs_palloc_clear_cache(struct inode *inode);
void nilfs_palloc_destroy_cache(struct inode *inode);
