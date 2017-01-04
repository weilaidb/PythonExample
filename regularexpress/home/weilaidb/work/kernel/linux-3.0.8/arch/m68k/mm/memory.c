typedef struct list_head ptable_desc;
static LIST_HEAD(ptable_list);
#define PD_PTABLE(page) ((ptable_desc *)&(virt_to_page(page)->lru))
#define PD_PAGE(ptable) (list_entry(ptable, struct page, lru))
#define PD_MARKBITS(dp) (*(unsigned char *)&PD_PAGE(dp)->index)
#define PTABLE_SIZE (PTRS_PER_PMD * sizeof(pmd_t))
void __init init_pointer_table(unsigned long ptable)
pmd_t *get_pointer_table (void)
int free_pointer_table (pmd_t *ptable)
static inline void clear040(unsigned long paddr)
static inline void cleari040(unsigned long paddr)
static inline void push040(unsigned long paddr)
static inline void pushcl040(unsigned long paddr)
void cache_clear (unsigned long paddr, int len)
EXPORT_SYMBOL(cache_clear);
void cache_push (unsigned long paddr, int len)
EXPORT_SYMBOL(cache_push);
