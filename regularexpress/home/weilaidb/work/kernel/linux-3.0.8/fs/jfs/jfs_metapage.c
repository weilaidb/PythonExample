static struct  mpStat;
#define metapage_locked(mp) test_bit(META_locked, &(mp)->flag)
#define trylock_metapage(mp) test_and_set_bit_lock(META_locked, &(mp)->flag)
static inline void unlock_metapage(struct metapage *mp)
static inline void __lock_metapage(struct metapage *mp)
static inline void lock_metapage(struct metapage *mp)
#define METAPOOL_MIN_PAGES 32
static struct kmem_cache *metapage_cache;
static mempool_t *metapage_mempool;
#define MPS_PER_PAGE (PAGE_CACHE_SIZE >> L2PSIZE)
#if MPS_PER_PAGE > 1
struct meta_anchor ;
#define mp_anchor(page) ((struct meta_anchor *)page_private(page))
static inline struct metapage *page_to_mp(struct page *page, int offset)
static inline int insert_metapage(struct page *page, struct metapage *mp)
static inline void remove_metapage(struct page *page, struct metapage *mp)
static inline void inc_io(struct page *page)
static inline void dec_io(struct page *page, void (*handler) (struct page *))
static inline struct metapage *page_to_mp(struct page *page, int offset)
static inline int insert_metapage(struct page *page, struct metapage *mp)
static inline void remove_metapage(struct page *page, struct metapage *mp)
#define inc_io(page) do  while(0)
#define dec_io(page, handler) handler(page)
static void init_once(void *foo)
static inline struct metapage *alloc_metapage(gfp_t gfp_mask)
static inline void free_metapage(struct metapage *mp)
int __init metapage_init(void)
void metapage_exit(void)
static inline void drop_metapage(struct page *page, struct metapage *mp)
static sector_t metapage_get_blocks(struct inode *inode, sector_t lblock,
int *len)
static void last_read_complete(struct page *page)
static void metapage_read_end_io(struct bio *bio, int err)
static void remove_from_logsync(struct metapage *mp)
static void last_write_complete(struct page *page)
static void metapage_write_end_io(struct bio *bio, int err)
static int metapage_writepage(struct page *page, struct writeback_control *wbc)
static int metapage_readpage(struct file *fp, struct page *page)
static int metapage_releasepage(struct page *page, gfp_t gfp_mask)
static void metapage_invalidatepage(struct page *page, unsigned long offset)
const struct address_space_operations jfs_metapage_aops = ;
struct metapage *__get_metapage(struct inode *inode, unsigned long lblock,
unsigned int size, int absolute,
unsigned long new)
void grab_metapage(struct metapage * mp)
void force_metapage(struct metapage *mp)
void hold_metapage(struct metapage *mp)
void put_metapage(struct metapage *mp)
void release_metapage(struct metapage * mp)
void __invalidate_metapages(struct inode *ip, s64 addr, int len)
static int jfs_mpstat_proc_show(struct seq_file *m, void *v)
static int jfs_mpstat_proc_open(struct inode *inode, struct file *file)
const struct file_operations jfs_mpstat_proc_fops = ;
