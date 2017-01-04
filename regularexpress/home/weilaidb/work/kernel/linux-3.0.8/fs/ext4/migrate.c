struct list_blocks_struct ;
static int finish_range(handle_t *handle, struct inode *inode,
struct list_blocks_struct *lb)
static int update_extent_range(handle_t *handle, struct inode *inode,
ext4_fsblk_t pblock, ext4_lblk_t blk_num,
struct list_blocks_struct *lb)
static int update_ind_extent_range(handle_t *handle, struct inode *inode,
ext4_fsblk_t pblock, ext4_lblk_t *blk_nump,
struct list_blocks_struct *lb)
static int update_dind_extent_range(handle_t *handle, struct inode *inode,
ext4_fsblk_t pblock, ext4_lblk_t *blk_nump,
struct list_blocks_struct *lb)
static int update_tind_extent_range(handle_t *handle, struct inode *inode,
ext4_fsblk_t pblock, ext4_lblk_t *blk_nump,
struct list_blocks_struct *lb)
static int extend_credit_for_blkdel(handle_t *handle, struct inode *inode)
static int free_dind_blocks(handle_t *handle,
struct inode *inode, __le32 i_data)
static int free_tind_blocks(handle_t *handle,
struct inode *inode, __le32 i_data)
static int free_ind_block(handle_t *handle, struct inode *inode, __le32 *i_data)
static int ext4_ext_swap_inode_data(handle_t *handle, struct inode *inode,
struct inode *tmp_inode)
static int free_ext_idx(handle_t *handle, struct inode *inode,
struct ext4_extent_idx *ix)
static int free_ext_block(handle_t *handle, struct inode *inode)
int ext4_ext_migrate(struct inode *inode)
