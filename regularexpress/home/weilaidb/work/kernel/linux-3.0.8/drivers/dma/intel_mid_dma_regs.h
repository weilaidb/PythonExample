#define __INTEL_MID_DMAC_REGS_H__
#define INTEL_MID_DMA_DRIVER_VERSION "1.1.0"
#define	REG_BIT0		0x00000001
#define	REG_BIT8		0x00000100
#define INT_MASK_WE		0x8
#define CLEAR_DONE		0xFFFFEFFF
#define UNMASK_INTR_REG(chan_num) \
((REG_BIT0 << chan_num) | (REG_BIT8 << chan_num))
#define MASK_INTR_REG(chan_num) (REG_BIT8 << chan_num)
#define ENABLE_CHANNEL(chan_num) \
((REG_BIT0 << chan_num) | (REG_BIT8 << chan_num))
#define DISABLE_CHANNEL(chan_num) \
(REG_BIT8 << chan_num)
#define DESCS_PER_CHANNEL	16
#define DMA_REG_SIZE		0x400
#define DMA_CH_SIZE		0x58
#define SAR			0x00
#define DAR			0x08
#define LLP			0x10
#define CTL_LOW			0x18
#define CTL_HIGH		0x1C
#define CFG_LOW			0x40
#define CFG_HIGH		0x44
#define STATUS_TFR		0x2E8
#define STATUS_BLOCK		0x2F0
#define STATUS_ERR		0x308
#define RAW_TFR			0x2C0
#define RAW_BLOCK		0x2C8
#define RAW_ERR			0x2E0
#define MASK_TFR		0x310
#define MASK_BLOCK		0x318
#define MASK_SRC_TRAN		0x320
#define MASK_DST_TRAN		0x328
#define MASK_ERR		0x330
#define CLEAR_TFR		0x338
#define CLEAR_BLOCK		0x340
#define CLEAR_SRC_TRAN		0x348
#define CLEAR_DST_TRAN		0x350
#define CLEAR_ERR		0x358
#define INTR_STATUS		0x360
#define DMA_CFG			0x398
#define DMA_CHAN_EN		0x3A0
union intel_mid_dma_ctl_lo ;
union intel_mid_dma_ctl_hi ;
union intel_mid_dma_cfg_lo ;
union intel_mid_dma_cfg_hi ;
struct intel_mid_dma_chan ;
static inline struct intel_mid_dma_chan *to_intel_mid_dma_chan(
struct dma_chan *chan)
enum intel_mid_dma_state ;
struct middma_device ;
static inline struct middma_device *to_middma_device(struct dma_device *common)
struct intel_mid_dma_desc ;
struct intel_mid_dma_lli  __attribute__ ((packed));
static inline int test_ch_en(void __iomem *dma, u32 ch_no)
static inline struct intel_mid_dma_desc *to_intel_mid_dma_desc
(struct dma_async_tx_descriptor *txd)
static inline struct intel_mid_dma_slave *to_intel_mid_dma_slave
(struct dma_slave_config *slave)
int dma_resume(struct pci_dev *pci);
