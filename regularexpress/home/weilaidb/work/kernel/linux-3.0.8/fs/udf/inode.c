MODULE_AUTHOR("Ben Fennema");
MODULE_DESCRIPTION("Universal Disk Format Filesystem");
MODULE_LICENSE("GPL");
#define EXTENT_MERGE_SIZE 5
static mode_t udf_convert_permissions(struct fileEntry *);
static int udf_update_inode(struct inode *, int);
static void udf_fill_inode(struct inode *, struct buffer_head *);
static int udf_sync_inode(struct inode *inode);
static int udf_alloc_i_data(struct inode *inode, size_t size);
static struct buffer_head *inode_getblk(struct inode *, sector_t, int *,
sector_t *, int *);
static int8_t udf_insert_aext(struct inode *, struct extent_position,
struct kernel_lb_addr, uint32_t);
static void udf_split_extents(struct inode *, int *, int, int,
struct kernel_long_ad[EXTENT_MERGE_SIZE], int *);
static void udf_prealloc_extents(struct inode *, int, int,
struct kernel_long_ad[EXTENT_MERGE_SIZE], int *);
static void udf_merge_extents(struct inode *,
struct kernel_long_ad[EXTENT_MERGE_SIZE], int *);
static void udf_update_extents(struct inode *,
struct kernel_long_ad[EXTENT_MERGE_SIZE], int, int,
struct extent_position *);
static int udf_get_block(struct inode *, sector_t, struct buffer_head *, int);
void udf_evict_inode(struct inode *inode)
static int udf_writepage(struct page *page, struct writeback_control *wbc)
static int udf_readpage(struct file *file, struct page *page)
static int udf_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t udf_bmap(struct address_space *mapping, sector_t block)
const struct address_space_operations udf_aops = ;
int udf_expand_file_adinicb(struct inode *inode)
struct buffer_head *udf_expand_dir_adinicb(struct inode *inode, int *block,
int *err)
static int udf_get_block(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create)
static struct buffer_head *udf_getblk(struct inode *inode, long block,
int create, int *err)
static int udf_do_extend_file(struct inode *inode,
struct extent_position *last_pos,
struct kernel_long_ad *last_ext,
sector_t blocks)
static int udf_extend_file(struct inode *inode, loff_t newsize)
static struct buffer_head *inode_getblk(struct inode *inode, sector_t block,
int *err, sector_t *phys, int *new)
static void udf_split_extents(struct inode *inode, int *c, int offset,
int newblocknum,
struct kernel_long_ad laarr[EXTENT_MERGE_SIZE],
int *endnum)
static void udf_prealloc_extents(struct inode *inode, int c, int lastblock,
struct kernel_long_ad laarr[EXTENT_MERGE_SIZE],
int *endnum)
static void udf_merge_extents(struct inode *inode,
struct kernel_long_ad laarr[EXTENT_MERGE_SIZE],
int *endnum)
static void udf_update_extents(struct inode *inode,
struct kernel_long_ad laarr[EXTENT_MERGE_SIZE],
int startnum, int endnum,
struct extent_position *epos)
struct buffer_head *udf_bread(struct inode *inode, int block,
int create, int *err)
int udf_setsize(struct inode *inode, loff_t newsize)
static void __udf_read_inode(struct inode *inode)
static void udf_fill_inode(struct inode *inode, struct buffer_head *bh)
static int udf_alloc_i_data(struct inode *inode, size_t size)
static mode_t udf_convert_permissions(struct fileEntry *fe)
int udf_write_inode(struct inode *inode, struct writeback_control *wbc)
static int udf_sync_inode(struct inode *inode)
static int udf_update_inode(struct inode *inode, int do_sync)
struct inode *udf_iget(struct super_block *sb, struct kernel_lb_addr *ino)
int udf_add_aext(struct inode *inode, struct extent_position *epos,
struct kernel_lb_addr *eloc, uint32_t elen, int inc)
void udf_write_aext(struct inode *inode, struct extent_position *epos,
struct kernel_lb_addr *eloc, uint32_t elen, int inc)
int8_t udf_next_aext(struct inode *inode, struct extent_position *epos,
struct kernel_lb_addr *eloc, uint32_t *elen, int inc)
int8_t udf_current_aext(struct inode *inode, struct extent_position *epos,
struct kernel_lb_addr *eloc, uint32_t *elen, int inc)
static int8_t udf_insert_aext(struct inode *inode, struct extent_position epos,
struct kernel_lb_addr neloc, uint32_t nelen)
int8_t udf_delete_aext(struct inode *inode, struct extent_position epos,
struct kernel_lb_addr eloc, uint32_t elen)
int8_t inode_bmap(struct inode *inode, sector_t block,
struct extent_position *pos, struct kernel_lb_addr *eloc,
uint32_t *elen, sector_t *offset)
long udf_block_map(struct inode *inode, sector_t block)
