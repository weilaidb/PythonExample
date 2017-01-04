#if defined(CONFIG_HIGHMEM) || defined(CONFIG_X86_32)
DEFINE_PER_CPU(int, __kmap_atomic_idx);
unsigned long totalhigh_pages __read_mostly;
EXPORT_SYMBOL(totalhigh_pages);
EXPORT_PER_CPU_SYMBOL(__kmap_atomic_idx);
unsigned int nr_free_highpages (void)
static int pkmap_count[LAST_PKMAP];
static unsigned int last_pkmap_nr;
static  __cacheline_aligned_in_smp DEFINE_SPINLOCK(kmap_lock);
pte_t * pkmap_page_table;
static DECLARE_WAIT_QUEUE_HEAD(pkmap_map_wait);
#define lock_kmap()             spin_lock_irq(&kmap_lock)
#define unlock_kmap()           spin_unlock_irq(&kmap_lock)
#define lock_kmap_any(flags)    spin_lock_irqsave(&kmap_lock, flags)
#define unlock_kmap_any(flags)  spin_unlock_irqrestore(&kmap_lock, flags)
#define lock_kmap()             spin_lock(&kmap_lock)
#define unlock_kmap()           spin_unlock(&kmap_lock)
#define lock_kmap_any(flags)    \
do  while (0)
#define unlock_kmap_any(flags)  \
do  while (0)
static void flush_all_zero_pkmaps(void)
void kmap_flush_unused(void)
static inline unsigned long map_new_virtual(struct page *page)
void *kmap_high(struct page *page)
EXPORT_SYMBOL(kmap_high);
void *kmap_high_get(struct page *page)
void kunmap_high(struct page *page)
EXPORT_SYMBOL(kunmap_high);
#if defined(HASHED_PAGE_VIRTUAL)
#define PA_HASH_ORDER	7
struct page_address_map ;
static struct list_head page_address_pool;
static spinlock_t pool_lock;
static struct page_address_slot  ____cacheline_aligned_in_smp page_address_htable[1<<PA_HASH_ORDER];
static struct page_address_slot *page_slot(struct page *page)
void *page_address(struct page *page)
EXPORT_SYMBOL(page_address);
void set_page_address(struct page *page, void *virtual)
static struct page_address_map page_address_maps[LAST_PKMAP];
void __init page_address_init(void)
