static int __init tsi148_init(void);
static int tsi148_probe(struct pci_dev *, const struct pci_device_id *);
static void tsi148_remove(struct pci_dev *);
static void __exit tsi148_exit(void);
static int err_chk;
static int geoid;
static char driver_name[] = "vme_tsi148";
static DEFINE_PCI_DEVICE_TABLE(tsi148_ids) = ;
static struct pci_driver tsi148_driver = ;
static void reg_join(unsigned int high, unsigned int low,
unsigned long long *variable)
static void reg_split(unsigned long long variable, unsigned int *high,
unsigned int *low)
static u32 tsi148_DMA_irqhandler(struct tsi148_driver *bridge,
int channel_mask)
static u32 tsi148_LM_irqhandler(struct tsi148_driver *bridge, u32 stat)
static u32 tsi148_MB_irqhandler(struct vme_bridge *tsi148_bridge, u32 stat)
static u32 tsi148_PERR_irqhandler(struct vme_bridge *tsi148_bridge)
static u32 tsi148_VERR_irqhandler(struct vme_bridge *tsi148_bridge)
static u32 tsi148_IACK_irqhandler(struct tsi148_driver *bridge)
static u32 tsi148_VIRQ_irqhandler(struct vme_bridge *tsi148_bridge,
u32 stat)
static irqreturn_t tsi148_irqhandler(int irq, void *ptr)
static int tsi148_irq_init(struct vme_bridge *tsi148_bridge)
static void tsi148_irq_exit(struct vme_bridge *tsi148_bridge,
struct pci_dev *pdev)
static int tsi148_iack_received(struct tsi148_driver *bridge)
static void tsi148_irq_set(struct vme_bridge *tsi148_bridge, int level,
int state, int sync)
static int tsi148_irq_generate(struct vme_bridge *tsi148_bridge, int level,
int statid)
static struct vme_bus_error *tsi148_find_error(struct vme_bridge *tsi148_bridge,
vme_address_t aspace, unsigned long long address, size_t count)
static void tsi148_clear_errors(struct vme_bridge *tsi148_bridge,
vme_address_t aspace, unsigned long long address, size_t count)
static int tsi148_slave_set(struct vme_slave_resource *image, int enabled,
unsigned long long vme_base, unsigned long long size,
dma_addr_t pci_base, vme_address_t aspace, vme_cycle_t cycle)
static int tsi148_slave_get(struct vme_slave_resource *image, int *enabled,
unsigned long long *vme_base, unsigned long long *size,
dma_addr_t *pci_base, vme_address_t *aspace, vme_cycle_t *cycle)
static int tsi148_alloc_resource(struct vme_master_resource *image,
unsigned long long size)
static void tsi148_free_resource(struct vme_master_resource *image)
static int tsi148_master_set(struct vme_master_resource *image, int enabled,
unsigned long long vme_base, unsigned long long size,
vme_address_t aspace, vme_cycle_t cycle, vme_width_t dwidth)
static int __tsi148_master_get(struct vme_master_resource *image, int *enabled,
unsigned long long *vme_base, unsigned long long *size,
vme_address_t *aspace, vme_cycle_t *cycle, vme_width_t *dwidth)
static int tsi148_master_get(struct vme_master_resource *image, int *enabled,
unsigned long long *vme_base, unsigned long long *size,
vme_address_t *aspace, vme_cycle_t *cycle, vme_width_t *dwidth)
static ssize_t tsi148_master_read(struct vme_master_resource *image, void *buf,
size_t count, loff_t offset)
static ssize_t tsi148_master_write(struct vme_master_resource *image, void *buf,
size_t count, loff_t offset)
static unsigned int tsi148_master_rmw(struct vme_master_resource *image,
unsigned int mask, unsigned int compare, unsigned int swap,
loff_t offset)
static int tsi148_dma_set_vme_src_attributes(struct device *dev, u32 *attr,
vme_address_t aspace, vme_cycle_t cycle, vme_width_t dwidth)
static int tsi148_dma_set_vme_dest_attributes(struct device *dev, u32 *attr,
vme_address_t aspace, vme_cycle_t cycle, vme_width_t dwidth)
static int tsi148_dma_list_add(struct vme_dma_list *list,
struct vme_dma_attr *src, struct vme_dma_attr *dest, size_t count)
static int tsi148_dma_busy(struct vme_bridge *tsi148_bridge, int channel)
static int tsi148_dma_list_exec(struct vme_dma_list *list)
static int tsi148_dma_list_empty(struct vme_dma_list *list)
static int tsi148_lm_set(struct vme_lm_resource *lm, unsigned long long lm_base,
vme_address_t aspace, vme_cycle_t cycle)
static int tsi148_lm_get(struct vme_lm_resource *lm,
unsigned long long *lm_base, vme_address_t *aspace, vme_cycle_t *cycle)
static int tsi148_lm_attach(struct vme_lm_resource *lm, int monitor,
void (*callback)(int))
static int tsi148_lm_detach(struct vme_lm_resource *lm, int monitor)
static int tsi148_slot_get(struct vme_bridge *tsi148_bridge)
static int __init tsi148_init(void)
static int tsi148_crcsr_init(struct vme_bridge *tsi148_bridge,
struct pci_dev *pdev)
static void tsi148_crcsr_exit(struct vme_bridge *tsi148_bridge,
struct pci_dev *pdev)
static int tsi148_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void tsi148_remove(struct pci_dev *pdev)
static void __exit tsi148_exit(void)
MODULE_PARM_DESC(err_chk, "Check for VME errors on reads and writes");
module_param(err_chk, bool, 0);
MODULE_PARM_DESC(geoid, "Override geographical addressing");
module_param(geoid, int, 0);
MODULE_DESCRIPTION("VME driver for the Tundra Tempe VME bridge");
MODULE_LICENSE("GPL");
module_init(tsi148_init);
module_exit(tsi148_exit);
