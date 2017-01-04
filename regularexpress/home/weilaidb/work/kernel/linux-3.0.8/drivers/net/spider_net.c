MODULE_AUTHOR("Utz Bacher <utz.bacher@de.ibm.com> and Jens Osterkamp " \
"<Jens.Osterkamp@de.ibm.com>");
MODULE_DESCRIPTION("Spider Southbridge Gigabit Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(VERSION);
MODULE_FIRMWARE(SPIDER_NET_FIRMWARE_NAME);
static int rx_descriptors = SPIDER_NET_RX_DESCRIPTORS_DEFAULT;
static int tx_descriptors = SPIDER_NET_TX_DESCRIPTORS_DEFAULT;
module_param(rx_descriptors, int, 0444);
module_param(tx_descriptors, int, 0444);
MODULE_PARM_DESC(rx_descriptors, "number of descriptors used " \
"in rx chains");
MODULE_PARM_DESC(tx_descriptors, "number of descriptors used " \
"in tx chain");
char spider_net_driver_name[] = "spidernet";
static DEFINE_PCI_DEVICE_TABLE(spider_net_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, spider_net_pci_tbl);
static inline u32
spider_net_read_reg(struct spider_net_card *card, u32 reg)
static inline void
spider_net_write_reg(struct spider_net_card *card, u32 reg, u32 value)
static void
spider_net_write_phy(struct net_device *netdev, int mii_id,
int reg, int val)
static int
spider_net_read_phy(struct net_device *netdev, int mii_id, int reg)
static void
spider_net_setup_aneg(struct spider_net_card *card)
static void
spider_net_rx_irq_off(struct spider_net_card *card)
static void
spider_net_rx_irq_on(struct spider_net_card *card)
static void
spider_net_set_promisc(struct spider_net_card *card)
static int
spider_net_get_mac_address(struct net_device *netdev)
static inline int
spider_net_get_descr_status(struct spider_net_hw_descr *hwdescr)
static void
spider_net_free_chain(struct spider_net_card *card,
struct spider_net_descr_chain *chain)
static int
spider_net_init_chain(struct spider_net_card *card,
struct spider_net_descr_chain *chain)
static void
spider_net_free_rx_chain_contents(struct spider_net_card *card)
static int
spider_net_prepare_rx_descr(struct spider_net_card *card,
struct spider_net_descr *descr)
static inline void
spider_net_enable_rxchtails(struct spider_net_card *card)
static inline void
spider_net_enable_rxdmac(struct spider_net_card *card)
static inline void
spider_net_disable_rxdmac(struct spider_net_card *card)
static void
spider_net_refill_rx_chain(struct spider_net_card *card)
static int
spider_net_alloc_rx_skbs(struct spider_net_card *card)
static u8
spider_net_get_multicast_hash(struct net_device *netdev, __u8 *addr)
static void
spider_net_set_multi(struct net_device *netdev)
static int
spider_net_prepare_tx_descr(struct spider_net_card *card,
struct sk_buff *skb)
static int
spider_net_set_low_watermark(struct spider_net_card *card)
static int
spider_net_release_tx_chain(struct spider_net_card *card, int brutal)
static inline void
spider_net_kick_tx_dma(struct spider_net_card *card)
static int
spider_net_xmit(struct sk_buff *skb, struct net_device *netdev)
static void
spider_net_cleanup_tx_ring(struct spider_net_card *card)
static int
spider_net_do_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static void
spider_net_pass_skb_up(struct spider_net_descr *descr,
struct spider_net_card *card)
static void show_rx_chain(struct spider_net_card *card)
static void spider_net_resync_head_ptr(struct spider_net_card *card)
static int spider_net_resync_tail_ptr(struct spider_net_card *card)
static int
spider_net_decode_one_descr(struct spider_net_card *card)
static int spider_net_poll(struct napi_struct *napi, int budget)
static int
spider_net_change_mtu(struct net_device *netdev, int new_mtu)
static int
spider_net_set_mac(struct net_device *netdev, void *p)
static void
spider_net_link_reset(struct net_device *netdev)
static void
spider_net_handle_error_irq(struct spider_net_card *card, u32 status_reg,
u32 error_reg1, u32 error_reg2)
static irqreturn_t
spider_net_interrupt(int irq, void *ptr)
static void
spider_net_poll_controller(struct net_device *netdev)
static void
spider_net_enable_interrupts(struct spider_net_card *card)
static void
spider_net_disable_interrupts(struct spider_net_card *card)
static void
spider_net_init_card(struct spider_net_card *card)
static void
spider_net_enable_card(struct spider_net_card *card)
static int
spider_net_download_firmware(struct spider_net_card *card,
const void *firmware_ptr)
static int
spider_net_init_firmware(struct spider_net_card *card)
int
spider_net_open(struct net_device *netdev)
static void spider_net_link_phy(unsigned long data)
static int
spider_net_setup_phy(struct spider_net_card *card)
static void
spider_net_workaround_rxramfull(struct spider_net_card *card)
int
spider_net_stop(struct net_device *netdev)
static void
spider_net_tx_timeout_task(struct work_struct *work)
static void
spider_net_tx_timeout(struct net_device *netdev)
static const struct net_device_ops spider_net_ops = ;
static void
spider_net_setup_netdev_ops(struct net_device *netdev)
static int
spider_net_setup_netdev(struct spider_net_card *card)
static struct spider_net_card *
spider_net_alloc_card(void)
static void
spider_net_undo_pci_setup(struct spider_net_card *card)
static struct spider_net_card *
spider_net_setup_pci_dev(struct pci_dev *pdev)
static int __devinit
spider_net_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
spider_net_remove(struct pci_dev *pdev)
static struct pci_driver spider_net_driver = ;
static int __init spider_net_init(void)
static void __exit spider_net_cleanup(void)
module_init(spider_net_init);
module_exit(spider_net_cleanup);
