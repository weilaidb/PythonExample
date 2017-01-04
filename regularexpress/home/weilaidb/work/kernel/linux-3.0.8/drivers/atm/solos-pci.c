#define DEBUG
#define VERBOSE_DEBUG
#define VERSION "0.07"
#define PTAG "solos-pci"
#define CONFIG_RAM_SIZE	128
#define FLAGS_ADDR	0x7C
#define IRQ_EN_ADDR	0x78
#define FPGA_VER	0x74
#define IRQ_CLEAR	0x70
#define WRITE_FLASH	0x6C
#define PORTS		0x68
#define FLASH_BLOCK	0x64
#define FLASH_BUSY	0x60
#define FPGA_MODE	0x5C
#define FLASH_MODE	0x58
#define TX_DMA_ADDR(port)	(0x40 + (4 * (port)))
#define RX_DMA_ADDR(port)	(0x30 + (4 * (port)))
#define DATA_RAM_SIZE	32768
#define BUF_SIZE	2048
#define OLD_BUF_SIZE	4096
#define FPGA_PAGE	528
#define SOLOS_PAGE	512
#define FPGA_BLOCK	(FPGA_PAGE * 8)
#define SOLOS_BLOCK	(SOLOS_PAGE * 8)
#define RX_BUF(card, nr) ((card->buffers) + (nr)*(card->buffer_size)*2)
#define TX_BUF(card, nr) ((card->buffers) + (nr)*(card->buffer_size)*2 + (card->buffer_size))
#define FLASH_BUF ((card->buffers) + 4*(card->buffer_size)*2)
#define RX_DMA_SIZE	2048
#define FPGA_VERSION(a,b) (((a) << 8) + (b))
#define LEGACY_BUFFERS	2
#define DMA_SUPPORTED	4
static int reset = 0;
static int atmdebug = 0;
static int firmware_upgrade = 0;
static int fpga_upgrade = 0;
static int db_firmware_upgrade = 0;
static int db_fpga_upgrade = 0;
struct pkt_hdr ;
struct solos_skb_cb ;
#define SKB_CB(skb)		((struct solos_skb_cb *)skb->cb)
#define PKT_DATA	0
#define PKT_COMMAND	1
#define PKT_POPEN	3
#define PKT_PCLOSE	4
#define PKT_STATUS	5
struct solos_card ;
struct solos_param ;
#define SOLOS_CHAN(atmdev) ((int)(unsigned long)(atmdev)->phy_data)
MODULE_AUTHOR("Traverse Technologies <support@traverse.com.au>");
MODULE_DESCRIPTION("Solos PCI driver");
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("solos-FPGA.bin");
MODULE_FIRMWARE("solos-Firmware.bin");
MODULE_FIRMWARE("solos-db-FPGA.bin");
MODULE_PARM_DESC(reset, "Reset Solos chips on startup");
MODULE_PARM_DESC(atmdebug, "Print ATM data");
MODULE_PARM_DESC(firmware_upgrade, "Initiate Solos firmware upgrade");
MODULE_PARM_DESC(fpga_upgrade, "Initiate FPGA upgrade");
MODULE_PARM_DESC(db_firmware_upgrade, "Initiate daughter board Solos firmware upgrade");
MODULE_PARM_DESC(db_fpga_upgrade, "Initiate daughter board FPGA upgrade");
module_param(reset, int, 0444);
module_param(atmdebug, int, 0644);
module_param(firmware_upgrade, int, 0444);
module_param(fpga_upgrade, int, 0444);
module_param(db_firmware_upgrade, int, 0444);
module_param(db_fpga_upgrade, int, 0444);
static void fpga_queue(struct solos_card *card, int port, struct sk_buff *skb,
struct atm_vcc *vcc);
static uint32_t fpga_tx(struct solos_card *);
static irqreturn_t solos_irq(int irq, void *dev_id);
static struct atm_vcc* find_vcc(struct atm_dev *dev, short vpi, int vci);
static int list_vccs(int vci);
static int atm_init(struct solos_card *, struct device *);
static void atm_remove(struct solos_card *);
static int send_command(struct solos_card *card, int dev, const char *buf, size_t size);
static void solos_bh(unsigned long);
static int print_buffer(struct sk_buff *buf);
static inline void solos_pop(struct atm_vcc *vcc, struct sk_buff *skb)
static ssize_t solos_param_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t solos_param_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static char *next_string(struct sk_buff *skb)
static int process_status(struct solos_card *card, int port, struct sk_buff *skb)
static int process_command(struct solos_card *card, int port, struct sk_buff *skb)
static ssize_t console_show(struct device *dev, struct device_attribute *attr,
char *buf)
static int send_command(struct solos_card *card, int dev, const char *buf, size_t size)
static ssize_t console_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(console, 0644, console_show, console_store);
#define SOLOS_ATTR_RO(x) static DEVICE_ATTR(x, 0444, solos_param_show, NULL);
#define SOLOS_ATTR_RW(x) static DEVICE_ATTR(x, 0644, solos_param_show, solos_param_store);
#undef SOLOS_ATTR_RO
#undef SOLOS_ATTR_RW
#define SOLOS_ATTR_RO(x) &dev_attr_##x.attr,
#define SOLOS_ATTR_RW(x) &dev_attr_##x.attr,
static struct attribute *solos_attrs[] = ;
static struct attribute_group solos_attr_group = ;
static int flash_upgrade(struct solos_card *card, int chip)
static irqreturn_t solos_irq(int irq, void *dev_id)
void solos_bh(unsigned long card_arg)
static struct atm_vcc *find_vcc(struct atm_dev *dev, short vpi, int vci)
static int list_vccs(int vci)
static int popen(struct atm_vcc *vcc)
static void pclose(struct atm_vcc *vcc)
static int print_buffer(struct sk_buff *buf)
static void fpga_queue(struct solos_card *card, int port, struct sk_buff *skb,
struct atm_vcc *vcc)
static uint32_t fpga_tx(struct solos_card *card)
static int psend(struct atm_vcc *vcc, struct sk_buff *skb)
static struct atmdev_ops fpga_ops = ;
static int fpga_probe(struct pci_dev *dev, const struct pci_device_id *id)
static int atm_init(struct solos_card *card, struct device *parent)
static void atm_remove(struct solos_card *card)
static void fpga_remove(struct pci_dev *dev)
static struct pci_device_id fpga_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci,fpga_pci_tbl);
static struct pci_driver fpga_driver = ;
static int __init solos_pci_init(void)
static void __exit solos_pci_exit(void)
module_init(solos_pci_init);
module_exit(solos_pci_exit);
