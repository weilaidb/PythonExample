static unsigned long iram_phys_base;
static void __iomem *iram_virt_base;
static struct gen_pool *iram_pool;
static inline void __iomem *iram_phys_to_virt(unsigned long p)
void __iomem *iram_alloc(unsigned int size, unsigned long *dma_addr)
EXPORT_SYMBOL(iram_alloc);
void iram_free(unsigned long addr, unsigned int size)
EXPORT_SYMBOL(iram_free);
int __init iram_init(unsigned long base, unsigned long size)
