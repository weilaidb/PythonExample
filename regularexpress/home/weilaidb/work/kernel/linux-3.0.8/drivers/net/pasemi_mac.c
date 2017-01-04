#define LOCAL_SKB_ALIGN	2
#define LRO_MAX_AGGR 64
#define PE_MIN_MTU	64
#define PE_MAX_MTU	9000
#define PE_DEF_MTU	ETH_DATA_LEN
#define DEFAULT_MSG_ENABLE	  \
(NETIF_MSG_DRV		| \
NETIF_MSG_PROBE	| \
NETIF_MSG_LINK		| \
NETIF_MSG_TIMER	| \
NETIF_MSG_IFDOWN	| \
NETIF_MSG_IFUP		| \
NETIF_MSG_RX_ERR	| \
NETIF_MSG_TX_ERR)
MODULE_LICENSE("GPL");
MODULE_AUTHOR ("Olof Johansson <olof@lixom.net>");
MODULE_DESCRIPTION("PA Semi PWRficient Ethernet driver");
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "PA Semi MAC bitmapped debugging message enable value");
extern const struct ethtool_ops pasemi_mac_ethtool_ops;
static int translation_enabled(void)
static void write_iob_reg(unsigned int reg, unsigned int val)
static unsigned int read_mac_reg(const struct pasemi_mac *mac, unsigned int reg)
static void write_mac_reg(const struct pasemi_mac *mac, unsigned int reg,
unsigned int val)
static unsigned int read_dma_reg(unsigned int reg)
static void write_dma_reg(unsigned int reg, unsigned int val)
static struct pasemi_mac_rxring *rx_ring(const struct pasemi_mac *mac)
static struct pasemi_mac_txring *tx_ring(const struct pasemi_mac *mac)
static inline void prefetch_skb(const struct sk_buff *skb)
static int mac_to_intf(struct pasemi_mac *mac)
static void pasemi_mac_intf_disable(struct pasemi_mac *mac)
static void pasemi_mac_intf_enable(struct pasemi_mac *mac)
static int pasemi_get_mac_addr(struct pasemi_mac *mac)
static int pasemi_mac_set_mac_addr(struct net_device *dev, void *p)
static int get_skb_hdr(struct sk_buff *skb, void **iphdr,
void **tcph, u64 *hdr_flags, void *data)
static int pasemi_mac_unmap_tx_skb(struct pasemi_mac *mac,
const int nfrags,
struct sk_buff *skb,
const dma_addr_t *dmas)
static struct pasemi_mac_csring *pasemi_mac_setup_csring(struct pasemi_mac *mac)
static void pasemi_mac_setup_csrings(struct pasemi_mac *mac)
static void pasemi_mac_free_csring(struct pasemi_mac_csring *csring)
static int pasemi_mac_setup_rx_resources(const struct net_device *dev)
static struct pasemi_mac_txring *
pasemi_mac_setup_tx_resources(const struct net_device *dev)
static void pasemi_mac_free_tx_resources(struct pasemi_mac *mac)
static void pasemi_mac_free_rx_buffers(struct pasemi_mac *mac)
static void pasemi_mac_free_rx_resources(struct pasemi_mac *mac)
static void pasemi_mac_replenish_rx_ring(const struct net_device *dev,
const int limit)
static void pasemi_mac_restart_rx_intr(const struct pasemi_mac *mac)
static void pasemi_mac_restart_tx_intr(const struct pasemi_mac *mac)
static inline void pasemi_mac_rx_error(const struct pasemi_mac *mac,
const u64 macrx)
static inline void pasemi_mac_tx_error(const struct pasemi_mac *mac,
const u64 mactx)
static int pasemi_mac_clean_rx(struct pasemi_mac_rxring *rx,
const int limit)
#define TX_CLEAN_BATCHSIZE (128/MAX_SKB_FRAGS)
static int pasemi_mac_clean_tx(struct pasemi_mac_txring *txring)
static irqreturn_t pasemi_mac_rx_intr(int irq, void *data)
#define TX_CLEAN_INTERVAL HZ
static void pasemi_mac_tx_timer(unsigned long data)
static irqreturn_t pasemi_mac_tx_intr(int irq, void *data)
static void pasemi_adjust_link(struct net_device *dev)
static int pasemi_mac_phy_init(struct net_device *dev)
static int pasemi_mac_open(struct net_device *dev)
#define MAX_RETRIES 5000
static void pasemi_mac_pause_txchan(struct pasemi_mac *mac)
static void pasemi_mac_pause_rxchan(struct pasemi_mac *mac)
static void pasemi_mac_pause_rxint(struct pasemi_mac *mac)
static int pasemi_mac_close(struct net_device *dev)
static void pasemi_mac_queue_csdesc(const struct sk_buff *skb,
const dma_addr_t *map,
const unsigned int *map_size,
struct pasemi_mac_txring *txring,
struct pasemi_mac_csring *csring)
static int pasemi_mac_start_tx(struct sk_buff *skb, struct net_device *dev)
static void pasemi_mac_set_rx_mode(struct net_device *dev)
static int pasemi_mac_poll(struct napi_struct *napi, int budget)
static void pasemi_mac_netpoll(struct net_device *dev)
static int pasemi_mac_change_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops pasemi_netdev_ops = ;
static int __devinit
pasemi_mac_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit pasemi_mac_remove(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(pasemi_mac_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, pasemi_mac_pci_tbl);
static struct pci_driver pasemi_mac_driver = ;
static void __exit pasemi_mac_cleanup_module(void)
int pasemi_mac_init_module(void)
module_init(pasemi_mac_init_module);
module_exit(pasemi_mac_cleanup_module);
