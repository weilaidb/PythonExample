static const unsigned char squashfs_filetype_table[] = ;
static int get_dir_index_using_offset(struct super_block *sb,
u64 *next_block, int *next_offset, u64 index_start, int index_offset,
int i_count, u64 f_pos)
static int squashfs_readdir(struct file *file, void *dirent, filldir_t filldir)
const struct file_operations squashfs_dir_ops = ;
