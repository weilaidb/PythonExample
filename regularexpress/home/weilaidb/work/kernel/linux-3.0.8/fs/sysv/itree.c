enum ;
static inline void dirty_indirect(struct buffer_head *bh, struct inode *inode)
static int block_to_path(struct inode *inode, long block, int offsets[DEPTH])
static inline int block_to_cpu(struct sysv_sb_info *sbi, sysv_zone_t nr)
typedef struct  Indirect;
static DEFINE_RWLOCK(pointers_lock);
static inline void add_chain(Indirect *p, struct buffer_head *bh, sysv_zone_t *v)
static inline int verify_chain(Indirect *from, Indirect *to)
static inline sysv_zone_t *block_end(struct buffer_head *bh)
static Indirect *get_branch(struct inode *inode,
int depth,
int offsets[],
Indirect chain[],
int *err)
static int alloc_branch(struct inode *inode,
int num,
int *offsets,
Indirect *branch)
static inline int splice_branch(struct inode *inode,
Indirect chain[],
Indirect *where,
int num)
static int get_block(struct inode *inode, sector_t iblock, struct buffer_head *bh_result, int create)
static inline int all_zeroes(sysv_zone_t *p, sysv_zone_t *q)
static Indirect *find_shared(struct inode *inode,
int depth,
int offsets[],
Indirect chain[],
sysv_zone_t *top)
static inline void free_data(struct inode *inode, sysv_zone_t *p, sysv_zone_t *q)
static void free_branches(struct inode *inode, sysv_zone_t *p, sysv_zone_t *q, int depth)
void sysv_truncate (struct inode * inode)
static unsigned sysv_nblocks(struct super_block *s, loff_t size)
int sysv_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
static int sysv_writepage(struct page *page, struct writeback_control *wbc)
static int sysv_readpage(struct file *file, struct page *page)
int sysv_prepare_chunk(struct page *page, loff_t pos, unsigned len)
static int sysv_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t sysv_bmap(struct address_space *mapping, sector_t block)
const struct address_space_operations sysv_aops = ;
