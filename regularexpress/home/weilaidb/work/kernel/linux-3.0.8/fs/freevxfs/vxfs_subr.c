static int		vxfs_readpage(struct file *, struct page *);
static sector_t		vxfs_bmap(struct address_space *, sector_t);
const struct address_space_operations vxfs_aops = ;
inline void
vxfs_put_page(struct page *pp)
struct page *
vxfs_get_page(struct address_space *mapping, u_long n)
struct buffer_head *
vxfs_bread(struct inode *ip, int block)
static int
vxfs_getblk(struct inode *ip, sector_t iblock,
struct buffer_head *bp, int create)
static int
vxfs_readpage(struct file *file, struct page *page)
static sector_t
vxfs_bmap(struct address_space *mapping, sector_t block)
