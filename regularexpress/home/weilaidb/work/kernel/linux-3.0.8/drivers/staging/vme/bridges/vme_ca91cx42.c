static int __init ca91cx42_init(void);
static int ca91cx42_probe(struct pci_dev *, const struct pci_device_id *);
static void ca91cx42_remove(struct pci_dev *);
static void __exit ca91cx42_exit(void);
static int geoid;
static char driver_name[] = "vme_ca91cx42";
static DEFINE_PCI_DEVICE_TABLE(ca91cx42_ids) = ;
static struct pci_driver ca91cx42_driver = ;
static u32 ca91cx42_DMA_irqhandler(struct ca91cx42_driver *bridge)
static u32 ca91cx42_LM_irqhandler(struct ca91cx42_driver *bridge, u32 stat)
static u32 ca91cx42_MB_irqhandler(struct ca91cx42_driver *bridge, int mbox_mask)
static u32 ca91cx42_IACK_irqhandler(struct ca91cx42_driver *bridge)
static u32 ca91cx42_VERR_irqhandler(struct vme_bridge *ca91cx42_bridge)
static u32 ca91cx42_LERR_irqhandler(struct vme_bridge *ca91cx42_bridge)
static u32 ca91cx42_VIRQ_irqhandler(struct vme_bridge *ca91cx42_bridge,
int stat)
static irqreturn_t ca91cx42_irqhandler(int irq, void *ptr)
static int ca91cx42_irq_init(struct vme_bridge *ca91cx42_bridge)
static void ca91cx42_irq_exit(struct ca91cx42_driver *bridge,
struct pci_dev *pdev)
static void ca91cx42_irq_set(struct vme_bridge *ca91cx42_bridge, int level,
int state, int sync)
static int ca91cx42_irq_generate(struct vme_bridge *ca91cx42_bridge, int level,
int statid)
static int ca91cx42_slave_set(struct vme_slave_resource *image, int enabled,
unsigned long long vme_base, unsigned long long size,
dma_addr_t pci_base, vme_address_t aspace, vme_cycle_t cycle)
static int ca91cx42_slave_get(struct vme_slave_resource *image, int *enabled,
unsigned long long *vme_base, unsigned long long *size,
dma_addr_t *pci_base, vme_address_t *aspace, vme_cycle_t *cycle)
static int ca91cx42_alloc_resource(struct vme_master_resource *image,
unsigned long long size)
static void ca91cx42_free_resource(struct vme_master_resource *image)
static int ca91cx42_master_set(struct vme_master_resource *image, int enabled,
unsigned long long vme_base, unsigned long long size,
vme_address_t aspace, vme_cycle_t cycle, vme_width_t dwidth)
static int __ca91cx42_master_get(struct vme_master_resource *image,
int *enabled, unsigned long long *vme_base, unsigned long long *size,
vme_address_t *aspace, vme_cycle_t *cycle, vme_width_t *dwidth)
static int ca91cx42_master_get(struct vme_master_resource *image, int *enabled,
unsigned long long *vme_base, unsigned long long *size,
vme_address_t *aspace, vme_cycle_t *cycle, vme_width_t *dwidth)
static ssize_t ca91cx42_master_read(struct vme_master_resource *image,
void *buf, size_t count, loff_t offset)
static ssize_t ca91cx42_master_write(struct vme_master_resource *image,
void *buf, size_t count, loff_t offset)
static unsigned int ca91cx42_master_rmw(struct vme_master_resource *image,
unsigned int mask, unsigned int compare, unsigned int swap,
loff_t offset)
static int ca91cx42_dma_list_add(struct vme_dma_list *list,
struct vme_dma_attr *src, struct vme_dma_attr *dest, size_t count)
static int ca91cx42_dma_busy(struct vme_bridge *ca91cx42_bridge)
static int ca91cx42_dma_list_exec(struct vme_dma_list *list)
static int ca91cx42_dma_list_empty(struct vme_dma_list *list)
static int ca91cx42_lm_set(struct vme_lm_resource *lm,
unsigned long long lm_base, vme_address_t aspace, vme_cycle_t cycle)
static int ca91cx42_lm_get(struct vme_lm_resource *lm,
unsigned long long *lm_base, vme_address_t *aspace, vme_cycle_t *cycle)
static int ca91cx42_lm_attach(struct vme_lm_resource *lm, int monitor,
void (*callback)(int))
static int ca91cx42_lm_detach(struct vme_lm_resource *lm, int monitor)
static int ca91cx42_slot_get(struct vme_bridge *ca91cx42_bridge)
static int __init ca91cx42_init(void)
static int ca91cx42_crcsr_init(struct vme_bridge *ca91cx42_bridge,
struct pci_dev *pdev)
static void ca91cx42_crcsr_exit(struct vme_bridge *ca91cx42_bridge,
struct pci_dev *pdev)
static int ca91cx42_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void ca91cx42_remove(struct pci_dev *pdev)
static void __exit ca91cx42_exit(void)
MODULE_PARM_DESC(geoid, "Override geographical addressing");
module_param(geoid, int, 0);
MODULE_DESCRIPTION("VME driver for the Tundra Universe II VME bridge");
MODULE_LICENSE("GPL");
module_init(ca91cx42_init);
module_exit(ca91cx42_exit);
