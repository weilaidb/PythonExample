static int buffer_size = 0x8000;
module_param(buffer_size, int, 0);
MODULE_PARM_DESC(buffer_size, "DMA buffer allocation size");
#define	MODER		0x00
#define	INT_SOURCE	0x04
#define	INT_MASK	0x08
#define	IPGT		0x0c
#define	IPGR1		0x10
#define	IPGR2		0x14
#define	PACKETLEN	0x18
#define	COLLCONF	0x1c
#define	TX_BD_NUM	0x20
#define	CTRLMODER	0x24
#define	MIIMODER	0x28
#define	MIICOMMAND	0x2c
#define	MIIADDRESS	0x30
#define	MIITX_DATA	0x34
#define	MIIRX_DATA	0x38
#define	MIISTATUS	0x3c
#define	MAC_ADDR0	0x40
#define	MAC_ADDR1	0x44
#define	ETH_HASH0	0x48
#define	ETH_HASH1	0x4c
#define	ETH_TXCTRL	0x50
#define	MODER_RXEN	(1 <<  0)
#define	MODER_TXEN	(1 <<  1)
#define	MODER_NOPRE	(1 <<  2)
#define	MODER_BRO	(1 <<  3)
#define	MODER_IAM	(1 <<  4)
#define	MODER_PRO	(1 <<  5)
#define	MODER_IFG	(1 <<  6)
#define	MODER_LOOP	(1 <<  7)
#define	MODER_NBO	(1 <<  8)
#define	MODER_EDE	(1 <<  9)
#define	MODER_FULLD	(1 << 10)
#define	MODER_RESET	(1 << 11)
#define	MODER_DCRC	(1 << 12)
#define	MODER_CRC	(1 << 13)
#define	MODER_HUGE	(1 << 14)
#define	MODER_PAD	(1 << 15)
#define	MODER_RSM	(1 << 16)
#define	INT_MASK_TXF	(1 << 0)
#define	INT_MASK_TXE	(1 << 1)
#define	INT_MASK_RXF	(1 << 2)
#define	INT_MASK_RXE	(1 << 3)
#define	INT_MASK_BUSY	(1 << 4)
#define	INT_MASK_TXC	(1 << 5)
#define	INT_MASK_RXC	(1 << 6)
#define	INT_MASK_TX	(INT_MASK_TXF | INT_MASK_TXE)
#define	INT_MASK_RX	(INT_MASK_RXF | INT_MASK_RXE)
#define	INT_MASK_ALL ( \
INT_MASK_TXF | INT_MASK_TXE | \
INT_MASK_RXF | INT_MASK_RXE | \
INT_MASK_TXC | INT_MASK_RXC | \
INT_MASK_BUSY \
)
#define	PACKETLEN_MIN(min)		(((min) & 0xffff) << 16)
#define	PACKETLEN_MAX(max)		(((max) & 0xffff) <<  0)
#define	PACKETLEN_MIN_MAX(min, max)	(PACKETLEN_MIN(min) | \
PACKETLEN_MAX(max))
#define	TX_BD_NUM_VAL(x)	(((x) <= 0x80) ? (x) : 0x80)
#define	CTRLMODER_PASSALL	(1 << 0)
#define	CTRLMODER_RXFLOW	(1 << 1)
#define	CTRLMODER_TXFLOW	(1 << 2)
#define	MIIMODER_CLKDIV(x)	((x) & 0xfe)
#define	MIIMODER_NOPRE		(1 << 8)
#define	MIICOMMAND_SCAN		(1 << 0)
#define	MIICOMMAND_READ		(1 << 1)
#define	MIICOMMAND_WRITE	(1 << 2)
#define	MIIADDRESS_FIAD(x)		(((x) & 0x1f) << 0)
#define	MIIADDRESS_RGAD(x)		(((x) & 0x1f) << 8)
#define	MIIADDRESS_ADDR(phy, reg)	(MIIADDRESS_FIAD(phy) | \
MIIADDRESS_RGAD(reg))
#define	MIITX_DATA_VAL(x)	((x) & 0xffff)
#define	MIIRX_DATA_VAL(x)	((x) & 0xffff)
#define	MIISTATUS_LINKFAIL	(1 << 0)
#define	MIISTATUS_BUSY		(1 << 1)
#define	MIISTATUS_INVALID	(1 << 2)
#define	TX_BD_CS		(1 <<  0)
#define	TX_BD_DF		(1 <<  1)
#define	TX_BD_LC		(1 <<  2)
#define	TX_BD_RL		(1 <<  3)
#define	TX_BD_RETRY_MASK	(0x00f0)
#define	TX_BD_RETRY(x)		(((x) & 0x00f0) >>  4)
#define	TX_BD_UR		(1 <<  8)
#define	TX_BD_CRC		(1 << 11)
#define	TX_BD_PAD		(1 << 12)
#define	TX_BD_WRAP		(1 << 13)
#define	TX_BD_IRQ		(1 << 14)
#define	TX_BD_READY		(1 << 15)
#define	TX_BD_LEN(x)		(((x) & 0xffff) << 16)
#define	TX_BD_LEN_MASK		(0xffff << 16)
#define	TX_BD_STATS		(TX_BD_CS | TX_BD_DF | TX_BD_LC | \
TX_BD_RL | TX_BD_RETRY_MASK | TX_BD_UR)
#define	RX_BD_LC	(1 <<  0)
#define	RX_BD_CRC	(1 <<  1)
#define	RX_BD_SF	(1 <<  2)
#define	RX_BD_TL	(1 <<  3)
#define	RX_BD_DN	(1 <<  4)
#define	RX_BD_IS	(1 <<  5)
#define	RX_BD_OR	(1 <<  6)
#define	RX_BD_MISS	(1 <<  7)
#define	RX_BD_CF	(1 <<  8)
#define	RX_BD_WRAP	(1 << 13)
#define	RX_BD_IRQ	(1 << 14)
#define	RX_BD_EMPTY	(1 << 15)
#define	RX_BD_LEN(x)	(((x) & 0xffff) << 16)
#define	RX_BD_STATS	(RX_BD_LC | RX_BD_CRC | RX_BD_SF | RX_BD_TL | \
RX_BD_DN | RX_BD_IS | RX_BD_OR | RX_BD_MISS)
#define	ETHOC_BUFSIZ		1536
#define	ETHOC_ZLEN		64
#define	ETHOC_BD_BASE		0x400
#define	ETHOC_TIMEOUT		(HZ / 2)
#define	ETHOC_MII_TIMEOUT	(1 + (HZ / 5))
struct ethoc ;
struct ethoc_bd ;
static inline u32 ethoc_read(struct ethoc *dev, loff_t offset)
static inline void ethoc_write(struct ethoc *dev, loff_t offset, u32 data)
static inline void ethoc_read_bd(struct ethoc *dev, int index,
struct ethoc_bd *bd)
static inline void ethoc_write_bd(struct ethoc *dev, int index,
const struct ethoc_bd *bd)
static inline void ethoc_enable_irq(struct ethoc *dev, u32 mask)
static inline void ethoc_disable_irq(struct ethoc *dev, u32 mask)
static inline void ethoc_ack_irq(struct ethoc *dev, u32 mask)
static inline void ethoc_enable_rx_and_tx(struct ethoc *dev)
static inline void ethoc_disable_rx_and_tx(struct ethoc *dev)
static int ethoc_init_ring(struct ethoc *dev, unsigned long mem_start)
static int ethoc_reset(struct ethoc *dev)
static unsigned int ethoc_update_rx_stats(struct ethoc *dev,
struct ethoc_bd *bd)
static int ethoc_rx(struct net_device *dev, int limit)
static void ethoc_update_tx_stats(struct ethoc *dev, struct ethoc_bd *bd)
static int ethoc_tx(struct net_device *dev, int limit)
static irqreturn_t ethoc_interrupt(int irq, void *dev_id)
static int ethoc_get_mac_address(struct net_device *dev, void *addr)
static int ethoc_poll(struct napi_struct *napi, int budget)
static int ethoc_mdio_read(struct mii_bus *bus, int phy, int reg)
static int ethoc_mdio_write(struct mii_bus *bus, int phy, int reg, u16 val)
static int ethoc_mdio_reset(struct mii_bus *bus)
static void ethoc_mdio_poll(struct net_device *dev)
static int __devinit ethoc_mdio_probe(struct net_device *dev)
static int ethoc_open(struct net_device *dev)
static int ethoc_stop(struct net_device *dev)
static int ethoc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int ethoc_config(struct net_device *dev, struct ifmap *map)
static int ethoc_set_mac_address(struct net_device *dev, void *addr)
static void ethoc_set_multicast_list(struct net_device *dev)
static int ethoc_change_mtu(struct net_device *dev, int new_mtu)
static void ethoc_tx_timeout(struct net_device *dev)
static netdev_tx_t ethoc_start_xmit(struct sk_buff *skb, struct net_device *dev)
static const struct net_device_ops ethoc_netdev_ops = ;
static int __devinit ethoc_probe(struct platform_device *pdev)
static int __devexit ethoc_remove(struct platform_device *pdev)
static int ethoc_suspend(struct platform_device *pdev, pm_message_t state)
static int ethoc_resume(struct platform_device *pdev)
# define ethoc_suspend NULL
# define ethoc_resume  NULL
static struct of_device_id ethoc_match[] = ;
MODULE_DEVICE_TABLE(of, ethoc_match);
static struct platform_driver ethoc_driver = ;
static int __init ethoc_init(void)
static void __exit ethoc_exit(void)
module_init(ethoc_init);
module_exit(ethoc_exit);
MODULE_AUTHOR("Thierry Reding <thierry.reding@avionic-design.de>");
MODULE_DESCRIPTION("OpenCores Ethernet MAC driver");
MODULE_LICENSE("GPL v2");
