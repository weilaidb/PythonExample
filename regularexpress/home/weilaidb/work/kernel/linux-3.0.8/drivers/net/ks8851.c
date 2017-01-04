#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DEBUG
struct ks8851_rxctrl ;
union ks8851_tx_hdr ;
struct ks8851_net ;
static int msg_enable;
#define BYTE_EN(_x)	((_x) << 2)
#define MK_OP(_byteen, _reg) (BYTE_EN(_byteen) | (_reg)  << (8+2) | (_reg) >> 6)
static void ks8851_wrreg16(struct ks8851_net *ks, unsigned reg, unsigned val)
static void ks8851_wrreg8(struct ks8851_net *ks, unsigned reg, unsigned val)
static inline bool ks8851_rx_1msg(struct ks8851_net *ks)
static void ks8851_rdreg(struct ks8851_net *ks, unsigned op,
u8 *rxb, unsigned rxl)
static unsigned ks8851_rdreg8(struct ks8851_net *ks, unsigned reg)
static unsigned ks8851_rdreg16(struct ks8851_net *ks, unsigned reg)
static unsigned ks8851_rdreg32(struct ks8851_net *ks, unsigned reg)
static void ks8851_soft_reset(struct ks8851_net *ks, unsigned op)
static int ks8851_write_mac_addr(struct net_device *dev)
static void ks8851_init_mac(struct ks8851_net *ks)
static irqreturn_t ks8851_irq(int irq, void *pw)
static void ks8851_rdfifo(struct ks8851_net *ks, u8 *buff, unsigned len)
static void ks8851_dbg_dumpkkt(struct ks8851_net *ks, u8 *rxpkt)
static void ks8851_rx_pkts(struct ks8851_net *ks)
static void ks8851_irq_work(struct work_struct *work)
static inline unsigned calc_txlen(unsigned len)
static void ks8851_wrpkt(struct ks8851_net *ks, struct sk_buff *txp, bool irq)
static void ks8851_done_tx(struct ks8851_net *ks, struct sk_buff *txb)
static void ks8851_tx_work(struct work_struct *work)
static void ks8851_set_powermode(struct ks8851_net *ks, unsigned pwrmode)
static int ks8851_net_open(struct net_device *dev)
static int ks8851_net_stop(struct net_device *dev)
static netdev_tx_t ks8851_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void ks8851_rxctrl_work(struct work_struct *work)
static void ks8851_set_rx_mode(struct net_device *dev)
static int ks8851_set_mac_address(struct net_device *dev, void *addr)
static int ks8851_net_ioctl(struct net_device *dev, struct ifreq *req, int cmd)
static const struct net_device_ops ks8851_netdev_ops = ;
enum ;
unsigned int ks8851_eeprom_read(struct net_device *dev, unsigned int addr)
void ks8851_eeprom_write(struct net_device *dev, unsigned int op,
unsigned int addr, unsigned int data)
static void ks8851_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *di)
static u32 ks8851_get_msglevel(struct net_device *dev)
static void ks8851_set_msglevel(struct net_device *dev, u32 to)
static int ks8851_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ks8851_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 ks8851_get_link(struct net_device *dev)
static int ks8851_nway_reset(struct net_device *dev)
static int ks8851_get_eeprom_len(struct net_device *dev)
static int ks8851_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static int ks8851_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static const struct ethtool_ops ks8851_ethtool_ops = ;
static int ks8851_phy_reg(int reg)
static int ks8851_phy_read(struct net_device *dev, int phy_addr, int reg)
static void ks8851_phy_write(struct net_device *dev,
int phy, int reg, int value)
static int ks8851_read_selftest(struct ks8851_net *ks)
static int ks8851_suspend(struct spi_device *spi, pm_message_t state)
static int ks8851_resume(struct spi_device *spi)
#define ks8851_suspend NULL
#define ks8851_resume NULL
static int __devinit ks8851_probe(struct spi_device *spi)
static int __devexit ks8851_remove(struct spi_device *spi)
static struct spi_driver ks8851_driver = ;
static int __init ks8851_init(void)
static void __exit ks8851_exit(void)
module_init(ks8851_init);
module_exit(ks8851_exit);
MODULE_DESCRIPTION("KS8851 Network driver");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_LICENSE("GPL");
module_param_named(message, msg_enable, int, 0);
MODULE_PARM_DESC(message, "Message verbosity level (0=none, 31=all)");
MODULE_ALIAS("spi:ks8851");
