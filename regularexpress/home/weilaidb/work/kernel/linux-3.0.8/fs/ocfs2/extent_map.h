#define _EXTENT_MAP_H
struct ocfs2_extent_map_item ;
#define OCFS2_MAX_EXTENT_MAP_ITEMS			3
struct ocfs2_extent_map ;
void ocfs2_extent_map_init(struct inode *inode);
void ocfs2_extent_map_trunc(struct inode *inode, unsigned int cluster);
void ocfs2_extent_map_insert_rec(struct inode *inode,
struct ocfs2_extent_rec *rec);
int ocfs2_get_clusters(struct inode *inode, u32 v_cluster, u32 *p_cluster,
u32 *num_clusters, unsigned int *extent_flags);
int ocfs2_extent_map_get_blocks(struct inode *inode, u64 v_blkno, u64 *p_blkno,
u64 *ret_count, unsigned int *extent_flags);
int ocfs2_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
u64 map_start, u64 map_len);
int ocfs2_xattr_get_clusters(struct inode *inode, u32 v_cluster,
u32 *p_cluster, u32 *num_clusters,
struct ocfs2_extent_list *el,
unsigned int *extent_flags);
int ocfs2_read_virt_blocks(struct inode *inode, u64 v_block, int nr,
struct buffer_head *bhs[], int flags,
int (*validate)(struct super_block *sb,
struct buffer_head *bh));
int ocfs2_figure_hole_clusters(struct ocfs2_caching_info *ci,
struct ocfs2_extent_list *el,
struct buffer_head *eb_bh,
u32 v_cluster,
u32 *num_clusters);
static inline int ocfs2_read_virt_block(struct inode *inode, u64 v_block,
struct buffer_head **bh,
int (*validate)(struct super_block *sb,
struct buffer_head *bh))
