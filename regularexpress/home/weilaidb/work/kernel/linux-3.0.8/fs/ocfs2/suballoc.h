#define _CHAINALLOC_H_
struct ocfs2_suballoc_result;
typedef int (group_search_t)(struct inode *,
struct buffer_head *,
u32,
u32,
u64,
struct ocfs2_suballoc_result *);
struct ocfs2_alloc_context ;
void ocfs2_init_steal_slots(struct ocfs2_super *osb);
void ocfs2_free_alloc_context(struct ocfs2_alloc_context *ac);
static inline int ocfs2_alloc_context_bits_left(struct ocfs2_alloc_context *ac)
int ocfs2_reserve_new_metadata(struct ocfs2_super *osb,
struct ocfs2_extent_list *root_el,
struct ocfs2_alloc_context **ac);
int ocfs2_reserve_new_metadata_blocks(struct ocfs2_super *osb,
int blocks,
struct ocfs2_alloc_context **ac);
int ocfs2_reserve_new_inode(struct ocfs2_super *osb,
struct ocfs2_alloc_context **ac);
int ocfs2_reserve_clusters(struct ocfs2_super *osb,
u32 bits_wanted,
struct ocfs2_alloc_context **ac);
int ocfs2_claim_metadata(handle_t *handle,
struct ocfs2_alloc_context *ac,
u32 bits_wanted,
u64 *suballoc_loc,
u16 *suballoc_bit_start,
u32 *num_bits,
u64 *blkno_start);
int ocfs2_claim_new_inode(handle_t *handle,
struct inode *dir,
struct buffer_head *parent_fe_bh,
struct ocfs2_alloc_context *ac,
u64 *suballoc_loc,
u16 *suballoc_bit,
u64 *fe_blkno);
int ocfs2_claim_clusters(handle_t *handle,
struct ocfs2_alloc_context *ac,
u32 min_clusters,
u32 *cluster_start,
u32 *num_clusters);
int __ocfs2_claim_clusters(handle_t *handle,
struct ocfs2_alloc_context *ac,
u32 min_clusters,
u32 max_clusters,
u32 *cluster_start,
u32 *num_clusters);
int ocfs2_free_suballoc_bits(handle_t *handle,
struct inode *alloc_inode,
struct buffer_head *alloc_bh,
unsigned int start_bit,
u64 bg_blkno,
unsigned int count);
int ocfs2_free_dinode(handle_t *handle,
struct inode *inode_alloc_inode,
struct buffer_head *inode_alloc_bh,
struct ocfs2_dinode *di);
int ocfs2_free_clusters(handle_t *handle,
struct inode *bitmap_inode,
struct buffer_head *bitmap_bh,
u64 start_blk,
unsigned int num_clusters);
int ocfs2_release_clusters(handle_t *handle,
struct inode *bitmap_inode,
struct buffer_head *bitmap_bh,
u64 start_blk,
unsigned int num_clusters);
static inline u64 ocfs2_which_suballoc_group(u64 block, unsigned int bit)
static inline u32 ocfs2_cluster_from_desc(struct ocfs2_super *osb,
u64 bg_blkno)
static inline int ocfs2_is_cluster_bitmap(struct inode *inode)
int ocfs2_reserve_cluster_bitmap_bits(struct ocfs2_super *osb,
struct ocfs2_alloc_context *ac);
void ocfs2_free_ac_resource(struct ocfs2_alloc_context *ac);
u64 ocfs2_which_cluster_group(struct inode *inode, u32 cluster);
int ocfs2_check_group_descriptor(struct super_block *sb,
struct ocfs2_dinode *di,
struct buffer_head *bh);
int ocfs2_read_group_descriptor(struct inode *inode, struct ocfs2_dinode *di,
u64 gd_blkno, struct buffer_head **bh);
int ocfs2_lock_allocators(struct inode *inode, struct ocfs2_extent_tree *et,
u32 clusters_to_add, u32 extents_to_split,
struct ocfs2_alloc_context **data_ac,
struct ocfs2_alloc_context **meta_ac);
int ocfs2_test_inode_bit(struct ocfs2_super *osb, u64 blkno, int *res);
int ocfs2_find_new_inode_loc(struct inode *dir,
struct buffer_head *parent_fe_bh,
struct ocfs2_alloc_context *ac,
u64 *fe_blkno);
int ocfs2_claim_new_inode_at_loc(handle_t *handle,
struct inode *dir,
struct ocfs2_alloc_context *ac,
u64 *suballoc_loc,
u16 *suballoc_bit,
u64 di_blkno);
