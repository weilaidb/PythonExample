#define STREAMER_DEBUG 0
#define STREAMER_DEBUG_PACKETS 0
#define STREAMER_NETWORK_MONITOR 0
#define STREAMER_IOCTL 0
#if (BITS_PER_LONG == 64)
#error broken on 64-bit: stores pointer to rx_ring->buffer in 32-bit int
static char version[] = "LanStreamer.c v0.4.0 03/08/01 - Mike Sullivan\n"
"              v0.5.3 11/13/02 - Kent Yoder";
static DEFINE_PCI_DEVICE_TABLE(streamer_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci,streamer_pci_tbl);
static char *open_maj_error[] = ;
static char *open_min_error[] = ;
static int ringspeed[STREAMER_MAX_ADAPTERS] = ;
module_param_array(ringspeed, int, NULL, 0);
static int pkt_buf_sz[STREAMER_MAX_ADAPTERS] = ;
module_param_array(pkt_buf_sz, int, NULL, 0);
static int message_level[STREAMER_MAX_ADAPTERS] = ;
module_param_array(message_level, int, NULL, 0);
#if STREAMER_IOCTL
static int streamer_ioctl(struct net_device *, struct ifreq *, int);
static int streamer_reset(struct net_device *dev);
static int streamer_open(struct net_device *dev);
static netdev_tx_t streamer_xmit(struct sk_buff *skb,
struct net_device *dev);
static int streamer_close(struct net_device *dev);
static void streamer_set_rx_mode(struct net_device *dev);
static irqreturn_t streamer_interrupt(int irq, void *dev_id);
static int streamer_set_mac_address(struct net_device *dev, void *addr);
static void streamer_arb_cmd(struct net_device *dev);
static int streamer_change_mtu(struct net_device *dev, int mtu);
static void streamer_srb_bh(struct net_device *dev);
static void streamer_asb_bh(struct net_device *dev);
#if STREAMER_NETWORK_MONITOR
static int streamer_proc_info(char *buffer, char **start, off_t offset,
int length, int *eof, void *data);
static int sprintf_info(char *buffer, struct net_device *dev);
struct streamer_private *dev_streamer=NULL;
static const struct net_device_ops streamer_netdev_ops = ;
static int __devinit streamer_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit streamer_remove_one(struct pci_dev *pdev)
static int streamer_reset(struct net_device *dev)
static int streamer_open(struct net_device *dev)
static void streamer_rx(struct net_device *dev)
static irqreturn_t streamer_interrupt(int irq, void *dev_id)
static netdev_tx_t streamer_xmit(struct sk_buff *skb,
struct net_device *dev)
static int streamer_close(struct net_device *dev)
static void streamer_set_rx_mode(struct net_device *dev)
static void streamer_srb_bh(struct net_device *dev)
static int streamer_set_mac_address(struct net_device *dev, void *addr)
static void streamer_arb_cmd(struct net_device *dev)
static void streamer_asb_bh(struct net_device *dev)
static int streamer_change_mtu(struct net_device *dev, int mtu)
#if STREAMER_NETWORK_MONITOR
static int streamer_proc_info(char *buffer, char **start, off_t offset,
int length, int *eof, void *data)
static int sprintf_info(char *buffer, struct net_device *dev)
static struct pci_driver streamer_pci_driver = ;
static int __init streamer_init_module(void)
static void __exit streamer_cleanup_module(void)
module_init(streamer_init_module);
module_exit(streamer_cleanup_module);
MODULE_LICENSE("GPL");
