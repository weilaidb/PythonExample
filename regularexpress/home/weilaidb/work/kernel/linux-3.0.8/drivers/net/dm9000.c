#define DM9000_PHY		0x40
#define CARDNAME	"dm9000"
#define DRV_VERSION	"1.31"
static int watchdog = 5000;
module_param(watchdog, int, 0400);
MODULE_PARM_DESC(watchdog, "transmit timeout in milliseconds");
enum dm9000_type ;
typedef struct board_info  board_info_t;
#define dm9000_dbg(db, lev, msg...) do  while (0)
static inline board_info_t *to_dm9000_board(struct net_device *dev)
static void
dm9000_reset(board_info_t * db)
static u8
ior(board_info_t * db, int reg)
static void
iow(board_info_t * db, int reg, int value)
static void dm9000_outblk_8bit(void __iomem *reg, void *data, int count)
static void dm9000_outblk_16bit(void __iomem *reg, void *data, int count)
static void dm9000_outblk_32bit(void __iomem *reg, void *data, int count)
static void dm9000_inblk_8bit(void __iomem *reg, void *data, int count)
static void dm9000_inblk_16bit(void __iomem *reg, void *data, int count)
static void dm9000_inblk_32bit(void __iomem *reg, void *data, int count)
static void dm9000_dumpblk_8bit(void __iomem *reg, int count)
static void dm9000_dumpblk_16bit(void __iomem *reg, int count)
static void dm9000_dumpblk_32bit(void __iomem *reg, int count)
static void dm9000_set_io(struct board_info *db, int byte_width)
static void dm9000_schedule_poll(board_info_t *db)
static int dm9000_ioctl(struct net_device *dev, struct ifreq *req, int cmd)
static unsigned int
dm9000_read_locked(board_info_t *db, int reg)
static int dm9000_wait_eeprom(board_info_t *db)
static void
dm9000_read_eeprom(board_info_t *db, int offset, u8 *to)
static void
dm9000_write_eeprom(board_info_t *db, int offset, u8 *data)
static void dm9000_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 dm9000_get_msglevel(struct net_device *dev)
static void dm9000_set_msglevel(struct net_device *dev, u32 value)
static int dm9000_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int dm9000_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int dm9000_nway_reset(struct net_device *dev)
static int dm9000_set_features(struct net_device *dev, u32 features)
static u32 dm9000_get_link(struct net_device *dev)
#define DM_EEPROM_MAGIC		(0x444D394B)
static int dm9000_get_eeprom_len(struct net_device *dev)
static int dm9000_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *ee, u8 *data)
static int dm9000_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *ee, u8 *data)
static void dm9000_get_wol(struct net_device *dev, struct ethtool_wolinfo *w)
static int dm9000_set_wol(struct net_device *dev, struct ethtool_wolinfo *w)
static const struct ethtool_ops dm9000_ethtool_ops = ;
static void dm9000_show_carrier(board_info_t *db,
unsigned carrier, unsigned nsr)
static void
dm9000_poll_work(struct work_struct *w)
static void
dm9000_release_board(struct platform_device *pdev, struct board_info *db)
static unsigned char dm9000_type_to_char(enum dm9000_type type)
static void
dm9000_hash_table_unlocked(struct net_device *dev)
static void
dm9000_hash_table(struct net_device *dev)
static void
dm9000_init_dm9000(struct net_device *dev)
static void dm9000_timeout(struct net_device *dev)
static void dm9000_send_packet(struct net_device *dev,
int ip_summed,
u16 pkt_len)
static int
dm9000_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void dm9000_tx_done(struct net_device *dev, board_info_t *db)
struct dm9000_rxhdr  __packed;
static void
dm9000_rx(struct net_device *dev)
static irqreturn_t dm9000_interrupt(int irq, void *dev_id)
static irqreturn_t dm9000_wol_interrupt(int irq, void *dev_id)
static void dm9000_poll_controller(struct net_device *dev)
static int
dm9000_open(struct net_device *dev)
static void dm9000_msleep(board_info_t *db, unsigned int ms)
static int
dm9000_phy_read(struct net_device *dev, int phy_reg_unused, int reg)
static void
dm9000_phy_write(struct net_device *dev,
int phyaddr_unused, int reg, int value)
static void
dm9000_shutdown(struct net_device *dev)
static int
dm9000_stop(struct net_device *ndev)
static const struct net_device_ops dm9000_netdev_ops = ;
static int __devinit
dm9000_probe(struct platform_device *pdev)
static int
dm9000_drv_suspend(struct device *dev)
static int
dm9000_drv_resume(struct device *dev)
static const struct dev_pm_ops dm9000_drv_pm_ops = ;
static int __devexit
dm9000_drv_remove(struct platform_device *pdev)
static struct platform_driver dm9000_driver = ;
static int __init
dm9000_init(void)
static void __exit
dm9000_cleanup(void)
module_init(dm9000_init);
module_exit(dm9000_cleanup);
MODULE_AUTHOR("Sascha Hauer, Ben Dooks");
MODULE_DESCRIPTION("Davicom DM9000 network driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:dm9000");
