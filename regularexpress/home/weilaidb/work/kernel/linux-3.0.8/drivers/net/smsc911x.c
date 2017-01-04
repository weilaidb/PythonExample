#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define SMSC_CHIPNAME		"smsc911x"
#define SMSC_MDIONAME		"smsc911x-mdio"
#define SMSC_DRV_VERSION	"2008-10-21"
MODULE_LICENSE("GPL");
MODULE_VERSION(SMSC_DRV_VERSION);
MODULE_ALIAS("platform:smsc911x");
#if USE_DEBUG > 0
static int debug = 16;
static int debug = 3;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
struct smsc911x_data;
struct smsc911x_ops ;
struct smsc911x_data ;
#define __smsc_shift(pdata, reg) ((reg) << ((pdata)->config.shift))
static inline u32 __smsc911x_reg_read(struct smsc911x_data *pdata, u32 reg)
static inline u32
__smsc911x_reg_read_shift(struct smsc911x_data *pdata, u32 reg)
static inline u32 smsc911x_reg_read(struct smsc911x_data *pdata, u32 reg)
static inline void __smsc911x_reg_write(struct smsc911x_data *pdata, u32 reg,
u32 val)
static inline void
__smsc911x_reg_write_shift(struct smsc911x_data *pdata, u32 reg, u32 val)
static inline void smsc911x_reg_write(struct smsc911x_data *pdata, u32 reg,
u32 val)
static inline void
smsc911x_tx_writefifo(struct smsc911x_data *pdata, unsigned int *buf,
unsigned int wordcount)
static inline void
smsc911x_tx_writefifo_shift(struct smsc911x_data *pdata, unsigned int *buf,
unsigned int wordcount)
static inline void
smsc911x_rx_readfifo(struct smsc911x_data *pdata, unsigned int *buf,
unsigned int wordcount)
static inline void
smsc911x_rx_readfifo_shift(struct smsc911x_data *pdata, unsigned int *buf,
unsigned int wordcount)
static int smsc911x_mac_complete(struct smsc911x_data *pdata)
static u32 smsc911x_mac_read(struct smsc911x_data *pdata, unsigned int offset)
static void smsc911x_mac_write(struct smsc911x_data *pdata,
unsigned int offset, u32 val)
static int smsc911x_mii_read(struct mii_bus *bus, int phyaddr, int regidx)
static int smsc911x_mii_write(struct mii_bus *bus, int phyaddr, int regidx,
u16 val)
static void smsc911x_phy_enable_external(struct smsc911x_data *pdata)
static void smsc911x_phy_initialise_external(struct smsc911x_data *pdata)
static unsigned int smsc911x_tx_get_txstatus(struct smsc911x_data *pdata)
static unsigned int smsc911x_rx_get_rxstatus(struct smsc911x_data *pdata)
static int smsc911x_phy_check_loopbackpkt(struct smsc911x_data *pdata)
static int smsc911x_phy_reset(struct smsc911x_data *pdata)
static int smsc911x_phy_loopbacktest(struct net_device *dev)
static void smsc911x_phy_update_flowcontrol(struct smsc911x_data *pdata)
static void smsc911x_phy_adjust_link(struct net_device *dev)
static int smsc911x_mii_probe(struct net_device *dev)
static int __devinit smsc911x_mii_init(struct platform_device *pdev,
struct net_device *dev)
static unsigned int smsc911x_tx_get_txstatcount(struct smsc911x_data *pdata)
static void smsc911x_tx_update_txcounters(struct net_device *dev)
static void
smsc911x_rx_counterrors(struct net_device *dev, unsigned int rxstat)
static void
smsc911x_rx_fastforward(struct smsc911x_data *pdata, unsigned int pktbytes)
static int smsc911x_poll(struct napi_struct *napi, int budget)
static unsigned int smsc911x_hash(char addr[ETH_ALEN])
static void smsc911x_rx_multicast_update(struct smsc911x_data *pdata)
static void smsc911x_rx_multicast_update_workaround(struct smsc911x_data *pdata)
static int smsc911x_soft_reset(struct smsc911x_data *pdata)
static void
smsc911x_set_hw_mac_address(struct smsc911x_data *pdata, u8 dev_addr[6])
static int smsc911x_open(struct net_device *dev)
static int smsc911x_stop(struct net_device *dev)
static int smsc911x_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *smsc911x_get_stats(struct net_device *dev)
static void smsc911x_set_multicast_list(struct net_device *dev)
static irqreturn_t smsc911x_irqhandler(int irq, void *dev_id)
static void smsc911x_poll_controller(struct net_device *dev)
static int smsc911x_set_mac_address(struct net_device *dev, void *p)
static int smsc911x_do_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int
smsc911x_ethtool_getsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
smsc911x_ethtool_setsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static void smsc911x_ethtool_getdrvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int smsc911x_ethtool_nwayreset(struct net_device *dev)
static u32 smsc911x_ethtool_getmsglevel(struct net_device *dev)
static void smsc911x_ethtool_setmsglevel(struct net_device *dev, u32 level)
static int smsc911x_ethtool_getregslen(struct net_device *dev)
static void
smsc911x_ethtool_getregs(struct net_device *dev, struct ethtool_regs *regs,
void *buf)
static void smsc911x_eeprom_enable_access(struct smsc911x_data *pdata)
static int smsc911x_eeprom_send_cmd(struct smsc911x_data *pdata, u32 op)
static int smsc911x_eeprom_read_location(struct smsc911x_data *pdata,
u8 address, u8 *data)
static int smsc911x_eeprom_write_location(struct smsc911x_data *pdata,
u8 address, u8 data)
static int smsc911x_ethtool_get_eeprom_len(struct net_device *dev)
static int smsc911x_ethtool_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static int smsc911x_ethtool_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static const struct ethtool_ops smsc911x_ethtool_ops = ;
static const struct net_device_ops smsc911x_netdev_ops = ;
static void __devinit smsc911x_read_mac_address(struct net_device *dev)
static int __devinit smsc911x_init(struct net_device *dev)
static int __devexit smsc911x_drv_remove(struct platform_device *pdev)
static const struct smsc911x_ops standard_smsc911x_ops = ;
static const struct smsc911x_ops shifted_smsc911x_ops = ;
static int __devinit smsc911x_drv_probe(struct platform_device *pdev)
static int smsc911x_suspend(struct device *dev)
static int smsc911x_resume(struct device *dev)
static const struct dev_pm_ops smsc911x_pm_ops = ;
#define SMSC911X_PM_OPS (&smsc911x_pm_ops)
#define SMSC911X_PM_OPS NULL
static struct platform_driver smsc911x_driver = ;
static int __init smsc911x_init_module(void)
static void __exit smsc911x_cleanup_module(void)
module_init(smsc911x_init_module);
module_exit(smsc911x_cleanup_module);
