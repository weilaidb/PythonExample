#define ALLOC_ORDER	1
#define FRAG_MASK	0x0f
#define ALLOC_ORDER	2
#define FRAG_MASK	0x03
unsigned long VMALLOC_START = VMALLOC_END - VMALLOC_SIZE;
EXPORT_SYMBOL(VMALLOC_START);
static int __init parse_vmalloc(char *arg)
early_param("vmalloc", parse_vmalloc);
unsigned long *crst_table_alloc(struct mm_struct *mm)
void crst_table_free(struct mm_struct *mm, unsigned long *table)
int crst_table_upgrade(struct mm_struct *mm, unsigned long limit)
void crst_table_downgrade(struct mm_struct *mm, unsigned long limit)
static inline unsigned int atomic_xor_bits(atomic_t *v, unsigned int bits)
static inline unsigned long *page_table_alloc_pgste(struct mm_struct *mm)
static inline void page_table_free_pgste(unsigned long *table)
unsigned long *page_table_alloc(struct mm_struct *mm)
void page_table_free(struct mm_struct *mm, unsigned long *table)
static void __page_table_free_rcu(void *table, unsigned bit)
void page_table_free_rcu(struct mmu_gather *tlb, unsigned long *table)
void __tlb_remove_table(void *_table)
int s390_enable_sie(void)
EXPORT_SYMBOL_GPL(s390_enable_sie);
#if defined(CONFIG_DEBUG_PAGEALLOC) && defined(CONFIG_HIBERNATION)
bool kernel_page_present(struct page *page)
