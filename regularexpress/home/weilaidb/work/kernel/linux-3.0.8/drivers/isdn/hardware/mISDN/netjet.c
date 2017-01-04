#define NETJET_REV	"2.0"
enum nj_types ;
struct tiger_dma ;
struct tiger_hw;
struct tiger_ch ;
#define TX_INIT		0x0001
#define TX_IDLE		0x0002
#define TX_RUN		0x0004
#define TX_UNDERRUN	0x0100
#define RX_OVERRUN	0x0100
#define LOG_SIZE	64
struct tiger_hw ;
static LIST_HEAD(Cards);
static DEFINE_RWLOCK(card_lock);
static u32 debug;
static int nj_cnt;
static void
_set_debug(struct tiger_hw *card)
static int
set_debug(const char *val, struct kernel_param *kp)
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(NETJET_REV);
module_param_call(debug, set_debug, param_get_uint, &debug, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Netjet debug mask");
static void
nj_disable_hwirq(struct tiger_hw *card)
static u8
ReadISAC_nj(void *p, u8 offset)
static void
WriteISAC_nj(void *p, u8 offset, u8 value)
static void
ReadFiFoISAC_nj(void *p, u8 offset, u8 *data, int size)
static void
WriteFiFoISAC_nj(void *p, u8 offset, u8 *data, int size)
static void
fill_mem(struct tiger_ch *bc, u32 idx, u32 cnt, u32 fill)
static int
mode_tiger(struct tiger_ch *bc, u32 protocol)
static void
nj_reset(struct tiger_hw *card)
static int
inittiger(struct tiger_hw *card)
static void
read_dma(struct tiger_ch *bc, u32 idx, int cnt)
static void
recv_tiger(struct tiger_hw *card, u8 irq_stat)
static void
resync(struct tiger_ch *bc, struct tiger_hw *card)
static int bc_next_frame(struct tiger_ch *);
static void
fill_hdlc_flag(struct tiger_ch *bc)
static void
fill_dma(struct tiger_ch *bc)
static int
bc_next_frame(struct tiger_ch *bc)
static void
send_tiger_bc(struct tiger_hw *card, struct tiger_ch *bc)
static void
send_tiger(struct tiger_hw *card, u8 irq_stat)
static irqreturn_t
nj_irq(int intno, void *dev_id)
static int
nj_l2l1B(struct mISDNchannel *ch, struct sk_buff *skb)
static int
channel_bctrl(struct tiger_ch *bc, struct mISDN_ctrl_req *cq)
static int
nj_bctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
static int
channel_ctrl(struct tiger_hw *card, struct mISDN_ctrl_req *cq)
static int
open_bchannel(struct tiger_hw *card, struct channel_req *rq)
static int
nj_dctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
static int
nj_init_card(struct tiger_hw *card)
static void
nj_release(struct tiger_hw *card)
static int
nj_setup(struct tiger_hw *card)
static int __devinit
setup_instance(struct tiger_hw *card)
static int __devinit
nj_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit nj_remove(struct pci_dev *pdev)
static struct pci_device_id nj_pci_ids[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, nj_pci_ids);
static struct pci_driver nj_driver = ;
static int __init nj_init(void)
static void __exit nj_cleanup(void)
module_init(nj_init);
module_exit(nj_cleanup);
