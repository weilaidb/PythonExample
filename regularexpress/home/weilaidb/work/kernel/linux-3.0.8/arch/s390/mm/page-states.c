#define ESSA_SET_STABLE		1
#define ESSA_SET_UNUSED		2
static int cmma_flag = 1;
static int __init cmma(char *str)
__setup("cmma=", cmma);
void __init cmma_init(void)
static inline void set_page_unstable(struct page *page, int order)
void arch_free_page(struct page *page, int order)
static inline void set_page_stable(struct page *page, int order)
void arch_alloc_page(struct page *page, int order)
void arch_set_page_states(int make_stable)
