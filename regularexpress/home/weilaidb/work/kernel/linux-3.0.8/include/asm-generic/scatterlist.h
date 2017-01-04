#define __ASM_GENERIC_SCATTERLIST_H
struct scatterlist ;
#define sg_dma_address(sg)	((sg)->dma_address)
#define sg_dma_len(sg)		((sg)->dma_length)
#define sg_dma_len(sg)		((sg)->length)
