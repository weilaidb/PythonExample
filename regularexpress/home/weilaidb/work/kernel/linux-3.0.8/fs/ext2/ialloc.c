static struct buffer_head *
read_inode_bitmap(struct super_block * sb, unsigned long block_group)
static void ext2_release_inode(struct super_block *sb, int group, int dir)
void ext2_free_inode (struct inode * inode)
static void ext2_preread_inode(struct inode *inode)
static int find_group_dir(struct super_block *sb, struct inode *parent)
#define INODE_COST 64
#define BLOCK_COST 256
static int find_group_orlov(struct super_block *sb, struct inode *parent)
static int find_group_other(struct super_block *sb, struct inode *parent)
struct inode *ext2_new_inode(struct inode *dir, int mode,
const struct qstr *qstr)
unsigned long ext2_count_free_inodes (struct super_block * sb)
unsigned long ext2_count_dirs (struct super_block * sb)
