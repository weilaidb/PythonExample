#define __debug_variable debug
static int debug = 0;
module_param(debug, int, 0);
MODULE_AUTHOR("Kai Germaschewski <kai.germaschewski@gmx.de>/Karsten Keil <kkeil@suse.de>");
MODULE_DESCRIPTION("AVM Fritz!PCI/PnP ISDN driver");
static struct pci_device_id fcpci_ids[] = ;
MODULE_DEVICE_TABLE(pci, fcpci_ids);
static struct pnp_device_id fcpnp_ids[] __devinitdata = ;
MODULE_DEVICE_TABLE(pnp, fcpnp_ids);
static int protocol = 2;
module_param(protocol, int, 0);
MODULE_LICENSE("GPL");
#define  AVM_INDEX              0x04
#define  AVM_DATA               0x10
#define	 AVM_IDX_HDLC_1		0x00
#define	 AVM_IDX_HDLC_2		0x01
#define	 AVM_IDX_ISAC_FIFO	0x02
#define	 AVM_IDX_ISAC_REG_LOW	0x04
#define	 AVM_IDX_ISAC_REG_HIGH	0x06
#define  AVM_STATUS0            0x02
#define  AVM_STATUS0_IRQ_ISAC	0x01
#define  AVM_STATUS0_IRQ_HDLC	0x02
#define  AVM_STATUS0_IRQ_TIMER	0x04
#define  AVM_STATUS0_IRQ_MASK	0x07
#define  AVM_STATUS0_RESET	0x01
#define  AVM_STATUS0_DIS_TIMER	0x02
#define  AVM_STATUS0_RES_TIMER	0x04
#define  AVM_STATUS0_ENA_IRQ	0x08
#define  AVM_STATUS0_TESTBIT	0x10
#define  AVM_STATUS1            0x03
#define  AVM_STATUS1_ENA_IOM	0x80
#define  HDLC_FIFO		0x0
#define  HDLC_STATUS		0x4
#define  HDLC_CTRL		0x4
#define  HDLC_MODE_ITF_FLG	0x01
#define  HDLC_MODE_TRANS	0x02
#define  HDLC_MODE_CCR_7	0x04
#define  HDLC_MODE_CCR_16	0x08
#define  HDLC_MODE_TESTLOOP	0x80
#define  HDLC_INT_XPR		0x80
#define  HDLC_INT_XDU		0x40
#define  HDLC_INT_RPR		0x20
#define  HDLC_INT_MASK		0xE0
#define  HDLC_STAT_RME		0x01
#define  HDLC_STAT_RDO		0x10
#define  HDLC_STAT_CRCVFRRAB	0x0E
#define  HDLC_STAT_CRCVFR	0x06
#define  HDLC_STAT_RML_MASK	0xff00
#define  HDLC_CMD_XRS		0x80
#define  HDLC_CMD_XME		0x01
#define  HDLC_CMD_RRS		0x20
#define  HDLC_CMD_XML_MASK	0xff00
#define  AVM_HDLC_FIFO_1        0x10
#define  AVM_HDLC_FIFO_2        0x18
#define  AVM_HDLC_STATUS_1      0x14
#define  AVM_HDLC_STATUS_2      0x1c
#define  AVM_ISACSX_INDEX       0x04
#define  AVM_ISACSX_DATA        0x08
static unsigned char fcpci_read_isac(struct isac *isac, unsigned char offset)
static void fcpci_write_isac(struct isac *isac, unsigned char offset,
unsigned char value)
static void fcpci_read_isac_fifo(struct isac *isac, unsigned char * data,
int size)
static void fcpci_write_isac_fifo(struct isac *isac, unsigned char * data,
int size)
static u32 fcpci_read_hdlc_status(struct fritz_adapter *adapter, int nr)
static void __fcpci_write_ctrl(struct fritz_bcs *bcs, int which)
static void fcpci_write_ctrl(struct fritz_bcs *bcs, int which)
static unsigned char fcpci2_read_isac(struct isac *isac, unsigned char offset)
static void fcpci2_write_isac(struct isac *isac, unsigned char offset,
unsigned char value)
static void fcpci2_read_isac_fifo(struct isac *isac, unsigned char * data,
int size)
static void fcpci2_write_isac_fifo(struct isac *isac, unsigned char * data,
int size)
static u32 fcpci2_read_hdlc_status(struct fritz_adapter *adapter, int nr)
static void fcpci2_write_ctrl(struct fritz_bcs *bcs, int which)
static u32 fcpnp_read_hdlc_status(struct fritz_adapter *adapter, int nr)
static void __fcpnp_write_ctrl(struct fritz_bcs *bcs, int which)
static void fcpnp_write_ctrl(struct fritz_bcs *bcs, int which)
static inline void B_L1L2(struct fritz_bcs *bcs, int pr, void *arg)
static void hdlc_fill_fifo(struct fritz_bcs *bcs)
static inline void hdlc_empty_fifo(struct fritz_bcs *bcs, int count)
static inline void hdlc_rpr_irq(struct fritz_bcs *bcs, u32 stat)
static inline void hdlc_xdu_irq(struct fritz_bcs *bcs)
static inline void hdlc_xpr_irq(struct fritz_bcs *bcs)
static void hdlc_irq_one(struct fritz_bcs *bcs, u32 stat)
static inline void hdlc_irq(struct fritz_adapter *adapter)
static void modehdlc(struct fritz_bcs *bcs, int mode)
static void fritz_b_l2l1(struct hisax_if *ifc, int pr, void *arg)
static irqreturn_t
fcpci2_irq(int intno, void *dev)
static irqreturn_t
fcpci_irq(int intno, void *dev)
static inline void fcpci2_init(struct fritz_adapter *adapter)
static inline void fcpci_init(struct fritz_adapter *adapter)
static int __devinit fcpcipnp_setup(struct fritz_adapter *adapter)
static void __devexit fcpcipnp_release(struct fritz_adapter *adapter)
static struct fritz_adapter * __devinit
new_adapter(void)
static void delete_adapter(struct fritz_adapter *adapter)
static int __devinit fcpci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __devinit fcpnp_probe(struct pnp_dev *pdev, const struct pnp_device_id *dev_id)
static void __devexit fcpnp_remove(struct pnp_dev *pdev)
static struct pnp_driver fcpnp_driver = ;
static void __devexit fcpci_remove(struct pci_dev *pdev)
static struct pci_driver fcpci_driver = ;
static int __init hisax_fcpcipnp_init(void)
static void __exit hisax_fcpcipnp_exit(void)
module_init(hisax_fcpcipnp_init);
module_exit(hisax_fcpcipnp_exit);
