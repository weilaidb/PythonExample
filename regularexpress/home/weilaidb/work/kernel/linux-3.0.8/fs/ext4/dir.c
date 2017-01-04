static unsigned char ext4_filetype_table[] = ;
static int ext4_readdir(struct file *, void *, filldir_t);
static int ext4_dx_readdir(struct file *filp,
void *dirent, filldir_t filldir);
static int ext4_release_dir(struct inode *inode,
struct file *filp);
const struct file_operations ext4_dir_operations = ;
static unsigned char get_dtype(struct super_block *sb, int filetype)
int __ext4_check_dir_entry(const char *function, unsigned int line,
struct inode *dir, struct file *filp,
struct ext4_dir_entry_2 *de,
struct buffer_head *bh,
unsigned int offset)
static int ext4_readdir(struct file *filp,
void *dirent, filldir_t filldir)
#define hash2pos(major, minor)	(major >> 1)
#define pos2maj_hash(pos)	((pos << 1) & 0xffffffff)
#define pos2min_hash(pos)	(0)
struct fname ;
static void free_rb_tree_fname(struct rb_root *root)
static struct dir_private_info *ext4_htree_create_dir_info(loff_t pos)
void ext4_htree_free_dir_info(struct dir_private_info *p)
int ext4_htree_store_dirent(struct file *dir_file, __u32 hash,
__u32 minor_hash,
struct ext4_dir_entry_2 *dirent)
static int call_filldir(struct file *filp, void *dirent,
filldir_t filldir, struct fname *fname)
static int ext4_dx_readdir(struct file *filp,
void *dirent, filldir_t filldir)
static int ext4_release_dir(struct inode *inode, struct file *filp)
