#define _ASM_IA64_DMA_H
extern unsigned long MAX_DMA_ADDRESS;
extern int isa_dma_bridge_buggy;
# define isa_dma_bridge_buggy 	(0)
#define free_dma(x)
void dma_mark_clean(void *addr, size_t size);
