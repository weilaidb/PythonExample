#define JZ_REG_DMA_SRC_ADDR(x)		(0x00 + (x) * 0x20)
#define JZ_REG_DMA_DST_ADDR(x)		(0x04 + (x) * 0x20)
#define JZ_REG_DMA_TRANSFER_COUNT(x)	(0x08 + (x) * 0x20)
#define JZ_REG_DMA_REQ_TYPE(x)		(0x0C + (x) * 0x20)
#define JZ_REG_DMA_STATUS_CTRL(x)	(0x10 + (x) * 0x20)
#define JZ_REG_DMA_CMD(x)		(0x14 + (x) * 0x20)
#define JZ_REG_DMA_DESC_ADDR(x)		(0x18 + (x) * 0x20)
#define JZ_REG_DMA_CTRL			0x300
#define JZ_REG_DMA_IRQ			0x304
#define JZ_REG_DMA_DOORBELL		0x308
#define JZ_REG_DMA_DOORBELL_SET		0x30C
#define JZ_DMA_STATUS_CTRL_NO_DESC		BIT(31)
#define JZ_DMA_STATUS_CTRL_DESC_INV		BIT(6)
#define JZ_DMA_STATUS_CTRL_ADDR_ERR		BIT(4)
#define JZ_DMA_STATUS_CTRL_TRANSFER_DONE	BIT(3)
#define JZ_DMA_STATUS_CTRL_HALT			BIT(2)
#define JZ_DMA_STATUS_CTRL_COUNT_TERMINATE	BIT(1)
#define JZ_DMA_STATUS_CTRL_ENABLE		BIT(0)
#define JZ_DMA_CMD_SRC_INC			BIT(23)
#define JZ_DMA_CMD_DST_INC			BIT(22)
#define JZ_DMA_CMD_RDIL_MASK			(0xf << 16)
#define JZ_DMA_CMD_SRC_WIDTH_MASK		(0x3 << 14)
#define JZ_DMA_CMD_DST_WIDTH_MASK		(0x3 << 12)
#define JZ_DMA_CMD_INTERVAL_LENGTH_MASK		(0x7 << 8)
#define JZ_DMA_CMD_BLOCK_MODE			BIT(7)
#define JZ_DMA_CMD_DESC_VALID			BIT(4)
#define JZ_DMA_CMD_DESC_VALID_MODE		BIT(3)
#define JZ_DMA_CMD_VALID_IRQ_ENABLE		BIT(2)
#define JZ_DMA_CMD_TRANSFER_IRQ_ENABLE		BIT(1)
#define JZ_DMA_CMD_LINK_ENABLE			BIT(0)
#define JZ_DMA_CMD_FLAGS_OFFSET 22
#define JZ_DMA_CMD_RDIL_OFFSET 16
#define JZ_DMA_CMD_SRC_WIDTH_OFFSET 14
#define JZ_DMA_CMD_DST_WIDTH_OFFSET 12
#define JZ_DMA_CMD_TRANSFER_SIZE_OFFSET 8
#define JZ_DMA_CMD_MODE_OFFSET 7
#define JZ_DMA_CTRL_PRIORITY_MASK	(0x3 << 8)
#define JZ_DMA_CTRL_HALT		BIT(3)
#define JZ_DMA_CTRL_ADDRESS_ERROR	BIT(2)
#define JZ_DMA_CTRL_ENABLE		BIT(0)
static void __iomem *jz4740_dma_base;
static spinlock_t jz4740_dma_lock;
static inline uint32_t jz4740_dma_read(size_t reg)
static inline void jz4740_dma_write(size_t reg, uint32_t val)
static inline void jz4740_dma_write_mask(size_t reg, uint32_t val, uint32_t mask)
struct jz4740_dma_chan ;
#define JZ4740_DMA_CHANNEL(_id)
struct jz4740_dma_chan jz4740_dma_channels[] = ;
struct jz4740_dma_chan *jz4740_dma_request(void *dev, const char *name)
EXPORT_SYMBOL_GPL(jz4740_dma_request);
void jz4740_dma_configure(struct jz4740_dma_chan *dma,
const struct jz4740_dma_config *config)
EXPORT_SYMBOL_GPL(jz4740_dma_configure);
void jz4740_dma_set_src_addr(struct jz4740_dma_chan *dma, dma_addr_t src)
EXPORT_SYMBOL_GPL(jz4740_dma_set_src_addr);
void jz4740_dma_set_dst_addr(struct jz4740_dma_chan *dma, dma_addr_t dst)
EXPORT_SYMBOL_GPL(jz4740_dma_set_dst_addr);
void jz4740_dma_set_transfer_count(struct jz4740_dma_chan *dma, uint32_t count)
EXPORT_SYMBOL_GPL(jz4740_dma_set_transfer_count);
void jz4740_dma_set_complete_cb(struct jz4740_dma_chan *dma,
jz4740_dma_complete_callback_t cb)
EXPORT_SYMBOL_GPL(jz4740_dma_set_complete_cb);
void jz4740_dma_free(struct jz4740_dma_chan *dma)
EXPORT_SYMBOL_GPL(jz4740_dma_free);
void jz4740_dma_enable(struct jz4740_dma_chan *dma)
EXPORT_SYMBOL_GPL(jz4740_dma_enable);
void jz4740_dma_disable(struct jz4740_dma_chan *dma)
EXPORT_SYMBOL_GPL(jz4740_dma_disable);
uint32_t jz4740_dma_get_residue(const struct jz4740_dma_chan *dma)
EXPORT_SYMBOL_GPL(jz4740_dma_get_residue);
static void jz4740_dma_chan_irq(struct jz4740_dma_chan *dma)
static irqreturn_t jz4740_dma_irq(int irq, void *dev_id)
static int jz4740_dma_init(void)
arch_initcall(jz4740_dma_init);
