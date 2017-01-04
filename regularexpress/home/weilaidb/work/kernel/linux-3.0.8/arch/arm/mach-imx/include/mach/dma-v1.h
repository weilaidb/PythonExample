#define __MACH_DMA_V1_H__
#define imx_has_dma_v1()	(cpu_is_mx1() || cpu_is_mx21() || cpu_is_mx27())
#define IMX_DMA_CHANNELS  16
#define DMA_MODE_READ		0
#define DMA_MODE_WRITE		1
#define DMA_MODE_MASK		1
#define MX1_DMA_REG(offset)	MX1_IO_ADDRESS(MX1_DMA_BASE_ADDR + (offset))
#define MX1_DMA_DIMR		MX1_DMA_REG(0x08)
#define MX1_DMA_CCR(x)		MX1_DMA_REG(0x8c + ((x) << 6))
#define IMX_DMA_MEMSIZE_32	(0 << 4)
#define IMX_DMA_MEMSIZE_8	(1 << 4)
#define IMX_DMA_MEMSIZE_16	(2 << 4)
#define IMX_DMA_TYPE_LINEAR	(0 << 10)
#define IMX_DMA_TYPE_2D		(1 << 10)
#define IMX_DMA_TYPE_FIFO	(2 << 10)
#define IMX_DMA_ERR_BURST     (1 << 0)
#define IMX_DMA_ERR_REQUEST   (1 << 1)
#define IMX_DMA_ERR_TRANSFER  (1 << 2)
#define IMX_DMA_ERR_BUFFER    (1 << 3)
#define IMX_DMA_ERR_TIMEOUT   (1 << 4)
int
imx_dma_config_channel(int channel, unsigned int config_port,
unsigned int config_mem, unsigned int dmareq, int hw_chaining);
void
imx_dma_config_burstlen(int channel, unsigned int burstlen);
int
imx_dma_setup_single(int channel, dma_addr_t dma_address,
unsigned int dma_length, unsigned int dev_addr,
unsigned int dmamode);
#define IMX_DMA_LENGTH_LOOP	((unsigned int)-1)
int
imx_dma_setup_sg(int channel, struct scatterlist *sg,
unsigned int sgcount, unsigned int dma_length,
unsigned int dev_addr, unsigned int dmamode);
int
imx_dma_setup_handlers(int channel,
void (*irq_handler) (int, void *),
void (*err_handler) (int, void *, int), void *data);
int
imx_dma_setup_progression_handler(int channel,
void (*prog_handler) (int, void*, struct scatterlist*));
void imx_dma_enable(int channel);
void imx_dma_disable(int channel);
int imx_dma_request(int channel, const char *name);
void imx_dma_free(int channel);
int imx_dma_request_by_prio(const char *name, enum imx_dma_prio prio);
