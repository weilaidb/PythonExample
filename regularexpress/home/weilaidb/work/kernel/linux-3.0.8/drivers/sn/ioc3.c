#define IOC3_PCI_SIZE 0x100000
static LIST_HEAD(ioc3_devices);
static int ioc3_counter;
static DECLARE_RWSEM(ioc3_devices_rwsem);
static struct ioc3_submodule *ioc3_submodules[IOC3_MAX_SUBMODULES];
static struct ioc3_submodule *ioc3_ethernet;
static DEFINE_RWLOCK(ioc3_submodules_lock);
#define GPCR_MLAN_EN    0x00200000
static inline unsigned mcr_pack(unsigned pulse, unsigned sample)
static int nic_wait(struct ioc3_driver_data *idd)
static int nic_reset(struct ioc3_driver_data *idd)
static int nic_read_bit(struct ioc3_driver_data *idd)
static void nic_write_bit(struct ioc3_driver_data *idd, int bit)
static unsigned nic_read_byte(struct ioc3_driver_data *idd)
static void nic_write_byte(struct ioc3_driver_data *idd, int byte)
static unsigned long
nic_find(struct ioc3_driver_data *idd, int *last, unsigned long addr)
static void nic_addr(struct ioc3_driver_data *idd, unsigned long addr)
static void crc16_byte(unsigned int *crc, unsigned char db)
static unsigned int crc16_area(unsigned char *dbs, int size, unsigned int crc)
static void crc8_byte(unsigned int *crc, unsigned char db)
static unsigned int crc8_addr(unsigned long addr)
static void
read_redir_page(struct ioc3_driver_data *idd, unsigned long addr, int page,
unsigned char *redir, unsigned char *data)
static void
read_redir_map(struct ioc3_driver_data *idd, unsigned long addr,
unsigned char *redir)
static void read_nic(struct ioc3_driver_data *idd, unsigned long addr)
static void read_mac(struct ioc3_driver_data *idd, unsigned long addr)
static void probe_nic(struct ioc3_driver_data *idd)
static void write_ireg(struct ioc3_driver_data *idd, uint32_t val, int which)
static inline uint32_t get_pending_intrs(struct ioc3_driver_data *idd)
static irqreturn_t ioc3_intr_io(int irq, void *arg)
static irqreturn_t ioc3_intr_eth(int irq, void *arg)
void ioc3_enable(struct ioc3_submodule *is,
struct ioc3_driver_data *idd, unsigned int irqs)
void ioc3_ack(struct ioc3_submodule *is, struct ioc3_driver_data *idd,
unsigned int irqs)
void ioc3_disable(struct ioc3_submodule *is,
struct ioc3_driver_data *idd, unsigned int irqs)
void ioc3_gpcr_set(struct ioc3_driver_data *idd, unsigned int val)
static int find_slot(void **tab, int max)
int ioc3_register_submodule(struct ioc3_submodule *is)
void ioc3_unregister_submodule(struct ioc3_submodule *is)
static char * __devinitdata
ioc3_class_names[]=;
static int __devinit ioc3_class(struct ioc3_driver_data *idd)
static int __devinit
ioc3_probe(struct pci_dev *pdev, const struct pci_device_id *pci_id)
static void __devexit ioc3_remove(struct pci_dev *pdev)
static struct pci_device_id ioc3_id_table[] = ;
static struct pci_driver ioc3_driver = ;
MODULE_DEVICE_TABLE(pci, ioc3_id_table);
static int __init ioc3_init(void)
static void __exit ioc3_exit(void)
module_init(ioc3_init);
module_exit(ioc3_exit);
MODULE_AUTHOR("Stanislaw Skowronek <skylark@linux-mips.org>");
MODULE_DESCRIPTION("PCI driver for SGI IOC3");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL_GPL(ioc3_register_submodule);
EXPORT_SYMBOL_GPL(ioc3_unregister_submodule);
EXPORT_SYMBOL_GPL(ioc3_ack);
EXPORT_SYMBOL_GPL(ioc3_gpcr_set);
EXPORT_SYMBOL_GPL(ioc3_disable);
EXPORT_SYMBOL_GPL(ioc3_enable);
