#define	AT_HDMAC_REGS_H
#define	AT_DMA_MAX_NR_CHANNELS	8
#define	AT_DMA_GCFG	0x00
#define		AT_DMA_IF_BIGEND(i)	(0x1 << (i))
#define		AT_DMA_ARB_CFG	(0x1 << 4)
#define			AT_DMA_ARB_CFG_FIXED		(0x0 << 4)
#define			AT_DMA_ARB_CFG_ROUND_ROBIN	(0x1 << 4)
#define	AT_DMA_EN	0x04
#define		AT_DMA_ENABLE	(0x1 << 0)
#define	AT_DMA_SREQ	0x08
#define		AT_DMA_SSREQ(x)	(0x1 << ((x) << 1))
#define		AT_DMA_DSREQ(x)	(0x1 << (1 + ((x) << 1)))
#define	AT_DMA_CREQ	0x0C
#define		AT_DMA_SCREQ(x)	(0x1 << ((x) << 1))
#define		AT_DMA_DCREQ(x)	(0x1 << (1 + ((x) << 1)))
#define	AT_DMA_LAST	0x10
#define		AT_DMA_SLAST(x)	(0x1 << ((x) << 1))
#define		AT_DMA_DLAST(x)	(0x1 << (1 + ((x) << 1)))
#define	AT_DMA_SYNC	0x14
#define		AT_DMA_SYR(h)	(0x1 << (h))
#define	AT_DMA_EBCIER	0x18
#define	AT_DMA_EBCIDR	0x1C
#define	AT_DMA_EBCIMR	0x20
#define	AT_DMA_EBCISR	0x24
#define		AT_DMA_CBTC_OFFSET	8
#define		AT_DMA_ERR_OFFSET	16
#define		AT_DMA_BTC(x)	(0x1 << (x))
#define		AT_DMA_CBTC(x)	(0x1 << (AT_DMA_CBTC_OFFSET + (x)))
#define		AT_DMA_ERR(x)	(0x1 << (AT_DMA_ERR_OFFSET + (x)))
#define	AT_DMA_CHER	0x28
#define		AT_DMA_ENA(x)	(0x1 << (x))
#define		AT_DMA_SUSP(x)	(0x1 << ( 8 + (x)))
#define		AT_DMA_KEEP(x)	(0x1 << (24 + (x)))
#define	AT_DMA_CHDR	0x2C
#define		AT_DMA_DIS(x)	(0x1 << (x))
#define		AT_DMA_RES(x)	(0x1 << ( 8 + (x)))
#define	AT_DMA_CHSR	0x30
#define		AT_DMA_EMPT(x)	(0x1 << (16 + (x)))
#define		AT_DMA_STAL(x)	(0x1 << (24 + (x)))
#define	AT_DMA_CH_REGS_BASE	0x3C
#define	ch_regs(x)	(AT_DMA_CH_REGS_BASE + (x) * 0x28)
#define	ATC_SADDR_OFFSET	0x00
#define	ATC_DADDR_OFFSET	0x04
#define	ATC_DSCR_OFFSET		0x08
#define	ATC_CTRLA_OFFSET	0x0C
#define	ATC_CTRLB_OFFSET	0x10
#define	ATC_CFG_OFFSET		0x14
#define	ATC_SPIP_OFFSET		0x18
#define	ATC_DPIP_OFFSET		0x1C
#define	ATC_DSCR_IF(i)		(0x3 & (i))
#define	ATC_BTSIZE_MAX		0xFFFFUL
#define	ATC_BTSIZE(x)		(ATC_BTSIZE_MAX & (x))
#define	ATC_SRC_WIDTH_MASK	(0x3 << 24)
#define		ATC_SRC_WIDTH(x)	((x) << 24)
#define		ATC_SRC_WIDTH_BYTE	(0x0 << 24)
#define		ATC_SRC_WIDTH_HALFWORD	(0x1 << 24)
#define		ATC_SRC_WIDTH_WORD	(0x2 << 24)
#define	ATC_DST_WIDTH_MASK	(0x3 << 28)
#define		ATC_DST_WIDTH(x)	((x) << 28)
#define		ATC_DST_WIDTH_BYTE	(0x0 << 28)
#define		ATC_DST_WIDTH_HALFWORD	(0x1 << 28)
#define		ATC_DST_WIDTH_WORD	(0x2 << 28)
#define	ATC_DONE		(0x1 << 31)
#define	ATC_SIF(i)		(0x3 & (i))
#define	ATC_DIF(i)		((0x3 & (i)) <<  4)
#define AT_DMA_MEM_IF		0
#define AT_DMA_PER_IF		1
#define	ATC_SRC_PIP		(0x1 <<  8)
#define	ATC_DST_PIP		(0x1 << 12)
#define	ATC_SRC_DSCR_DIS	(0x1 << 16)
#define	ATC_DST_DSCR_DIS	(0x1 << 20)
#define	ATC_FC_MASK		(0x7 << 21)
#define		ATC_FC_MEM2MEM		(0x0 << 21)
#define		ATC_FC_MEM2PER		(0x1 << 21)
#define		ATC_FC_PER2MEM		(0x2 << 21)
#define		ATC_FC_PER2PER		(0x3 << 21)
#define		ATC_FC_PER2MEM_PER	(0x4 << 21)
#define		ATC_FC_MEM2PER_PER	(0x5 << 21)
#define		ATC_FC_PER2PER_SRCPER	(0x6 << 21)
#define		ATC_FC_PER2PER_DSTPER	(0x7 << 21)
#define	ATC_SRC_ADDR_MODE_MASK	(0x3 << 24)
#define		ATC_SRC_ADDR_MODE_INCR	(0x0 << 24)
#define		ATC_SRC_ADDR_MODE_DECR	(0x1 << 24)
#define		ATC_SRC_ADDR_MODE_FIXED	(0x2 << 24)
#define	ATC_DST_ADDR_MODE_MASK	(0x3 << 28)
#define		ATC_DST_ADDR_MODE_INCR	(0x0 << 28)
#define		ATC_DST_ADDR_MODE_DECR	(0x1 << 28)
#define		ATC_DST_ADDR_MODE_FIXED	(0x2 << 28)
#define	ATC_IEN			(0x1 << 30)
#define	ATC_AUTO		(0x1 << 31)
#define	ATC_SPIP_HOLE(x)	(0xFFFFU & (x))
#define	ATC_SPIP_BOUNDARY(x)	((0x3FF & (x)) << 16)
#define	ATC_DPIP_HOLE(x)	(0xFFFFU & (x))
#define	ATC_DPIP_BOUNDARY(x)	((0x3FF & (x)) << 16)
struct at_lli ;
struct at_desc ;
static inline struct at_desc *
txd_to_at_desc(struct dma_async_tx_descriptor *txd)
enum atc_status ;
struct at_dma_chan ;
#define	channel_readl(atchan, name) \
__raw_readl((atchan)->ch_regs + ATC_##name##_OFFSET)
#define	channel_writel(atchan, name, val) \
__raw_writel((val), (atchan)->ch_regs + ATC_##name##_OFFSET)
static inline struct at_dma_chan *to_at_dma_chan(struct dma_chan *dchan)
struct at_dma ;
#define	dma_readl(atdma, name) \
__raw_readl((atdma)->regs + AT_DMA_##name)
#define	dma_writel(atdma, name, val) \
__raw_writel((val), (atdma)->regs + AT_DMA_##name)
static inline struct at_dma *to_at_dma(struct dma_device *ddev)
static struct device *chan2dev(struct dma_chan *chan)
static struct device *chan2parent(struct dma_chan *chan)
#if defined(VERBOSE_DEBUG)
static void vdbg_dump_regs(struct at_dma_chan *atchan)
static void vdbg_dump_regs(struct at_dma_chan *atchan)
static void atc_dump_lli(struct at_dma_chan *atchan, struct at_lli *lli)
static void atc_setup_irq(struct at_dma_chan *atchan, int on)
static inline void atc_enable_irq(struct at_dma_chan *atchan)
static inline void atc_disable_irq(struct at_dma_chan *atchan)
static inline int atc_chan_is_enabled(struct at_dma_chan *atchan)
static void set_desc_eol(struct at_desc *desc)
