#define _ASM_POWERPC_PAGE_32_H
#if defined(CONFIG_PHYSICAL_ALIGN) && (CONFIG_PHYSICAL_START != 0)
#if (CONFIG_PHYSICAL_START % CONFIG_PHYSICAL_ALIGN) != 0
#error "CONFIG_PHYSICAL_START must be a multiple of CONFIG_PHYSICAL_ALIGN"
#define VM_DATA_DEFAULT_FLAGS	VM_DATA_DEFAULT_FLAGS32
#define ARCH_DMA_MINALIGN	L1_CACHE_BYTES
#define PTE_FLAGS_OFFSET	4
#define PTE_FLAGS_OFFSET	0
#define PTE_SHIFT	(PAGE_SHIFT - PTE_T_LOG2 - 2)
#define PTE_SHIFT	(PAGE_SHIFT - PTE_T_LOG2)
typedef unsigned long long pte_basic_t;
typedef unsigned long pte_basic_t;
struct page;
extern void clear_pages(void *page, int order);
static inline void clear_page(void *page)
extern void copy_page(void *to, void *from);
#define PGD_T_LOG2	(__builtin_ffs(sizeof(pgd_t)) - 1)
#define PTE_T_LOG2	(__builtin_ffs(sizeof(pte_t)) - 1)
