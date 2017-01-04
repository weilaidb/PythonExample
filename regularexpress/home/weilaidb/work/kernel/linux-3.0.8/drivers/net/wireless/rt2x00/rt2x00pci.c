int rt2x00pci_regbusy_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
const struct rt2x00_field32 field,
u32 *reg)
EXPORT_SYMBOL_GPL(rt2x00pci_regbusy_read);
bool rt2x00pci_rxdone(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00pci_rxdone);
void rt2x00pci_flush_queue(struct data_queue *queue, bool drop)
EXPORT_SYMBOL_GPL(rt2x00pci_flush_queue);
static int rt2x00pci_alloc_queue_dma(struct rt2x00_dev *rt2x00dev,
struct data_queue *queue)
static void rt2x00pci_free_queue_dma(struct rt2x00_dev *rt2x00dev,
struct data_queue *queue)
int rt2x00pci_initialize(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00pci_initialize);
void rt2x00pci_uninitialize(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00pci_uninitialize);
static void rt2x00pci_free_reg(struct rt2x00_dev *rt2x00dev)
static int rt2x00pci_alloc_reg(struct rt2x00_dev *rt2x00dev)
int rt2x00pci_probe(struct pci_dev *pci_dev, const struct rt2x00_ops *ops)
EXPORT_SYMBOL_GPL(rt2x00pci_probe);
void rt2x00pci_remove(struct pci_dev *pci_dev)
EXPORT_SYMBOL_GPL(rt2x00pci_remove);
int rt2x00pci_suspend(struct pci_dev *pci_dev, pm_message_t state)
EXPORT_SYMBOL_GPL(rt2x00pci_suspend);
int rt2x00pci_resume(struct pci_dev *pci_dev)
EXPORT_SYMBOL_GPL(rt2x00pci_resume);
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("rt2x00 pci library");
MODULE_LICENSE("GPL");
