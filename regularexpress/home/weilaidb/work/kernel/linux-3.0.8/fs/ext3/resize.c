#define EXT3FS_DEBUG
#define outside(b, first, last)	((b) < (first) || (b) >= (last))
#define inside(b, first, last)	((b) >= (first) && (b) < (last))
static int verify_group_input(struct super_block *sb,
struct ext3_new_group_data *input)
static struct buffer_head *bclean(handle_t *handle, struct super_block *sb,
ext3_fsblk_t blk)
static void mark_bitmap_end(int start_bit, int end_bit, char *bitmap)
static int extend_or_restart_transaction(handle_t *handle, int thresh,
struct buffer_head *bh)
static int setup_new_group_blocks(struct super_block *sb,
struct ext3_new_group_data *input)
static unsigned ext3_list_backups(struct super_block *sb, unsigned *three,
unsigned *five, unsigned *seven)
static int verify_reserved_gdb(struct super_block *sb,
struct buffer_head *primary)
static int add_new_gdb(handle_t *handle, struct inode *inode,
struct ext3_new_group_data *input,
struct buffer_head **primary)
static int reserve_backup_gdb(handle_t *handle, struct inode *inode,
struct ext3_new_group_data *input)
static void update_backups(struct super_block *sb,
int blk_off, char *data, int size)
int ext3_group_add(struct super_block *sb, struct ext3_new_group_data *input)
int ext3_group_extend(struct super_block *sb, struct ext3_super_block *es,
ext3_fsblk_t n_blocks_count)
