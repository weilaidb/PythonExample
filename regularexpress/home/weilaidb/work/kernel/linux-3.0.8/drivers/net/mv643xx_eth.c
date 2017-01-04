#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static char mv643xx_eth_driver_name[] = "mv643xx_eth";
static char mv643xx_eth_driver_version[] = "1.4";
#define PHY_ADDR			0x0000
#define SMI_REG				0x0004
#define  SMI_BUSY			0x10000000
#define  SMI_READ_VALID			0x08000000
#define  SMI_OPCODE_READ		0x04000000
#define  SMI_OPCODE_WRITE		0x00000000
#define ERR_INT_CAUSE			0x0080
#define  ERR_INT_SMI_DONE		0x00000010
#define ERR_INT_MASK			0x0084
#define WINDOW_BASE(w)			(0x0200 + ((w) << 3))
#define WINDOW_SIZE(w)			(0x0204 + ((w) << 3))
#define WINDOW_REMAP_HIGH(w)		(0x0280 + ((w) << 2))
#define WINDOW_BAR_ENABLE		0x0290
#define WINDOW_PROTECT(w)		(0x0294 + ((w) << 4))
#define PORT_CONFIG			0x0000
#define  UNICAST_PROMISCUOUS_MODE	0x00000001
#define PORT_CONFIG_EXT			0x0004
#define MAC_ADDR_LOW			0x0014
#define MAC_ADDR_HIGH			0x0018
#define SDMA_CONFIG			0x001c
#define  TX_BURST_SIZE_16_64BIT		0x01000000
#define  TX_BURST_SIZE_4_64BIT		0x00800000
#define  BLM_TX_NO_SWAP			0x00000020
#define  BLM_RX_NO_SWAP			0x00000010
#define  RX_BURST_SIZE_16_64BIT		0x00000008
#define  RX_BURST_SIZE_4_64BIT		0x00000004
#define PORT_SERIAL_CONTROL		0x003c
#define  SET_MII_SPEED_TO_100		0x01000000
#define  SET_GMII_SPEED_TO_1000		0x00800000
#define  SET_FULL_DUPLEX_MODE		0x00200000
#define  MAX_RX_PACKET_9700BYTE		0x000a0000
#define  DISABLE_AUTO_NEG_SPEED_GMII	0x00002000
#define  DO_NOT_FORCE_LINK_FAIL		0x00000400
#define  SERIAL_PORT_CONTROL_RESERVED	0x00000200
#define  DISABLE_AUTO_NEG_FOR_FLOW_CTRL	0x00000008
#define  DISABLE_AUTO_NEG_FOR_DUPLEX	0x00000004
#define  FORCE_LINK_PASS		0x00000002
#define  SERIAL_PORT_ENABLE		0x00000001
#define PORT_STATUS			0x0044
#define  TX_FIFO_EMPTY			0x00000400
#define  TX_IN_PROGRESS			0x00000080
#define  PORT_SPEED_MASK		0x00000030
#define  PORT_SPEED_1000		0x00000010
#define  PORT_SPEED_100			0x00000020
#define  PORT_SPEED_10			0x00000000
#define  FLOW_CONTROL_ENABLED		0x00000008
#define  FULL_DUPLEX			0x00000004
#define  LINK_UP			0x00000002
#define TXQ_COMMAND			0x0048
#define TXQ_FIX_PRIO_CONF		0x004c
#define TX_BW_RATE			0x0050
#define TX_BW_MTU			0x0058
#define TX_BW_BURST			0x005c
#define INT_CAUSE			0x0060
#define  INT_TX_END			0x07f80000
#define  INT_TX_END_0			0x00080000
#define  INT_RX				0x000003fc
#define  INT_RX_0			0x00000004
#define  INT_EXT			0x00000002
#define INT_CAUSE_EXT			0x0064
#define  INT_EXT_LINK_PHY		0x00110000
#define  INT_EXT_TX			0x000000ff
#define INT_MASK			0x0068
#define INT_MASK_EXT			0x006c
#define TX_FIFO_URGENT_THRESHOLD	0x0074
#define TXQ_FIX_PRIO_CONF_MOVED		0x00dc
#define TX_BW_RATE_MOVED		0x00e0
#define TX_BW_MTU_MOVED			0x00e8
#define TX_BW_BURST_MOVED		0x00ec
#define RXQ_CURRENT_DESC_PTR(q)		(0x020c + ((q) << 4))
#define RXQ_COMMAND			0x0280
#define TXQ_CURRENT_DESC_PTR(q)		(0x02c0 + ((q) << 2))
#define TXQ_BW_TOKENS(q)		(0x0300 + ((q) << 4))
#define TXQ_BW_CONF(q)			(0x0304 + ((q) << 4))
#define TXQ_BW_WRR_CONF(q)		(0x0308 + ((q) << 4))
#define MIB_COUNTERS(p)			(0x1000 + ((p) << 7))
#define SPECIAL_MCAST_TABLE(p)		(0x1400 + ((p) << 10))
#define OTHER_MCAST_TABLE(p)		(0x1500 + ((p) << 10))
#define UNICAST_TABLE(p)		(0x1600 + ((p) << 10))
#if defined(__BIG_ENDIAN)
#define PORT_SDMA_CONFIG_DEFAULT_VALUE		\
(RX_BURST_SIZE_4_64BIT	|	\
TX_BURST_SIZE_4_64BIT)
#elif defined(__LITTLE_ENDIAN)
#define PORT_SDMA_CONFIG_DEFAULT_VALUE		\
(RX_BURST_SIZE_4_64BIT	|	\
BLM_RX_NO_SWAP		|	\
BLM_TX_NO_SWAP		|	\
TX_BURST_SIZE_4_64BIT)
#error One of __BIG_ENDIAN or __LITTLE_ENDIAN must be defined
#define DEFAULT_RX_QUEUE_SIZE	128
#define DEFAULT_TX_QUEUE_SIZE	256
#define SKB_DMA_REALIGN		((PAGE_SIZE - NET_SKB_PAD) % SMP_CACHE_BYTES)
#if defined(__BIG_ENDIAN)
struct rx_desc ;
struct tx_desc ;
#elif defined(__LITTLE_ENDIAN)
struct rx_desc ;
struct tx_desc ;
#error One of __BIG_ENDIAN or __LITTLE_ENDIAN must be defined
#define BUFFER_OWNED_BY_DMA		0x80000000
#define ERROR_SUMMARY			0x00000001
#define LAYER_4_CHECKSUM_OK		0x40000000
#define RX_ENABLE_INTERRUPT		0x20000000
#define RX_FIRST_DESC			0x08000000
#define RX_LAST_DESC			0x04000000
#define RX_IP_HDR_OK			0x02000000
#define RX_PKT_IS_IPV4			0x01000000
#define RX_PKT_IS_ETHERNETV2		0x00800000
#define RX_PKT_LAYER4_TYPE_MASK		0x00600000
#define RX_PKT_LAYER4_TYPE_TCP_IPV4	0x00000000
#define RX_PKT_IS_VLAN_TAGGED		0x00080000
#define TX_ENABLE_INTERRUPT		0x00800000
#define GEN_CRC				0x00400000
#define TX_FIRST_DESC			0x00200000
#define TX_LAST_DESC			0x00100000
#define ZERO_PADDING			0x00080000
#define GEN_IP_V4_CHECKSUM		0x00040000
#define GEN_TCP_UDP_CHECKSUM		0x00020000
#define UDP_FRAME			0x00010000
#define MAC_HDR_EXTRA_4_BYTES		0x00008000
#define MAC_HDR_EXTRA_8_BYTES		0x00000200
#define TX_IHL_SHIFT			11
struct mv643xx_eth_shared_private ;
#define TX_BW_CONTROL_ABSENT		0
#define TX_BW_CONTROL_OLD_LAYOUT	1
#define TX_BW_CONTROL_NEW_LAYOUT	2
static int mv643xx_eth_open(struct net_device *dev);
static int mv643xx_eth_stop(struct net_device *dev);
struct mib_counters ;
struct lro_counters ;
struct rx_queue ;
struct tx_queue ;
struct mv643xx_eth_private ;
static inline u32 rdl(struct mv643xx_eth_private *mp, int offset)
static inline u32 rdlp(struct mv643xx_eth_private *mp, int offset)
static inline void wrl(struct mv643xx_eth_private *mp, int offset, u32 data)
static inline void wrlp(struct mv643xx_eth_private *mp, int offset, u32 data)
static struct mv643xx_eth_private *rxq_to_mp(struct rx_queue *rxq)
static struct mv643xx_eth_private *txq_to_mp(struct tx_queue *txq)
static void rxq_enable(struct rx_queue *rxq)
static void rxq_disable(struct rx_queue *rxq)
static void txq_reset_hw_ptr(struct tx_queue *txq)
static void txq_enable(struct tx_queue *txq)
static void txq_disable(struct tx_queue *txq)
static void txq_maybe_wake(struct tx_queue *txq)
static int
mv643xx_get_skb_header(struct sk_buff *skb, void **iphdr, void **tcph,
u64 *hdr_flags, void *priv)
static int rxq_process(struct rx_queue *rxq, int budget)
static int rxq_refill(struct rx_queue *rxq, int budget)
static inline unsigned int has_tiny_unaligned_frags(struct sk_buff *skb)
static void txq_submit_frag_skb(struct tx_queue *txq, struct sk_buff *skb)
static inline __be16 sum16_as_be(__sum16 sum)
static int txq_submit_skb(struct tx_queue *txq, struct sk_buff *skb)
static netdev_tx_t mv643xx_eth_xmit(struct sk_buff *skb, struct net_device *dev)
static void txq_kick(struct tx_queue *txq)
static int txq_reclaim(struct tx_queue *txq, int budget, int force)
static void tx_set_rate(struct mv643xx_eth_private *mp, int rate, int burst)
static void txq_set_rate(struct tx_queue *txq, int rate, int burst)
static void txq_set_fixed_prio_mode(struct tx_queue *txq)
static irqreturn_t mv643xx_eth_err_irq(int irq, void *dev_id)
static int smi_is_done(struct mv643xx_eth_shared_private *msp)
static int smi_wait_ready(struct mv643xx_eth_shared_private *msp)
static int smi_bus_read(struct mii_bus *bus, int addr, int reg)
static int smi_bus_write(struct mii_bus *bus, int addr, int reg, u16 val)
static struct net_device_stats *mv643xx_eth_get_stats(struct net_device *dev)
static void mv643xx_eth_grab_lro_stats(struct mv643xx_eth_private *mp)
static inline u32 mib_read(struct mv643xx_eth_private *mp, int offset)
static void mib_counters_clear(struct mv643xx_eth_private *mp)
static void mib_counters_update(struct mv643xx_eth_private *mp)
static void mib_counters_timer_wrapper(unsigned long _mp)
static unsigned int get_rx_coal(struct mv643xx_eth_private *mp)
static void set_rx_coal(struct mv643xx_eth_private *mp, unsigned int usec)
static unsigned int get_tx_coal(struct mv643xx_eth_private *mp)
static void set_tx_coal(struct mv643xx_eth_private *mp, unsigned int usec)
struct mv643xx_eth_stats ;
#define SSTAT(m)						\
#define MIBSTAT(m)						\
#define LROSTAT(m)						\
static const struct mv643xx_eth_stats mv643xx_eth_stats[] = ;
static int
mv643xx_eth_get_settings_phy(struct mv643xx_eth_private *mp,
struct ethtool_cmd *cmd)
static int
mv643xx_eth_get_settings_phyless(struct mv643xx_eth_private *mp,
struct ethtool_cmd *cmd)
static int
mv643xx_eth_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
mv643xx_eth_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void mv643xx_eth_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *drvinfo)
static int mv643xx_eth_nway_reset(struct net_device *dev)
static int
mv643xx_eth_get_coalesce(struct net_device *dev, struct ethtool_coalesce *ec)
static int
mv643xx_eth_set_coalesce(struct net_device *dev, struct ethtool_coalesce *ec)
static void
mv643xx_eth_get_ringparam(struct net_device *dev, struct ethtool_ringparam *er)
static int
mv643xx_eth_set_ringparam(struct net_device *dev, struct ethtool_ringparam *er)
static int
mv643xx_eth_set_features(struct net_device *dev, u32 features)
static void mv643xx_eth_get_strings(struct net_device *dev,
uint32_t stringset, uint8_t *data)
static void mv643xx_eth_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats,
uint64_t *data)
static int mv643xx_eth_get_sset_count(struct net_device *dev, int sset)
static const struct ethtool_ops mv643xx_eth_ethtool_ops = ;
static void uc_addr_get(struct mv643xx_eth_private *mp, unsigned char *addr)
static void uc_addr_set(struct mv643xx_eth_private *mp, unsigned char *addr)
static u32 uc_addr_filter_mask(struct net_device *dev)
static void mv643xx_eth_program_unicast_filter(struct net_device *dev)
static int addr_crc(unsigned char *addr)
static void mv643xx_eth_program_multicast_filter(struct net_device *dev)
static void mv643xx_eth_set_rx_mode(struct net_device *dev)
static int mv643xx_eth_set_mac_address(struct net_device *dev, void *addr)
static int rxq_init(struct mv643xx_eth_private *mp, int index)
static void rxq_deinit(struct rx_queue *rxq)
static int txq_init(struct mv643xx_eth_private *mp, int index)
static void txq_deinit(struct tx_queue *txq)
static int mv643xx_eth_collect_events(struct mv643xx_eth_private *mp)
static irqreturn_t mv643xx_eth_irq(int irq, void *dev_id)
static void handle_link_event(struct mv643xx_eth_private *mp)
static int mv643xx_eth_poll(struct napi_struct *napi, int budget)
static inline void oom_timer_wrapper(unsigned long data)
static void phy_reset(struct mv643xx_eth_private *mp)
static void port_start(struct mv643xx_eth_private *mp)
static void mv643xx_eth_recalc_skb_size(struct mv643xx_eth_private *mp)
static int mv643xx_eth_open(struct net_device *dev)
static void port_reset(struct mv643xx_eth_private *mp)
static int mv643xx_eth_stop(struct net_device *dev)
static int mv643xx_eth_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int mv643xx_eth_change_mtu(struct net_device *dev, int new_mtu)
static void tx_timeout_task(struct work_struct *ugly)
static void mv643xx_eth_tx_timeout(struct net_device *dev)
static void mv643xx_eth_netpoll(struct net_device *dev)
static void
mv643xx_eth_conf_mbus_windows(struct mv643xx_eth_shared_private *msp,
struct mbus_dram_target_info *dram)
static void infer_hw_params(struct mv643xx_eth_shared_private *msp)
static int mv643xx_eth_shared_probe(struct platform_device *pdev)
static int mv643xx_eth_shared_remove(struct platform_device *pdev)
static struct platform_driver mv643xx_eth_shared_driver = ;
static void phy_addr_set(struct mv643xx_eth_private *mp, int phy_addr)
static int phy_addr_get(struct mv643xx_eth_private *mp)
static void set_params(struct mv643xx_eth_private *mp,
struct mv643xx_eth_platform_data *pd)
static struct phy_device *phy_scan(struct mv643xx_eth_private *mp,
int phy_addr)
static void phy_init(struct mv643xx_eth_private *mp, int speed, int duplex)
static void init_pscr(struct mv643xx_eth_private *mp, int speed, int duplex)
static const struct net_device_ops mv643xx_eth_netdev_ops = ;
static int mv643xx_eth_probe(struct platform_device *pdev)
static int mv643xx_eth_remove(struct platform_device *pdev)
static void mv643xx_eth_shutdown(struct platform_device *pdev)
static struct platform_driver mv643xx_eth_driver = ;
static int __init mv643xx_eth_init_module(void)
module_init(mv643xx_eth_init_module);
static void __exit mv643xx_eth_cleanup_module(void)
module_exit(mv643xx_eth_cleanup_module);
MODULE_AUTHOR("Rabeeh Khoury, Assaf Hoffman, Matthew Dharm, "
"Manish Lachwani, Dale Farnsworth and Lennert Buytenhek");
MODULE_DESCRIPTION("Ethernet driver for Marvell MV643XX");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" MV643XX_ETH_SHARED_NAME);
MODULE_ALIAS("platform:" MV643XX_ETH_NAME);
