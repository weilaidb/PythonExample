static u64 ufs_frag_map(struct inode *inode, sector_t frag, bool needs_lock);
static int ufs_block_to_path(struct inode *inode, sector_t i_block, sector_t offsets[4])
static u64 ufs_frag_map(struct inode *inode, sector_t frag, bool needs_lock)
static struct buffer_head *
ufs_inode_getfrag(struct inode *inode, u64 fragment,
sector_t new_fragment, unsigned int required, int *err,
long *phys, int *new, struct page *locked_page)
static struct buffer_head *
ufs_inode_getblock(struct inode *inode, struct buffer_head *bh,
u64 fragment, sector_t new_fragment, int *err,
long *phys, int *new, struct page *locked_page)
int ufs_getfrag_block(struct inode *inode, sector_t fragment, struct buffer_head *bh_result, int create)
static int ufs_writepage(struct page *page, struct writeback_control *wbc)
static int ufs_readpage(struct file *file, struct page *page)
int ufs_prepare_chunk(struct page *page, loff_t pos, unsigned len)
static int ufs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t ufs_bmap(struct address_space *mapping, sector_t block)
const struct address_space_operations ufs_aops = ;
static void ufs_set_inode_ops(struct inode *inode)
static int ufs1_read_inode(struct inode *inode, struct ufs_inode *ufs_inode)
static int ufs2_read_inode(struct inode *inode, struct ufs2_inode *ufs2_inode)
struct inode *ufs_iget(struct super_block *sb, unsigned long ino)
static void ufs1_update_inode(struct inode *inode, struct ufs_inode *ufs_inode)
static void ufs2_update_inode(struct inode *inode, struct ufs2_inode *ufs_inode)
static int ufs_update_inode(struct inode * inode, int do_sync)
int ufs_write_inode(struct inode *inode, struct writeback_control *wbc)
int ufs_sync_inode (struct inode *inode)
void ufs_evict_inode(struct inode * inode)
