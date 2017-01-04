int __init iram_init(unsigned long base, unsigned long size);
void __iomem *iram_alloc(unsigned int size, unsigned long *dma_addr);
void iram_free(unsigned long dma_addr, unsigned int size);
static inline int __init iram_init(unsigned long base, unsigned long size)
static inline void __iomem *iram_alloc(unsigned int size, unsigned long *dma_addr)
static inline void iram_free(unsigned long base, unsigned long size)
