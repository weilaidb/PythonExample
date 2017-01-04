#define __ASM_AVR32_ARCH_SRAM_H
extern struct gen_pool *sram_pool;
static inline unsigned long sram_alloc(size_t len)
static inline void sram_free(unsigned long addr, size_t len)
