#define USE_PROBE 1
#undef  USE_PROBE
#define PROBE_VERBOSE 1
#undef DUMP_PACKETS
#define USE_MIR
#define OPTIMIZE_TX
#define RING_SIZE (OBOE_RING_SIZE_RX8 | OBOE_RING_SIZE_TX8)
#define TX_SLOTS    8
#define RX_SLOTS    8
#define TT_LEN      0x80
#define TX_LEN      0xc00
#define RX_LEN      0xc04
#define BUF_SAFETY  0x7a
#define RX_BUF_SZ   (RX_LEN)
#define TX_BUF_SZ   (TX_LEN+BUF_SAFETY)
#define INB(port)       inb_p(port)
#define OUTB(val,port)  outb_p(val,port)
#define OUTBP(val,port) outb_p(val,port)
#define PROMPT  OUTB(OBOE_PROMPT_BIT,OBOE_PROMPT);
#if PROBE_VERBOSE
#define PROBE_DEBUG(args...) (printk (args))
#define PROBE_DEBUG(args...) ;
#define CONFIG0H_DMA_OFF OBOE_CONFIG0H_RCVANY
#define CONFIG0H_DMA_ON_NORX CONFIG0H_DMA_OFF| OBOE_CONFIG0H_ENDMAC
#define CONFIG0H_DMA_ON CONFIG0H_DMA_ON_NORX | OBOE_CONFIG0H_ENRX
static DEFINE_PCI_DEVICE_TABLE(toshoboe_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, toshoboe_pci_tbl);
#define DRIVER_NAME "toshoboe"
static char *driver_name = DRIVER_NAME;
static int max_baud = 4000000;
static int do_probe = 0;
static int
toshoboe_checkfcs (unsigned char *buf, int len)
static unsigned char dump[50];
static void
_dumpbufs (unsigned char *data, int len, char tete)
static void
toshoboe_dumpregs (struct toshoboe_cb *self)
static void
toshoboe_disablebm (struct toshoboe_cb *self)
static void
toshoboe_stopchip (struct toshoboe_cb *self)
static void
toshoboe_start_DMA (struct toshoboe_cb *self, int opts)
static void
toshoboe_setbaud (struct toshoboe_cb *self)
static void
toshoboe_enablebm (struct toshoboe_cb *self)
static void
toshoboe_initring (struct toshoboe_cb *self)
static void
toshoboe_resetptrs (struct toshoboe_cb *self)
static void
toshoboe_initptrs (struct toshoboe_cb *self)
static void
toshoboe_startchip (struct toshoboe_cb *self)
static void
toshoboe_isntstuck (struct toshoboe_cb *self)
static void
toshoboe_checkstuck (struct toshoboe_cb *self)
static int
toshoboe_makemttpacket (struct toshoboe_cb *self, void *buf, int mtt)
static void
toshoboe_dumptx (struct toshoboe_cb *self)
static void
toshoboe_dumprx (struct toshoboe_cb *self, int score)
static inline int
stuff_byte (__u8 byte, __u8 * buf)
static irqreturn_t
toshoboe_probeinterrupt (int irq, void *dev_id)
static int
toshoboe_maketestpacket (unsigned char *buf, int badcrc, int fir)
static int
toshoboe_probefail (struct toshoboe_cb *self, char *msg)
static int
toshoboe_numvalidrcvs (struct toshoboe_cb *self)
static int
toshoboe_numrcvs (struct toshoboe_cb *self)
static int
toshoboe_probe (struct toshoboe_cb *self)
static netdev_tx_t
toshoboe_hard_xmit (struct sk_buff *skb, struct net_device *dev)
static irqreturn_t
toshoboe_interrupt (int irq, void *dev_id)
static int
toshoboe_net_open (struct net_device *dev)
static int
toshoboe_net_close (struct net_device *dev)
static int
toshoboe_net_ioctl (struct net_device *dev, struct ifreq *rq, int cmd)
MODULE_DESCRIPTION("Toshiba OBOE IrDA Device Driver");
MODULE_AUTHOR("James McKenzie <james@fishsoup.dhs.org>");
MODULE_LICENSE("GPL");
module_param (max_baud, int, 0);
MODULE_PARM_DESC(max_baud, "Maximum baud rate");
module_param (do_probe, bool, 0);
MODULE_PARM_DESC(do_probe, "Enable/disable chip probing and self-test");
static void
toshoboe_close (struct pci_dev *pci_dev)
static const struct net_device_ops toshoboe_netdev_ops = ;
static int
toshoboe_open (struct pci_dev *pci_dev, const struct pci_device_id *pdid)
static int
toshoboe_gotosleep (struct pci_dev *pci_dev, pm_message_t crap)
static int
toshoboe_wakeup (struct pci_dev *pci_dev)
static struct pci_driver donauboe_pci_driver = ;
static int __init
donauboe_init (void)
static void __exit
donauboe_cleanup (void)
module_init(donauboe_init);
module_exit(donauboe_cleanup);
