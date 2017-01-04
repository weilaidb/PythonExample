static const char version[] =
"smc91x.c: v1.1, sep 22 2004 by Nicolas Pitre <nico@fluxnic.net>\n";
#define SMC_DEBUG		0
# define SMC_NOWAIT		0
static int nowait = SMC_NOWAIT;
module_param(nowait, int, 0400);
MODULE_PARM_DESC(nowait, "set to 1 for no wait state");
static int watchdog = 1000;
module_param(watchdog, int, 0400);
MODULE_PARM_DESC(watchdog, "transmit timeout in milliseconds");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:smc91x");
#define CARDNAME "smc91x"
#define POWER_DOWN		1
#define MEMORY_WAIT_TIME	16
#define MAX_IRQ_LOOPS		8
#define THROTTLE_TX_PKTS	0
#define MII_DELAY		1
#if SMC_DEBUG > 0
#define DBG(n, args...)					\
do  while (0)
#define PRINTK(args...)   printk(args)
#define DBG(n, args...)   do  while(0)
#define PRINTK(args...)   printk(KERN_DEBUG args)
#if SMC_DEBUG > 3
static void PRINT_PKT(u_char *buf, int length)
#define PRINT_PKT(x...)  do  while(0)
#define SMC_ENABLE_INT(lp, x) do  while (0)
#define SMC_DISABLE_INT(lp, x) do  while (0)
#define SMC_WAIT_MMU_BUSY(lp) do  while (0)
static void smc_reset(struct net_device *dev)
static void smc_enable(struct net_device *dev)
static void smc_shutdown(struct net_device *dev)
static inline void  smc_rcv(struct net_device *dev)
#define smc_special_trylock(lock, flags)				\
()
#define smc_special_lock(lock, flags)		spin_lock_irqsave(lock, flags)
#define smc_special_unlock(lock, flags) 	spin_unlock_irqrestore(lock, flags)
#define smc_special_trylock(lock, flags)	(flags == flags)
#define smc_special_lock(lock, flags)   	do  while (0)
#define smc_special_unlock(lock, flags)	do  while (0)
static void smc_hardware_send_pkt(unsigned long data)
static int smc_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void smc_tx(struct net_device *dev)
static void smc_mii_out(struct net_device *dev, unsigned int val, int bits)
static unsigned int smc_mii_in(struct net_device *dev, int bits)
static int smc_phy_read(struct net_device *dev, int phyaddr, int phyreg)
static void smc_phy_write(struct net_device *dev, int phyaddr, int phyreg,
int phydata)
static void smc_phy_detect(struct net_device *dev)
static int smc_phy_fixed(struct net_device *dev)
static int smc_phy_reset(struct net_device *dev, int phy)
static void smc_phy_powerdown(struct net_device *dev)
static void smc_phy_check_media(struct net_device *dev, int init)
static void smc_phy_configure(struct work_struct *work)
static void smc_phy_interrupt(struct net_device *dev)
static void smc_10bt_check_media(struct net_device *dev, int init)
static void smc_eph_interrupt(struct net_device *dev)
static irqreturn_t smc_interrupt(int irq, void *dev_id)
static void smc_poll_controller(struct net_device *dev)
static void smc_timeout(struct net_device *dev)
static void smc_set_multicast_list(struct net_device *dev)
static int
smc_open(struct net_device *dev)
static int smc_close(struct net_device *dev)
static int
smc_ethtool_getsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
smc_ethtool_setsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static void
smc_ethtool_getdrvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int smc_ethtool_nwayreset(struct net_device *dev)
static u32 smc_ethtool_getmsglevel(struct net_device *dev)
static void smc_ethtool_setmsglevel(struct net_device *dev, u32 level)
static int smc_write_eeprom_word(struct net_device *dev, u16 addr, u16 word)
static int smc_read_eeprom_word(struct net_device *dev, u16 addr, u16 *word)
static int smc_ethtool_geteeprom_len(struct net_device *dev)
static int smc_ethtool_geteeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static int smc_ethtool_seteeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static const struct ethtool_ops smc_ethtool_ops = ;
static const struct net_device_ops smc_netdev_ops = ;
static int __devinit smc_findirq(struct smc_local *lp)
static int __devinit smc_probe(struct net_device *dev, void __iomem *ioaddr,
unsigned long irq_flags)
static int smc_enable_device(struct platform_device *pdev)
static int smc_request_attrib(struct platform_device *pdev,
struct net_device *ndev)
static void smc_release_attrib(struct platform_device *pdev,
struct net_device *ndev)
static inline void smc_request_datacs(struct platform_device *pdev, struct net_device *ndev)
static void smc_release_datacs(struct platform_device *pdev, struct net_device *ndev)
static int __devinit smc_drv_probe(struct platform_device *pdev)
static int __devexit smc_drv_remove(struct platform_device *pdev)
static int smc_drv_suspend(struct device *dev)
static int smc_drv_resume(struct device *dev)
static const struct of_device_id smc91x_match[] = ;
MODULE_DEVICE_TABLE(of, smc91x_match);
#define smc91x_match NULL
static struct dev_pm_ops smc_drv_pm_ops = ;
static struct platform_driver smc_driver = ;
static int __init smc_init(void)
static void __exit smc_cleanup(void)
module_init(smc_init);
module_exit(smc_cleanup);
