#define DRV_NAME	"enc28j60"
#define DRV_VERSION	"1.01"
#define SPI_OPLEN	1
#define ENC28J60_MSG_DEFAULT	\
(NETIF_MSG_PROBE | NETIF_MSG_IFUP | NETIF_MSG_IFDOWN | NETIF_MSG_LINK)
#define SPI_TRANSFER_BUF_LEN	(4 + MAX_FRAMELEN)
#define TX_TIMEOUT	(4 * HZ)
#define MAX_TX_RETRYCOUNT	16
enum ;
struct enc28j60_net ;
static struct  debug = ;
static int
spi_read_buf(struct enc28j60_net *priv, int len, u8 *data)
static int spi_write_buf(struct enc28j60_net *priv, int len,
const u8 *data)
static u8 spi_read_op(struct enc28j60_net *priv, u8 op,
u8 addr)
static int spi_write_op(struct enc28j60_net *priv, u8 op,
u8 addr, u8 val)
static void enc28j60_soft_reset(struct enc28j60_net *priv)
static void enc28j60_set_bank(struct enc28j60_net *priv, u8 addr)
static void nolock_reg_bfset(struct enc28j60_net *priv,
u8 addr, u8 mask)
static void locked_reg_bfset(struct enc28j60_net *priv,
u8 addr, u8 mask)
static void nolock_reg_bfclr(struct enc28j60_net *priv,
u8 addr, u8 mask)
static void locked_reg_bfclr(struct enc28j60_net *priv,
u8 addr, u8 mask)
static int nolock_regb_read(struct enc28j60_net *priv,
u8 address)
static int locked_regb_read(struct enc28j60_net *priv,
u8 address)
static int nolock_regw_read(struct enc28j60_net *priv,
u8 address)
static int locked_regw_read(struct enc28j60_net *priv,
u8 address)
static void nolock_regb_write(struct enc28j60_net *priv,
u8 address, u8 data)
static void locked_regb_write(struct enc28j60_net *priv,
u8 address, u8 data)
static void nolock_regw_write(struct enc28j60_net *priv,
u8 address, u16 data)
static void locked_regw_write(struct enc28j60_net *priv,
u8 address, u16 data)
static void enc28j60_mem_read(struct enc28j60_net *priv,
u16 addr, int len, u8 *data)
static void
enc28j60_packet_write(struct enc28j60_net *priv, int len, const u8 *data)
static unsigned long msec20_to_jiffies;
static int poll_ready(struct enc28j60_net *priv, u8 reg, u8 mask, u8 val)
static int wait_phy_ready(struct enc28j60_net *priv)
static u16 enc28j60_phy_read(struct enc28j60_net *priv, u8 address)
static int enc28j60_phy_write(struct enc28j60_net *priv, u8 address, u16 data)
static int enc28j60_set_hw_macaddr(struct net_device *ndev)
static int enc28j60_set_mac_address(struct net_device *dev, void *addr)
static void enc28j60_dump_regs(struct enc28j60_net *priv, const char *msg)
static u16 erxrdpt_workaround(u16 next_packet_ptr, u16 start, u16 end)
static u16 rx_packet_start(u16 ptr)
static void nolock_rxfifo_init(struct enc28j60_net *priv, u16 start, u16 end)
static void nolock_txfifo_init(struct enc28j60_net *priv, u16 start, u16 end)
static void enc28j60_lowpower(struct enc28j60_net *priv, bool is_low)
static int enc28j60_hw_init(struct enc28j60_net *priv)
static void enc28j60_hw_enable(struct enc28j60_net *priv)
static void enc28j60_hw_disable(struct enc28j60_net *priv)
static int
enc28j60_setlink(struct net_device *ndev, u8 autoneg, u16 speed, u8 duplex)
static void enc28j60_read_tsv(struct enc28j60_net *priv, u8 tsv[TSV_SIZE])
static void enc28j60_dump_tsv(struct enc28j60_net *priv, const char *msg,
u8 tsv[TSV_SIZE])
static void enc28j60_dump_rsv(struct enc28j60_net *priv, const char *msg,
u16 pk_ptr, int len, u16 sts)
static void dump_packet(const char *msg, int len, const char *data)
static void enc28j60_hw_rx(struct net_device *ndev)
static int enc28j60_get_free_rxfifo(struct enc28j60_net *priv)
static void enc28j60_check_link_status(struct net_device *ndev)
static void enc28j60_tx_clear(struct net_device *ndev, bool err)
static int enc28j60_rx_interrupt(struct net_device *ndev)
static void enc28j60_irq_work_handler(struct work_struct *work)
static void enc28j60_hw_tx(struct enc28j60_net *priv)
static netdev_tx_t enc28j60_send_packet(struct sk_buff *skb,
struct net_device *dev)
static void enc28j60_tx_work_handler(struct work_struct *work)
static irqreturn_t enc28j60_irq(int irq, void *dev_id)
static void enc28j60_tx_timeout(struct net_device *ndev)
static int enc28j60_net_open(struct net_device *dev)
static int enc28j60_net_close(struct net_device *dev)
static void enc28j60_set_multicast_list(struct net_device *dev)
static void enc28j60_setrx_work_handler(struct work_struct *work)
static void enc28j60_restart_work_handler(struct work_struct *work)
static void
enc28j60_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int
enc28j60_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
enc28j60_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 enc28j60_get_msglevel(struct net_device *dev)
static void enc28j60_set_msglevel(struct net_device *dev, u32 val)
static const struct ethtool_ops enc28j60_ethtool_ops = ;
static int enc28j60_chipset_init(struct net_device *dev)
static const struct net_device_ops enc28j60_netdev_ops = ;
static int __devinit enc28j60_probe(struct spi_device *spi)
static int __devexit enc28j60_remove(struct spi_device *spi)
static struct spi_driver enc28j60_driver = ;
static int __init enc28j60_init(void)
module_init(enc28j60_init);
static void __exit enc28j60_exit(void)
module_exit(enc28j60_exit);
MODULE_DESCRIPTION(DRV_NAME " ethernet driver");
MODULE_AUTHOR("Claudio Lanconelli <lanconelli.claudio@eptar.com>");
MODULE_LICENSE("GPL");
module_param_named(debug, debug.msg_enable, int, 0);
MODULE_PARM_DESC(debug, "Debug verbosity level (0=none, ..., ffff=all)");
MODULE_ALIAS("spi:" DRV_NAME);
