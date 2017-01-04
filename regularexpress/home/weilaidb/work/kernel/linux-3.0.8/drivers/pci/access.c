static DEFINE_RAW_SPINLOCK(pci_lock);
#define PCI_byte_BAD 0
#define PCI_word_BAD (pos & 1)
#define PCI_dword_BAD (pos & 3)
#define PCI_OP_READ(size,type,len) \
int pci_bus_read_config_##size \
(struct pci_bus *bus, unsigned int devfn, int pos, type *value)	\
#define PCI_OP_WRITE(size,type,len) \
int pci_bus_write_config_##size \
(struct pci_bus *bus, unsigned int devfn, int pos, type value)	\
PCI_OP_READ(byte, u8, 1)
PCI_OP_READ(word, u16, 2)
PCI_OP_READ(dword, u32, 4)
PCI_OP_WRITE(byte, u8, 1)
PCI_OP_WRITE(word, u16, 2)
PCI_OP_WRITE(dword, u32, 4)
EXPORT_SYMBOL(pci_bus_read_config_byte);
EXPORT_SYMBOL(pci_bus_read_config_word);
EXPORT_SYMBOL(pci_bus_read_config_dword);
EXPORT_SYMBOL(pci_bus_write_config_byte);
EXPORT_SYMBOL(pci_bus_write_config_word);
EXPORT_SYMBOL(pci_bus_write_config_dword);
struct pci_ops *pci_bus_set_ops(struct pci_bus *bus, struct pci_ops *ops)
EXPORT_SYMBOL(pci_bus_set_ops);
ssize_t pci_read_vpd(struct pci_dev *dev, loff_t pos, size_t count, void *buf)
EXPORT_SYMBOL(pci_read_vpd);
ssize_t pci_write_vpd(struct pci_dev *dev, loff_t pos, size_t count, const void *buf)
EXPORT_SYMBOL(pci_write_vpd);
static DECLARE_WAIT_QUEUE_HEAD(pci_ucfg_wait);
static noinline void pci_wait_ucfg(struct pci_dev *dev)
#define PCI_USER_READ_CONFIG(size,type)					\
int pci_user_read_config_##size						\
(struct pci_dev *dev, int pos, type *val)			\
#define PCI_USER_WRITE_CONFIG(size,type)				\
int pci_user_write_config_##size					\
(struct pci_dev *dev, int pos, type val)			\
PCI_USER_READ_CONFIG(byte, u8)
PCI_USER_READ_CONFIG(word, u16)
PCI_USER_READ_CONFIG(dword, u32)
PCI_USER_WRITE_CONFIG(byte, u8)
PCI_USER_WRITE_CONFIG(word, u16)
PCI_USER_WRITE_CONFIG(dword, u32)
#define PCI_VPD_PCI22_SIZE (PCI_VPD_ADDR_MASK + 1)
struct pci_vpd_pci22 ;
static int pci_vpd_pci22_wait(struct pci_dev *dev)
static ssize_t pci_vpd_pci22_read(struct pci_dev *dev, loff_t pos, size_t count,
void *arg)
static ssize_t pci_vpd_pci22_write(struct pci_dev *dev, loff_t pos, size_t count,
const void *arg)
static void pci_vpd_pci22_release(struct pci_dev *dev)
static const struct pci_vpd_ops pci_vpd_pci22_ops = ;
int pci_vpd_pci22_init(struct pci_dev *dev)
int pci_vpd_truncate(struct pci_dev *dev, size_t size)
EXPORT_SYMBOL(pci_vpd_truncate);
void pci_block_user_cfg_access(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_block_user_cfg_access);
void pci_unblock_user_cfg_access(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_unblock_user_cfg_access);
