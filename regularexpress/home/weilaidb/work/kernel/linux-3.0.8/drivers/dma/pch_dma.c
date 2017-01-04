#define DRV_NAME "pch-dma"
#define DMA_CTL0_DISABLE		0x0
#define DMA_CTL0_SG			0x1
#define DMA_CTL0_ONESHOT		0x2
#define DMA_CTL0_MODE_MASK_BITS		0x3
#define DMA_CTL0_DIR_SHIFT_BITS		2
#define DMA_CTL0_BITS_PER_CH		4
#define DMA_CTL2_START_SHIFT_BITS	8
#define DMA_CTL2_IRQ_ENABLE_MASK	((1UL << DMA_CTL2_START_SHIFT_BITS) - 1)
#define DMA_STATUS_IDLE			0x0
#define DMA_STATUS_DESC_READ		0x1
#define DMA_STATUS_WAIT			0x2
#define DMA_STATUS_ACCESS		0x3
#define DMA_STATUS_BITS_PER_CH		2
#define DMA_STATUS_MASK_BITS		0x3
#define DMA_STATUS_SHIFT_BITS		16
#define DMA_STATUS_IRQ(x)		(0x1 << (x))
#define DMA_STATUS_ERR(x)		(0x1 << ((x) + 8))
#define DMA_DESC_WIDTH_SHIFT_BITS	12
#define DMA_DESC_WIDTH_1_BYTE		(0x3 << DMA_DESC_WIDTH_SHIFT_BITS)
#define DMA_DESC_WIDTH_2_BYTES		(0x2 << DMA_DESC_WIDTH_SHIFT_BITS)
#define DMA_DESC_WIDTH_4_BYTES		(0x0 << DMA_DESC_WIDTH_SHIFT_BITS)
#define DMA_DESC_MAX_COUNT_1_BYTE	0x3FF
#define DMA_DESC_MAX_COUNT_2_BYTES	0x3FF
#define DMA_DESC_MAX_COUNT_4_BYTES	0x7FF
#define DMA_DESC_END_WITHOUT_IRQ	0x0
#define DMA_DESC_END_WITH_IRQ		0x1
#define DMA_DESC_FOLLOW_WITHOUT_IRQ	0x2
#define DMA_DESC_FOLLOW_WITH_IRQ	0x3
#define MAX_CHAN_NR			8
static unsigned int init_nr_desc_per_channel = 64;
module_param(init_nr_desc_per_channel, uint, 0644);
MODULE_PARM_DESC(init_nr_desc_per_channel,
"initial descriptors per channel (default: 64)");
struct pch_dma_desc_regs ;
struct pch_dma_regs ;
struct pch_dma_desc ;
struct pch_dma_chan ;
#define PDC_DEV_ADDR	0x00
#define PDC_MEM_ADDR	0x04
#define PDC_SIZE	0x08
#define PDC_NEXT	0x0C
#define channel_readl(pdc, name) \
readl((pdc)->membase + PDC_##name)
#define channel_writel(pdc, name, val) \
writel((val), (pdc)->membase + PDC_##name)
struct pch_dma ;
#define PCH_DMA_CTL0	0x00
#define PCH_DMA_CTL1	0x04
#define PCH_DMA_CTL2	0x08
#define PCH_DMA_CTL3	0x0C
#define PCH_DMA_STS0	0x10
#define PCH_DMA_STS1	0x14
#define dma_readl(pd, name) \
readl((pd)->membase + PCH_DMA_##name)
#define dma_writel(pd, name, val) \
writel((val), (pd)->membase + PCH_DMA_##name)
static inline
struct pch_dma_desc *to_pd_desc(struct dma_async_tx_descriptor *txd)
static inline struct pch_dma_chan *to_pd_chan(struct dma_chan *chan)
static inline struct pch_dma *to_pd(struct dma_device *ddev)
static inline struct device *chan2dev(struct dma_chan *chan)
static inline struct device *chan2parent(struct dma_chan *chan)
static inline
struct pch_dma_desc *pdc_first_active(struct pch_dma_chan *pd_chan)
static inline
struct pch_dma_desc *pdc_first_queued(struct pch_dma_chan *pd_chan)
static void pdc_enable_irq(struct dma_chan *chan, int enable)
static void pdc_set_dir(struct dma_chan *chan)
static void pdc_set_mode(struct dma_chan *chan, u32 mode)
static u32 pdc_get_status(struct pch_dma_chan *pd_chan)
static bool pdc_is_idle(struct pch_dma_chan *pd_chan)
static void pdc_dostart(struct pch_dma_chan *pd_chan, struct pch_dma_desc* desc)
static void pdc_chain_complete(struct pch_dma_chan *pd_chan,
struct pch_dma_desc *desc)
static void pdc_complete_all(struct pch_dma_chan *pd_chan)
static void pdc_handle_error(struct pch_dma_chan *pd_chan)
static void pdc_advance_work(struct pch_dma_chan *pd_chan)
static dma_cookie_t pdc_assign_cookie(struct pch_dma_chan *pd_chan,
struct pch_dma_desc *desc)
static dma_cookie_t pd_tx_submit(struct dma_async_tx_descriptor *txd)
static struct pch_dma_desc *pdc_alloc_desc(struct dma_chan *chan, gfp_t flags)
static struct pch_dma_desc *pdc_desc_get(struct pch_dma_chan *pd_chan)
static void pdc_desc_put(struct pch_dma_chan *pd_chan,
struct pch_dma_desc *desc)
static int pd_alloc_chan_resources(struct dma_chan *chan)
static void pd_free_chan_resources(struct dma_chan *chan)
static enum dma_status pd_tx_status(struct dma_chan *chan, dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void pd_issue_pending(struct dma_chan *chan)
static struct dma_async_tx_descriptor *pd_prep_slave_sg(struct dma_chan *chan,
struct scatterlist *sgl, unsigned int sg_len,
enum dma_data_direction direction, unsigned long flags)
static int pd_device_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static void pdc_tasklet(unsigned long data)
static irqreturn_t pd_irq(int irq, void *devid)
static void pch_dma_save_regs(struct pch_dma *pd)
static void pch_dma_restore_regs(struct pch_dma *pd)
static int pch_dma_suspend(struct pci_dev *pdev, pm_message_t state)
static int pch_dma_resume(struct pci_dev *pdev)
static int __devinit pch_dma_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit pch_dma_remove(struct pci_dev *pdev)
#define PCI_VENDOR_ID_ROHM             0x10DB
#define PCI_DEVICE_ID_EG20T_PCH_DMA_8CH        0x8810
#define PCI_DEVICE_ID_EG20T_PCH_DMA_4CH        0x8815
#define PCI_DEVICE_ID_ML7213_DMA1_8CH	0x8026
#define PCI_DEVICE_ID_ML7213_DMA2_8CH	0x802B
#define PCI_DEVICE_ID_ML7213_DMA3_4CH	0x8034
#define PCI_DEVICE_ID_ML7213_DMA4_12CH	0x8032
#define PCI_DEVICE_ID_ML7223_DMA1_4CH	0x800B
#define PCI_DEVICE_ID_ML7223_DMA2_4CH	0x800E
#define PCI_DEVICE_ID_ML7223_DMA3_4CH	0x8017
#define PCI_DEVICE_ID_ML7223_DMA4_4CH	0x803B
DEFINE_PCI_DEVICE_TABLE(pch_dma_id_table) = ;
static struct pci_driver pch_dma_driver = ;
static int __init pch_dma_init(void)
static void __exit pch_dma_exit(void)
module_init(pch_dma_init);
module_exit(pch_dma_exit);
MODULE_DESCRIPTION("Intel EG20T PCH / OKI SEMICONDUCTOR ML7213 IOH "
"DMA controller driver");
MODULE_AUTHOR("Yong Wang <yong.y.wang@intel.com>");
MODULE_LICENSE("GPL v2");
