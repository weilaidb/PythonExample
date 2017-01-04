static u16 ocfs2_calc_new_backup_super(struct inode *inode,
struct ocfs2_group_desc *gd,
int new_clusters,
u32 first_new_cluster,
u16 cl_cpg,
int set)
static int ocfs2_update_last_group_and_inode(handle_t *handle,
struct inode *bm_inode,
struct buffer_head *bm_bh,
struct buffer_head *group_bh,
u32 first_new_cluster,
int new_clusters)
static int update_backups(struct inode * inode, u32 clusters, char *data)
static void ocfs2_update_super_and_backups(struct inode *inode,
int new_clusters)
int ocfs2_group_extend(struct inode * inode, int new_clusters)
static int ocfs2_check_new_group(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_new_group_input *input,
struct buffer_head *group_bh)
static int ocfs2_verify_group_and_input(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_new_group_input *input,
struct buffer_head *group_bh)
int ocfs2_group_add(struct inode *inode, struct ocfs2_new_group_input *input)
