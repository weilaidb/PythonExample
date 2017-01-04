#define __MUSB_DMA_H__
struct musb_hw_ep;
#define	DMA_ADDR_INVALID	(~(dma_addr_t)0)
#define	is_dma_capable()	(1)
#define	is_dma_capable()	(0)
#define	is_cppi_enabled()	1
#define	is_cppi_enabled()	0
#define tusb_dma_omap()			1
#define tusb_dma_omap()			0
# undef USE_MODE1
# if !ANOMALY_05000456
#  define USE_MODE1
# endif
enum dma_channel_status ;
struct dma_controller;
struct dma_channel ;
static inline enum dma_channel_status
dma_channel_status(struct dma_channel *c)
struct dma_controller ;
extern void musb_dma_completion(struct musb *musb, u8 epnum, u8 transmit);
extern struct dma_controller *__init
dma_controller_create(struct musb *, void __iomem *);
extern void dma_controller_destroy(struct dma_controller *);
