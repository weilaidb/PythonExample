#define NOT_ALLOC_NEW_GROUP		0
#define ALLOC_NEW_GROUP			0x1
#define ALLOC_GROUPS_FROM_GLOBAL	0x2
#define OCFS2_MAX_TO_STEAL		1024
struct ocfs2_suballoc_result ;
static u64 ocfs2_group_from_res(struct ocfs2_suballoc_result *res)
static inline void ocfs2_debug_bg(struct ocfs2_group_desc *bg);
static inline void ocfs2_debug_suballoc_inode(struct ocfs2_dinode *fe);
static inline u16 ocfs2_find_victim_chain(struct ocfs2_chain_list *cl);
static int ocfs2_block_group_fill(handle_t *handle,
struct inode *alloc_inode,
struct buffer_head *bg_bh,
u64 group_blkno,
unsigned int group_clusters,
u16 my_chain,
struct ocfs2_chain_list *cl);
static int ocfs2_block_group_alloc(struct ocfs2_super *osb,
struct inode *alloc_inode,
struct buffer_head *bh,
u64 max_block,
u64 *last_alloc_group,
int flags);
static int ocfs2_cluster_group_search(struct inode *inode,
struct buffer_head *group_bh,
u32 bits_wanted, u32 min_bits,
u64 max_block,
struct ocfs2_suballoc_result *res);
static int ocfs2_block_group_search(struct inode *inode,
struct buffer_head *group_bh,
u32 bits_wanted, u32 min_bits,
u64 max_block,
struct ocfs2_suballoc_result *res);
static int ocfs2_claim_suballoc_bits(struct ocfs2_alloc_context *ac,
handle_t *handle,
u32 bits_wanted,
u32 min_bits,
struct ocfs2_suballoc_result *res);
static int ocfs2_test_bg_bit_allocatable(struct buffer_head *bg_bh,
int nr);
static inline int ocfs2_block_group_set_bits(handle_t *handle,
struct inode *alloc_inode,
struct ocfs2_group_desc *bg,
struct buffer_head *group_bh,
unsigned int bit_off,
unsigned int num_bits);
static int ocfs2_relink_block_group(handle_t *handle,
struct inode *alloc_inode,
struct buffer_head *fe_bh,
struct buffer_head *bg_bh,
struct buffer_head *prev_bg_bh,
u16 chain);
static inline int ocfs2_block_group_reasonably_empty(struct ocfs2_group_desc *bg,
u32 wanted);
static inline u32 ocfs2_desc_bitmap_to_cluster_off(struct inode *inode,
u64 bg_blkno,
u16 bg_bit_off);
static inline void ocfs2_block_to_cluster_group(struct inode *inode,
u64 data_blkno,
u64 *bg_blkno,
u16 *bg_bit_off);
static int ocfs2_reserve_clusters_with_limit(struct ocfs2_super *osb,
u32 bits_wanted, u64 max_block,
int flags,
struct ocfs2_alloc_context **ac);
void ocfs2_free_ac_resource(struct ocfs2_alloc_context *ac)
void ocfs2_free_alloc_context(struct ocfs2_alloc_context *ac)
static u32 ocfs2_bits_per_group(struct ocfs2_chain_list *cl)
#define do_error(fmt, ...)						\
do while (0)
static int ocfs2_validate_gd_self(struct super_block *sb,
struct buffer_head *bh,
int resize)
static int ocfs2_validate_gd_parent(struct super_block *sb,
struct ocfs2_dinode *di,
struct buffer_head *bh,
int resize)
#undef do_error
int ocfs2_check_group_descriptor(struct super_block *sb,
struct ocfs2_dinode *di,
struct buffer_head *bh)
static int ocfs2_validate_group_descriptor(struct super_block *sb,
struct buffer_head *bh)
int ocfs2_read_group_descriptor(struct inode *inode, struct ocfs2_dinode *di,
u64 gd_blkno, struct buffer_head **bh)
static void ocfs2_bg_discontig_add_extent(struct ocfs2_super *osb,
struct ocfs2_group_desc *bg,
struct ocfs2_chain_list *cl,
u64 p_blkno, unsigned int clusters)
static int ocfs2_block_group_fill(handle_t *handle,
struct inode *alloc_inode,
struct buffer_head *bg_bh,
u64 group_blkno,
unsigned int group_clusters,
u16 my_chain,
struct ocfs2_chain_list *cl)
static inline u16 ocfs2_find_smallest_chain(struct ocfs2_chain_list *cl)
static struct buffer_head *
ocfs2_block_group_alloc_contig(struct ocfs2_super *osb, handle_t *handle,
struct inode *alloc_inode,
struct ocfs2_alloc_context *ac,
struct ocfs2_chain_list *cl)
static int ocfs2_block_group_claim_bits(struct ocfs2_super *osb,
handle_t *handle,
struct ocfs2_alloc_context *ac,
unsigned int min_bits,
u32 *bit_off, u32 *num_bits)
static int ocfs2_block_group_grow_discontig(handle_t *handle,
struct inode *alloc_inode,
struct buffer_head *bg_bh,
struct ocfs2_alloc_context *ac,
struct ocfs2_chain_list *cl,
unsigned int min_bits)
static void ocfs2_bg_alloc_cleanup(handle_t *handle,
struct ocfs2_alloc_context *cluster_ac,
struct inode *alloc_inode,
struct buffer_head *bg_bh)
static struct buffer_head *
ocfs2_block_group_alloc_discontig(handle_t *handle,
struct inode *alloc_inode,
struct ocfs2_alloc_context *ac,
struct ocfs2_chain_list *cl)
static int ocfs2_block_group_alloc(struct ocfs2_super *osb,
struct inode *alloc_inode,
struct buffer_head *bh,
u64 max_block,
u64 *last_alloc_group,
int flags)
static int ocfs2_reserve_suballoc_bits(struct ocfs2_super *osb,
struct ocfs2_alloc_context *ac,
int type,
u32 slot,
u64 *last_alloc_group,
int flags)
static void ocfs2_init_inode_steal_slot(struct ocfs2_super *osb)
static void ocfs2_init_meta_steal_slot(struct ocfs2_super *osb)
void ocfs2_init_steal_slots(struct ocfs2_super *osb)
static void __ocfs2_set_steal_slot(struct ocfs2_super *osb, int slot, int type)
static int __ocfs2_get_steal_slot(struct ocfs2_super *osb, int type)
static int ocfs2_get_inode_steal_slot(struct ocfs2_super *osb)
static int ocfs2_get_meta_steal_slot(struct ocfs2_super *osb)
static int ocfs2_steal_resource(struct ocfs2_super *osb,
struct ocfs2_alloc_context *ac,
int type)
static int ocfs2_steal_inode(struct ocfs2_super *osb,
struct ocfs2_alloc_context *ac)
static int ocfs2_steal_meta(struct ocfs2_super *osb,
struct ocfs2_alloc_context *ac)
int ocfs2_reserve_new_metadata_blocks(struct ocfs2_super *osb,
int blocks,
struct ocfs2_alloc_context **ac)
int ocfs2_reserve_new_metadata(struct ocfs2_super *osb,
struct ocfs2_extent_list *root_el,
struct ocfs2_alloc_context **ac)
int ocfs2_reserve_new_inode(struct ocfs2_super *osb,
struct ocfs2_alloc_context **ac)
int ocfs2_reserve_cluster_bitmap_bits(struct ocfs2_super *osb,
struct ocfs2_alloc_context *ac)
static int ocfs2_reserve_clusters_with_limit(struct ocfs2_super *osb,
u32 bits_wanted, u64 max_block,
int flags,
struct ocfs2_alloc_context **ac)
int ocfs2_reserve_clusters(struct ocfs2_super *osb,
u32 bits_wanted,
struct ocfs2_alloc_context **ac)
static int ocfs2_test_bg_bit_allocatable(struct buffer_head *bg_bh,
int nr)
static int ocfs2_block_group_find_clear_bits(struct ocfs2_super *osb,
struct buffer_head *bg_bh,
unsigned int bits_wanted,
unsigned int total_bits,
struct ocfs2_suballoc_result *res)
static inline int ocfs2_block_group_set_bits(handle_t *handle,
struct inode *alloc_inode,
struct ocfs2_group_desc *bg,
struct buffer_head *group_bh,
unsigned int bit_off,
unsigned int num_bits)
static inline u16 ocfs2_find_victim_chain(struct ocfs2_chain_list *cl)
static int ocfs2_relink_block_group(handle_t *handle,
struct inode *alloc_inode,
struct buffer_head *fe_bh,
struct buffer_head *bg_bh,
struct buffer_head *prev_bg_bh,
u16 chain)
static inline int ocfs2_block_group_reasonably_empty(struct ocfs2_group_desc *bg,
u32 wanted)
static int ocfs2_cluster_group_search(struct inode *inode,
struct buffer_head *group_bh,
u32 bits_wanted, u32 min_bits,
u64 max_block,
struct ocfs2_suballoc_result *res)
static int ocfs2_block_group_search(struct inode *inode,
struct buffer_head *group_bh,
u32 bits_wanted, u32 min_bits,
u64 max_block,
struct ocfs2_suballoc_result *res)
static int ocfs2_alloc_dinode_update_counts(struct inode *inode,
handle_t *handle,
struct buffer_head *di_bh,
u32 num_bits,
u16 chain)
static int ocfs2_bg_discontig_fix_by_rec(struct ocfs2_suballoc_result *res,
struct ocfs2_extent_rec *rec,
struct ocfs2_chain_list *cl)
static void ocfs2_bg_discontig_fix_result(struct ocfs2_alloc_context *ac,
struct ocfs2_group_desc *bg,
struct ocfs2_suballoc_result *res)
static int ocfs2_search_one_group(struct ocfs2_alloc_context *ac,
handle_t *handle,
u32 bits_wanted,
u32 min_bits,
struct ocfs2_suballoc_result *res,
u16 *bits_left)
static int ocfs2_search_chain(struct ocfs2_alloc_context *ac,
handle_t *handle,
u32 bits_wanted,
u32 min_bits,
struct ocfs2_suballoc_result *res,
u16 *bits_left)
static int ocfs2_claim_suballoc_bits(struct ocfs2_alloc_context *ac,
handle_t *handle,
u32 bits_wanted,
u32 min_bits,
struct ocfs2_suballoc_result *res)
int ocfs2_claim_metadata(handle_t *handle,
struct ocfs2_alloc_context *ac,
u32 bits_wanted,
u64 *suballoc_loc,
u16 *suballoc_bit_start,
unsigned int *num_bits,
u64 *blkno_start)
static void ocfs2_init_inode_ac_group(struct inode *dir,
struct buffer_head *parent_di_bh,
struct ocfs2_alloc_context *ac)
static inline void ocfs2_save_inode_ac_group(struct inode *dir,
struct ocfs2_alloc_context *ac)
int ocfs2_find_new_inode_loc(struct inode *dir,
struct buffer_head *parent_fe_bh,
struct ocfs2_alloc_context *ac,
u64 *fe_blkno)
int ocfs2_claim_new_inode_at_loc(handle_t *handle,
struct inode *dir,
struct ocfs2_alloc_context *ac,
u64 *suballoc_loc,
u16 *suballoc_bit,
u64 di_blkno)
int ocfs2_claim_new_inode(handle_t *handle,
struct inode *dir,
struct buffer_head *parent_fe_bh,
struct ocfs2_alloc_context *ac,
u64 *suballoc_loc,
u16 *suballoc_bit,
u64 *fe_blkno)
static inline u32 ocfs2_desc_bitmap_to_cluster_off(struct inode *inode,
u64 bg_blkno,
u16 bg_bit_off)
u64 ocfs2_which_cluster_group(struct inode *inode, u32 cluster)
static inline void ocfs2_block_to_cluster_group(struct inode *inode,
u64 data_blkno,
u64 *bg_blkno,
u16 *bg_bit_off)
int __ocfs2_claim_clusters(handle_t *handle,
struct ocfs2_alloc_context *ac,
u32 min_clusters,
u32 max_clusters,
u32 *cluster_start,
u32 *num_clusters)
int ocfs2_claim_clusters(handle_t *handle,
struct ocfs2_alloc_context *ac,
u32 min_clusters,
u32 *cluster_start,
u32 *num_clusters)
static int ocfs2_block_group_clear_bits(handle_t *handle,
struct inode *alloc_inode,
struct ocfs2_group_desc *bg,
struct buffer_head *group_bh,
unsigned int bit_off,
unsigned int num_bits,
void (*undo_fn)(unsigned int bit,
unsigned long *bmap))
static int _ocfs2_free_suballoc_bits(handle_t *handle,
struct inode *alloc_inode,
struct buffer_head *alloc_bh,
unsigned int start_bit,
u64 bg_blkno,
unsigned int count,
void (*undo_fn)(unsigned int bit,
unsigned long *bitmap))
int ocfs2_free_suballoc_bits(handle_t *handle,
struct inode *alloc_inode,
struct buffer_head *alloc_bh,
unsigned int start_bit,
u64 bg_blkno,
unsigned int count)
int ocfs2_free_dinode(handle_t *handle,
struct inode *inode_alloc_inode,
struct buffer_head *inode_alloc_bh,
struct ocfs2_dinode *di)
static int _ocfs2_free_clusters(handle_t *handle,
struct inode *bitmap_inode,
struct buffer_head *bitmap_bh,
u64 start_blk,
unsigned int num_clusters,
void (*undo_fn)(unsigned int bit,
unsigned long *bitmap))
int ocfs2_free_clusters(handle_t *handle,
struct inode *bitmap_inode,
struct buffer_head *bitmap_bh,
u64 start_blk,
unsigned int num_clusters)
int ocfs2_release_clusters(handle_t *handle,
struct inode *bitmap_inode,
struct buffer_head *bitmap_bh,
u64 start_blk,
unsigned int num_clusters)
static inline void ocfs2_debug_bg(struct ocfs2_group_desc *bg)
static inline void ocfs2_debug_suballoc_inode(struct ocfs2_dinode *fe)
int ocfs2_lock_allocators(struct inode *inode,
struct ocfs2_extent_tree *et,
u32 clusters_to_add, u32 extents_to_split,
struct ocfs2_alloc_context **data_ac,
struct ocfs2_alloc_context **meta_ac)
static int ocfs2_get_suballoc_slot_bit(struct ocfs2_super *osb, u64 blkno,
u16 *suballoc_slot, u64 *group_blkno,
u16 *suballoc_bit)
static int ocfs2_test_suballoc_bit(struct ocfs2_super *osb,
struct inode *suballoc,
struct buffer_head *alloc_bh,
u64 group_blkno, u64 blkno,
u16 bit, int *res)
int ocfs2_test_inode_bit(struct ocfs2_super *osb, u64 blkno, int *res)
