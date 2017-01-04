#define _ASM_MICROBLAZE_DMA_H
#define MAX_DMA_ADDRESS		(0)
#define MAX_DMA_ADDRESS (CONFIG_KERNEL_START + memory_size - 1)
extern int isa_dma_bridge_buggy;
#define isa_dma_bridge_buggy     (0)
