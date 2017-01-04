#define __ei_open ax_ei_open
#define __ei_close ax_ei_close
#define __ei_poll ax_ei_poll
#define __ei_start_xmit ax_ei_start_xmit
#define __ei_tx_timeout ax_ei_tx_timeout
#define __ei_get_stats ax_ei_get_stats
#define __ei_set_multicast_list ax_ei_set_multicast_list
#define __ei_interrupt ax_ei_interrupt
#define ____alloc_ei_netdev ax__alloc_ei_netdev
#define __NS8390_init ax_NS8390_init
#define ax_convert_addr(_a) ((void __force __iomem *)(_a))
#define ei_inb(_a) readb(ax_convert_addr(_a))
#define ei_outb(_v, _a) writeb(_v, ax_convert_addr(_a))
#define ei_inb_p(_a) ei_inb(_a)
#define ei_outb_p(_v, _a) ei_outb(_v, _a)
#define EI_SHIFT(x) (ei_local->reg_offset[(x)])
#define AX88796_PLATFORM
static unsigned char version[] = "ax88796.c: Copyright 2005,2007 Simtec Electronics\n";
#define DRV_NAME "ax88796"
#define DRV_VERSION "1.00"
#define NE_CMD		EI_SHIFT(0x00)
#define NE_RESET	EI_SHIFT(0x1f)
#define NE_DATAPORT	EI_SHIFT(0x10)
#define NE1SM_START_PG	0x20
#define NE1SM_STOP_PG	0x40
#define NESM_START_PG	0x40
#define NESM_STOP_PG	0x80
#define AX_GPOC_PPDSET	BIT(6)
struct ax_device ;
static inline struct ax_device *to_ax_dev(struct net_device *dev)
static int ax_initial_check(struct net_device *dev)
static void ax_reset_8390(struct net_device *dev)
static void ax_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page)
static void ax_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void ax_block_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page)
#define AX_MEMR			EI_SHIFT(0x14)
#define AX_MEMR_MDC		BIT(0)
#define AX_MEMR_MDIR		BIT(1)
#define AX_MEMR_MDI		BIT(2)
#define AX_MEMR_MDO		BIT(3)
#define AX_MEMR_EECS		BIT(4)
#define AX_MEMR_EEI		BIT(5)
#define AX_MEMR_EEO		BIT(6)
#define AX_MEMR_EECLK		BIT(7)
static void ax_handle_link_change(struct net_device *dev)
static int ax_mii_probe(struct net_device *dev)
static void ax_phy_switch(struct net_device *dev, int on)
static int ax_open(struct net_device *dev)
static int ax_close(struct net_device *dev)
static int ax_ioctl(struct net_device *dev, struct ifreq *req, int cmd)
static void ax_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int ax_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ax_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static const struct ethtool_ops ax_ethtool_ops = ;
static void ax_eeprom_register_read(struct eeprom_93cx6 *eeprom)
static void ax_eeprom_register_write(struct eeprom_93cx6 *eeprom)
static const struct net_device_ops ax_netdev_ops = ;
static void ax_bb_mdc(struct mdiobb_ctrl *ctrl, int level)
static void ax_bb_dir(struct mdiobb_ctrl *ctrl, int output)
static void ax_bb_set_data(struct mdiobb_ctrl *ctrl, int value)
static int ax_bb_get_data(struct mdiobb_ctrl *ctrl)
static struct mdiobb_ops bb_ops = ;
static int ax_mii_init(struct net_device *dev)
static void ax_initial_setup(struct net_device *dev, struct ei_device *ei_local)
static int ax_init_dev(struct net_device *dev)
static int ax_remove(struct platform_device *pdev)
static int ax_probe(struct platform_device *pdev)
static int ax_suspend(struct platform_device *dev, pm_message_t state)
static int ax_resume(struct platform_device *pdev)
#define ax_suspend NULL
#define ax_resume NULL
static struct platform_driver axdrv = ;
static int __init axdrv_init(void)
static void __exit axdrv_exit(void)
module_init(axdrv_init);
module_exit(axdrv_exit);
MODULE_DESCRIPTION("AX88796 10/100 Ethernet platform driver");
MODULE_AUTHOR("Ben Dooks, <ben@simtec.co.uk>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:ax88796");
