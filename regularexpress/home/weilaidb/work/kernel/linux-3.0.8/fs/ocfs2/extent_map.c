void ocfs2_extent_map_init(struct inode *inode)
static void __ocfs2_extent_map_lookup(struct ocfs2_extent_map *em,
unsigned int cpos,
struct ocfs2_extent_map_item **ret_emi)
static int ocfs2_extent_map_lookup(struct inode *inode, unsigned int cpos,
unsigned int *phys, unsigned int *len,
unsigned int *flags)
void ocfs2_extent_map_trunc(struct inode *inode, unsigned int cpos)
static int ocfs2_ei_is_contained(struct ocfs2_extent_map_item *emi1,
struct ocfs2_extent_map_item *emi2)
static void ocfs2_copy_emi_fields(struct ocfs2_extent_map_item *dest,
struct ocfs2_extent_map_item *src)
static int ocfs2_try_to_merge_extent_map(struct ocfs2_extent_map_item *emi,
struct ocfs2_extent_map_item *ins)
void ocfs2_extent_map_insert_rec(struct inode *inode,
struct ocfs2_extent_rec *rec)
static int ocfs2_last_eb_is_empty(struct inode *inode,
struct ocfs2_dinode *di)
static int ocfs2_search_for_hole_index(struct ocfs2_extent_list *el,
u32 v_cluster)
int ocfs2_figure_hole_clusters(struct ocfs2_caching_info *ci,
struct ocfs2_extent_list *el,
struct buffer_head *eb_bh,
u32 v_cluster,
u32 *num_clusters)
static int ocfs2_get_clusters_nocache(struct inode *inode,
struct buffer_head *di_bh,
u32 v_cluster, unsigned int *hole_len,
struct ocfs2_extent_rec *ret_rec,
unsigned int *is_last)
static void ocfs2_relative_extent_offsets(struct super_block *sb,
u32 v_cluster,
struct ocfs2_extent_rec *rec,
u32 *p_cluster, u32 *num_clusters)
int ocfs2_xattr_get_clusters(struct inode *inode, u32 v_cluster,
u32 *p_cluster, u32 *num_clusters,
struct ocfs2_extent_list *el,
unsigned int *extent_flags)
int ocfs2_get_clusters(struct inode *inode, u32 v_cluster,
u32 *p_cluster, u32 *num_clusters,
unsigned int *extent_flags)
int ocfs2_extent_map_get_blocks(struct inode *inode, u64 v_blkno, u64 *p_blkno,
u64 *ret_count, unsigned int *extent_flags)
static int ocfs2_fiemap_inline(struct inode *inode, struct buffer_head *di_bh,
struct fiemap_extent_info *fieinfo,
u64 map_start)
#define OCFS2_FIEMAP_FLAGS	(FIEMAP_FLAG_SYNC)
int ocfs2_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
u64 map_start, u64 map_len)
int ocfs2_read_virt_blocks(struct inode *inode, u64 v_block, int nr,
struct buffer_head *bhs[], int flags,
int (*validate)(struct super_block *sb,
struct buffer_head *bh))
