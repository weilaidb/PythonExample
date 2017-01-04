#define PHUB_STATUS 0x00
#define PHUB_CONTROL 0x04
#define PHUB_TIMEOUT 0x05
#define PCH_PHUB_ROM_WRITE_ENABLE 0x01
#define PCH_PHUB_ROM_WRITE_DISABLE 0x00
#define PCH_PHUB_MAC_START_ADDR_EG20T 0x14
#define PCH_PHUB_MAC_START_ADDR_ML7223 0x20C
#define PCH_PHUB_ROM_START_ADDR_EG20T 0x80
#define PCH_PHUB_ROM_START_ADDR_ML7213 0x400
#define PCH_PHUB_ROM_START_ADDR_ML7223 0x400
#define MAX_NUM_INT_REDUCE_CONTROL_REG 128
#define PCI_DEVICE_ID_PCH1_PHUB 0x8801
#define PCH_MINOR_NOS 1
#define CLKCFG_CAN_50MHZ 0x12000000
#define CLKCFG_CANCLK_MASK 0xFF000000
#define CLKCFG_UART_MASK			0xFFFFFF
#define CLKCFG_UART_48MHZ			(1 << 16)
#define CLKCFG_BAUDDIV				(2 << 20)
#define CLKCFG_PLL2VCO				(8 << 9)
#define CLKCFG_UARTCLKSEL			(1 << 18)
#define PCI_VENDOR_ID_ROHM			0x10db
#define PCI_DEVICE_ID_ROHM_ML7213_PHUB		0x801A
#define PCI_VENDOR_ID_ROHM			0x10db
#define PCI_DEVICE_ID_ROHM_ML7213_PHUB		0x801A
#define PCI_DEVICE_ID_ROHM_ML7223_mPHUB	0x8012
#define PCI_DEVICE_ID_ROHM_ML7223_nPHUB	0x8002
#define PCH_WORD_ADDR_MASK (~((1 << 2) - 1))
#define PCH_PHUB_ID_REG				0x0000
#define PCH_PHUB_QUEUE_PRI_VAL_REG		0x0004
#define PCH_PHUB_RC_QUEUE_MAXSIZE_REG		0x0008
#define PCH_PHUB_BRI_QUEUE_MAXSIZE_REG		0x000C
#define PCH_PHUB_COMP_RESP_TIMEOUT_REG		0x0010
#define PCH_PHUB_BUS_SLAVE_CONTROL_REG		0x0014
#define PCH_PHUB_DEADLOCK_AVOID_TYPE_REG	0x0018
#define PCH_PHUB_INTPIN_REG_WPERMIT_REG0	0x0020
#define PCH_PHUB_INTPIN_REG_WPERMIT_REG1	0x0024
#define PCH_PHUB_INTPIN_REG_WPERMIT_REG2	0x0028
#define PCH_PHUB_INTPIN_REG_WPERMIT_REG3	0x002C
#define PCH_PHUB_INT_REDUCE_CONTROL_REG_BASE	0x0040
#define CLKCFG_REG_OFFSET			0x500
#define PCH_PHUB_OROM_SIZE 15360
struct pch_phub_reg ;
static const int pch_phub_mac_offset[ETH_ALEN] = ;
static DEFINE_MUTEX(pch_phub_mutex);
static void pch_phub_read_modify_write_reg(struct pch_phub_reg *chip,
unsigned int reg_addr_offset,
unsigned int data, unsigned int mask)
static void pch_phub_save_reg_conf(struct pci_dev *pdev)
static void pch_phub_restore_reg_conf(struct pci_dev *pdev)
static void pch_phub_read_serial_rom(struct pch_phub_reg *chip,
unsigned int offset_address, u8 *data)
static int pch_phub_write_serial_rom(struct pch_phub_reg *chip,
unsigned int offset_address, u8 data)
static void pch_phub_read_serial_rom_val(struct pch_phub_reg *chip,
unsigned int offset_address, u8 *data)
static int pch_phub_write_serial_rom_val(struct pch_phub_reg *chip,
unsigned int offset_address, u8 data)
static int pch_phub_gbe_serial_rom_conf(struct pch_phub_reg *chip)
static int pch_phub_gbe_serial_rom_conf_mp(struct pch_phub_reg *chip)
static void pch_phub_read_gbe_mac_addr(struct pch_phub_reg *chip, u8 *data)
static int pch_phub_write_gbe_mac_addr(struct pch_phub_reg *chip, u8 *data)
static ssize_t pch_phub_bin_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t pch_phub_bin_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t show_pch_mac(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_pch_mac(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(pch_mac, S_IRUGO | S_IWUSR, show_pch_mac, store_pch_mac);
static struct bin_attribute pch_bin_attr = ;
static int __devinit pch_phub_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit pch_phub_remove(struct pci_dev *pdev)
static int pch_phub_suspend(struct pci_dev *pdev, pm_message_t state)
static int pch_phub_resume(struct pci_dev *pdev)
#define pch_phub_suspend NULL
#define pch_phub_resume NULL
static struct pci_device_id pch_phub_pcidev_id[] = ;
MODULE_DEVICE_TABLE(pci, pch_phub_pcidev_id);
static struct pci_driver pch_phub_driver = ;
static int __init pch_phub_pci_init(void)
static void __exit pch_phub_pci_exit(void)
module_init(pch_phub_pci_init);
module_exit(pch_phub_pci_exit);
MODULE_DESCRIPTION("Intel EG20T PCH/OKI SEMICONDUCTOR IOH(ML7213/ML7223) PHUB");
MODULE_LICENSE("GPL");
