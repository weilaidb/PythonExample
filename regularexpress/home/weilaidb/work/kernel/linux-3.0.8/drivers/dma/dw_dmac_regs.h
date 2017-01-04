#define DW_DMA_MAX_NR_CHANNELS	8
#define DW_REG(name)		u32 name; u32 __pad_##name
struct dw_dma_chan_regs ;
struct dw_dma_irq_regs ;
struct dw_dma_regs ;
#define DWC_CTLL_INT_EN		(1 << 0)
#define DWC_CTLL_DST_WIDTH(n)	((n)<<1)
#define DWC_CTLL_SRC_WIDTH(n)	((n)<<4)
#define DWC_CTLL_DST_INC	(0<<7)
#define DWC_CTLL_DST_DEC	(1<<7)
#define DWC_CTLL_DST_FIX	(2<<7)
#define DWC_CTLL_SRC_INC	(0<<7)
#define DWC_CTLL_SRC_DEC	(1<<9)
#define DWC_CTLL_SRC_FIX	(2<<9)
#define DWC_CTLL_DST_MSIZE(n)	((n)<<11)
#define DWC_CTLL_SRC_MSIZE(n)	((n)<<14)
#define DWC_CTLL_S_GATH_EN	(1 << 17)
#define DWC_CTLL_D_SCAT_EN	(1 << 18)
#define DWC_CTLL_FC(n)		((n) << 20)
#define DWC_CTLL_FC_M2M		(0 << 20)
#define DWC_CTLL_FC_M2P		(1 << 20)
#define DWC_CTLL_FC_P2M		(2 << 20)
#define DWC_CTLL_FC_P2P		(3 << 20)
#define DWC_CTLL_DMS(n)		((n)<<23)
#define DWC_CTLL_SMS(n)		((n)<<25)
#define DWC_CTLL_LLP_D_EN	(1 << 27)
#define DWC_CTLL_LLP_S_EN	(1 << 28)
#define DWC_CTLH_DONE		0x00001000
#define DWC_CTLH_BLOCK_TS_MASK	0x00000fff
#define DWC_CFGL_CH_PRIOR_MASK	(0x7 << 5)
#define DWC_CFGL_CH_PRIOR(x)	((x) << 5)
#define DWC_CFGL_CH_SUSP	(1 << 8)
#define DWC_CFGL_FIFO_EMPTY	(1 << 9)
#define DWC_CFGL_HS_DST		(1 << 10)
#define DWC_CFGL_HS_SRC		(1 << 11)
#define DWC_CFGL_MAX_BURST(x)	((x) << 20)
#define DWC_CFGL_RELOAD_SAR	(1 << 30)
#define DWC_CFGL_RELOAD_DAR	(1 << 31)
#define DWC_CFGH_DS_UPD_EN	(1 << 5)
#define DWC_CFGH_SS_UPD_EN	(1 << 6)
#define DWC_SGR_SGI(x)		((x) << 0)
#define DWC_SGR_SGC(x)		((x) << 20)
#define DWC_DSR_DSI(x)		((x) << 0)
#define DWC_DSR_DSC(x)		((x) << 20)
#define DW_CFG_DMA_EN		(1 << 0)
#define DW_REGLEN		0x400
enum dw_dmac_flags ;
struct dw_dma_chan ;
static inline struct dw_dma_chan_regs __iomem *
__dwc_regs(struct dw_dma_chan *dwc)
#define channel_readl(dwc, name) \
readl(&(__dwc_regs(dwc)->name))
#define channel_writel(dwc, name, val) \
writel((val), &(__dwc_regs(dwc)->name))
static inline struct dw_dma_chan *to_dw_dma_chan(struct dma_chan *chan)
struct dw_dma ;
static inline struct dw_dma_regs __iomem *__dw_regs(struct dw_dma *dw)
#define dma_readl(dw, name) \
readl(&(__dw_regs(dw)->name))
#define dma_writel(dw, name, val) \
writel((val), &(__dw_regs(dw)->name))
#define channel_set_bit(dw, reg, mask) \
dma_writel(dw, reg, ((mask) << 8) | (mask))
#define channel_clear_bit(dw, reg, mask) \
dma_writel(dw, reg, ((mask) << 8) | 0)
static inline struct dw_dma *to_dw_dma(struct dma_device *ddev)
struct dw_lli ;
struct dw_desc ;
static inline struct dw_desc *
txd_to_dw_desc(struct dma_async_tx_descriptor *txd)
