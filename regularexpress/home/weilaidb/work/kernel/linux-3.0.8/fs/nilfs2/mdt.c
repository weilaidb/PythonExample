#define NILFS_MDT_MAX_RA_BLOCKS		(16 - 1)
static int
nilfs_mdt_insert_new_block(struct inode *inode, unsigned long block,
struct buffer_head *bh,
void (*init_block)(struct inode *,
struct buffer_head *, void *))
static int nilfs_mdt_create_block(struct inode *inode, unsigned long block,
struct buffer_head **out_bh,
void (*init_block)(struct inode *,
struct buffer_head *,
void *))
static int
nilfs_mdt_submit_block(struct inode *inode, unsigned long blkoff,
int mode, struct buffer_head **out_bh)
static int nilfs_mdt_read_block(struct inode *inode, unsigned long block,
int readahead, struct buffer_head **out_bh)
int nilfs_mdt_get_block(struct inode *inode, unsigned long blkoff, int create,
void (*init_block)(struct inode *,
struct buffer_head *, void *),
struct buffer_head **out_bh)
int nilfs_mdt_delete_block(struct inode *inode, unsigned long block)
int nilfs_mdt_forget_block(struct inode *inode, unsigned long block)
int nilfs_mdt_mark_block_dirty(struct inode *inode, unsigned long block)
int nilfs_mdt_fetch_dirty(struct inode *inode)
static int
nilfs_mdt_write_page(struct page *page, struct writeback_control *wbc)
static const struct address_space_operations def_mdt_aops = ;
static const struct inode_operations def_mdt_iops;
static const struct file_operations def_mdt_fops;
int nilfs_mdt_init(struct inode *inode, gfp_t gfp_mask, size_t objsz)
void nilfs_mdt_set_entry_size(struct inode *inode, unsigned entry_size,
unsigned header_size)
int nilfs_mdt_setup_shadow_map(struct inode *inode,
struct nilfs_shadow_map *shadow)
int nilfs_mdt_save_to_shadow_map(struct inode *inode)
int nilfs_mdt_freeze_buffer(struct inode *inode, struct buffer_head *bh)
struct buffer_head *
nilfs_mdt_get_frozen_buffer(struct inode *inode, struct buffer_head *bh)
static void nilfs_release_frozen_buffers(struct nilfs_shadow_map *shadow)
void nilfs_mdt_restore_from_shadow_map(struct inode *inode)
void nilfs_mdt_clear_shadow_map(struct inode *inode)
