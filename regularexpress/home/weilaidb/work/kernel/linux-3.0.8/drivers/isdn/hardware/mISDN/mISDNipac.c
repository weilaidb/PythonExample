#define DBUSY_TIMER_VALUE	80
#define ARCOFI_USE		1
#define ISAC_REV		"2.0"
MODULE_AUTHOR("Karsten Keil");
MODULE_VERSION(ISAC_REV);
MODULE_LICENSE("GPL v2");
#define ReadISAC(is, o)		(is->read_reg(is->dch.hw, o + is->off))
#define	WriteISAC(is, o, v)	(is->write_reg(is->dch.hw, o + is->off, v))
#define ReadHSCX(h, o)		(h->ip->read_reg(h->ip->hw, h->off + o))
#define WriteHSCX(h, o, v)	(h->ip->write_reg(h->ip->hw, h->off + o, v))
#define ReadIPAC(ip, o)		(ip->read_reg(ip->hw, o))
#define WriteIPAC(ip, o, v)	(ip->write_reg(ip->hw, o, v))
static inline void
ph_command(struct isac_hw *isac, u8 command)
static void
isac_ph_state_change(struct isac_hw *isac)
static void
isac_ph_state_bh(struct dchannel *dch)
void
isac_empty_fifo(struct isac_hw *isac, int count)
static void
isac_fill_fifo(struct isac_hw *isac)
static void
isac_rme_irq(struct isac_hw *isac)
static void
isac_xpr_irq(struct isac_hw *isac)
static void
isac_retransmit(struct isac_hw *isac)
static void
isac_mos_irq(struct isac_hw *isac)
static void
isac_cisq_irq(struct isac_hw *isac)
static void
isacsx_cic_irq(struct isac_hw *isac)
static void
isacsx_rme_irq(struct isac_hw *isac)
irqreturn_t
mISDNisac_irq(struct isac_hw *isac, u8 val)
EXPORT_SYMBOL(mISDNisac_irq);
static int
isac_l1hw(struct mISDNchannel *ch, struct sk_buff *skb)
static int
isac_ctrl(struct isac_hw *isac, u32 cmd, u_long para)
static int
isac_l1cmd(struct dchannel *dch, u32 cmd)
static void
isac_release(struct isac_hw *isac)
static void
dbusy_timer_handler(struct isac_hw *isac)
static int
open_dchannel(struct isac_hw *isac, struct channel_req *rq)
static const char *ISACVer[] =
;
static int
isac_init(struct isac_hw *isac)
int
mISDNisac_init(struct isac_hw *isac, void *hw)
EXPORT_SYMBOL(mISDNisac_init);
static void
waitforCEC(struct hscx_hw *hx)
static void
waitforXFW(struct hscx_hw *hx)
static void
hscx_cmdr(struct hscx_hw *hx, u8 cmd)
static void
hscx_empty_fifo(struct hscx_hw *hscx, u8 count)
static void
hscx_fill_fifo(struct hscx_hw *hscx)
static void
hscx_xpr(struct hscx_hw *hx)
static void
ipac_rme(struct hscx_hw *hx)
static void
ipac_irq(struct hscx_hw *hx, u8 ista)
irqreturn_t
mISDNipac_irq(struct ipac_hw *ipac, int maxloop)
EXPORT_SYMBOL(mISDNipac_irq);
static int
hscx_mode(struct hscx_hw *hscx, u32 bprotocol)
static int
hscx_l2l1(struct mISDNchannel *ch, struct sk_buff *skb)
static int
channel_bctrl(struct bchannel *bch, struct mISDN_ctrl_req *cq)
static int
hscx_bctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
static void
free_ipac(struct ipac_hw *ipac)
static const char *HSCXVer[] =
;
static void
hscx_init(struct hscx_hw *hx)
static int
ipac_init(struct ipac_hw *ipac)
static int
open_bchannel(struct ipac_hw *ipac, struct channel_req *rq)
static int
channel_ctrl(struct ipac_hw *ipac, struct mISDN_ctrl_req *cq)
static int
ipac_dctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
u32
mISDNipac_init(struct ipac_hw *ipac, void *hw)
EXPORT_SYMBOL(mISDNipac_init);
static int __init
isac_mod_init(void)
static void __exit
isac_mod_cleanup(void)
module_init(isac_mod_init);
module_exit(isac_mod_cleanup);
