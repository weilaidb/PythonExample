#define _ASM_RC32434_DMA_V_H_
#define DMA_CHAN_OFFSET		0x14
#define IS_DMA_USED(X)		(((X) & \
(DMA_DESC_FINI | DMA_DESC_DONE | DMA_DESC_TERM)) \
!= 0)
#define DMA_COUNT(count)	((count) & DMA_DESC_COUNT_MSK)
#define DMA_HALT_TIMEOUT	500
static inline int rc32434_halt_dma(struct dma_reg *ch)
static inline void rc32434_start_dma(struct dma_reg *ch, u32 dma_addr)
static inline void rc32434_chain_dma(struct dma_reg *ch, u32 dma_addr)
