#define DRV_NAME  "sja1000_plx_pci"
MODULE_AUTHOR("Pavel Cheblakov <P.B.Cheblakov@inp.nsk.su>");
MODULE_DESCRIPTION("Socket-CAN driver for PLX90xx PCI-bridge cards with "
"the SJA1000 chips");
MODULE_SUPPORTED_DEVICE("Adlink PCI-7841/cPCI-7841, "
"Adlink PCI-7841/cPCI-7841 SE, "
"Marathon CAN-bus-PCI, "
"TEWS TECHNOLOGIES TPMC810, "
"esd CAN-PCI/CPCI/PCI104/200, "
"esd CAN-PCI/PMC/266, "
"esd CAN-PCIe/2000")
MODULE_LICENSE("GPL v2");
#define PLX_PCI_MAX_CHAN 2
struct plx_pci_card ;
#define PLX_PCI_CAN_CLOCK (16000000 / 2)
#define PLX_INTCSR	0x4c
#define PLX_CNTRL	0x50
#define PLX_LINT1_EN	0x1
#define PLX_LINT2_EN	(1 << 3)
#define PLX_PCI_INT_EN	(1 << 6)
#define PLX_PCI_RESET	(1 << 30)
#define PLX9056_INTCSR	0x68
#define PLX9056_CNTRL	0x6c
#define PLX9056_LINTI	(1 << 11)
#define PLX9056_PCI_INT_EN (1 << 8)
#define PLX9056_PCI_RCR	(1 << 29)
#define PLX_PCI_OCR	(OCR_TX0_PUSHPULL | OCR_TX1_PUSHPULL)
#define PLX_PCI_CDR			(CDR_CBP | CDR_CLKOUT_MASK)
#define REG_CR				0x00
#define REG_CR_BASICCAN_INITIAL		0x21
#define REG_CR_BASICCAN_INITIAL_MASK	0xa1
#define REG_SR_BASICCAN_INITIAL		0x0c
#define REG_IR_BASICCAN_INITIAL		0xe0
#define REG_MOD_PELICAN_INITIAL		0x01
#define REG_SR_PELICAN_INITIAL		0x3c
#define REG_IR_PELICAN_INITIAL		0x00
#define ADLINK_PCI_VENDOR_ID		0x144A
#define ADLINK_PCI_DEVICE_ID		0x7841
#define ESD_PCI_SUB_SYS_ID_PCI200	0x0004
#define ESD_PCI_SUB_SYS_ID_PCI266	0x0009
#define ESD_PCI_SUB_SYS_ID_PMC266	0x000e
#define ESD_PCI_SUB_SYS_ID_CPCI200	0x010b
#define ESD_PCI_SUB_SYS_ID_PCIE2000	0x0200
#define ESD_PCI_SUB_SYS_ID_PCI104200	0x0501
#define MARATHON_PCI_DEVICE_ID		0x2715
#define TEWS_PCI_VENDOR_ID		0x1498
#define TEWS_PCI_DEVICE_ID_TMPC810	0x032A
static void plx_pci_reset_common(struct pci_dev *pdev);
static void plx_pci_reset_marathon(struct pci_dev *pdev);
static void plx9056_pci_reset_common(struct pci_dev *pdev);
struct plx_pci_channel_map ;
struct plx_pci_card_info ;
static struct plx_pci_card_info plx_pci_card_info_adlink __devinitdata = ;
static struct plx_pci_card_info plx_pci_card_info_adlink_se __devinitdata = ;
static struct plx_pci_card_info plx_pci_card_info_esd200 __devinitdata = ;
static struct plx_pci_card_info plx_pci_card_info_esd266 __devinitdata = ;
static struct plx_pci_card_info plx_pci_card_info_esd2000 __devinitdata = ;
static struct plx_pci_card_info plx_pci_card_info_marathon __devinitdata = ;
static struct plx_pci_card_info plx_pci_card_info_tews __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(plx_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, plx_pci_tbl);
static u8 plx_pci_read_reg(const struct sja1000_priv *priv, int port)
static void plx_pci_write_reg(const struct sja1000_priv *priv, int port, u8 val)
static inline int plx_pci_check_sja1000(const struct sja1000_priv *priv)
static void plx_pci_reset_common(struct pci_dev *pdev)
;
static void plx9056_pci_reset_common(struct pci_dev *pdev)
;
static void plx_pci_reset_marathon(struct pci_dev *pdev)
static void plx_pci_del_card(struct pci_dev *pdev)
static int __devinit plx_pci_add_card(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_driver plx_pci_driver = ;
static int __init plx_pci_init(void)
static void __exit plx_pci_exit(void)
module_init(plx_pci_init);
module_exit(plx_pci_exit);
