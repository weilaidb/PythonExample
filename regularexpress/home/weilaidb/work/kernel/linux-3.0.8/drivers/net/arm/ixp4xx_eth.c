#define DEBUG_DESC		0
#define DEBUG_RX		0
#define DEBUG_TX		0
#define DEBUG_PKT_BYTES		0
#define DEBUG_MDIO		0
#define DEBUG_CLOSE		0
#define DRV_NAME		"ixp4xx_eth"
#define MAX_NPES		3
#define RX_DESCS		64
#define TX_DESCS		16
#define TXDONE_QUEUE_LEN	64
#define POOL_ALLOC_SIZE		(sizeof(struct desc) * (RX_DESCS + TX_DESCS))
#define REGS_SIZE		0x1000
#define MAX_MRU			1536
#define RX_BUFF_SIZE		ALIGN((NET_IP_ALIGN) + MAX_MRU, 4)
#define NAPI_WEIGHT		16
#define MDIO_INTERVAL		(3 * HZ)
#define MAX_MDIO_RETRIES	100
#define MAX_CLOSE_WAIT		1000
#define NPE_ID(port_id)		((port_id) >> 4)
#define PHYSICAL_ID(port_id)	((NPE_ID(port_id) + 2) % 3)
#define TX_QUEUE(port_id)	(NPE_ID(port_id) + 23)
#define RXFREE_QUEUE(port_id)	(NPE_ID(port_id) + 26)
#define TXDONE_QUEUE		31
#define PTP_SLAVE_MODE		1
#define PTP_MASTER_MODE		2
#define PORT2CHANNEL(p)		NPE_ID(p->id)
#define TX_CNTRL0_TX_EN		0x01
#define TX_CNTRL0_HALFDUPLEX	0x02
#define TX_CNTRL0_RETRY		0x04
#define TX_CNTRL0_PAD_EN	0x08
#define TX_CNTRL0_APPEND_FCS	0x10
#define TX_CNTRL0_2DEFER	0x20
#define TX_CNTRL0_RMII		0x40
#define TX_CNTRL1_RETRIES	0x0F
#define RX_CNTRL0_RX_EN		0x01
#define RX_CNTRL0_PADSTRIP_EN	0x02
#define RX_CNTRL0_SEND_FCS	0x04
#define RX_CNTRL0_PAUSE_EN	0x08
#define RX_CNTRL0_LOOP_EN	0x10
#define RX_CNTRL0_ADDR_FLTR_EN	0x20
#define RX_CNTRL0_RX_RUNT_EN	0x40
#define RX_CNTRL0_BCAST_DIS	0x80
#define RX_CNTRL1_DEFER_EN	0x01
#define CORE_RESET		0x01
#define CORE_RX_FIFO_FLUSH	0x02
#define CORE_TX_FIFO_FLUSH	0x04
#define CORE_SEND_JAM		0x08
#define CORE_MDC_EN		0x10
#define DEFAULT_TX_CNTRL0	(TX_CNTRL0_TX_EN | TX_CNTRL0_RETRY |	\
TX_CNTRL0_PAD_EN | TX_CNTRL0_APPEND_FCS | \
TX_CNTRL0_2DEFER)
#define DEFAULT_RX_CNTRL0	RX_CNTRL0_RX_EN
#define DEFAULT_CORE_CNTRL	CORE_MDC_EN
#define NPE_GETSTATUS			0x00
#define NPE_EDB_SETPORTADDRESS		0x01
#define NPE_EDB_GETMACADDRESSDATABASE	0x02
#define NPE_EDB_SETMACADDRESSSDATABASE	0x03
#define NPE_GETSTATS			0x04
#define NPE_RESETSTATS			0x05
#define NPE_SETMAXFRAMELENGTHS		0x06
#define NPE_VLAN_SETRXTAGMODE		0x07
#define NPE_VLAN_SETDEFAULTRXVID	0x08
#define NPE_VLAN_SETPORTVLANTABLEENTRY	0x09
#define NPE_VLAN_SETPORTVLANTABLERANGE	0x0A
#define NPE_VLAN_SETRXQOSENTRY		0x0B
#define NPE_VLAN_SETPORTIDEXTRACTIONMODE 0x0C
#define NPE_STP_SETBLOCKINGSTATE	0x0D
#define NPE_FW_SETFIREWALLMODE		0x0E
#define NPE_PC_SETFRAMECONTROLDURATIONID 0x0F
#define NPE_PC_SETAPMACTABLE		0x11
#define NPE_SETLOOPBACK_MODE		0x12
#define NPE_PC_SETBSSIDTABLE		0x13
#define NPE_ADDRESS_FILTER_CONFIG	0x14
#define NPE_APPENDFCSCONFIG		0x15
#define NPE_NOTIFY_MAC_RECOVERY_DONE	0x16
#define NPE_MAC_RECOVERY_START		0x17
typedef struct sk_buff buffer_t;
#define free_buffer dev_kfree_skb
#define free_buffer_irq dev_kfree_skb_irq
typedef void buffer_t;
#define free_buffer kfree
#define free_buffer_irq kfree
struct eth_regs ;
struct port ;
struct msg ;
struct desc ;
#define rx_desc_phys(port, n)	((port)->desc_tab_phys +		\
(n) * sizeof(struct desc))
#define rx_desc_ptr(port, n)	(&(port)->desc_tab[n])
#define tx_desc_phys(port, n)	((port)->desc_tab_phys +		\
((n) + RX_DESCS) * sizeof(struct desc))
#define tx_desc_ptr(port, n)	(&(port)->desc_tab[(n) + RX_DESCS])
static inline void memcpy_swab32(u32 *dest, u32 *src, int cnt)
static spinlock_t mdio_lock;
static struct eth_regs __iomem *mdio_regs;
static struct mii_bus *mdio_bus;
static int ports_open;
static struct port *npe_port_tab[MAX_NPES];
static struct dma_pool *dma_pool;
static struct sock_filter ptp_filter[] = ;
static int ixp_ptp_match(struct sk_buff *skb, u16 uid_hi, u32 uid_lo, u16 seqid)
static void ixp_rx_timestamp(struct port *port, struct sk_buff *skb)
static void ixp_tx_timestamp(struct port *port, struct sk_buff *skb)
static int hwtstamp_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int ixp4xx_mdio_cmd(struct mii_bus *bus, int phy_id, int location,
int write, u16 cmd)
static int ixp4xx_mdio_read(struct mii_bus *bus, int phy_id, int location)
static int ixp4xx_mdio_write(struct mii_bus *bus, int phy_id, int location,
u16 val)
static int ixp4xx_mdio_register(void)
static void ixp4xx_mdio_remove(void)
static void ixp4xx_adjust_link(struct net_device *dev)
static inline void debug_pkt(struct net_device *dev, const char *func,
u8 *data, int len)
static inline void debug_desc(u32 phys, struct desc *desc)
static inline int queue_get_desc(unsigned int queue, struct port *port,
int is_tx)
static inline void queue_put_desc(unsigned int queue, u32 phys,
struct desc *desc)
static inline void dma_unmap_tx(struct port *port, struct desc *desc)
static void eth_rx_irq(void *pdev)
static int eth_poll(struct napi_struct *napi, int budget)
static void eth_txdone_irq(void *unused)
static int eth_xmit(struct sk_buff *skb, struct net_device *dev)
static void eth_set_mcast_list(struct net_device *dev)
static int eth_ioctl(struct net_device *dev, struct ifreq *req, int cmd)
static void ixp4xx_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int ixp4xx_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ixp4xx_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ixp4xx_nway_reset(struct net_device *dev)
static const struct ethtool_ops ixp4xx_ethtool_ops = ;
static int request_queues(struct port *port)
static void release_queues(struct port *port)
static int init_queues(struct port *port)
static void destroy_queues(struct port *port)
static int eth_open(struct net_device *dev)
static int eth_close(struct net_device *dev)
static const struct net_device_ops ixp4xx_netdev_ops = ;
static int __devinit eth_init_one(struct platform_device *pdev)
static int __devexit eth_remove_one(struct platform_device *pdev)
static struct platform_driver ixp4xx_eth_driver = ;
static int __init eth_init_module(void)
static void __exit eth_cleanup_module(void)
MODULE_AUTHOR("Krzysztof Halasa");
MODULE_DESCRIPTION("Intel IXP4xx Ethernet driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:ixp4xx_eth");
module_init(eth_init_module);
module_exit(eth_cleanup_module);
