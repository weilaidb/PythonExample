#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("R.J.Dunlop <bob.dunlop@farsite.co.uk>");
MODULE_DESCRIPTION("FarSync T-Series WAN driver. FarSite Communications Ltd.");
MODULE_LICENSE("GPL");
#define FST_MAX_PORTS           4
#define FST_MAX_CARDS           32
#define FST_TX_QUEUE_LEN        100
#define FST_TXQ_DEPTH           16
#define FST_HIGH_WATER_MARK     12
#define FST_LOW_WATER_MARK      8
#define FST_MAX_MTU             8000
#define FST_DEF_MTU             1500
#define FST_TX_TIMEOUT          (2*HZ)
#define ARPHRD_MYTYPE   ARPHRD_RAWHDLC
#define ARPHRD_MYTYPE   ARPHRD_HDLC
static int fst_txq_low = FST_LOW_WATER_MARK;
static int fst_txq_high = FST_HIGH_WATER_MARK;
static int fst_max_reads = 7;
static int fst_excluded_cards = 0;
static int fst_excluded_list[FST_MAX_CARDS];
module_param(fst_txq_low, int, 0);
module_param(fst_txq_high, int, 0);
module_param(fst_max_reads, int, 0);
module_param(fst_excluded_cards, int, 0);
module_param_array(fst_excluded_list, int, NULL, 0);
#define SMC_VERSION 24
#define FST_MEMSIZE 0x100000
#define SMC_BASE 0x00002000L
#define BFM_BASE 0x00010000L
#define LEN_TX_BUFFER 8192
#define LEN_RX_BUFFER 8192
#define LEN_SMALL_TX_BUFFER 256
#define LEN_SMALL_RX_BUFFER 256
#define NUM_TX_BUFFER 2
#define NUM_RX_BUFFER 8
#define INT_RETRY_TIME 2
struct txdesc ;
struct rxdesc ;
#define cnv_bcnt(len)   (-(len))
#define DMA_OWN         0x80
#define TX_STP          0x02
#define TX_ENP          0x01
#define RX_ERR          0x40
#define RX_FRAM         0x20
#define RX_OFLO         0x10
#define RX_CRC          0x08
#define RX_HBUF         0x04
#define RX_STP          0x02
#define RX_ENP          0x01
#define MAX_CIRBUFF     32
struct cirbuff ;
#define CTLA_CHG        0x18
#define CTLB_CHG        0x19
#define CTLC_CHG        0x1A
#define CTLD_CHG        0x1B
#define INIT_CPLT       0x20
#define INIT_FAIL       0x21
#define ABTA_SENT       0x24
#define ABTB_SENT       0x25
#define ABTC_SENT       0x26
#define ABTD_SENT       0x27
#define TXA_UNDF        0x28
#define TXB_UNDF        0x29
#define TXC_UNDF        0x2A
#define TXD_UNDF        0x2B
#define F56_INT         0x2C
#define M32_INT         0x2D
#define TE1_ALMA        0x30
struct port_cfg ;
struct su_config ;
struct su_status ;
struct fst_shared ;
#define END_SIG                 0x12345678
#define NOP             0
#define ACK             1
#define NAK             2
#define STARTPORT       3
#define STOPPORT        4
#define ABORTTX         5
#define SETV24O         6
#define CNTRL_9052      0x50
#define CNTRL_9054      0x6c
#define INTCSR_9052     0x4c
#define INTCSR_9054     0x68
#define DMAMODE0        0x80
#define DMAPADR0        0x84
#define DMALADR0        0x88
#define DMASIZ0         0x8c
#define DMADPR0         0x90
#define DMAMODE1        0x94
#define DMAPADR1        0x98
#define DMALADR1        0x9c
#define DMASIZ1         0xa0
#define DMADPR1         0xa4
#define DMACSR0         0xa8
#define DMACSR1         0xa9
#define DMAARB          0xac
#define DMATHR          0xb0
#define DMADAC0         0xb4
#define DMADAC1         0xb8
#define DMAMARBR        0xac
#define FST_MIN_DMA_LEN 64
#define FST_RX_DMA_INT  0x01
#define FST_TX_DMA_INT  0x02
#define FST_CARD_INT    0x04
struct buf_window ;
#define BUF_OFFSET(X)   (BFM_BASE + offsetof(struct buf_window, X))
struct fst_port_info ;
struct fst_card_info ;
#define dev_to_port(D)  (dev_to_hdlc(D)->priv)
#define port_to_dev(P)  ((P)->dev)
#define WIN_OFFSET(X)   ((long)&(((struct fst_shared *)SMC_BASE)->X))
#define FST_RDB(C,E)    readb ((C)->mem + WIN_OFFSET(E))
#define FST_RDW(C,E)    readw ((C)->mem + WIN_OFFSET(E))
#define FST_RDL(C,E)    readl ((C)->mem + WIN_OFFSET(E))
#define FST_WRB(C,E,B)  writeb ((B), (C)->mem + WIN_OFFSET(E))
#define FST_WRW(C,E,W)  writew ((W), (C)->mem + WIN_OFFSET(E))
#define FST_WRL(C,E,L)  writel ((L), (C)->mem + WIN_OFFSET(E))
#if FST_DEBUG
static int fst_debug_mask = ;
#define dbg(F, fmt, args...)					\
do  while (0)
#define dbg(F, fmt, args...)					\
do  while (0)
static DEFINE_PCI_DEVICE_TABLE(fst_pci_dev_id) = ;
MODULE_DEVICE_TABLE(pci, fst_pci_dev_id);
static void do_bottom_half_tx(struct fst_card_info *card);
static void do_bottom_half_rx(struct fst_card_info *card);
static void fst_process_tx_work_q(unsigned long work_q);
static void fst_process_int_work_q(unsigned long work_q);
static DECLARE_TASKLET(fst_tx_task, fst_process_tx_work_q, 0);
static DECLARE_TASKLET(fst_int_task, fst_process_int_work_q, 0);
static struct fst_card_info *fst_card_array[FST_MAX_CARDS];
static spinlock_t fst_work_q_lock;
static u64 fst_work_txq;
static u64 fst_work_intq;
static void
fst_q_work_item(u64 * queue, int card_index)
static void
fst_process_tx_work_q(unsigned longwork_q)
static void
fst_process_int_work_q(unsigned longwork_q)
static inline void
fst_cpureset(struct fst_card_info *card)
static inline void
fst_cpurelease(struct fst_card_info *card)
static inline void
fst_clear_intr(struct fst_card_info *card)
static inline void
fst_enable_intr(struct fst_card_info *card)
static inline void
fst_disable_intr(struct fst_card_info *card)
static void
fst_process_rx_status(int rx_status, char *name)
static inline void
fst_init_dma(struct fst_card_info *card)
static void
fst_tx_dma_complete(struct fst_card_info *card, struct fst_port_info *port,
int len, int txpos)
static __be16 farsync_type_trans(struct sk_buff *skb, struct net_device *dev)
static void
fst_rx_dma_complete(struct fst_card_info *card, struct fst_port_info *port,
int len, struct sk_buff *skb, int rxp)
static inline void
fst_rx_dma(struct fst_card_info *card, dma_addr_t skb,
dma_addr_t mem, int len)
static inline void
fst_tx_dma(struct fst_card_info *card, unsigned char *skb,
unsigned char *mem, int len)
static void
fst_issue_cmd(struct fst_port_info *port, unsigned short cmd)
static inline void
fst_op_raise(struct fst_port_info *port, unsigned int outputs)
static inline void
fst_op_lower(struct fst_port_info *port, unsigned int outputs)
static void
fst_rx_config(struct fst_port_info *port)
static void
fst_tx_config(struct fst_port_info *port)
static void
fst_intr_te1_alarm(struct fst_card_info *card, struct fst_port_info *port)
static void
fst_intr_ctlchg(struct fst_card_info *card, struct fst_port_info *port)
static void
fst_log_rx_error(struct fst_card_info *card, struct fst_port_info *port,
unsigned char dmabits, int rxp, unsigned short len)
static void
fst_recover_rx_error(struct fst_card_info *card, struct fst_port_info *port,
unsigned char dmabits, int rxp, unsigned short len)
static void
fst_intr_rx(struct fst_card_info *card, struct fst_port_info *port)
static void
do_bottom_half_tx(struct fst_card_info *card)
static void
do_bottom_half_rx(struct fst_card_info *card)
static irqreturn_t
fst_intr(int dummy, void *dev_id)
static void
check_started_ok(struct fst_card_info *card)
static int
set_conf_from_info(struct fst_card_info *card, struct fst_port_info *port,
struct fstioc_info *info)
static void
gather_conf_info(struct fst_card_info *card, struct fst_port_info *port,
struct fstioc_info *info)
static int
fst_set_iface(struct fst_card_info *card, struct fst_port_info *port,
struct ifreq *ifr)
static int
fst_get_iface(struct fst_card_info *card, struct fst_port_info *port,
struct ifreq *ifr)
static int
fst_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void
fst_openport(struct fst_port_info *port)
static void
fst_closeport(struct fst_port_info *port)
static int
fst_open(struct net_device *dev)
static int
fst_close(struct net_device *dev)
static int
fst_attach(struct net_device *dev, unsigned short encoding, unsigned short parity)
static void
fst_tx_timeout(struct net_device *dev)
static netdev_tx_t
fst_start_xmit(struct sk_buff *skb, struct net_device *dev)
static char *type_strings[] __devinitdata = ;
static void __devinit
fst_init_card(struct fst_card_info *card)
static const struct net_device_ops fst_ops = ;
static int __devinit
fst_add_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
fst_remove_one(struct pci_dev *pdev)
static struct pci_driver fst_driver = ;
static int __init
fst_init(void)
static void __exit
fst_cleanup_module(void)
module_init(fst_init);
module_exit(fst_cleanup_module);
