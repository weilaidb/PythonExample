#define DRV_NAME	"3c509"
#define DRV_VERSION	"1.20"
#define DRV_RELDATE	"04Feb2008"
#define TX_TIMEOUT  (400*HZ/1000)
static char version[] __devinitdata = DRV_NAME ".c:" DRV_VERSION " " DRV_RELDATE " becker@scyld.com\n";
static int el3_debug = EL3_DEBUG;
static int el3_debug = 2;
static int el3_cards = 0;
#define EL3_MAX_CARDS 8
#define EL3_DATA 0x00
#define EL3_CMD 0x0e
#define EL3_STATUS 0x0e
#define	EEPROM_READ 0x80
#define EL3_IO_EXTENT	16
#define EL3WINDOW(win_num) outw(SelectWindow + (win_num), ioaddr + EL3_CMD)
enum c509cmd ;
enum c509status ;
enum RxFilter ;
#define TX_FIFO		0x00
#define RX_FIFO		0x00
#define RX_STATUS 	0x08
#define TX_STATUS 	0x0B
#define TX_FREE		0x0C
#define WN0_CONF_CTRL	0x04
#define WN0_ADDR_CONF	0x06
#define WN0_IRQ		0x08
#define WN4_MEDIA	0x0A
#define	MEDIA_TP	0x00C0
#define WN4_NETDIAG	0x06
#define FD_ENABLE	0x8000
#define SKB_QUEUE_SIZE	64
enum el3_cardtype ;
struct el3_private ;
static int id_port;
static int current_tag;
static struct net_device *el3_devs[EL3_MAX_CARDS];
static int debug = -1;
static int irq[] = ;
static int max_interrupt_work = 10;
static int nopnp;
static int __devinit el3_common_init(struct net_device *dev);
static void el3_common_remove(struct net_device *dev);
static ushort id_read_eeprom(int index);
static ushort read_eeprom(int ioaddr, int index);
static int el3_open(struct net_device *dev);
static netdev_tx_t el3_start_xmit(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t el3_interrupt(int irq, void *dev_id);
static void update_stats(struct net_device *dev);
static struct net_device_stats *el3_get_stats(struct net_device *dev);
static int el3_rx(struct net_device *dev);
static int el3_close(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static void el3_tx_timeout (struct net_device *dev);
static void el3_down(struct net_device *dev);
static void el3_up(struct net_device *dev);
static const struct ethtool_ops ethtool_ops;
static int el3_suspend(struct device *, pm_message_t);
static int el3_resume(struct device *);
#define el3_suspend NULL
#define el3_resume NULL
static int el3_device_remove (struct device *device);
static void el3_poll_controller(struct net_device *dev);
static int el3_isa_id_sequence(__be16 *phys_addr)
static void __devinit el3_dev_fill(struct net_device *dev, __be16 *phys_addr,
int ioaddr, int irq, int if_port,
enum el3_cardtype type)
static int __devinit el3_isa_match(struct device *pdev,
unsigned int ndev)
static int __devexit el3_isa_remove(struct device *pdev,
unsigned int ndev)
static int el3_isa_suspend(struct device *dev, unsigned int n,
pm_message_t state)
static int el3_isa_resume(struct device *dev, unsigned int n)
static struct isa_driver el3_isa_driver = ;
static int isa_registered;
static struct pnp_device_id el3_pnp_ids[] = ;
MODULE_DEVICE_TABLE(pnp, el3_pnp_ids);
static int __devinit el3_pnp_probe(struct pnp_dev *pdev,
const struct pnp_device_id *id)
static void __devexit el3_pnp_remove(struct pnp_dev *pdev)
static int el3_pnp_suspend(struct pnp_dev *pdev, pm_message_t state)
static int el3_pnp_resume(struct pnp_dev *pdev)
static struct pnp_driver el3_pnp_driver = ;
static int pnp_registered;
static struct eisa_device_id el3_eisa_ids[] = ;
MODULE_DEVICE_TABLE(eisa, el3_eisa_ids);
static int el3_eisa_probe (struct device *device);
static struct eisa_driver el3_eisa_driver = ;
static int eisa_registered;
static int el3_mca_probe(struct device *dev);
static short el3_mca_adapter_ids[] __initdata = ;
static char *el3_mca_adapter_names[] __initdata = ;
static struct mca_driver el3_mca_driver = ;
static int mca_registered;
static const struct net_device_ops netdev_ops = ;
static int __devinit el3_common_init(struct net_device *dev)
static void el3_common_remove (struct net_device *dev)
static int __init el3_mca_probe(struct device *device)
static int __init el3_eisa_probe (struct device *device)
static int __devexit el3_device_remove (struct device *device)
static ushort read_eeprom(int ioaddr, int index)
static ushort id_read_eeprom(int index)
static int
el3_open(struct net_device *dev)
static void
el3_tx_timeout (struct net_device *dev)
static netdev_tx_t
el3_start_xmit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t
el3_interrupt(int irq, void *dev_id)
static void el3_poll_controller(struct net_device *dev)
static struct net_device_stats *
el3_get_stats(struct net_device *dev)
static void update_stats(struct net_device *dev)
static int
el3_rx(struct net_device *dev)
static void
set_multicast_list(struct net_device *dev)
static int
el3_close(struct net_device *dev)
static int
el3_link_ok(struct net_device *dev)
static int
el3_netdev_get_ecmd(struct net_device *dev, struct ethtool_cmd *ecmd)
static int
el3_netdev_set_ecmd(struct net_device *dev, struct ethtool_cmd *ecmd)
static void el3_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int el3_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int el3_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static u32 el3_get_link(struct net_device *dev)
static u32 el3_get_msglevel(struct net_device *dev)
static void el3_set_msglevel(struct net_device *dev, u32 v)
static const struct ethtool_ops ethtool_ops = ;
static void
el3_down(struct net_device *dev)
static void
el3_up(struct net_device *dev)
static int
el3_suspend(struct device *pdev, pm_message_t state)
static int
el3_resume(struct device *pdev)
module_param(debug,int, 0);
module_param_array(irq, int, NULL, 0);
module_param(max_interrupt_work, int, 0);
MODULE_PARM_DESC(debug, "debug level (0-6)");
MODULE_PARM_DESC(irq, "IRQ number(s) (assigned)");
MODULE_PARM_DESC(max_interrupt_work, "maximum events handled per interrupt");
module_param(nopnp, int, 0);
MODULE_PARM_DESC(nopnp, "disable ISA PnP support (0-1)");
MODULE_DESCRIPTION("3Com Etherlink III (3c509, 3c509B, 3c529, 3c579) ethernet driver");
MODULE_LICENSE("GPL");
static int __init el3_init_module(void)
static void __exit el3_cleanup_module(void)
module_init (el3_init_module);
module_exit (el3_cleanup_module);
