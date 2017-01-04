typedef struct  Indirect;
static DEFINE_RWLOCK(pointers_lock);
static inline void add_chain(Indirect *p, struct buffer_head *bh, block_t *v)
static inline int verify_chain(Indirect *from, Indirect *to)
static inline block_t *block_end(struct buffer_head *bh)
static inline Indirect *get_branch(struct inode *inode,
int depth,
int *offsets,
Indirect chain[DEPTH],
int *err)
static int alloc_branch(struct inode *inode,
int num,
int *offsets,
Indirect *branch)
static inline int splice_branch(struct inode *inode,
Indirect chain[DEPTH],
Indirect *where,
int num)
static inline int get_block(struct inode * inode, sector_t block,
struct buffer_head *bh, int create)
static inline int all_zeroes(block_t *p, block_t *q)
static Indirect *find_shared(struct inode *inode,
int depth,
int offsets[DEPTH],
Indirect chain[DEPTH],
block_t *top)
static inline void free_data(struct inode *inode, block_t *p, block_t *q)
static void free_branches(struct inode *inode, block_t *p, block_t *q, int depth)
static inline void truncate (struct inode * inode)
static inline unsigned nblocks(loff_t size, struct super_block *sb)
