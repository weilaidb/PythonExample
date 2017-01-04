#define IN0_MEM_SIZE	(200 * 1024 * 1024 - 1)
#define IN1_MEM_SIZE	(0 * 1024 * 1024 - 1)
#define IN_IO_SIZE	(20 * 1024 * 1024 - 1)
#define IN_CFG0_SIZE	(12 * 1024 * 1024 - 1)
#define IN_CFG1_SIZE	(12 * 1024 * 1024 - 1)
#define IN_MSG_SIZE	(12 * 1024 * 1024 - 1)
#define INBOUND_ADDR_MASK	(SPEAR13XX_SYSRAM1_SIZE - 1)
#define INT_TYPE_NO_INT	0
#define INT_TYPE_INTX	1
#define INT_TYPE_MSI	2
struct spear_pcie_gadget_config ;
struct pcie_gadget_target ;
struct pcie_gadget_target_attr ;
static void enable_dbi_access(struct pcie_app_reg __iomem *app_reg)
static void disable_dbi_access(struct pcie_app_reg __iomem *app_reg)
static void spear_dbi_read_reg(struct spear_pcie_gadget_config *config,
int where, int size, u32 *val)
static void spear_dbi_write_reg(struct spear_pcie_gadget_config *config,
int where, int size, u32 val)
#define PCI_FIND_CAP_TTL	48
static int pci_find_own_next_cap_ttl(struct spear_pcie_gadget_config *config,
u32 pos, int cap, int *ttl)
static int pci_find_own_next_cap(struct spear_pcie_gadget_config *config,
u32 pos, int cap)
static int pci_find_own_cap_start(struct spear_pcie_gadget_config *config,
u8 hdr_type)
static int pci_find_own_capability(struct spear_pcie_gadget_config *config,
int cap)
static irqreturn_t spear_pcie_gadget_irq(int irq, void *dev_id)
static ssize_t pcie_gadget_show_link(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_link(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_show_int_type(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_int_type(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_show_no_of_msi(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_no_of_msi(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_store_inta(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_store_send_msi(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_show_vendor_id(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_vendor_id(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_show_device_id(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_device_id(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_show_bar0_size(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_bar0_size(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_show_bar0_address(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_bar0_address(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_show_bar0_rw_offset(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_bar0_rw_offset(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
static ssize_t pcie_gadget_show_bar0_data(
struct spear_pcie_gadget_config *config,
char *buf)
static ssize_t pcie_gadget_store_bar0_data(
struct spear_pcie_gadget_config *config,
const char *buf, size_t count)
#define PCIE_GADGET_TARGET_ATTR_RO(_name)				\
static struct pcie_gadget_target_attr pcie_gadget_target_##_name =	\
__CONFIGFS_ATTR(_name, S_IRUGO, pcie_gadget_show_##_name, NULL)
#define PCIE_GADGET_TARGET_ATTR_WO(_name)				\
static struct pcie_gadget_target_attr pcie_gadget_target_##_name =	\
__CONFIGFS_ATTR(_name, S_IWUSR, NULL, pcie_gadget_store_##_name)
#define PCIE_GADGET_TARGET_ATTR_RW(_name)				\
static struct pcie_gadget_target_attr pcie_gadget_target_##_name =	\
__CONFIGFS_ATTR(_name, S_IRUGO | S_IWUSR, pcie_gadget_show_##_name, \
pcie_gadget_store_##_name)
PCIE_GADGET_TARGET_ATTR_RW(link);
PCIE_GADGET_TARGET_ATTR_RW(int_type);
PCIE_GADGET_TARGET_ATTR_RW(no_of_msi);
PCIE_GADGET_TARGET_ATTR_WO(inta);
PCIE_GADGET_TARGET_ATTR_WO(send_msi);
PCIE_GADGET_TARGET_ATTR_RW(vendor_id);
PCIE_GADGET_TARGET_ATTR_RW(device_id);
PCIE_GADGET_TARGET_ATTR_RW(bar0_size);
PCIE_GADGET_TARGET_ATTR_RW(bar0_address);
PCIE_GADGET_TARGET_ATTR_RW(bar0_rw_offset);
PCIE_GADGET_TARGET_ATTR_RW(bar0_data);
static struct configfs_attribute *pcie_gadget_target_attrs[] = ;
static struct pcie_gadget_target *to_target(struct config_item *item)
static ssize_t pcie_gadget_target_attr_show(struct config_item *item,
struct configfs_attribute *attr,
char *buf)
static ssize_t pcie_gadget_target_attr_store(struct config_item *item,
struct configfs_attribute *attr,
const char *buf,
size_t count)
static struct configfs_item_operations pcie_gadget_target_item_ops = ;
static struct config_item_type pcie_gadget_target_type = ;
static void spear13xx_pcie_device_init(struct spear_pcie_gadget_config *config)
static int __devinit spear_pcie_gadget_probe(struct platform_device *pdev)
static int __devexit spear_pcie_gadget_remove(struct platform_device *pdev)
static void spear_pcie_gadget_shutdown(struct platform_device *pdev)
static struct platform_driver spear_pcie_gadget_driver = ;
static int __init spear_pcie_gadget_init(void)
module_init(spear_pcie_gadget_init);
static void __exit spear_pcie_gadget_exit(void)
module_exit(spear_pcie_gadget_exit);
MODULE_ALIAS("pcie-gadget-spear");
MODULE_AUTHOR("Pratyush Anand");
MODULE_LICENSE("GPL");
