static const char version[] =
"smc911x.c: v1.0 04-16-2005 by Dustin McIntire <dustin@sensoria.com>\n";
#define ENABLE_SMC_DEBUG_RX		0
#define ENABLE_SMC_DEBUG_TX		0
#define ENABLE_SMC_DEBUG_DMA		0
#define ENABLE_SMC_DEBUG_PKTS		0
#define ENABLE_SMC_DEBUG_MISC		0
#define ENABLE_SMC_DEBUG_FUNC		0
#define SMC_DEBUG_RX		((ENABLE_SMC_DEBUG_RX	? 1 : 0) << 0)
#define SMC_DEBUG_TX		((ENABLE_SMC_DEBUG_TX	? 1 : 0) << 1)
#define SMC_DEBUG_DMA		((ENABLE_SMC_DEBUG_DMA	? 1 : 0) << 2)
#define SMC_DEBUG_PKTS		((ENABLE_SMC_DEBUG_PKTS ? 1 : 0) << 3)
#define SMC_DEBUG_MISC		((ENABLE_SMC_DEBUG_MISC ? 1 : 0) << 4)
#define SMC_DEBUG_FUNC		((ENABLE_SMC_DEBUG_FUNC ? 1 : 0) << 5)
#define SMC_DEBUG	 ( SMC_DEBUG_RX	  | \
SMC_DEBUG_TX	  | \
SMC_DEBUG_DMA  | \
SMC_DEBUG_PKTS | \
SMC_DEBUG_MISC | \
SMC_DEBUG_FUNC   \
)
static int watchdog = 5000;
module_param(watchdog, int, 0400);
MODULE_PARM_DESC(watchdog, "transmit timeout in milliseconds");
static int tx_fifo_kb=8;
module_param(tx_fifo_kb, int, 0400);
MODULE_PARM_DESC(tx_fifo_kb,"transmit FIFO size in KB (1<x<15)(default=8)");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:smc911x");
#define CARDNAME "smc911x"
#define POWER_DOWN		 1
#if SMC_DEBUG > 0
#define DBG(n, args...)				 \
do  while (0)
#define PRINTK(args...)   printk(args)
#define DBG(n, args...)   do  while (0)
#define PRINTK(args...)   printk(KERN_DEBUG args)
#if SMC_DEBUG_PKTS > 0
static void PRINT_PKT(u_char *buf, int length)
#define PRINT_PKT(x...)  do  while (0)
#define SMC_ENABLE_INT(lp, x) do  while (0)
#define SMC_DISABLE_INT(lp, x) do  while (0)
static void smc911x_reset(struct net_device *dev)
static void smc911x_enable(struct net_device *dev)
static void smc911x_shutdown(struct net_device *dev)
static inline void smc911x_drop_pkt(struct net_device *dev)
static inline void	 smc911x_rcv(struct net_device *dev)
static void smc911x_hardware_send_pkt(struct net_device *dev)
static int smc911x_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void smc911x_tx(struct net_device *dev)
static int smc911x_phy_read(struct net_device *dev, int phyaddr, int phyreg)
static void smc911x_phy_write(struct net_device *dev, int phyaddr, int phyreg,
int phydata)
static void smc911x_phy_detect(struct net_device *dev)
static int smc911x_phy_fixed(struct net_device *dev)
static int smc911x_phy_reset(struct net_device *dev, int phy)
static void smc911x_phy_powerdown(struct net_device *dev, int phy)
static void smc911x_phy_check_media(struct net_device *dev, int init)
static void smc911x_phy_configure(struct work_struct *work)
static void smc911x_phy_interrupt(struct net_device *dev)
static irqreturn_t smc911x_interrupt(int irq, void *dev_id)
static void
smc911x_tx_dma_irq(int dma, void *data)
static void
smc911x_rx_dma_irq(int dma, void *data)
static void smc911x_poll_controller(struct net_device *dev)
static void smc911x_timeout(struct net_device *dev)
static void smc911x_set_multicast_list(struct net_device *dev)
static int
smc911x_open(struct net_device *dev)
static int smc911x_close(struct net_device *dev)
static int
smc911x_ethtool_getsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
smc911x_ethtool_setsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static void
smc911x_ethtool_getdrvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int smc911x_ethtool_nwayreset(struct net_device *dev)
static u32 smc911x_ethtool_getmsglevel(struct net_device *dev)
static void smc911x_ethtool_setmsglevel(struct net_device *dev, u32 level)
static int smc911x_ethtool_getregslen(struct net_device *dev)
static void smc911x_ethtool_getregs(struct net_device *dev,
struct ethtool_regs* regs, void *buf)
static int smc911x_ethtool_wait_eeprom_ready(struct net_device *dev)
static inline int smc911x_ethtool_write_eeprom_cmd(struct net_device *dev,
int cmd, int addr)
static inline int smc911x_ethtool_read_eeprom_byte(struct net_device *dev,
u8 *data)
static inline int smc911x_ethtool_write_eeprom_byte(struct net_device *dev,
u8 data)
static int smc911x_ethtool_geteeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static int smc911x_ethtool_seteeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static int smc911x_ethtool_geteeprom_len(struct net_device *dev)
static const struct ethtool_ops smc911x_ethtool_ops = ;
static int __devinit smc911x_findirq(struct net_device *dev)
static const struct net_device_ops smc911x_netdev_ops = ;
static int __devinit smc911x_probe(struct net_device *dev)
static int __devinit smc911x_drv_probe(struct platform_device *pdev)
static int __devexit smc911x_drv_remove(struct platform_device *pdev)
static int smc911x_drv_suspend(struct platform_device *dev, pm_message_t state)
static int smc911x_drv_resume(struct platform_device *dev)
static struct platform_driver smc911x_driver = ;
static int __init smc911x_init(void)
static void __exit smc911x_cleanup(void)
module_init(smc911x_init);
module_exit(smc911x_cleanup);
