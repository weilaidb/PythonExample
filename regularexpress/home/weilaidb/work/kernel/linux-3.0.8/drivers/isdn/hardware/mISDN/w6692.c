#define W6692_REV	"2.0"
#define DBUSY_TIMER_VALUE	80
enum ;
struct w6692map ;
static const struct w6692map  w6692_map[] =
;
#define PCI_VENDOR_ID_USR	0x16ec
#define PCI_DEVICE_ID_USR_6692	0x3409
struct w6692_ch ;
struct w6692_hw ;
static LIST_HEAD(Cards);
static DEFINE_RWLOCK(card_lock);
static int w6692_cnt;
static int debug;
static u32 led;
static u32 pots;
static void
_set_debug(struct w6692_hw *card)
static int
set_debug(const char *val, struct kernel_param *kp)
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(W6692_REV);
module_param_call(debug, set_debug, param_get_uint, &debug, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "W6692 debug mask");
module_param(led, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(led, "W6692 LED support bitmask (one bit per card)");
module_param(pots, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(pots, "W6692 POTS support bitmask (one bit per card)");
static inline u8
ReadW6692(struct w6692_hw *card, u8 offset)
static inline void
WriteW6692(struct w6692_hw *card, u8 offset, u8 value)
static inline u8
ReadW6692B(struct w6692_ch *bc, u8 offset)
static inline void
WriteW6692B(struct w6692_ch *bc, u8 offset, u8 value)
static void
enable_hwirq(struct w6692_hw *card)
static void
disable_hwirq(struct w6692_hw *card)
static const char *W6692Ver[] = ;
static void
W6692Version(struct w6692_hw *card)
static void
w6692_led_handler(struct w6692_hw *card, int on)
static void
ph_command(struct w6692_hw *card, u8 cmd)
static void
W6692_new_ph(struct w6692_hw *card)
static void
W6692_ph_bh(struct dchannel *dch)
static void
W6692_empty_Dfifo(struct w6692_hw *card, int count)
static void
W6692_fill_Dfifo(struct w6692_hw *card)
static void
d_retransmit(struct w6692_hw *card)
static void
handle_rxD(struct w6692_hw *card)
static void
handle_txD(struct w6692_hw *card)
static void
handle_statusD(struct w6692_hw *card)
static void
W6692_empty_Bfifo(struct w6692_ch *wch, int count)
static void
W6692_fill_Bfifo(struct w6692_ch *wch)
static int
disable_pots(struct w6692_ch *wch)
static int
w6692_mode(struct w6692_ch *wch, u32 pr)
static void
send_next(struct w6692_ch *wch)
static void
W6692B_interrupt(struct w6692_hw *card, int ch)
static irqreturn_t
w6692_irq(int intno, void *dev_id)
static void
dbusy_timer_handler(struct dchannel *dch)
void initW6692(struct w6692_hw *card)
static void
reset_w6692(struct w6692_hw *card)
static int
init_card(struct w6692_hw *card)
static int
w6692_l2l1B(struct mISDNchannel *ch, struct sk_buff *skb)
static int
channel_bctrl(struct bchannel *bch, struct mISDN_ctrl_req *cq)
static int
open_bchannel(struct w6692_hw *card, struct channel_req *rq)
static int
channel_ctrl(struct w6692_hw *card, struct mISDN_ctrl_req *cq)
static int
w6692_bctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
static int
w6692_l2l1D(struct mISDNchannel *ch, struct sk_buff *skb)
static int
w6692_l1callback(struct dchannel *dch, u32 cmd)
static int
open_dchannel(struct w6692_hw *card, struct channel_req *rq)
static int
w6692_dctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
static int
setup_w6692(struct w6692_hw *card)
static void
release_card(struct w6692_hw *card)
static int
setup_instance(struct w6692_hw *card)
static int __devinit
w6692_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
w6692_remove_pci(struct pci_dev *pdev)
static struct pci_device_id w6692_ids[] = ;
MODULE_DEVICE_TABLE(pci, w6692_ids);
static struct pci_driver w6692_driver = ;
static int __init w6692_init(void)
static void __exit w6692_cleanup(void)
module_init(w6692_init);
module_exit(w6692_cleanup);
