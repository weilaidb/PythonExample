#define DRV_NAME	"sunhme"
#define DRV_VERSION	"3.10"
#define DRV_RELDATE	"August 26, 2008"
#define DRV_AUTHOR	"David S. Miller (davem@davemloft.net)"
static char version[] =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " " DRV_AUTHOR "\n";
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION("Sun HappyMealEthernet(HME) 10/100baseT ethernet driver");
MODULE_LICENSE("GPL");
static int macaddr[6];
module_param_array(macaddr, int, NULL, 0);
MODULE_PARM_DESC(macaddr, "Happy Meal MAC address to set");
static struct quattro *qfe_sbus_list;
static struct quattro *qfe_pci_list;
#undef HMEDEBUG
#undef SXDEBUG
#undef RXDEBUG
#undef TXDEBUG
#undef TXLOGGING
struct hme_tx_logent ;
#define TX_LOG_LEN	128
static struct hme_tx_logent tx_log[TX_LOG_LEN];
static int txlog_cur_entry;
static __inline__ void tx_add_log(struct happy_meal *hp, unsigned int a, unsigned int s)
static __inline__ void tx_dump_log(void)
static __inline__ void tx_dump_ring(struct happy_meal *hp)
#define tx_add_log(hp, a, s)		do  while(0)
#define tx_dump_log()			do  while(0)
#define tx_dump_ring(hp)		do  while(0)
#define HMD(x)  printk x
#define HMD(x)
#define ASD(x)  printk x
#define ASD(x)
#define DEFAULT_IPG0      16
#define DEFAULT_IPG1       8
#define DEFAULT_IPG2       4
#define DEFAULT_JAMSIZE    4
#if defined(CONFIG_SBUS) && defined(CONFIG_PCI)
static void sbus_hme_write32(void __iomem *reg, u32 val)
static u32 sbus_hme_read32(void __iomem *reg)
static void sbus_hme_write_rxd(struct happy_meal_rxd *rxd, u32 flags, u32 addr)
static void sbus_hme_write_txd(struct happy_meal_txd *txd, u32 flags, u32 addr)
static u32 sbus_hme_read_desc32(hme32 *p)
static void pci_hme_write32(void __iomem *reg, u32 val)
static u32 pci_hme_read32(void __iomem *reg)
static void pci_hme_write_rxd(struct happy_meal_rxd *rxd, u32 flags, u32 addr)
static void pci_hme_write_txd(struct happy_meal_txd *txd, u32 flags, u32 addr)
static u32 pci_hme_read_desc32(hme32 *p)
#define hme_write32(__hp, __reg, __val) \
((__hp)->write32((__reg), (__val)))
#define hme_read32(__hp, __reg) \
((__hp)->read32(__reg))
#define hme_write_rxd(__hp, __rxd, __flags, __addr) \
((__hp)->write_rxd((__rxd), (__flags), (__addr)))
#define hme_write_txd(__hp, __txd, __flags, __addr) \
((__hp)->write_txd((__txd), (__flags), (__addr)))
#define hme_read_desc32(__hp, __p) \
((__hp)->read_desc32(__p))
#define hme_dma_map(__hp, __ptr, __size, __dir) \
((__hp)->dma_map((__hp)->dma_dev, (__ptr), (__size), (__dir)))
#define hme_dma_unmap(__hp, __addr, __size, __dir) \
((__hp)->dma_unmap((__hp)->dma_dev, (__addr), (__size), (__dir)))
#define hme_dma_sync_for_cpu(__hp, __addr, __size, __dir) \
((__hp)->dma_sync_for_cpu((__hp)->dma_dev, (__addr), (__size), (__dir)))
#define hme_dma_sync_for_device(__hp, __addr, __size, __dir) \
((__hp)->dma_sync_for_device((__hp)->dma_dev, (__addr), (__size), (__dir)))
#define hme_write32(__hp, __reg, __val) \
sbus_writel((__val), (__reg))
#define hme_read32(__hp, __reg) \
sbus_readl(__reg)
#define hme_write_rxd(__hp, __rxd, __flags, __addr) \
do  while(0)
#define hme_write_txd(__hp, __txd, __flags, __addr) \
do  while(0)
#define hme_read_desc32(__hp, __p)	((__force u32)(hme32)*(__p))
#define hme_dma_map(__hp, __ptr, __size, __dir) \
dma_map_single((__hp)->dma_dev, (__ptr), (__size), (__dir))
#define hme_dma_unmap(__hp, __addr, __size, __dir) \
dma_unmap_single((__hp)->dma_dev, (__addr), (__size), (__dir))
#define hme_dma_sync_for_cpu(__hp, __addr, __size, __dir) \
dma_dma_sync_single_for_cpu((__hp)->dma_dev, (__addr), (__size), (__dir))
#define hme_dma_sync_for_device(__hp, __addr, __size, __dir) \
dma_dma_sync_single_for_device((__hp)->dma_dev, (__addr), (__size), (__dir))
#define hme_write32(__hp, __reg, __val) \
writel((__val), (__reg))
#define hme_read32(__hp, __reg) \
readl(__reg)
#define hme_write_rxd(__hp, __rxd, __flags, __addr) \
do  while(0)
#define hme_write_txd(__hp, __txd, __flags, __addr) \
do  while(0)
static inline u32 hme_read_desc32(struct happy_meal *hp, hme32 *p)
#define hme_dma_map(__hp, __ptr, __size, __dir) \
pci_map_single((__hp)->dma_dev, (__ptr), (__size), (__dir))
#define hme_dma_unmap(__hp, __addr, __size, __dir) \
pci_unmap_single((__hp)->dma_dev, (__addr), (__size), (__dir))
#define hme_dma_sync_for_cpu(__hp, __addr, __size, __dir) \
pci_dma_sync_single_for_cpu((__hp)->dma_dev, (__addr), (__size), (__dir))
#define hme_dma_sync_for_device(__hp, __addr, __size, __dir) \
pci_dma_sync_single_for_device((__hp)->dma_dev, (__addr), (__size), (__dir))
static void BB_PUT_BIT(struct happy_meal *hp, void __iomem *tregs, int bit)
static u32 BB_GET_BIT2(struct happy_meal *hp, void __iomem *tregs, int internal)
#define TCVR_FAILURE      0x80000000
static int happy_meal_bb_read(struct happy_meal *hp,
void __iomem *tregs, int reg)
static void happy_meal_bb_write(struct happy_meal *hp,
void __iomem *tregs, int reg,
unsigned short value)
#define TCVR_READ_TRIES   16
static int happy_meal_tcvr_read(struct happy_meal *hp,
void __iomem *tregs, int reg)
#define TCVR_WRITE_TRIES  16
static void happy_meal_tcvr_write(struct happy_meal *hp,
void __iomem *tregs, int reg,
unsigned short value)
static int try_next_permutation(struct happy_meal *hp, void __iomem *tregs)
static void display_link_mode(struct happy_meal *hp, void __iomem *tregs)
static void display_forced_link_mode(struct happy_meal *hp, void __iomem *tregs)
static int set_happy_link_modes(struct happy_meal *hp, void __iomem *tregs)
static int happy_meal_init(struct happy_meal *hp);
static int is_lucent_phy(struct happy_meal *hp)
static void happy_meal_timer(unsigned long data)
#define TX_RESET_TRIES     32
#define RX_RESET_TRIES     32
static void happy_meal_tx_reset(struct happy_meal *hp, void __iomem *bregs)
static void happy_meal_rx_reset(struct happy_meal *hp, void __iomem *bregs)
#define STOP_TRIES         16
static void happy_meal_stop(struct happy_meal *hp, void __iomem *gregs)
static void happy_meal_get_counters(struct happy_meal *hp, void __iomem *bregs)
static void happy_meal_poll_stop(struct happy_meal *hp, void __iomem *tregs)
#define TCVR_RESET_TRIES       16
#define TCVR_UNISOLATE_TRIES   32
static int happy_meal_tcvr_reset(struct happy_meal *hp, void __iomem *tregs)
static void happy_meal_transceiver_check(struct happy_meal *hp, void __iomem *tregs)
static void happy_meal_clean_rings(struct happy_meal *hp)
static void happy_meal_init_rings(struct happy_meal *hp)
static void happy_meal_begin_auto_negotiation(struct happy_meal *hp,
void __iomem *tregs,
struct ethtool_cmd *ep)
static int happy_meal_init(struct happy_meal *hp)
static void happy_meal_set_initial_advertisement(struct happy_meal *hp)
static int happy_meal_is_not_so_happy(struct happy_meal *hp, u32 status)
static void happy_meal_mif_interrupt(struct happy_meal *hp)
#define TXD(x) printk x
#define TXD(x)
static void happy_meal_tx(struct happy_meal *hp)
#define RXD(x) printk x
#define RXD(x)
static void happy_meal_rx(struct happy_meal *hp, struct net_device *dev)
static irqreturn_t happy_meal_interrupt(int irq, void *dev_id)
static irqreturn_t quattro_sbus_interrupt(int irq, void *cookie)
static int happy_meal_open(struct net_device *dev)
static int happy_meal_close(struct net_device *dev)
#define SXD(x) printk x
#define SXD(x)
static void happy_meal_tx_timeout(struct net_device *dev)
static netdev_tx_t happy_meal_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static struct net_device_stats *happy_meal_get_stats(struct net_device *dev)
static void happy_meal_set_multicast(struct net_device *dev)
static int hme_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int hme_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void hme_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static u32 hme_get_link(struct net_device *dev)
static const struct ethtool_ops hme_ethtool_ops = ;
static int hme_version_printed;
static struct quattro * __devinit quattro_sbus_find(struct platform_device *child)
static int __init quattro_sbus_register_irqs(void)
static void quattro_sbus_free_irqs(void)
static struct quattro * __devinit quattro_pci_find(struct pci_dev *pdev)
static const struct net_device_ops hme_netdev_ops = ;
static int __devinit happy_meal_sbus_probe_one(struct platform_device *op, int is_qfe)
static int is_quattro_p(struct pci_dev *pdev)
static int find_eth_addr_in_vpd(void __iomem *rom_base, int len, int index, unsigned char *dev_addr)
static void get_hme_mac_nonsparc(struct pci_dev *pdev, unsigned char *dev_addr)
static int __devinit happy_meal_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit happy_meal_pci_remove(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(happymeal_pci_ids) = ;
MODULE_DEVICE_TABLE(pci, happymeal_pci_ids);
static struct pci_driver hme_pci_driver = ;
static int __init happy_meal_pci_init(void)
static void happy_meal_pci_exit(void)
static const struct of_device_id hme_sbus_match[];
static int __devinit hme_sbus_probe(struct platform_device *op)
static int __devexit hme_sbus_remove(struct platform_device *op)
static const struct of_device_id hme_sbus_match[] = ;
MODULE_DEVICE_TABLE(of, hme_sbus_match);
static struct platform_driver hme_sbus_driver = ;
static int __init happy_meal_sbus_init(void)
static void happy_meal_sbus_exit(void)
static int __init happy_meal_probe(void)
static void __exit happy_meal_exit(void)
module_init(happy_meal_probe);
module_exit(happy_meal_exit);
