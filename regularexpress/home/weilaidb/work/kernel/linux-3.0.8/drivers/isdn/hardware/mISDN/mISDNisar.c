#define ISAR_REV	"2.1"
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(ISAR_REV);
#define DEBUG_HW_FIRMWARE_FIFO	0x10000
static const u8 faxmodulation_s[] = "3,24,48,72,73,74,96,97,98,121,122,145,146";
static const u8 faxmodulation[] = ;
#define FAXMODCNT 13
static void isar_setup(struct isar_hw *);
static inline int
waitforHIA(struct isar_hw *isar, int timeout)
static int
send_mbox(struct isar_hw *isar, u8 his, u8 creg, u8 len, u8 *msg)
static void
rcv_mbox(struct isar_hw *isar, u8 *msg)
static inline void
get_irq_infos(struct isar_hw *isar)
static int
poll_mbox(struct isar_hw *isar, int maxdelay)
static int
ISARVersion(struct isar_hw *isar)
static int
load_firmware(struct isar_hw *isar, const u8 *buf, int size)
static inline void
deliver_status(struct isar_ch *ch, int status)
static inline void
isar_rcv_frame(struct isar_ch *ch)
static void
isar_fill_fifo(struct isar_ch *ch)
static inline struct isar_ch *
sel_bch_isar(struct isar_hw *isar, u8 dpath)
static void
send_next(struct isar_ch *ch)
static void
check_send(struct isar_hw *isar, u8 rdm)
const char *dmril[] = ;
const char *dmrim[] = ;
static void
isar_pump_status_rsp(struct isar_ch *ch)
static void
isar_pump_statev_modem(struct isar_ch *ch, u8 devt)
static void
isar_pump_statev_fax(struct isar_ch *ch, u8 devt)
void
mISDNisar_irq(struct isar_hw *isar)
EXPORT_SYMBOL(mISDNisar_irq);
static void
ftimer_handler(unsigned long data)
static void
setup_pump(struct isar_ch *ch)
static void
setup_sart(struct isar_ch *ch)
static void
setup_iom2(struct isar_ch *ch)
static int
modeisar(struct isar_ch *ch, u32 bprotocol)
static void
isar_pump_cmd(struct isar_ch *ch, u32 cmd, u8 para)
static void
isar_setup(struct isar_hw *isar)
static int
isar_l2l1(struct mISDNchannel *ch, struct sk_buff *skb)
static int
channel_bctrl(struct bchannel *bch, struct mISDN_ctrl_req *cq)
static int
isar_bctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
static void
free_isar(struct isar_hw *isar)
static int
init_isar(struct isar_hw *isar)
static int
isar_open(struct isar_hw *isar, struct channel_req *rq)
u32
mISDNisar_init(struct isar_hw *isar, void *hw)
EXPORT_SYMBOL(mISDNisar_init);
static int __init isar_mod_init(void)
static void __exit isar_mod_cleanup(void)
module_init(isar_mod_init);
module_exit(isar_mod_cleanup);
