#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"pcnet32"
#define DRV_VERSION	"1.35"
#define DRV_RELDATE	"21.Apr.2008"
#define PFX		DRV_NAME ": "
static const char *const version =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " tsbogend@alpha.franken.de\n";
static DEFINE_PCI_DEVICE_TABLE(pcnet32_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, pcnet32_pci_tbl);
static int cards_found;
static unsigned int pcnet32_portlist[] __initdata =
;
static int pcnet32_debug;
static int tx_start = 1;
static int pcnet32vlb;
static struct net_device *pcnet32_dev;
static int max_interrupt_work = 2;
static int rx_copybreak = 200;
#define PCNET32_PORT_AUI      0x00
#define PCNET32_PORT_10BT     0x01
#define PCNET32_PORT_GPSI     0x02
#define PCNET32_PORT_MII      0x03
#define PCNET32_PORT_PORTSEL  0x03
#define PCNET32_PORT_ASEL     0x04
#define PCNET32_PORT_100      0x40
#define PCNET32_PORT_FD	      0x80
#define PCNET32_DMA_MASK 0xffffffff
#define PCNET32_WATCHDOG_TIMEOUT (jiffies + (2 * HZ))
#define PCNET32_BLINK_TIMEOUT	(jiffies + (HZ/4))
static const unsigned char options_mapping[] = ;
static const char pcnet32_gstrings_test[][ETH_GSTRING_LEN] = ;
#define PCNET32_TEST_LEN	ARRAY_SIZE(pcnet32_gstrings_test)
#define PCNET32_NUM_REGS 136
#define MAX_UNITS 8
static int options[MAX_UNITS];
static int full_duplex[MAX_UNITS];
static int homepna[MAX_UNITS];
#define PCNET32_LOG_TX_BUFFERS		4
#define PCNET32_LOG_RX_BUFFERS		5
#define PCNET32_LOG_MAX_TX_BUFFERS	9
#define PCNET32_LOG_MAX_RX_BUFFERS	9
#define TX_RING_SIZE		(1 << (PCNET32_LOG_TX_BUFFERS))
#define TX_MAX_RING_SIZE	(1 << (PCNET32_LOG_MAX_TX_BUFFERS))
#define RX_RING_SIZE		(1 << (PCNET32_LOG_RX_BUFFERS))
#define RX_MAX_RING_SIZE	(1 << (PCNET32_LOG_MAX_RX_BUFFERS))
#define PKT_BUF_SKB		1544
#define PKT_BUF_SIZE		(PKT_BUF_SKB - NET_IP_ALIGN)
#define NEG_BUF_SIZE		(NET_IP_ALIGN - PKT_BUF_SKB)
#define PCNET32_WIO_RDP		0x10
#define PCNET32_WIO_RAP		0x12
#define PCNET32_WIO_RESET	0x14
#define PCNET32_WIO_BDP		0x16
#define PCNET32_DWIO_RDP	0x10
#define PCNET32_DWIO_RAP	0x14
#define PCNET32_DWIO_RESET	0x18
#define PCNET32_DWIO_BDP	0x1C
#define PCNET32_TOTAL_SIZE	0x20
#define CSR0		0
#define CSR0_INIT	0x1
#define CSR0_START	0x2
#define CSR0_STOP	0x4
#define CSR0_TXPOLL	0x8
#define CSR0_INTEN	0x40
#define CSR0_IDON	0x0100
#define CSR0_NORMAL	(CSR0_START | CSR0_INTEN)
#define PCNET32_INIT_LOW	1
#define PCNET32_INIT_HIGH	2
#define CSR3		3
#define CSR4		4
#define CSR5		5
#define CSR5_SUSPEND	0x0001
#define CSR15		15
#define PCNET32_MC_FILTER	8
#define PCNET32_79C970A	0x2621
struct pcnet32_rx_head ;
struct pcnet32_tx_head ;
struct pcnet32_init_block ;
struct pcnet32_access ;
struct pcnet32_private ;
static int pcnet32_probe_pci(struct pci_dev *, const struct pci_device_id *);
static int pcnet32_probe1(unsigned long, int, struct pci_dev *);
static int pcnet32_open(struct net_device *);
static int pcnet32_init_ring(struct net_device *);
static netdev_tx_t pcnet32_start_xmit(struct sk_buff *,
struct net_device *);
static void pcnet32_tx_timeout(struct net_device *dev);
static irqreturn_t pcnet32_interrupt(int, void *);
static int pcnet32_close(struct net_device *);
static struct net_device_stats *pcnet32_get_stats(struct net_device *);
static void pcnet32_load_multicast(struct net_device *dev);
static void pcnet32_set_multicast_list(struct net_device *);
static int pcnet32_ioctl(struct net_device *, struct ifreq *, int);
static void pcnet32_watchdog(struct net_device *);
static int mdio_read(struct net_device *dev, int phy_id, int reg_num);
static void mdio_write(struct net_device *dev, int phy_id, int reg_num,
int val);
static void pcnet32_restart(struct net_device *dev, unsigned int csr0_bits);
static void pcnet32_ethtool_test(struct net_device *dev,
struct ethtool_test *eth_test, u64 * data);
static int pcnet32_loopback_test(struct net_device *dev, uint64_t * data1);
static int pcnet32_get_regs_len(struct net_device *dev);
static void pcnet32_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *ptr);
static void pcnet32_purge_tx_ring(struct net_device *dev);
static int pcnet32_alloc_ring(struct net_device *dev, const char *name);
static void pcnet32_free_ring(struct net_device *dev);
static void pcnet32_check_media(struct net_device *dev, int verbose);
static u16 pcnet32_wio_read_csr(unsigned long addr, int index)
static void pcnet32_wio_write_csr(unsigned long addr, int index, u16 val)
static u16 pcnet32_wio_read_bcr(unsigned long addr, int index)
static void pcnet32_wio_write_bcr(unsigned long addr, int index, u16 val)
static u16 pcnet32_wio_read_rap(unsigned long addr)
static void pcnet32_wio_write_rap(unsigned long addr, u16 val)
static void pcnet32_wio_reset(unsigned long addr)
static int pcnet32_wio_check(unsigned long addr)
static struct pcnet32_access pcnet32_wio = ;
static u16 pcnet32_dwio_read_csr(unsigned long addr, int index)
static void pcnet32_dwio_write_csr(unsigned long addr, int index, u16 val)
static u16 pcnet32_dwio_read_bcr(unsigned long addr, int index)
static void pcnet32_dwio_write_bcr(unsigned long addr, int index, u16 val)
static u16 pcnet32_dwio_read_rap(unsigned long addr)
static void pcnet32_dwio_write_rap(unsigned long addr, u16 val)
static void pcnet32_dwio_reset(unsigned long addr)
static int pcnet32_dwio_check(unsigned long addr)
static struct pcnet32_access pcnet32_dwio = ;
static void pcnet32_netif_stop(struct net_device *dev)
static void pcnet32_netif_start(struct net_device *dev)
static void pcnet32_realloc_tx_ring(struct net_device *dev,
struct pcnet32_private *lp,
unsigned int size)
static void pcnet32_realloc_rx_ring(struct net_device *dev,
struct pcnet32_private *lp,
unsigned int size)
static void pcnet32_purge_rx_ring(struct net_device *dev)
static void pcnet32_poll_controller(struct net_device *dev)
static int pcnet32_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int pcnet32_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void pcnet32_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 pcnet32_get_link(struct net_device *dev)
static u32 pcnet32_get_msglevel(struct net_device *dev)
static void pcnet32_set_msglevel(struct net_device *dev, u32 value)
static int pcnet32_nway_reset(struct net_device *dev)
static void pcnet32_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static int pcnet32_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static void pcnet32_get_strings(struct net_device *dev, u32 stringset,
u8 *data)
static int pcnet32_get_sset_count(struct net_device *dev, int sset)
static void pcnet32_ethtool_test(struct net_device *dev,
struct ethtool_test *test, u64 * data)
static int pcnet32_loopback_test(struct net_device *dev, uint64_t * data1)
static int pcnet32_set_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
static int pcnet32_suspend(struct net_device *dev, unsigned long *flags,
int can_sleep)
static void pcnet32_rx_entry(struct net_device *dev,
struct pcnet32_private *lp,
struct pcnet32_rx_head *rxp,
int entry)
static int pcnet32_rx(struct net_device *dev, int budget)
static int pcnet32_tx(struct net_device *dev)
static int pcnet32_poll(struct napi_struct *napi, int budget)
#define PCNET32_REGS_PER_PHY	32
#define PCNET32_MAX_PHYS	32
static int pcnet32_get_regs_len(struct net_device *dev)
static void pcnet32_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *ptr)
static const struct ethtool_ops pcnet32_ethtool_ops = ;
static void __devinit pcnet32_probe_vlbus(unsigned int *pcnet32_portlist)
static int __devinit
pcnet32_probe_pci(struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct net_device_ops pcnet32_netdev_ops = ;
static int __devinit
pcnet32_probe1(unsigned long ioaddr, int shared, struct pci_dev *pdev)
static int pcnet32_alloc_ring(struct net_device *dev, const char *name)
static void pcnet32_free_ring(struct net_device *dev)
static int pcnet32_open(struct net_device *dev)
static void pcnet32_purge_tx_ring(struct net_device *dev)
static int pcnet32_init_ring(struct net_device *dev)
static void pcnet32_restart(struct net_device *dev, unsigned int csr0_bits)
static void pcnet32_tx_timeout(struct net_device *dev)
static netdev_tx_t pcnet32_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t
pcnet32_interrupt(int irq, void *dev_id)
static int pcnet32_close(struct net_device *dev)
static struct net_device_stats *pcnet32_get_stats(struct net_device *dev)
static void pcnet32_load_multicast(struct net_device *dev)
static void pcnet32_set_multicast_list(struct net_device *dev)
static int mdio_read(struct net_device *dev, int phy_id, int reg_num)
static void mdio_write(struct net_device *dev, int phy_id, int reg_num, int val)
static int pcnet32_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int pcnet32_check_otherphy(struct net_device *dev)
static void pcnet32_check_media(struct net_device *dev, int verbose)
static void pcnet32_watchdog(struct net_device *dev)
static int pcnet32_pm_suspend(struct pci_dev *pdev, pm_message_t state)
static int pcnet32_pm_resume(struct pci_dev *pdev)
static void __devexit pcnet32_remove_one(struct pci_dev *pdev)
static struct pci_driver pcnet32_driver = ;
static int debug = -1;
static int tx_start_pt = -1;
static int pcnet32_have_pci;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, DRV_NAME " debug level");
module_param(max_interrupt_work, int, 0);
MODULE_PARM_DESC(max_interrupt_work,
DRV_NAME " maximum events handled per interrupt");
module_param(rx_copybreak, int, 0);
MODULE_PARM_DESC(rx_copybreak,
DRV_NAME " copy breakpoint for copy-only-tiny-frames");
module_param(tx_start_pt, int, 0);
MODULE_PARM_DESC(tx_start_pt, DRV_NAME " transmit start point (0-3)");
module_param(pcnet32vlb, int, 0);
MODULE_PARM_DESC(pcnet32vlb, DRV_NAME " Vesa local bus (VLB) support (0/1)");
module_param_array(options, int, NULL, 0);
MODULE_PARM_DESC(options, DRV_NAME " initial option setting(s) (0-15)");
module_param_array(full_duplex, int, NULL, 0);
MODULE_PARM_DESC(full_duplex, DRV_NAME " full duplex setting(s) (1)");
module_param_array(homepna, int, NULL, 0);
MODULE_PARM_DESC(homepna,
DRV_NAME
" mode for 79C978 cards (1 for HomePNA, 0 for Ethernet, default Ethernet");
MODULE_AUTHOR("Thomas Bogendoerfer");
MODULE_DESCRIPTION("Driver for PCnet32 and PCnetPCI based ethercards");
MODULE_LICENSE("GPL");
#define PCNET32_MSG_DEFAULT (NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK)
static int __init pcnet32_init_module(void)
static void __exit pcnet32_cleanup_module(void)
module_init(pcnet32_init_module);
module_exit(pcnet32_cleanup_module);
