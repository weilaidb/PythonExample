#define AVMFRITZ_REV	"2.1"
static int AVM_cnt;
static int debug;
enum ;
#define HDLC_FIFO		0x0
#define HDLC_STATUS		0x4
#define CHIP_WINDOW		0x10
#define CHIP_INDEX		0x4
#define AVM_HDLC_1		0x00
#define AVM_HDLC_2		0x01
#define AVM_ISAC_FIFO		0x02
#define AVM_ISAC_REG_LOW	0x04
#define AVM_ISAC_REG_HIGH	0x06
#define AVM_STATUS0_IRQ_ISAC	0x01
#define AVM_STATUS0_IRQ_HDLC	0x02
#define AVM_STATUS0_IRQ_TIMER	0x04
#define AVM_STATUS0_IRQ_MASK	0x07
#define AVM_STATUS0_RESET	0x01
#define AVM_STATUS0_DIS_TIMER	0x02
#define AVM_STATUS0_RES_TIMER	0x04
#define AVM_STATUS0_ENA_IRQ	0x08
#define AVM_STATUS0_TESTBIT	0x10
#define AVM_STATUS1_INT_SEL	0x0f
#define AVM_STATUS1_ENA_IOM	0x80
#define HDLC_MODE_ITF_FLG	0x01
#define HDLC_MODE_TRANS		0x02
#define HDLC_MODE_CCR_7		0x04
#define HDLC_MODE_CCR_16	0x08
#define HDLC_MODE_TESTLOOP	0x80
#define HDLC_INT_XPR		0x80
#define HDLC_INT_XDU		0x40
#define HDLC_INT_RPR		0x20
#define HDLC_INT_MASK		0xE0
#define HDLC_STAT_RME		0x01
#define HDLC_STAT_RDO		0x10
#define HDLC_STAT_CRCVFRRAB	0x0E
#define HDLC_STAT_CRCVFR	0x06
#define HDLC_STAT_RML_MASK	0x3f00
#define HDLC_CMD_XRS		0x80
#define HDLC_CMD_XME		0x01
#define HDLC_CMD_RRS		0x20
#define HDLC_CMD_XML_MASK	0x3f00
#define HDLC_FIFO_SIZE		32
#define AVM_HDLC_FIFO_1		0x10
#define AVM_HDLC_FIFO_2		0x18
#define AVM_HDLC_STATUS_1	0x14
#define AVM_HDLC_STATUS_2	0x1c
#define AVM_ISACX_INDEX		0x04
#define AVM_ISACX_DATA		0x08
#define LOG_SIZE		63
struct hdlc_stat_reg  __attribute__((packed));
struct hdlc_hw ;
struct fritzcard ;
static LIST_HEAD(Cards);
static DEFINE_RWLOCK(card_lock);
static void
_set_debug(struct fritzcard *card)
static int
set_debug(const char *val, struct kernel_param *kp)
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(AVMFRITZ_REV);
module_param_call(debug, set_debug, param_get_uint, &debug, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "avmfritz debug mask");
static u8
ReadISAC_V1(void *p, u8 offset)
static void
WriteISAC_V1(void *p, u8 offset, u8 value)
static void
ReadFiFoISAC_V1(void *p, u8 off, u8 *data, int size)
static void
WriteFiFoISAC_V1(void *p, u8 off, u8 *data, int size)
static u8
ReadISAC_V2(void *p, u8 offset)
static void
WriteISAC_V2(void *p, u8 offset, u8 value)
static void
ReadFiFoISAC_V2(void *p, u8 off, u8 *data, int size)
static void
WriteFiFoISAC_V2(void *p, u8 off, u8 *data, int size)
static struct bchannel *
Sel_BCS(struct fritzcard *fc, u32 channel)
static inline void
__write_ctrl_pci(struct fritzcard *fc, struct hdlc_hw *hdlc, u32 channel)
static inline void
__write_ctrl_pciv2(struct fritzcard *fc, struct hdlc_hw *hdlc, u32 channel)
void
write_ctrl(struct bchannel *bch, int which)
static inline u32
__read_status_pci(u_long addr, u32 channel)
static inline u32
__read_status_pciv2(u_long addr, u32 channel)
static u32
read_status(struct fritzcard *fc, u32 channel)
static void
enable_hwirq(struct fritzcard *fc)
static void
disable_hwirq(struct fritzcard *fc)
static int
modehdlc(struct bchannel *bch, int protocol)
static void
hdlc_empty_fifo(struct bchannel *bch, int count)
static void
hdlc_fill_fifo(struct bchannel *bch)
static void
HDLC_irq_xpr(struct bchannel *bch)
static void
HDLC_irq(struct bchannel *bch, u32 stat)
static inline void
HDLC_irq_main(struct fritzcard *fc)
static irqreturn_t
avm_fritz_interrupt(int intno, void *dev_id)
static irqreturn_t
avm_fritzv2_interrupt(int intno, void *dev_id)
static int
avm_l2l1B(struct mISDNchannel *ch, struct sk_buff *skb)
static void
inithdlc(struct fritzcard *fc)
void
clear_pending_hdlc_ints(struct fritzcard *fc)
static void
reset_avm(struct fritzcard *fc)
static int
init_card(struct fritzcard *fc)
static int
channel_bctrl(struct bchannel *bch, struct mISDN_ctrl_req *cq)
static int
avm_bctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
static int
channel_ctrl(struct fritzcard  *fc, struct mISDN_ctrl_req *cq)
static int
open_bchannel(struct fritzcard *fc, struct channel_req *rq)
static int
avm_dctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
int
setup_fritz(struct fritzcard *fc)
static void
release_card(struct fritzcard *card)
static int __devinit
setup_instance(struct fritzcard *card)
static int __devinit
fritzpci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
fritz_remove_pci(struct pci_dev *pdev)
static struct pci_device_id fcpci_ids[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, fcpci_ids);
static struct pci_driver fcpci_driver = ;
static int __init AVM_init(void)
static void __exit AVM_cleanup(void)
module_init(AVM_init);
module_exit(AVM_cleanup);
