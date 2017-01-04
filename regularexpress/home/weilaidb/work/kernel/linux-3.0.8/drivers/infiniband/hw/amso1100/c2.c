MODULE_AUTHOR("Tom Tucker <tom@opengridcomputing.com>");
MODULE_DESCRIPTION("Ammasso AMSO1100 Low-level iWARP Driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
static const u32 default_msg = NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK
| NETIF_MSG_IFUP | NETIF_MSG_IFDOWN;
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
static int c2_up(struct net_device *netdev);
static int c2_down(struct net_device *netdev);
static int c2_xmit_frame(struct sk_buff *skb, struct net_device *netdev);
static void c2_tx_interrupt(struct net_device *netdev);
static void c2_rx_interrupt(struct net_device *netdev);
static irqreturn_t c2_interrupt(int irq, void *dev_id);
static void c2_tx_timeout(struct net_device *netdev);
static int c2_change_mtu(struct net_device *netdev, int new_mtu);
static void c2_reset(struct c2_port *c2_port);
static struct pci_device_id c2_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, c2_pci_table);
static void c2_print_macaddr(struct net_device *netdev)
static void c2_set_rxbufsize(struct c2_port *c2_port)
static int c2_tx_ring_alloc(struct c2_ring *tx_ring, void *vaddr,
dma_addr_t base, void __iomem * mmio_txp_ring)
static int c2_rx_ring_alloc(struct c2_ring *rx_ring, void *vaddr,
dma_addr_t base, void __iomem * mmio_rxp_ring)
static inline int c2_rx_alloc(struct c2_port *c2_port, struct c2_element *elem)
static int c2_rx_fill(struct c2_port *c2_port)
static void c2_rx_clean(struct c2_port *c2_port)
static inline int c2_tx_free(struct c2_dev *c2dev, struct c2_element *elem)
static void c2_tx_clean(struct c2_port *c2_port)
static void c2_tx_interrupt(struct net_device *netdev)
static void c2_rx_error(struct c2_port *c2_port, struct c2_element *elem)
static void c2_rx_interrupt(struct net_device *netdev)
static irqreturn_t c2_interrupt(int irq, void *dev_id)
static int c2_up(struct net_device *netdev)
static int c2_down(struct net_device *netdev)
static void c2_reset(struct c2_port *c2_port)
static int c2_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static void c2_tx_timeout(struct net_device *netdev)
static int c2_change_mtu(struct net_device *netdev, int new_mtu)
static const struct net_device_ops c2_netdev = ;
static struct net_device *c2_devinit(struct c2_dev *c2dev,
void __iomem * mmio_addr)
static int __devinit c2_probe(struct pci_dev *pcidev,
const struct pci_device_id *ent)
static void __devexit c2_remove(struct pci_dev *pcidev)
static struct pci_driver c2_pci_driver = ;
static int __init c2_init_module(void)
static void __exit c2_exit_module(void)
module_init(c2_init_module);
module_exit(c2_exit_module);
