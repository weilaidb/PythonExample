#define __ASM_ARCH_MXC_DMA_H__
enum sdma_peripheral_type ;
enum imx_dma_prio ;
struct imx_dma_data ;
static inline int imx_dma_is_ipu(struct dma_chan *chan)
static inline int imx_dma_is_general_purpose(struct dma_chan *chan)
