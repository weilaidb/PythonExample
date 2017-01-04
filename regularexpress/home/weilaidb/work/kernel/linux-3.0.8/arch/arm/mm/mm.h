extern pmd_t *top_pmd;
#define TOP_PTE(x)	pte_offset_kernel(top_pmd, x)
static inline pmd_t *pmd_off_k(unsigned long virt)
struct mem_type ;
const struct mem_type *get_mem_type(unsigned int type);
extern void __flush_dcache_page(struct address_space *mapping, struct page *page);
void __init bootmem_init(void);
void arm_mm_memblock_reserve(void);
