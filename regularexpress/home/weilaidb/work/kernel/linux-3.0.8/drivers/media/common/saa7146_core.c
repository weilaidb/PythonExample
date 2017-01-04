LIST_HEAD(saa7146_devices);
DEFINE_MUTEX(saa7146_devices_lock);
static int saa7146_num;
unsigned int saa7146_debug;
module_param(saa7146_debug, uint, 0644);
MODULE_PARM_DESC(saa7146_debug, "debug level (default: 0)");
void saa7146_setgpio(struct saa7146_dev *dev, int port, u32 data)
static inline int saa7146_wait_for_debi_done_sleep(struct saa7146_dev *dev,
unsigned long us1, unsigned long us2)
static inline int saa7146_wait_for_debi_done_busyloop(struct saa7146_dev *dev,
unsigned long us1, unsigned long us2)
int saa7146_wait_for_debi_done(struct saa7146_dev *dev, int nobusyloop)
static struct scatterlist* vmalloc_to_sg(unsigned char *virt, int nr_pages)
void *saa7146_vmalloc_build_pgtable(struct pci_dev *pci, long length, struct saa7146_pgtable *pt)
void saa7146_vfree_destroy_pgtable(struct pci_dev *pci, void *mem, struct saa7146_pgtable *pt)
void saa7146_pgtable_free(struct pci_dev *pci, struct saa7146_pgtable *pt)
int saa7146_pgtable_alloc(struct pci_dev *pci, struct saa7146_pgtable *pt)
int saa7146_pgtable_build_single(struct pci_dev *pci, struct saa7146_pgtable *pt,
struct scatterlist *list, int sglen  )
static irqreturn_t interrupt_hw(int irq, void *dev_id)
static int saa7146_init_one(struct pci_dev *pci, const struct pci_device_id *ent)
static void saa7146_remove_one(struct pci_dev *pdev)
int saa7146_register_extension(struct saa7146_extension* ext)
int saa7146_unregister_extension(struct saa7146_extension* ext)
EXPORT_SYMBOL_GPL(saa7146_register_extension);
EXPORT_SYMBOL_GPL(saa7146_unregister_extension);
EXPORT_SYMBOL_GPL(saa7146_pgtable_alloc);
EXPORT_SYMBOL_GPL(saa7146_pgtable_free);
EXPORT_SYMBOL_GPL(saa7146_pgtable_build_single);
EXPORT_SYMBOL_GPL(saa7146_vmalloc_build_pgtable);
EXPORT_SYMBOL_GPL(saa7146_vfree_destroy_pgtable);
EXPORT_SYMBOL_GPL(saa7146_wait_for_debi_done);
EXPORT_SYMBOL_GPL(saa7146_setgpio);
EXPORT_SYMBOL_GPL(saa7146_i2c_adapter_prepare);
EXPORT_SYMBOL_GPL(saa7146_debug);
EXPORT_SYMBOL_GPL(saa7146_devices);
EXPORT_SYMBOL_GPL(saa7146_devices_lock);
MODULE_AUTHOR("Michael Hunold <michael@mihu.de>");
MODULE_DESCRIPTION("driver for generic saa7146-based hardware");
MODULE_LICENSE("GPL");
