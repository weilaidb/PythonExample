static struct meta_index *locate_meta_index(struct inode *inode, int offset,
int index)
static struct meta_index *empty_meta_index(struct inode *inode, int offset,
int skip)
static void release_meta_index(struct inode *inode, struct meta_index *meta)
static long long read_indexes(struct super_block *sb, int n,
u64 *start_block, int *offset)
static inline int calculate_skip(int blocks)
static int fill_meta_index(struct inode *inode, int index,
u64 *index_block, int *index_offset, u64 *data_block)
static int read_blocklist(struct inode *inode, int index, u64 *block)
static int squashfs_readpage(struct file *file, struct page *page)
const struct address_space_operations squashfs_aops = ;
