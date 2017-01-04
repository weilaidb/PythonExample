static const char *hfcpci_revision = "2.0";
static int HFC_cnt;
static uint debug;
static uint poll, tics;
static struct timer_list hfc_tl;
static unsigned long hfc_jiffies;
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL");
module_param(debug, uint, S_IRUGO | S_IWUSR);
module_param(poll, uint, S_IRUGO | S_IWUSR);
enum ;
struct hfcPCI_hw ;
#define	HFC_CFG_MASTER		1
#define HFC_CFG_SLAVE		2
#define	HFC_CFG_PCM		3
#define HFC_CFG_2HFC		4
#define HFC_CFG_SLAVEHFC	5
#define HFC_CFG_NEG_F0		6
#define HFC_CFG_SW_DD_DU	7
#define FLG_HFC_TIMER_T1	16
#define FLG_HFC_TIMER_T3	17
#define NT_T1_COUNT	1120
#define NT_T3_COUNT	31
#define CLKDEL_TE	0x0e
#define CLKDEL_NT	0x6c
struct hfc_pci ;
static void
enable_hwirq(struct hfc_pci *hc)
static void
disable_hwirq(struct hfc_pci *hc)
static void
release_io_hfcpci(struct hfc_pci *hc)
static void
hfcpci_setmode(struct hfc_pci *hc)
static void
reset_hfcpci(struct hfc_pci *hc)
static void
hfcpci_Timer(struct hfc_pci *hc)
static struct bchannel *
Sel_BCS(struct hfc_pci *hc, int channel)
static void
hfcpci_clear_fifo_rx(struct hfc_pci *hc, int fifo)
static void hfcpci_clear_fifo_tx(struct hfc_pci *hc, int fifo)
static void
hfcpci_empty_bfifo(struct bchannel *bch, struct bzfifo *bz,
u_char *bdata, int count)
static int
receive_dmsg(struct hfc_pci *hc)
static void
hfcpci_empty_fifo_trans(struct bchannel *bch, struct bzfifo *rxbz,
struct bzfifo *txbz, u_char *bdata)
static void
main_rec_hfcpci(struct bchannel *bch)
static void
hfcpci_fill_dfifo(struct hfc_pci *hc)
static void
hfcpci_fill_fifo(struct bchannel *bch)
static void
ph_state_te(struct dchannel *dch)
static void
handle_nt_timer3(struct dchannel *dch)
static void
ph_state_nt(struct dchannel *dch)
static void
ph_state(struct dchannel *dch)
static int
hfc_l1callback(struct dchannel *dch, u_int cmd)
static inline void
tx_birq(struct bchannel *bch)
static inline void
tx_dirq(struct dchannel *dch)
static irqreturn_t
hfcpci_int(int intno, void *dev_id)
static void
hfcpci_dbusy_timer(struct hfc_pci *hc)
static int
mode_hfcpci(struct bchannel *bch, int bc, int protocol)
static int
set_hfcpci_rxtest(struct bchannel *bch, int protocol, int chan)
static void
deactivate_bchannel(struct bchannel *bch)
static int
channel_bctrl(struct bchannel *bch, struct mISDN_ctrl_req *cq)
static int
hfc_bctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static int
hfcpci_l2l1D(struct mISDNchannel *ch, struct sk_buff *skb)
static int
hfcpci_l2l1B(struct mISDNchannel *ch, struct sk_buff *skb)
static void
inithfcpci(struct hfc_pci *hc)
static int
init_card(struct hfc_pci *hc)
static int
channel_ctrl(struct hfc_pci *hc, struct mISDN_ctrl_req *cq)
static int
open_dchannel(struct hfc_pci *hc, struct mISDNchannel *ch,
struct channel_req *rq)
static int
open_bchannel(struct hfc_pci *hc, struct channel_req *rq)
static int
hfc_dctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static int
setup_hw(struct hfc_pci *hc)
static void
release_card(struct hfc_pci *hc)
static int
setup_card(struct hfc_pci *card)
struct _hfc_map ;
static const struct _hfc_map hfc_map[] =
;
static struct pci_device_id hfc_ids[] =
;
static int __devinit
hfc_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
hfc_remove_pci(struct pci_dev *pdev)
static struct pci_driver hfc_driver = ;
static int
_hfcpci_softirq(struct device *dev, void *arg)
static void
hfcpci_softirq(void *arg)
static int __init
HFC_init(void)
static void __exit
HFC_cleanup(void)
module_init(HFC_init);
module_exit(HFC_cleanup);
MODULE_DEVICE_TABLE(pci, hfc_ids);
