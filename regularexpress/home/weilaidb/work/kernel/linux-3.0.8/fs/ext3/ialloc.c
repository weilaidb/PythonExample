static struct buffer_head *
read_inode_bitmap(struct super_block * sb, unsigned long block_group)
void ext3_free_inode (handle_t *handle, struct inode * inode)
static int find_group_dir(struct super_block *sb, struct inode *parent)
#define INODE_COST 64
#define BLOCK_COST 256
static int find_group_orlov(struct super_block *sb, struct inode *parent)
static int find_group_other(struct super_block *sb, struct inode *parent)
struct inode *ext3_new_inode(handle_t *handle, struct inode * dir,
const struct qstr *qstr, int mode)
struct inode *ext3_orphan_get(struct super_block *sb, unsigned long ino)
unsigned long ext3_count_free_inodes (struct super_block * sb)
unsigned long ext3_count_dirs (struct super_block * sb)
