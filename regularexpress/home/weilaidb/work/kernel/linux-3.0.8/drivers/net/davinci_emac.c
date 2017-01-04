static int debug_level;
module_param(debug_level, int, 0);
MODULE_PARM_DESC(debug_level, "DaVinci EMAC debug level (NETIF_MSG bits)");
#define DAVINCI_EMAC_DEBUG	(NETIF_MSG_DRV | \
NETIF_MSG_PROBE | \
NETIF_MSG_LINK | \
NETIF_MSG_TIMER | \
NETIF_MSG_IFDOWN | \
NETIF_MSG_IFUP | \
NETIF_MSG_RX_ERR | \
NETIF_MSG_TX_ERR | \
NETIF_MSG_TX_QUEUED | \
NETIF_MSG_INTR | \
NETIF_MSG_TX_DONE | \
NETIF_MSG_RX_STATUS | \
NETIF_MSG_PKTDATA | \
NETIF_MSG_HW | \
NETIF_MSG_WOL)
#define EMAC_MAJOR_VERSION	6
#define EMAC_MINOR_VERSION	1
#define EMAC_MODULE_VERSION	"6.1"
MODULE_VERSION(EMAC_MODULE_VERSION);
static const char emac_version_string[] = "TI DaVinci EMAC Linux v6.1";
#define EMAC_DEF_PASS_CRC		(0)
#define EMAC_DEF_QOS_EN			(0)
#define EMAC_DEF_NO_BUFF_CHAIN		(0)
#define EMAC_DEF_MACCTRL_FRAME_EN	(0)
#define EMAC_DEF_SHORT_FRAME_EN		(0)
#define EMAC_DEF_ERROR_FRAME_EN		(0)
#define EMAC_DEF_PROM_EN		(0)
#define EMAC_DEF_PROM_CH		(0)
#define EMAC_DEF_BCAST_EN		(1)
#define EMAC_DEF_BCAST_CH		(0)
#define EMAC_DEF_MCAST_EN		(1)
#define EMAC_DEF_MCAST_CH		(0)
#define EMAC_DEF_TXPRIO_FIXED		(1)
#define EMAC_DEF_TXPACING_EN		(0)
#define EMAC_DEF_BUFFER_OFFSET		(0)
#define EMAC_DEF_MIN_ETHPKTSIZE		(60)
#define EMAC_DEF_MAX_FRAME_SIZE		(1500 + 14 + 4 + 4)
#define EMAC_DEF_TX_CH			(0)
#define EMAC_DEF_RX_CH			(0)
#define EMAC_DEF_RX_NUM_DESC		(128)
#define EMAC_DEF_MAX_TX_CH		(1)
#define EMAC_DEF_MAX_RX_CH		(1)
#define EMAC_POLL_WEIGHT		(64)
#define EMAC_DEF_TX_MAX_SERVICE		(32)
#define EMAC_DEF_RX_MAX_SERVICE		(64)
#define EMAC_ALL_MULTI_REG_VALUE	(0xFFFFFFFF)
#define EMAC_NUM_MULTICAST_BITS		(64)
#define EMAC_TX_CONTROL_TX_ENABLE_VAL	(0x1)
#define EMAC_RX_CONTROL_RX_ENABLE_VAL	(0x1)
#define EMAC_MAC_HOST_ERR_INTMASK_VAL	(0x2)
#define EMAC_RX_UNICAST_CLEAR_ALL	(0xFF)
#define EMAC_INT_MASK_CLEAR		(0xFF)
#define EMAC_RXMBP_PASSCRC_MASK		BIT(30)
#define EMAC_RXMBP_QOSEN_MASK		BIT(29)
#define EMAC_RXMBP_NOCHAIN_MASK		BIT(28)
#define EMAC_RXMBP_CMFEN_MASK		BIT(24)
#define EMAC_RXMBP_CSFEN_MASK		BIT(23)
#define EMAC_RXMBP_CEFEN_MASK		BIT(22)
#define EMAC_RXMBP_CAFEN_MASK		BIT(21)
#define EMAC_RXMBP_PROMCH_SHIFT		(16)
#define EMAC_RXMBP_PROMCH_MASK		(0x7 << 16)
#define EMAC_RXMBP_BROADEN_MASK		BIT(13)
#define EMAC_RXMBP_BROADCH_SHIFT	(8)
#define EMAC_RXMBP_BROADCH_MASK		(0x7 << 8)
#define EMAC_RXMBP_MULTIEN_MASK		BIT(5)
#define EMAC_RXMBP_MULTICH_SHIFT	(0)
#define EMAC_RXMBP_MULTICH_MASK		(0x7)
#define EMAC_RXMBP_CHMASK		(0x7)
# define EMAC_MBP_RXPROMISC		(0x00200000)
# define EMAC_MBP_PROMISCCH(ch)		(((ch) & 0x7) << 16)
# define EMAC_MBP_RXBCAST		(0x00002000)
# define EMAC_MBP_BCASTCHAN(ch)		(((ch) & 0x7) << 8)
# define EMAC_MBP_RXMCAST		(0x00000020)
# define EMAC_MBP_MCASTCHAN(ch)		((ch) & 0x7)
#define EMAC_MACCONTROL_TXPTYPE		BIT(9)
#define EMAC_MACCONTROL_TXPACEEN	BIT(6)
#define EMAC_MACCONTROL_GMIIEN		BIT(5)
#define EMAC_MACCONTROL_GIGABITEN	BIT(7)
#define EMAC_MACCONTROL_FULLDUPLEXEN	BIT(0)
#define EMAC_MACCONTROL_RMIISPEED_MASK	BIT(15)
#define EMAC_DM646X_MACCONTORL_GIG	BIT(7)
#define EMAC_DM646X_MACCONTORL_GIGFORCE	BIT(17)
#define EMAC_MACSTATUS_TXERRCODE_MASK	(0xF00000)
#define EMAC_MACSTATUS_TXERRCODE_SHIFT	(20)
#define EMAC_MACSTATUS_TXERRCH_MASK	(0x7)
#define EMAC_MACSTATUS_TXERRCH_SHIFT	(16)
#define EMAC_MACSTATUS_RXERRCODE_MASK	(0xF000)
#define EMAC_MACSTATUS_RXERRCODE_SHIFT	(12)
#define EMAC_MACSTATUS_RXERRCH_MASK	(0x7)
#define EMAC_MACSTATUS_RXERRCH_SHIFT	(8)
#define EMAC_RX_MAX_LEN_MASK		(0xFFFF)
#define EMAC_RX_BUFFER_OFFSET_MASK	(0xFFFF)
#define EMAC_DM644X_MAC_IN_VECTOR_HOST_INT	BIT(17)
#define EMAC_DM644X_MAC_IN_VECTOR_STATPEND_INT	BIT(16)
#define EMAC_DM644X_MAC_IN_VECTOR_RX_INT_VEC	BIT(8)
#define EMAC_DM644X_MAC_IN_VECTOR_TX_INT_VEC	BIT(0)
#define EMAC_DM646X_MAC_IN_VECTOR_RX_INT_VEC	BIT(EMAC_DEF_RX_CH)
#define EMAC_DM646X_MAC_IN_VECTOR_TX_INT_VEC	BIT(16 + EMAC_DEF_TX_CH)
#define EMAC_DM646X_MAC_IN_VECTOR_HOST_INT	BIT(26)
#define EMAC_DM646X_MAC_IN_VECTOR_STATPEND_INT	BIT(27)
#define EMAC_CPPI_SOP_BIT		BIT(31)
#define EMAC_CPPI_EOP_BIT		BIT(30)
#define EMAC_CPPI_OWNERSHIP_BIT		BIT(29)
#define EMAC_CPPI_EOQ_BIT		BIT(28)
#define EMAC_CPPI_TEARDOWN_COMPLETE_BIT BIT(27)
#define EMAC_CPPI_PASS_CRC_BIT		BIT(26)
#define EMAC_RX_BD_BUF_SIZE		(0xFFFF)
#define EMAC_BD_LENGTH_FOR_CACHE	(16)
#define EMAC_RX_BD_PKT_LENGTH_MASK	(0xFFFF)
#define EMAC_MAX_TXRX_CHANNELS		 (8)
#define EMAC_DEF_MAX_MULTICAST_ADDRESSES (64)
#define EMAC_MACINVECTOR	0x90
#define EMAC_DM646X_MACEOIVECTOR	0x94
#define EMAC_MACINTSTATRAW	0xB0
#define EMAC_MACINTSTATMASKED	0xB4
#define EMAC_MACINTMASKSET	0xB8
#define EMAC_MACINTMASKCLEAR	0xBC
#define EMAC_RXMBPENABLE	0x100
#define EMAC_RXUNICASTSET	0x104
#define EMAC_RXUNICASTCLEAR	0x108
#define EMAC_RXMAXLEN		0x10C
#define EMAC_RXBUFFEROFFSET	0x110
#define EMAC_RXFILTERLOWTHRESH	0x114
#define EMAC_MACCONTROL		0x160
#define EMAC_MACSTATUS		0x164
#define EMAC_EMCONTROL		0x168
#define EMAC_FIFOCONTROL	0x16C
#define EMAC_MACCONFIG		0x170
#define EMAC_SOFTRESET		0x174
#define EMAC_MACSRCADDRLO	0x1D0
#define EMAC_MACSRCADDRHI	0x1D4
#define EMAC_MACHASH1		0x1D8
#define EMAC_MACHASH2		0x1DC
#define EMAC_MACADDRLO		0x500
#define EMAC_MACADDRHI		0x504
#define EMAC_MACINDEX		0x508
#define EMAC_RXGOODFRAMES	0x200
#define EMAC_RXBCASTFRAMES	0x204
#define EMAC_RXMCASTFRAMES	0x208
#define EMAC_RXPAUSEFRAMES	0x20C
#define EMAC_RXCRCERRORS	0x210
#define EMAC_RXALIGNCODEERRORS	0x214
#define EMAC_RXOVERSIZED	0x218
#define EMAC_RXJABBER		0x21C
#define EMAC_RXUNDERSIZED	0x220
#define EMAC_RXFRAGMENTS	0x224
#define EMAC_RXFILTERED		0x228
#define EMAC_RXQOSFILTERED	0x22C
#define EMAC_RXOCTETS		0x230
#define EMAC_TXGOODFRAMES	0x234
#define EMAC_TXBCASTFRAMES	0x238
#define EMAC_TXMCASTFRAMES	0x23C
#define EMAC_TXPAUSEFRAMES	0x240
#define EMAC_TXDEFERRED		0x244
#define EMAC_TXCOLLISION	0x248
#define EMAC_TXSINGLECOLL	0x24C
#define EMAC_TXMULTICOLL	0x250
#define EMAC_TXEXCESSIVECOLL	0x254
#define EMAC_TXLATECOLL		0x258
#define EMAC_TXUNDERRUN		0x25C
#define EMAC_TXCARRIERSENSE	0x260
#define EMAC_TXOCTETS		0x264
#define EMAC_NETOCTETS		0x280
#define EMAC_RXSOFOVERRUNS	0x284
#define EMAC_RXMOFOVERRUNS	0x288
#define EMAC_RXDMAOVERRUNS	0x28C
#define EMAC_CTRL_EWCTL		(0x4)
#define EMAC_CTRL_EWINTTCNT	(0x8)
#define EMAC_DM644X_EWINTCNT_MASK	0x1FFFF
#define EMAC_DM644X_INTMIN_INTVL	0x1
#define EMAC_DM644X_INTMAX_INTVL	(EMAC_DM644X_EWINTCNT_MASK)
#define EMAC_DM646X_CMINTCTRL	0x0C
#define EMAC_DM646X_CMRXINTEN	0x14
#define EMAC_DM646X_CMTXINTEN	0x18
#define EMAC_DM646X_CMRXINTMAX	0x70
#define EMAC_DM646X_CMTXINTMAX	0x74
#define EMAC_DM646X_INTPACEEN		(0x3 << 16)
#define EMAC_DM646X_INTPRESCALE_MASK	(0x7FF << 0)
#define EMAC_DM646X_CMINTMAX_CNT	63
#define EMAC_DM646X_CMINTMIN_CNT	2
#define EMAC_DM646X_CMINTMAX_INTVL	(1000 / EMAC_DM646X_CMINTMIN_CNT)
#define EMAC_DM646X_CMINTMIN_INTVL	((1000 / EMAC_DM646X_CMINTMAX_CNT) + 1)
#define EMAC_DM646X_MAC_EOI_C0_RXEN	(0x01)
#define EMAC_DM646X_MAC_EOI_C0_TXEN	(0x02)
#define EMAC_STATS_CLR_MASK    (0xFFFFFFFF)
struct emac_priv ;
static struct clk *emac_clk;
static unsigned long emac_bus_frequency;
static char *emac_txhost_errcodes[16] = ;
static char *emac_rxhost_errcodes[16] = ;
#define emac_read(reg)		  ioread32(priv->emac_base + (reg))
#define emac_write(reg, val)      iowrite32(val, priv->emac_base + (reg))
#define emac_ctrl_read(reg)	  ioread32((priv->ctrl_base + (reg)))
#define emac_ctrl_write(reg, val) iowrite32(val, (priv->ctrl_base + (reg)))
static void emac_dump_regs(struct emac_priv *priv)
static void emac_get_drvinfo(struct net_device *ndev,
struct ethtool_drvinfo *info)
static int emac_get_settings(struct net_device *ndev,
struct ethtool_cmd *ecmd)
static int emac_set_settings(struct net_device *ndev, struct ethtool_cmd *ecmd)
static int emac_get_coalesce(struct net_device *ndev,
struct ethtool_coalesce *coal)
static int emac_set_coalesce(struct net_device *ndev,
struct ethtool_coalesce *coal)
static const struct ethtool_ops ethtool_ops = ;
static void emac_update_phystatus(struct emac_priv *priv)
static u32 hash_get(u8 *addr)
static int hash_add(struct emac_priv *priv, u8 *mac_addr)
static int hash_del(struct emac_priv *priv, u8 *mac_addr)
#define EMAC_MULTICAST_ADD	0
#define EMAC_MULTICAST_DEL	1
#define EMAC_ALL_MULTI_SET	2
#define EMAC_ALL_MULTI_CLR	3
static void emac_add_mcast(struct emac_priv *priv, u32 action, u8 *mac_addr)
static void emac_dev_mcast_set(struct net_device *ndev)
static void emac_int_disable(struct emac_priv *priv)
static void emac_int_enable(struct emac_priv *priv)
static irqreturn_t emac_irq(int irq, void *dev_id)
static struct sk_buff *emac_rx_alloc(struct emac_priv *priv)
static void emac_rx_handler(void *token, int len, int status)
static void emac_tx_handler(void *token, int len, int status)
static int emac_dev_xmit(struct sk_buff *skb, struct net_device *ndev)
static void emac_dev_tx_timeout(struct net_device *ndev)
static void emac_set_type0addr(struct emac_priv *priv, u32 ch, char *mac_addr)
static void emac_set_type1addr(struct emac_priv *priv, u32 ch, char *mac_addr)
static void emac_set_type2addr(struct emac_priv *priv, u32 ch,
char *mac_addr, int index, int match)
static void emac_setmac(struct emac_priv *priv, u32 ch, char *mac_addr)
static int emac_dev_setmac_addr(struct net_device *ndev, void *addr)
static int emac_hw_enable(struct emac_priv *priv)
static int emac_poll(struct napi_struct *napi, int budget)
void emac_poll_controller(struct net_device *ndev)
static void emac_adjust_link(struct net_device *ndev)
static int emac_devioctl(struct net_device *ndev, struct ifreq *ifrq, int cmd)
static int match_first_device(struct device *dev, void *data)
static int emac_dev_open(struct net_device *ndev)
static int emac_dev_stop(struct net_device *ndev)
static struct net_device_stats *emac_dev_getnetstats(struct net_device *ndev)
static const struct net_device_ops emac_netdev_ops = ;
static int __devinit davinci_emac_probe(struct platform_device *pdev)
static int __devexit davinci_emac_remove(struct platform_device *pdev)
static int davinci_emac_suspend(struct device *dev)
static int davinci_emac_resume(struct device *dev)
static const struct dev_pm_ops davinci_emac_pm_ops = ;
static struct platform_driver davinci_emac_driver = ;
static int __init davinci_emac_init(void)
late_initcall(davinci_emac_init);
static void __exit davinci_emac_exit(void)
module_exit(davinci_emac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("DaVinci EMAC Maintainer: Anant Gole <anantgole@ti.com>");
MODULE_AUTHOR("DaVinci EMAC Maintainer: Chaithrika U S <chaithrika@ti.com>");
MODULE_DESCRIPTION("DaVinci EMAC Ethernet driver");
