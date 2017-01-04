#define OLYMPIC_DEBUG 0
static char version[] =
"Olympic.c v1.0.5 6/04/02 - Peter De Schrijver & Mike Phillips" ;
static char *open_maj_error[]  = ;
static char *open_min_error[] = ;
MODULE_AUTHOR("Mike Phillips <mikep@linuxtr.net>") ;
MODULE_DESCRIPTION("Olympic PCI/Cardbus Chipset Driver") ;
static int ringspeed[OLYMPIC_MAX_ADAPTERS] =  ;
module_param_array(ringspeed, int, NULL, 0);
static int pkt_buf_sz[OLYMPIC_MAX_ADAPTERS] =  ;
module_param_array(pkt_buf_sz, int, NULL, 0) ;
static int message_level[OLYMPIC_MAX_ADAPTERS] =  ;
module_param_array(message_level, int, NULL, 0) ;
static int network_monitor[OLYMPIC_MAX_ADAPTERS] = ;
module_param_array(network_monitor, int, NULL, 0);
static DEFINE_PCI_DEVICE_TABLE(olympic_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci,olympic_pci_tbl) ;
static int olympic_probe(struct pci_dev *pdev, const struct pci_device_id *ent);
static int olympic_init(struct net_device *dev);
static int olympic_open(struct net_device *dev);
static netdev_tx_t olympic_xmit(struct sk_buff *skb,
struct net_device *dev);
static int olympic_close(struct net_device *dev);
static void olympic_set_rx_mode(struct net_device *dev);
static void olympic_freemem(struct net_device *dev) ;
static irqreturn_t olympic_interrupt(int irq, void *dev_id);
static int olympic_set_mac_address(struct net_device *dev, void *addr) ;
static void olympic_arb_cmd(struct net_device *dev);
static int olympic_change_mtu(struct net_device *dev, int mtu);
static void olympic_srb_bh(struct net_device *dev) ;
static void olympic_asb_bh(struct net_device *dev) ;
static const struct file_operations olympic_proc_ops;
static const struct net_device_ops olympic_netdev_ops = ;
static int __devinit olympic_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static int olympic_init(struct net_device *dev)
static int olympic_open(struct net_device *dev)
static void olympic_rx(struct net_device *dev)
static void olympic_freemem(struct net_device *dev)
static irqreturn_t olympic_interrupt(int irq, void *dev_id)
static netdev_tx_t olympic_xmit(struct sk_buff *skb,
struct net_device *dev)
static int olympic_close(struct net_device *dev)
static void olympic_set_rx_mode(struct net_device *dev)
static void olympic_srb_bh(struct net_device *dev)
static int olympic_set_mac_address (struct net_device *dev, void *addr)
static void olympic_arb_cmd(struct net_device *dev)
static void olympic_asb_bh(struct net_device *dev)
static int olympic_change_mtu(struct net_device *dev, int mtu)
static int olympic_proc_show(struct seq_file *m, void *v)
static int olympic_proc_open(struct inode *inode, struct file *file)
static const struct file_operations olympic_proc_ops = ;
static void __devexit olympic_remove_one(struct pci_dev *pdev)
static struct pci_driver olympic_driver = ;
static int __init olympic_pci_init(void)
static void __exit olympic_pci_cleanup(void)
module_init(olympic_pci_init) ;
module_exit(olympic_pci_cleanup) ;
MODULE_LICENSE("GPL");
