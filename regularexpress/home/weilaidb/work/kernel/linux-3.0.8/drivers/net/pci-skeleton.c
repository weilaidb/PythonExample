#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define NETDRV_VERSION		"1.0.1"
#define MODNAME			"netdrv"
#define NETDRV_DRIVER_LOAD_MSG	"MyVendor Fast Ethernet driver " NETDRV_VERSION " loaded"
static char version[] __devinitdata =
KERN_INFO NETDRV_DRIVER_LOAD_MSG "\n"
"  Support available from http:
#undef USE_IO_OPS
#undef NETDRV_DEBUG
#undef NETDRV_NDEBUG
#define DPRINTK(fmt, args...)					\
printk(KERN_DEBUG "%s: " fmt, __func__ , ## args)
#define DPRINTK(fmt, args...)				\
do  while (0)
#define assert(expr) do  while (0)
#define assert(expr)						\
if (!(expr))
static int media[] = ;
static int max_interrupt_work = 20;
static int multicast_filter_limit = 32;
#define RX_BUF_LEN_IDX	2
#define RX_BUF_LEN	(8192 << RX_BUF_LEN_IDX)
#define RX_BUF_PAD	16
#define RX_BUF_WRAP_PAD 2048
#define RX_BUF_TOT_LEN	(RX_BUF_LEN + RX_BUF_PAD + RX_BUF_WRAP_PAD)
#define NUM_TX_DESC	4
#define MAX_ETH_FRAME_SIZE	1536
#define TX_BUF_SIZE	MAX_ETH_FRAME_SIZE
#define TX_BUF_TOT_LEN	(TX_BUF_SIZE * NUM_TX_DESC)
#define TX_FIFO_THRESH	256
#define RX_FIFO_THRESH	6
#define RX_DMA_BURST	6
#define TX_DMA_BURST	6
#define TX_TIMEOUT	(6 * HZ)
enum ;
#define NETDRV_MIN_IO_SIZE 0x80
#define RTL8139B_IO_SIZE 256
#define NETDRV_CAPS	(HAS_CHIP_XCVR | HAS_LNK_CHNG)
typedef enum  board_t;
static struct  board_info[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(netdrv_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, netdrv_pci_tbl);
enum NETDRV_registers ;
enum ClearBitMasks ;
enum ChipCmdBits ;
enum IntrStatusBits ;
enum TxStatusBits ;
enum RxStatusBits ;
enum rx_mode_bits ;
enum tx_config_bits ;
enum Config1Bits ;
enum RxConfigBits ;
enum CSCRBits ;
enum Cfg9346Bits ;
#define PARA78_default	0x78fa8388
#define PARA7c_default	0xcb38de43
#define PARA7c_xxx		0xcb38de43
static const unsigned long param[4][4] = ;
struct ring_info ;
typedef enum  chip_t;
static const struct  rtl_chip_info[] = ;
struct netdrv_private ;
MODULE_AUTHOR("Jeff Garzik <jgarzik@pobox.com>");
MODULE_DESCRIPTION("Skeleton for a PCI Fast Ethernet driver");
MODULE_LICENSE("GPL");
module_param(multicast_filter_limit, int, 0);
module_param(max_interrupt_work, int, 0);
module_param_array(media, int, NULL, 0);
MODULE_PARM_DESC(multicast_filter_limit,
MODNAME " maximum number of filtered multicast addresses");
MODULE_PARM_DESC(max_interrupt_work,
MODNAME " maximum events handled per interrupt");
MODULE_PARM_DESC(media,
MODNAME " Bits 0-3: media type, bit 17: full duplex");
static int read_eeprom(void *ioaddr, int location, int addr_len);
static int netdrv_open(struct net_device *dev);
static int mdio_read(struct net_device *dev, int phy_id, int location);
static void mdio_write(struct net_device *dev, int phy_id, int location,
int val);
static void netdrv_timer(unsigned long data);
static void netdrv_tx_timeout(struct net_device *dev);
static void netdrv_init_ring(struct net_device *dev);
static int netdrv_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t netdrv_interrupt(int irq, void *dev_instance);
static int netdrv_close(struct net_device *dev);
static int netdrv_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void netdrv_set_rx_mode(struct net_device *dev);
static void netdrv_hw_start(struct net_device *dev);
#define NETDRV_R8(reg)		inb(((unsigned long)ioaddr) + (reg))
#define NETDRV_R16(reg)		inw(((unsigned long)ioaddr) + (reg))
#define NETDRV_R32(reg)		((unsigned long)inl(((unsigned long)ioaddr) + (reg)))
#define NETDRV_W8(reg, val8)	outb((val8), ((unsigned long)ioaddr) + (reg))
#define NETDRV_W16(reg, val16)	outw((val16), ((unsigned long)ioaddr) + (reg))
#define NETDRV_W32(reg, val32)	outl((val32), ((unsigned long)ioaddr) + (reg))
#define NETDRV_W8_F		NETDRV_W8
#define NETDRV_W16_F		NETDRV_W16
#define NETDRV_W32_F		NETDRV_W32
#undef readb
#undef readw
#undef readl
#undef writeb
#undef writew
#undef writel
#define readb(addr) inb((unsigned long)(addr))
#define readw(addr) inw((unsigned long)(addr))
#define readl(addr) inl((unsigned long)(addr))
#define writeb(val, addr) outb((val), (unsigned long)(addr))
#define writew(val, addr) outw((val), (unsigned long)(addr))
#define writel(val, addr) outl((val), (unsigned long)(addr))
#define NETDRV_W8_F(reg, val8)			\
do  while (0)
#define NETDRV_W16_F(reg, val16)		\
do  while (0)
#define NETDRV_W32_F(reg, val32)		\
do  while (0)
#define NETDRV_W8(reg, val8)	writeb((val8), ioaddr + (reg))
#define NETDRV_W16(reg, val16)	writew((val16), ioaddr + (reg))
#define NETDRV_W32(reg, val32)	writel((val32), ioaddr + (reg))
#define NETDRV_W8		NETDRV_W8_F
#define NETDRV_W16		NETDRV_W16_F
#define NETDRV_W32		NETDRV_W32_F
#define NETDRV_R8(reg)		readb(ioaddr + (reg))
#define NETDRV_R16(reg)		readw(ioaddr + (reg))
#define NETDRV_R32(reg)		((unsigned long) readl(ioaddr + (reg)))
static const u16 netdrv_intr_mask =
PCIErr | PCSTimeout | RxUnderrun | RxOverflow | RxFIFOOver |
TxErr | TxOK | RxErr | RxOK;
static const unsigned int netdrv_rx_config =
RxCfgEarlyRxNone | RxCfgRcv32K | RxNoWrap |
(RX_FIFO_THRESH << RxCfgFIFOShift) |
(RX_DMA_BURST << RxCfgDMAShift);
static int __devinit netdrv_init_board(struct pci_dev *pdev,
struct net_device **dev_out,
void **ioaddr_out)
static const struct net_device_ops netdrv_netdev_ops = ;
static int __devinit netdrv_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit netdrv_remove_one(struct pci_dev *pdev)
#define EE_SHIFT_CLK	0x04
#define EE_CS		0x08
#define EE_DATA_WRITE	0x02
#define EE_WRITE_0	0x00
#define EE_WRITE_1	0x02
#define EE_DATA_READ	0x01
#define EE_ENB		(0x80 | EE_CS)
#define eeprom_delay()	readl(ee_addr)
#define EE_WRITE_CMD	(5)
#define EE_READ_CMD	(6)
#define EE_ERASE_CMD	(7)
static int __devinit read_eeprom(void *ioaddr, int location, int addr_len)
#define MDIO_DIR	0x80
#define MDIO_DATA_OUT	0x04
#define MDIO_DATA_IN	0x02
#define MDIO_CLK	0x01
#define MDIO_WRITE0	(MDIO_DIR)
#define MDIO_WRITE1	(MDIO_DIR | MDIO_DATA_OUT)
#define mdio_delay()	readb(mdio_addr)
static char mii_2_8139_map[8] = ;
static void mdio_sync(void *mdio_addr)
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int location,
int value)
static int netdrv_open(struct net_device *dev)
static void netdrv_hw_start(struct net_device *dev)
static void netdrv_init_ring(struct net_device *dev)
static void netdrv_timer(unsigned long data)
static void netdrv_tx_clear(struct net_device *dev)
static void netdrv_tx_timeout(struct net_device *dev)
static int netdrv_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void netdrv_tx_interrupt(struct net_device *dev,
struct netdrv_private *tp,
void *ioaddr)
static void netdrv_rx_err(u32 rx_status, struct net_device *dev,
struct netdrv_private *tp, void *ioaddr)
static void netdrv_rx_interrupt(struct net_device *dev,
struct netdrv_private *tp, void *ioaddr)
static void netdrv_weird_interrupt(struct net_device *dev,
struct netdrv_private *tp,
void *ioaddr,
int status, int link_changed)
static irqreturn_t netdrv_interrupt(int irq, void *dev_instance)
static int netdrv_close(struct net_device *dev)
static int netdrv_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void netdrv_set_rx_mode(struct net_device *dev)
static int netdrv_suspend(struct pci_dev *pdev, pm_message_t state)
static int netdrv_resume(struct pci_dev *pdev)
static struct pci_driver netdrv_pci_driver = ;
static int __init netdrv_init_module(void)
static void __exit netdrv_cleanup_module(void)
module_init(netdrv_init_module);
module_exit(netdrv_cleanup_module);
