#define _XTENSA_DMA_H
#define MAX_DMA_CHANNELS	8
#define MAX_DMA_ADDRESS		(PAGE_OFFSET + XCHAL_KIO_SIZE - 1)
extern int request_dma(unsigned int dmanr, const char * device_id);
extern void free_dma(unsigned int dmanr);
extern int isa_dma_bridge_buggy;
#define isa_dma_bridge_buggy 	(0)
