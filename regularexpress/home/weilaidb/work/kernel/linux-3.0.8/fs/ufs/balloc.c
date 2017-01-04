#define INVBLOCK ((u64)-1L)
static u64 ufs_add_fragments(struct inode *, u64, unsigned, unsigned, int *);
static u64 ufs_alloc_fragments(struct inode *, unsigned, u64, unsigned, int *);
static u64 ufs_alloccg_block(struct inode *, struct ufs_cg_private_info *, u64, int *);
static u64 ufs_bitmap_search (struct super_block *, struct ufs_cg_private_info *, u64, unsigned);
static unsigned char ufs_fragtable_8fpb[], ufs_fragtable_other[];
static void ufs_clusteracct(struct super_block *, struct ufs_cg_private_info *, unsigned, int);
void ufs_free_fragments(struct inode *inode, u64 fragment, unsigned count)
void ufs_free_blocks(struct inode *inode, u64 fragment, unsigned count)
static void ufs_change_blocknr(struct inode *inode, sector_t beg,
unsigned int count, sector_t oldb,
sector_t newb, struct page *locked_page)
static void ufs_clear_frags(struct inode *inode, sector_t beg, unsigned int n,
int sync)
u64 ufs_new_fragments(struct inode *inode, void *p, u64 fragment,
u64 goal, unsigned count, int *err,
struct page *locked_page)
static u64 ufs_add_fragments(struct inode *inode, u64 fragment,
unsigned oldcount, unsigned newcount, int *err)
#define UFS_TEST_FREE_SPACE_CG \
ucg = (struct ufs_cylinder_group *) UFS_SB(sb)->s_ucg[cgno]->b_data; \
if (fs32_to_cpu(sb, ucg->cg_cs.cs_nbfree)) \
goto cg_found; \
for (k = count; k < uspi->s_fpb; k++) \
if (fs32_to_cpu(sb, ucg->cg_frsum[k])) \
goto cg_found;
static u64 ufs_alloc_fragments(struct inode *inode, unsigned cgno,
u64 goal, unsigned count, int *err)
static u64 ufs_alloccg_block(struct inode *inode,
struct ufs_cg_private_info *ucpi,
u64 goal, int *err)
static unsigned ubh_scanc(struct ufs_sb_private_info *uspi,
struct ufs_buffer_head *ubh,
unsigned begin, unsigned size,
unsigned char *table, unsigned char mask)
static u64 ufs_bitmap_search(struct super_block *sb,
struct ufs_cg_private_info *ucpi,
u64 goal, unsigned count)
static void ufs_clusteracct(struct super_block * sb,
struct ufs_cg_private_info * ucpi, unsigned blkno, int cnt)
static unsigned char ufs_fragtable_8fpb[] = ;
static unsigned char ufs_fragtable_other[] = ;
