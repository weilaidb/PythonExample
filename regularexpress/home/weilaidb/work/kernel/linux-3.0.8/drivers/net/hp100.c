#define HP100_DEFAULT_PRIORITY_TX 0
#undef HP100_DEBUG
#undef HP100_DEBUG_B
#undef HP100_DEBUG_BM
#undef HP100_DEBUG_TRAINING
#undef HP100_DEBUG_TX
#undef HP100_DEBUG_IRQ
#undef HP100_DEBUG_RX
#undef HP100_MULTICAST_FILTER
#define HP100_BUS_ISA     0
#define HP100_BUS_EISA    1
#define HP100_BUS_PCI     2
#define HP100_REGION_SIZE	0x20
#define HP100_SIG_LEN		8
#define HP100_MAX_PACKET_SIZE	(1536+4)
#define HP100_MIN_PACKET_SIZE	60
#define HP100_DEFAULT_RX_RATIO	75
#define HP100_DEFAULT_PRIORITY_TX 0
struct hp100_private ;
static const char *hp100_isa_tbl[] = ;
static struct eisa_device_id hp100_eisa_tbl[] = ;
MODULE_DEVICE_TABLE(eisa, hp100_eisa_tbl);
static DEFINE_PCI_DEVICE_TABLE(hp100_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, hp100_pci_tbl);
static int hp100_rx_ratio = HP100_DEFAULT_RX_RATIO;
static int hp100_priority_tx = HP100_DEFAULT_PRIORITY_TX;
static int hp100_mode = 1;
module_param(hp100_rx_ratio, int, 0);
module_param(hp100_priority_tx, int, 0);
module_param(hp100_mode, int, 0);
static int hp100_probe1(struct net_device *dev, int ioaddr, u_char bus,
struct pci_dev *pci_dev);
static int hp100_open(struct net_device *dev);
static int hp100_close(struct net_device *dev);
static netdev_tx_t hp100_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static netdev_tx_t hp100_start_xmit_bm(struct sk_buff *skb,
struct net_device *dev);
static void hp100_rx(struct net_device *dev);
static struct net_device_stats *hp100_get_stats(struct net_device *dev);
static void hp100_misc_interrupt(struct net_device *dev);
static void hp100_update_stats(struct net_device *dev);
static void hp100_clear_stats(struct hp100_private *lp, int ioaddr);
static void hp100_set_multicast_list(struct net_device *dev);
static irqreturn_t hp100_interrupt(int irq, void *dev_id);
static void hp100_start_interface(struct net_device *dev);
static void hp100_stop_interface(struct net_device *dev);
static void hp100_load_eeprom(struct net_device *dev, u_short ioaddr);
static int hp100_sense_lan(struct net_device *dev);
static int hp100_login_to_vg_hub(struct net_device *dev,
u_short force_relogin);
static int hp100_down_vg_link(struct net_device *dev);
static void hp100_cascade_reset(struct net_device *dev, u_short enable);
static void hp100_BM_shutdown(struct net_device *dev);
static void hp100_mmuinit(struct net_device *dev);
static void hp100_init_pdls(struct net_device *dev);
static int hp100_init_rxpdl(struct net_device *dev,
register hp100_ring_t * ringptr,
register u_int * pdlptr);
static int hp100_init_txpdl(struct net_device *dev,
register hp100_ring_t * ringptr,
register u_int * pdlptr);
static void hp100_rxfill(struct net_device *dev);
static void hp100_hwinit(struct net_device *dev);
static void hp100_clean_txring(struct net_device *dev);
static void hp100_RegisterDump(struct net_device *dev);
static inline dma_addr_t virt_to_whatever(struct net_device *dev, u32 * ptr)
static inline u_int pdl_map_data(struct hp100_private *lp, void *data)
static void wait(void)
static __devinit const char *hp100_read_id(int ioaddr)
static __init int hp100_isa_probe1(struct net_device *dev, int ioaddr)
static int  __init hp100_isa_probe(struct net_device *dev, int addr)
#if !defined(MODULE) && defined(CONFIG_ISA)
struct net_device * __init hp100_probe(int unit)
static const struct net_device_ops hp100_bm_netdev_ops = ;
static const struct net_device_ops hp100_netdev_ops = ;
static int __devinit hp100_probe1(struct net_device *dev, int ioaddr,
u_char bus, struct pci_dev *pci_dev)
static void hp100_hwinit(struct net_device *dev)
static void hp100_mmuinit(struct net_device *dev)
static int hp100_open(struct net_device *dev)
static int hp100_close(struct net_device *dev)
static void hp100_init_pdls(struct net_device *dev)
static int hp100_init_rxpdl(struct net_device *dev,
register hp100_ring_t * ringptr,
register u32 * pdlptr)
static int hp100_init_txpdl(struct net_device *dev,
register hp100_ring_t * ringptr,
register u32 * pdlptr)
static int hp100_build_rx_pdl(hp100_ring_t * ringptr,
struct net_device *dev)
static void hp100_rxfill(struct net_device *dev)
static void hp100_BM_shutdown(struct net_device *dev)
static int hp100_check_lan(struct net_device *dev)
static netdev_tx_t hp100_start_xmit_bm(struct sk_buff *skb,
struct net_device *dev)
static void hp100_clean_txring(struct net_device *dev)
static netdev_tx_t hp100_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void hp100_rx(struct net_device *dev)
static void hp100_rx_bm(struct net_device *dev)
static struct net_device_stats *hp100_get_stats(struct net_device *dev)
static void hp100_update_stats(struct net_device *dev)
static void hp100_misc_interrupt(struct net_device *dev)
static void hp100_clear_stats(struct hp100_private *lp, int ioaddr)
static void hp100_set_multicast_list(struct net_device *dev)
static irqreturn_t hp100_interrupt(int irq, void *dev_id)
static void hp100_start_interface(struct net_device *dev)
static void hp100_stop_interface(struct net_device *dev)
static void hp100_load_eeprom(struct net_device *dev, u_short probe_ioaddr)
static int hp100_sense_lan(struct net_device *dev)
static int hp100_down_vg_link(struct net_device *dev)
static int hp100_login_to_vg_hub(struct net_device *dev, u_short force_relogin)
static void hp100_cascade_reset(struct net_device *dev, u_short enable)
void hp100_RegisterDump(struct net_device *dev)
static void cleanup_dev(struct net_device *d)
static int __init hp100_eisa_probe (struct device *gendev)
static int __devexit hp100_eisa_remove (struct device *gendev)
static struct eisa_driver hp100_eisa_driver = ;
static int __devinit hp100_pci_probe (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit hp100_pci_remove (struct pci_dev *pdev)
static struct pci_driver hp100_pci_driver = ;
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, "
"Siegfried \"Frieder\" Loeffler (dg1sek) <floeff@mathematik.uni-stuttgart.de>");
MODULE_DESCRIPTION("HP CASCADE Architecture Driver for 100VG-AnyLan Network Adapters");
#if defined(MODULE) && defined(CONFIG_ISA)
#define HP100_DEVICES 5
static int hp100_port[HP100_DEVICES] = ;
module_param_array(hp100_port, int, NULL, 0);
static struct net_device *hp100_devlist[HP100_DEVICES];
static int __init hp100_isa_init(void)
static void hp100_isa_cleanup(void)
#define hp100_isa_init()	(0)
#define hp100_isa_cleanup()	do  while(0)
static int __init hp100_module_init(void)
static void __exit hp100_module_exit(void)
module_init(hp100_module_init)
module_exit(hp100_module_exit)
