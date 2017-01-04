#define _NILFS_MDT_H
struct nilfs_shadow_map ;
struct nilfs_mdt_info ;
static inline struct nilfs_mdt_info *NILFS_MDT(const struct inode *inode)
#define NILFS_MDT_GFP      (__GFP_WAIT | __GFP_IO | __GFP_HIGHMEM)
int nilfs_mdt_get_block(struct inode *, unsigned long, int,
void (*init_block)(struct inode *,
struct buffer_head *, void *),
struct buffer_head **);
int nilfs_mdt_delete_block(struct inode *, unsigned long);
int nilfs_mdt_forget_block(struct inode *, unsigned long);
int nilfs_mdt_mark_block_dirty(struct inode *, unsigned long);
int nilfs_mdt_fetch_dirty(struct inode *);
int nilfs_mdt_init(struct inode *inode, gfp_t gfp_mask, size_t objsz);
void nilfs_mdt_set_entry_size(struct inode *, unsigned, unsigned);
int nilfs_mdt_setup_shadow_map(struct inode *inode,
struct nilfs_shadow_map *shadow);
int nilfs_mdt_save_to_shadow_map(struct inode *inode);
void nilfs_mdt_restore_from_shadow_map(struct inode *inode);
void nilfs_mdt_clear_shadow_map(struct inode *inode);
int nilfs_mdt_freeze_buffer(struct inode *inode, struct buffer_head *bh);
struct buffer_head *nilfs_mdt_get_frozen_buffer(struct inode *inode,
struct buffer_head *bh);
static inline void nilfs_mdt_mark_dirty(struct inode *inode)
static inline void nilfs_mdt_clear_dirty(struct inode *inode)
static inline __u64 nilfs_mdt_cno(struct inode *inode)
#define nilfs_mdt_bgl_lock(inode, bg) \
(&NILFS_MDT(inode)->mi_bgl->locks[(bg) & (NR_BG_LOCKS-1)].lock)
