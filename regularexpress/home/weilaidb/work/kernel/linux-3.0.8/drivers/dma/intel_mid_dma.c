#define MAX_CHAN	4
#define INTEL_MID_DMAC1_ID		0x0814
#define INTEL_MID_DMAC2_ID		0x0813
#define INTEL_MID_GP_DMAC2_ID		0x0827
#define INTEL_MFLD_DMAC1_ID		0x0830
#define LNW_PERIPHRAL_MASK_BASE		0xFFAE8008
#define LNW_PERIPHRAL_MASK_SIZE		0x10
#define LNW_PERIPHRAL_STATUS		0x0
#define LNW_PERIPHRAL_MASK		0x8
struct intel_mid_dma_probe_info ;
#define INFO(_max_chan, _ch_base, _block_size, _pimr_mask) \
((kernel_ulong_t)&(struct intel_mid_dma_probe_info) )
static int get_ch_index(int *status, unsigned int base)
static int get_block_ts(int len, int tx_width, int block_size)
static void dmac1_mask_periphral_intr(struct intel_mid_dma_chan *midc)
static void dmac1_unmask_periphral_intr(struct intel_mid_dma_chan *midc)
static void enable_dma_interrupt(struct intel_mid_dma_chan *midc)
static void disable_dma_interrupt(struct intel_mid_dma_chan *midc)
static struct intel_mid_dma_desc *midc_desc_get(struct intel_mid_dma_chan *midc)
static void midc_desc_put(struct intel_mid_dma_chan *midc,
struct intel_mid_dma_desc *desc)
static void midc_dostart(struct intel_mid_dma_chan *midc,
struct intel_mid_dma_desc *first)
static void midc_descriptor_complete(struct intel_mid_dma_chan *midc,
struct intel_mid_dma_desc *desc)
static void midc_scan_descriptors(struct middma_device *mid,
struct intel_mid_dma_chan *midc)
static int midc_lli_fill_sg(struct intel_mid_dma_chan *midc,
struct intel_mid_dma_desc *desc,
struct scatterlist *sglist,
unsigned int sglen,
unsigned int flags)
static dma_cookie_t intel_mid_dma_tx_submit(struct dma_async_tx_descriptor *tx)
static void intel_mid_dma_issue_pending(struct dma_chan *chan)
static enum dma_status intel_mid_dma_tx_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static int dma_slave_control(struct dma_chan *chan, unsigned long arg)
static int intel_mid_dma_device_control(struct dma_chan *chan,
enum dma_ctrl_cmd cmd, unsigned long arg)
static struct dma_async_tx_descriptor *intel_mid_dma_prep_memcpy(
struct dma_chan *chan, dma_addr_t dest,
dma_addr_t src, size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *intel_mid_dma_prep_slave_sg(
struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flags)
static void intel_mid_dma_free_chan_resources(struct dma_chan *chan)
static int intel_mid_dma_alloc_chan_resources(struct dma_chan *chan)
static void midc_handle_error(struct middma_device *mid,
struct intel_mid_dma_chan *midc)
static void dma_tasklet(unsigned long data)
static void dma_tasklet1(unsigned long data)
static void dma_tasklet2(unsigned long data)
static irqreturn_t intel_mid_dma_interrupt(int irq, void *data)
static irqreturn_t intel_mid_dma_interrupt1(int irq, void *data)
static irqreturn_t intel_mid_dma_interrupt2(int irq, void *data)
static int mid_setup_dma(struct pci_dev *pdev)
static void middma_shutdown(struct pci_dev *pdev)
static int __devinit intel_mid_dma_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit intel_mid_dma_remove(struct pci_dev *pdev)
int dma_suspend(struct pci_dev *pci, pm_message_t state)
int dma_resume(struct pci_dev *pci)
static int dma_runtime_suspend(struct device *dev)
static int dma_runtime_resume(struct device *dev)
static int dma_runtime_idle(struct device *dev)
static struct pci_device_id intel_mid_dma_ids[] = ;
MODULE_DEVICE_TABLE(pci, intel_mid_dma_ids);
static const struct dev_pm_ops intel_mid_dma_pm = ;
static struct pci_driver intel_mid_dma_pci_driver = ;
static int __init intel_mid_dma_init(void)
fs_initcall(intel_mid_dma_init);
static void __exit intel_mid_dma_exit(void)
module_exit(intel_mid_dma_exit);
MODULE_AUTHOR("Vinod Koul <vinod.koul@intel.com>");
MODULE_DESCRIPTION("Intel (R) MID DMAC Driver");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(INTEL_MID_DMA_DRIVER_VERSION);
