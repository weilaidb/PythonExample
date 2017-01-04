#define XL_DEBUG 0
static char version[] __devinitdata  =
"3c359.c v1.2.0 2/17/01 - Mike Phillips (mikep@linuxtr.net)" ;
#define FW_NAME		"3com/3C359.bin"
MODULE_AUTHOR("Mike Phillips <mikep@linuxtr.net>") ;
MODULE_DESCRIPTION("3Com 3C359 Velocity XL Token Ring Adapter Driver\n") ;
MODULE_FIRMWARE(FW_NAME);
static int ringspeed[XL_MAX_ADAPTERS] =  ;
module_param_array(ringspeed, int, NULL, 0);
MODULE_PARM_DESC(ringspeed,"3c359: Ringspeed selection - 4,16 or 0") ;
static int pkt_buf_sz[XL_MAX_ADAPTERS] =  ;
module_param_array(pkt_buf_sz, int, NULL, 0) ;
MODULE_PARM_DESC(pkt_buf_sz,"3c359: Initial buffer size") ;
static int message_level[XL_MAX_ADAPTERS] =  ;
module_param_array(message_level, int, NULL, 0) ;
MODULE_PARM_DESC(message_level, "3c359: Level of reported messages") ;
static DEFINE_PCI_DEVICE_TABLE(xl_pci_tbl) =
;
MODULE_DEVICE_TABLE(pci,xl_pci_tbl) ;
static int xl_init(struct net_device *dev);
static int xl_open(struct net_device *dev);
static int xl_open_hw(struct net_device *dev) ;
static int xl_hw_reset(struct net_device *dev);
static netdev_tx_t xl_xmit(struct sk_buff *skb, struct net_device *dev);
static void xl_dn_comp(struct net_device *dev);
static int xl_close(struct net_device *dev);
static void xl_set_rx_mode(struct net_device *dev);
static irqreturn_t xl_interrupt(int irq, void *dev_id);
static int xl_set_mac_address(struct net_device *dev, void *addr) ;
static void xl_arb_cmd(struct net_device *dev);
static void xl_asb_cmd(struct net_device *dev) ;
static void xl_srb_cmd(struct net_device *dev, int srb_cmd) ;
static void xl_wait_misr_flags(struct net_device *dev) ;
static int xl_change_mtu(struct net_device *dev, int mtu);
static void xl_srb_bh(struct net_device *dev) ;
static void xl_asb_bh(struct net_device *dev) ;
static void xl_reset(struct net_device *dev) ;
static void xl_freemem(struct net_device *dev) ;
static u16  xl_ee_read(struct net_device *dev, int ee_addr) ;
static void  xl_ee_write(struct net_device *dev, int ee_addr, u16 ee_value) ;
#if XL_DEBUG
static void print_tx_state(struct net_device *dev) ;
static void print_rx_state(struct net_device *dev) ;
static void print_tx_state(struct net_device *dev)
static void print_rx_state(struct net_device *dev)
static u16 xl_ee_read(struct net_device *dev, int ee_addr)
static void  xl_ee_write(struct net_device *dev, int ee_addr, u16 ee_value)
static const struct net_device_ops xl_netdev_ops = ;
static int __devinit xl_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int xl_init_firmware(struct xl_private *xl_priv)
static int __devinit xl_init(struct net_device *dev)
static int xl_hw_reset(struct net_device *dev)
static int xl_open(struct net_device *dev)
static int xl_open_hw(struct net_device *dev)
static void adv_rx_ring(struct net_device *dev)
static void xl_rx(struct net_device *dev)
static void xl_reset(struct net_device *dev)
static void xl_freemem(struct net_device *dev)
static irqreturn_t xl_interrupt(int irq, void *dev_id)
static netdev_tx_t xl_xmit(struct sk_buff *skb, struct net_device *dev)
static void xl_dn_comp(struct net_device *dev)
static int xl_close(struct net_device *dev)
static void xl_set_rx_mode(struct net_device *dev)
static void xl_srb_bh(struct net_device *dev)
static int xl_set_mac_address (struct net_device *dev, void *addr)
static void xl_arb_cmd(struct net_device *dev)
static void xl_asb_cmd(struct net_device *dev)
static void xl_asb_bh(struct net_device *dev)
static void xl_srb_cmd(struct net_device *dev, int srb_cmd)
static void xl_wait_misr_flags(struct net_device *dev)
static int xl_change_mtu(struct net_device *dev, int mtu)
static void __devexit xl_remove_one (struct pci_dev *pdev)
static struct pci_driver xl_3c359_driver = ;
static int __init xl_pci_init (void)
static void __exit xl_pci_cleanup (void)
module_init(xl_pci_init);
module_exit(xl_pci_cleanup);
MODULE_LICENSE("GPL") ;
