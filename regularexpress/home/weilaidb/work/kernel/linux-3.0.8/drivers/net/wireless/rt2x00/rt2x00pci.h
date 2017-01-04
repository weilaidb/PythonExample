#define RT2X00PCI_H
#define PCI_DEVICE_DATA(__ops)	.driver_data = (kernel_ulong_t)(__ops)
static inline void rt2x00pci_register_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u32 *value)
static inline void rt2x00pci_register_multiread(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
void *value, const u32 length)
static inline void rt2x00pci_register_write(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u32 value)
static inline void rt2x00pci_register_multiwrite(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
const void *value,
const u32 length)
int rt2x00pci_regbusy_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
const struct rt2x00_field32 field,
u32 *reg);
struct queue_entry_priv_pci ;
bool rt2x00pci_rxdone(struct rt2x00_dev *rt2x00dev);
void rt2x00pci_flush_queue(struct data_queue *queue, bool drop);
int rt2x00pci_initialize(struct rt2x00_dev *rt2x00dev);
void rt2x00pci_uninitialize(struct rt2x00_dev *rt2x00dev);
int rt2x00pci_probe(struct pci_dev *pci_dev, const struct rt2x00_ops *ops);
void rt2x00pci_remove(struct pci_dev *pci_dev);
int rt2x00pci_suspend(struct pci_dev *pci_dev, pm_message_t state);
int rt2x00pci_resume(struct pci_dev *pci_dev);
#define rt2x00pci_suspend	NULL
#define rt2x00pci_resume	NULL
