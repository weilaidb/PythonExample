#define DRV_NAME  "ems_pci"
MODULE_AUTHOR("Sebastian Haas <haas@ems-wuenche.com>");
MODULE_DESCRIPTION("Socket-CAN driver for EMS CPC-PCI/PCIe/104P CAN cards");
MODULE_SUPPORTED_DEVICE("EMS CPC-PCI/PCIe/104P CAN card");
MODULE_LICENSE("GPL v2");
#define EMS_PCI_V1_MAX_CHAN 2
#define EMS_PCI_V2_MAX_CHAN 4
#define EMS_PCI_MAX_CHAN    EMS_PCI_V2_MAX_CHAN
struct ems_pci_card ;
#define EMS_PCI_CAN_CLOCK (16000000 / 2)
#define PITA2_ICR           0x00
#define PITA2_ICR_INT0      0x00000002
#define PITA2_ICR_INT0_EN   0x00020000
#define PITA2_MISC          0x1c
#define PITA2_MISC_CONFIG   0x04000000
#define PLX_ICSR            0x4c
#define PLX_ICSR_LINTI1_ENA 0x0001
#define PLX_ICSR_PCIINT_ENA 0x0040
#define PLX_ICSR_LINTI1_CLR 0x0400
#define PLX_ICSR_ENA_CLR    (PLX_ICSR_LINTI1_ENA | PLX_ICSR_PCIINT_ENA | \
PLX_ICSR_LINTI1_CLR)
#define EMS_PCI_OCR         (OCR_TX0_PUSHPULL | OCR_TX1_PUSHPULL)
#define EMS_PCI_CDR             (CDR_CBP | CDR_CLKOUT_MASK)
#define EMS_PCI_V1_BASE_BAR     1
#define EMS_PCI_V1_CONF_SIZE    4096
#define EMS_PCI_V2_BASE_BAR     2
#define EMS_PCI_V2_CONF_SIZE    128
#define EMS_PCI_CAN_BASE_OFFSET 0x400
#define EMS_PCI_CAN_CTRL_SIZE   0x200
#define EMS_PCI_BASE_SIZE  4096
static DEFINE_PCI_DEVICE_TABLE(ems_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, ems_pci_tbl);
static u8 ems_pci_v1_readb(struct ems_pci_card *card, unsigned int port)
static u8 ems_pci_v1_read_reg(const struct sja1000_priv *priv, int port)
static void ems_pci_v1_write_reg(const struct sja1000_priv *priv,
int port, u8 val)
static void ems_pci_v1_post_irq(const struct sja1000_priv *priv)
static u8 ems_pci_v2_read_reg(const struct sja1000_priv *priv, int port)
static void ems_pci_v2_write_reg(const struct sja1000_priv *priv,
int port, u8 val)
static void ems_pci_v2_post_irq(const struct sja1000_priv *priv)
static inline int ems_pci_check_chan(const struct sja1000_priv *priv)
static void ems_pci_del_card(struct pci_dev *pdev)
static void ems_pci_card_reset(struct ems_pci_card *card)
static int __devinit ems_pci_add_card(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_driver ems_pci_driver = ;
static int __init ems_pci_init(void)
static void __exit ems_pci_exit(void)
module_init(ems_pci_init);
module_exit(ems_pci_exit);
