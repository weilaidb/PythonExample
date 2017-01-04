#define HFC_MULTI_VERSION	"2.03"
#define	MAX_CARDS	8
#define	MAX_PORTS	(8 * MAX_CARDS)
static LIST_HEAD(HFClist);
static spinlock_t HFClock;
static void ph_state_change(struct dchannel *);
static struct hfc_multi *syncmaster;
static int plxsd_master;
static spinlock_t plx_lock;
#define	TYP_E1		1
#define	TYP_4S		4
#define TYP_8S		8
static int poll_timer = 6;
static int nt_t1_count[] = ;
#define	CLKDEL_TE	0x0f
#define	CLKDEL_NT	0x6c
#define	DIP_4S	0x1
#define	DIP_8S	0x2
#define	DIP_E1	0x3
static uint	type[MAX_CARDS];
static int	pcm[MAX_CARDS];
static int	dslot[MAX_CARDS];
static uint	iomode[MAX_CARDS];
static uint	port[MAX_PORTS];
static uint	debug;
static uint	poll;
static int	clock;
static uint	timer;
static uint	clockdelay_te = CLKDEL_TE;
static uint	clockdelay_nt = CLKDEL_NT;
#define HWID_NONE	0
#define HWID_MINIP4	1
#define HWID_MINIP8	2
#define HWID_MINIP16	3
static uint	hwid = HWID_NONE;
static int	HFC_cnt, Port_cnt, PCM_cnt = 99;
MODULE_AUTHOR("Andreas Eversberg");
MODULE_LICENSE("GPL");
MODULE_VERSION(HFC_MULTI_VERSION);
module_param(debug, uint, S_IRUGO | S_IWUSR);
module_param(poll, uint, S_IRUGO | S_IWUSR);
module_param(clock, int, S_IRUGO | S_IWUSR);
module_param(timer, uint, S_IRUGO | S_IWUSR);
module_param(clockdelay_te, uint, S_IRUGO | S_IWUSR);
module_param(clockdelay_nt, uint, S_IRUGO | S_IWUSR);
module_param_array(type, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(pcm, int, NULL, S_IRUGO | S_IWUSR);
module_param_array(dslot, int, NULL, S_IRUGO | S_IWUSR);
module_param_array(iomode, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(port, uint, NULL, S_IRUGO | S_IWUSR);
module_param(hwid, uint, S_IRUGO | S_IWUSR);
#define HFC_outb(hc, reg, val) \
(hc->HFC_outb(hc, reg, val, __func__, __LINE__))
#define HFC_outb_nodebug(hc, reg, val) \
(hc->HFC_outb_nodebug(hc, reg, val, __func__, __LINE__))
#define HFC_inb(hc, reg) \
(hc->HFC_inb(hc, reg, __func__, __LINE__))
#define HFC_inb_nodebug(hc, reg) \
(hc->HFC_inb_nodebug(hc, reg, __func__, __LINE__))
#define HFC_inw(hc, reg) \
(hc->HFC_inw(hc, reg, __func__, __LINE__))
#define HFC_inw_nodebug(hc, reg) \
(hc->HFC_inw_nodebug(hc, reg, __func__, __LINE__))
#define HFC_wait(hc) \
(hc->HFC_wait(hc, __func__, __LINE__))
#define HFC_wait_nodebug(hc) \
(hc->HFC_wait_nodebug(hc, __func__, __LINE__))
#define HFC_outb(hc, reg, val)		(hc->HFC_outb(hc, reg, val))
#define HFC_outb_nodebug(hc, reg, val)	(hc->HFC_outb_nodebug(hc, reg, val))
#define HFC_inb(hc, reg)		(hc->HFC_inb(hc, reg))
#define HFC_inb_nodebug(hc, reg)	(hc->HFC_inb_nodebug(hc, reg))
#define HFC_inw(hc, reg)		(hc->HFC_inw(hc, reg))
#define HFC_inw_nodebug(hc, reg)	(hc->HFC_inw_nodebug(hc, reg))
#define HFC_wait(hc)			(hc->HFC_wait(hc))
#define HFC_wait_nodebug(hc)		(hc->HFC_wait_nodebug(hc))
static void
HFC_outb_pcimem(struct hfc_multi *hc, u_char reg, u_char val,
const char *function, int line)
HFC_outb_pcimem(struct hfc_multi *hc, u_char reg, u_char val)
static u_char
HFC_inb_pcimem(struct hfc_multi *hc, u_char reg, const char *function, int line)
HFC_inb_pcimem(struct hfc_multi *hc, u_char reg)
static u_short
HFC_inw_pcimem(struct hfc_multi *hc, u_char reg, const char *function, int line)
HFC_inw_pcimem(struct hfc_multi *hc, u_char reg)
static void
HFC_wait_pcimem(struct hfc_multi *hc, const char *function, int line)
HFC_wait_pcimem(struct hfc_multi *hc)
static void
HFC_outb_regio(struct hfc_multi *hc, u_char reg, u_char val,
const char *function, int line)
HFC_outb_regio(struct hfc_multi *hc, u_char reg, u_char val)
static u_char
HFC_inb_regio(struct hfc_multi *hc, u_char reg, const char *function, int line)
HFC_inb_regio(struct hfc_multi *hc, u_char reg)
static u_short
HFC_inw_regio(struct hfc_multi *hc, u_char reg, const char *function, int line)
HFC_inw_regio(struct hfc_multi *hc, u_char reg)
static void
HFC_wait_regio(struct hfc_multi *hc, const char *function, int line)
HFC_wait_regio(struct hfc_multi *hc)
static void
HFC_outb_debug(struct hfc_multi *hc, u_char reg, u_char val,
const char *function, int line)
static u_char
HFC_inb_debug(struct hfc_multi *hc, u_char reg, const char *function, int line)
static u_short
HFC_inw_debug(struct hfc_multi *hc, u_char reg, const char *function, int line)
static void
HFC_wait_debug(struct hfc_multi *hc, const char *function, int line)
static void
write_fifo_regio(struct hfc_multi *hc, u_char *data, int len)
static void
write_fifo_pcimem(struct hfc_multi *hc, u_char *data, int len)
static void
read_fifo_regio(struct hfc_multi *hc, u_char *data, int len)
static void
read_fifo_pcimem(struct hfc_multi *hc, u_char *data, int len)
static void
enable_hwirq(struct hfc_multi *hc)
static void
disable_hwirq(struct hfc_multi *hc)
#define	NUM_EC 2
#define	MAX_TDM_CHAN 32
inline void
enablepcibridge(struct hfc_multi *c)
inline void
disablepcibridge(struct hfc_multi *c)
inline unsigned char
readpcibridge(struct hfc_multi *hc, unsigned char address)
inline void
writepcibridge(struct hfc_multi *hc, unsigned char address, unsigned char data)
inline void
cpld_set_reg(struct hfc_multi *hc, unsigned char reg)
inline void
cpld_write_reg(struct hfc_multi *hc, unsigned char reg, unsigned char val)
inline unsigned char
cpld_read_reg(struct hfc_multi *hc, unsigned char reg)
inline void
vpm_write_address(struct hfc_multi *hc, unsigned short addr)
inline unsigned short
vpm_read_address(struct hfc_multi *c)
inline unsigned char
vpm_in(struct hfc_multi *c, int which, unsigned short addr)
inline void
vpm_out(struct hfc_multi *c, int which, unsigned short addr,
unsigned char data)
static void
vpm_init(struct hfc_multi *wc)
static void
vpm_check(struct hfc_multi *hctmp)
static void
vpm_echocan_on(struct hfc_multi *hc, int ch, int taps)
static void
vpm_echocan_off(struct hfc_multi *hc, int ch)
static inline void
hfcmulti_resync(struct hfc_multi *locked, struct hfc_multi *newmaster, int rm)
inline void
plxsd_checksync(struct hfc_multi *hc, int rm)
static void
release_io_hfcmulti(struct hfc_multi *hc)
static int
init_chip(struct hfc_multi *hc)
static void
hfcmulti_watchdog(struct hfc_multi *hc)
static void
hfcmulti_leds(struct hfc_multi *hc)
static void
hfcmulti_dtmf(struct hfc_multi *hc)
static void
hfcmulti_tx(struct hfc_multi *hc, int ch)
static void
hfcmulti_rx(struct hfc_multi *hc, int ch)
static void
signal_state_up(struct dchannel *dch, int info, char *msg)
static inline void
handle_timer_irq(struct hfc_multi *hc)
static void
ph_state_irq(struct hfc_multi *hc, u_char r_irq_statech)
static void
fifo_irq(struct hfc_multi *hc, int block)
int irqsem;
static irqreturn_t
hfcmulti_interrupt(int intno, void *dev_id)
static void
hfcmulti_dbusy_timer(struct hfc_multi *hc)
static int
mode_hfcmulti(struct hfc_multi *hc, int ch, int protocol, int slot_tx,
int bank_tx, int slot_rx, int bank_rx)
static void
hfcmulti_pcm(struct hfc_multi *hc, int ch, int slot_tx, int bank_tx,
int slot_rx, int bank_rx)
static void
hfcmulti_conf(struct hfc_multi *hc, int ch, int num)
static int
hfcm_l1callback(struct dchannel *dch, u_int cmd)
static int
handle_dmsg(struct mISDNchannel *ch, struct sk_buff *skb)
static void
deactivate_bchannel(struct bchannel *bch)
static int
handle_bmsg(struct mISDNchannel *ch, struct sk_buff *skb)
static int
channel_bctrl(struct bchannel *bch, struct mISDN_ctrl_req *cq)
static int
hfcm_bctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static void
ph_state_change(struct dchannel *dch)
static void
hfcmulti_initmode(struct dchannel *dch)
static int
open_dchannel(struct hfc_multi *hc, struct dchannel *dch,
struct channel_req *rq)
static int
open_bchannel(struct hfc_multi *hc, struct dchannel *dch,
struct channel_req *rq)
static int
channel_dctrl(struct dchannel *dch, struct mISDN_ctrl_req *cq)
static int
hfcm_dctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static int
clockctl(void *priv, int enable)
static int
init_card(struct hfc_multi *hc)
static int
setup_pci(struct hfc_multi *hc, struct pci_dev *pdev,
const struct pci_device_id *ent)
static void
release_port(struct hfc_multi *hc, struct dchannel *dch)
static void
release_card(struct hfc_multi *hc)
static int
init_e1_port(struct hfc_multi *hc, struct hm_map *m)
static int
init_multi_port(struct hfc_multi *hc, int pt)
static int
hfcmulti_init(struct hm_map *m, struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit hfc_remove_pci(struct pci_dev *pdev)
#define	VENDOR_CCD	"Cologne Chip AG"
#define	VENDOR_BN	"beroNet GmbH"
#define	VENDOR_DIG	"Digium Inc."
#define VENDOR_JH	"Junghanns.NET GmbH"
#define VENDOR_PRIM	"PrimuX"
static const struct hm_map hfcm_map[] = ;
#undef H
#define H(x)	((unsigned long)&hfcm_map[x])
static struct pci_device_id hfmultipci_ids[] __devinitdata = ;
#undef H
MODULE_DEVICE_TABLE(pci, hfmultipci_ids);
static int
hfcmulti_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static struct pci_driver hfcmultipci_driver = ;
static void __exit
HFCmulti_cleanup(void)
static int __init
HFCmulti_init(void)
module_init(HFCmulti_init);
module_exit(HFCmulti_cleanup);
