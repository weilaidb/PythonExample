#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"nmclan_cs"
#define DRV_VERSION	"0.16"
#define MULTI_TX			0
#define RESET_ON_TIMEOUT		1
#define TX_INTERRUPTABLE		1
#define RESET_XILINX			0
#define ETHER_ADDR_LEN			ETH_ALEN
#define MACE_LADRF_LEN			8
#define MACE_MAX_IR_ITERATIONS		10
#define MACE_MAX_RX_ITERATIONS		12
#define AM2150_MAX_TX_FRAMES		4
#define AM2150_MAX_RX_FRAMES		12
#define AM2150_RCV			0x00
#define AM2150_XMT			0x04
#define AM2150_XMT_SKIP			0x09
#define AM2150_RCV_NEXT			0x0A
#define AM2150_RCV_FRAME_COUNT		0x0B
#define AM2150_MACE_BANK		0x0C
#define AM2150_MACE_BASE		0x10
#define MACE_RCVFIFO			0
#define MACE_XMTFIFO			1
#define MACE_XMTFC			2
#define MACE_XMTFS			3
#define MACE_XMTRC			4
#define MACE_RCVFC			5
#define MACE_RCVFS			6
#define MACE_FIFOFC			7
#define MACE_IR				8
#define MACE_IMR			9
#define MACE_PR				10
#define MACE_BIUCC			11
#define MACE_FIFOCC			12
#define MACE_MACCC			13
#define MACE_PLSCC			14
#define MACE_PHYCC			15
#define MACE_CHIPIDL			16
#define MACE_CHIPIDH			17
#define MACE_IAC			18
#define MACE_LADRF			20
#define MACE_PADR			21
#define MACE_MPC			24
#define MACE_RNTPC			26
#define MACE_RCVCC			27
#define MACE_UTR			29
#define MACE_RTR1			30
#define MACE_RTR2			31
#define MACE_XMTRC_EXDEF		0x80
#define MACE_XMTRC_XMTRC		0x0F
#define MACE_XMTFS_XMTSV		0x80
#define MACE_XMTFS_UFLO			0x40
#define MACE_XMTFS_LCOL			0x20
#define MACE_XMTFS_MORE			0x10
#define MACE_XMTFS_ONE			0x08
#define MACE_XMTFS_DEFER		0x04
#define MACE_XMTFS_LCAR			0x02
#define MACE_XMTFS_RTRY			0x01
#define MACE_RCVFS_RCVSTS		0xF000
#define MACE_RCVFS_OFLO			0x8000
#define MACE_RCVFS_CLSN			0x4000
#define MACE_RCVFS_FRAM			0x2000
#define MACE_RCVFS_FCS			0x1000
#define MACE_FIFOFC_RCVFC		0xF0
#define MACE_FIFOFC_XMTFC		0x0F
#define MACE_IR_JAB			0x80
#define MACE_IR_BABL			0x40
#define MACE_IR_CERR			0x20
#define MACE_IR_RCVCCO			0x10
#define MACE_IR_RNTPCO			0x08
#define MACE_IR_MPCO			0x04
#define MACE_IR_RCVINT			0x02
#define MACE_IR_XMTINT			0x01
#define MACE_MACCC_PROM			0x80
#define MACE_MACCC_DXMT2PD		0x40
#define MACE_MACCC_EMBA			0x20
#define MACE_MACCC_RESERVED		0x10
#define MACE_MACCC_DRCVPA		0x08
#define MACE_MACCC_DRCVBC		0x04
#define MACE_MACCC_ENXMT		0x02
#define MACE_MACCC_ENRCV		0x01
#define MACE_PHYCC_LNKFL		0x80
#define MACE_PHYCC_DLNKTST		0x40
#define MACE_PHYCC_REVPOL		0x20
#define MACE_PHYCC_DAPC			0x10
#define MACE_PHYCC_LRT			0x08
#define MACE_PHYCC_ASEL			0x04
#define MACE_PHYCC_RWAKE		0x02
#define MACE_PHYCC_AWAKE		0x01
#define MACE_IAC_ADDRCHG		0x80
#define MACE_IAC_PHYADDR		0x04
#define MACE_IAC_LOGADDR		0x02
#define MACE_UTR_RTRE			0x80
#define MACE_UTR_RTRD			0x40
#define MACE_UTR_RPA			0x20
#define MACE_UTR_FCOLL			0x10
#define MACE_UTR_RCVFCSE		0x08
#define MACE_UTR_LOOP_INCL_MENDEC	0x06
#define MACE_UTR_LOOP_NO_MENDEC		0x04
#define MACE_UTR_LOOP_EXTERNAL		0x02
#define MACE_UTR_LOOP_NONE		0x00
#define MACE_UTR_RESERVED		0x01
#define MACEBANK(win_num) outb((win_num), ioaddr + AM2150_MACE_BANK)
#define MACE_IMR_DEFAULT \
(0xFF - \
( \
MACE_IR_CERR | \
MACE_IR_RCVCCO | \
MACE_IR_RNTPCO | \
MACE_IR_MPCO | \
MACE_IR_RCVINT | \
MACE_IR_XMTINT \
) \
)
#undef MACE_IMR_DEFAULT
#define MACE_IMR_DEFAULT 0x00
#define TX_TIMEOUT		((400*HZ)/1000)
typedef struct _mace_statistics  mace_statistics;
typedef struct _mace_private  mace_private;
static const char *if_names[]=;
MODULE_DESCRIPTION("New Media PCMCIA ethernet driver");
MODULE_LICENSE("GPL");
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0)
INT_MODULE_PARM(if_port, 0);
static int nmclan_config(struct pcmcia_device *link);
static void nmclan_release(struct pcmcia_device *link);
static void nmclan_reset(struct net_device *dev);
static int mace_config(struct net_device *dev, struct ifmap *map);
static int mace_open(struct net_device *dev);
static int mace_close(struct net_device *dev);
static netdev_tx_t mace_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static void mace_tx_timeout(struct net_device *dev);
static irqreturn_t mace_interrupt(int irq, void *dev_id);
static struct net_device_stats *mace_get_stats(struct net_device *dev);
static int mace_rx(struct net_device *dev, unsigned char RxCnt);
static void restore_multicast_list(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static const struct ethtool_ops netdev_ethtool_ops;
static void nmclan_detach(struct pcmcia_device *p_dev);
static const struct net_device_ops mace_netdev_ops = ;
static int nmclan_probe(struct pcmcia_device *link)
static void nmclan_detach(struct pcmcia_device *link)
static int mace_read(mace_private *lp, unsigned int ioaddr, int reg)
static void mace_write(mace_private *lp, unsigned int ioaddr, int reg,
int data)
static int mace_init(mace_private *lp, unsigned int ioaddr, char *enet_addr)
static int nmclan_config(struct pcmcia_device *link)
static void nmclan_release(struct pcmcia_device *link)
static int nmclan_suspend(struct pcmcia_device *link)
static int nmclan_resume(struct pcmcia_device *link)
static void nmclan_reset(struct net_device *dev)
static int mace_config(struct net_device *dev, struct ifmap *map)
static int mace_open(struct net_device *dev)
static int mace_close(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops netdev_ethtool_ops = ;
static void mace_tx_timeout(struct net_device *dev)
static netdev_tx_t mace_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t mace_interrupt(int irq, void *dev_id)
static int mace_rx(struct net_device *dev, unsigned char RxCnt)
static void pr_linux_stats(struct net_device_stats *pstats)
static void pr_mace_stats(mace_statistics *pstats)
static void update_stats(unsigned int ioaddr, struct net_device *dev)
static struct net_device_stats *mace_get_stats(struct net_device *dev)
static void updateCRC(int *CRC, int bit)
static void BuildLAF(int *ladrf, int *adr)
static void restore_multicast_list(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static void restore_multicast_list(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static const struct pcmcia_device_id nmclan_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, nmclan_ids);
static struct pcmcia_driver nmclan_cs_driver = ;
static int __init init_nmclan_cs(void)
static void __exit exit_nmclan_cs(void)
module_init(init_nmclan_cs);
module_exit(exit_nmclan_cs);
