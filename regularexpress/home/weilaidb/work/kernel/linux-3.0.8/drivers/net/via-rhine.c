#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"via-rhine"
#define DRV_VERSION	"1.5.0"
#define DRV_RELDATE	"2010-10-09"
#define DEBUG
static int debug = 1;
static int max_interrupt_work = 20;
#if defined(__alpha__) || defined(__arm__) || defined(__hppa__) || \
defined(CONFIG_SPARC) || defined(__ia64__) ||		   \
defined(__sh__) || defined(__mips__)
static int rx_copybreak = 1518;
static int rx_copybreak;
static int avoid_D3;
static const int multicast_filter_limit = 32;
#define TX_RING_SIZE	16
#define TX_QUEUE_LEN	10
#define RX_RING_SIZE	64
#define TX_TIMEOUT	(2*HZ)
#define PKT_BUF_SZ	1536
static const char version[] __devinitconst =
"v1.10-LK" DRV_VERSION " " DRV_RELDATE " Written by Donald Becker";
#define USE_MMIO
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("VIA Rhine PCI Fast Ethernet driver");
MODULE_LICENSE("GPL");
module_param(max_interrupt_work, int, 0);
module_param(debug, int, 0);
module_param(rx_copybreak, int, 0);
module_param(avoid_D3, bool, 0);
MODULE_PARM_DESC(max_interrupt_work, "VIA Rhine maximum events handled per interrupt");
MODULE_PARM_DESC(debug, "VIA Rhine debug level (0-7)");
MODULE_PARM_DESC(rx_copybreak, "VIA Rhine copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(avoid_D3, "Avoid power state D3 (work-around for broken BIOSes)");
#define MCAM_SIZE	32
#define VCAM_SIZE	32
enum rhine_revs ;
enum rhine_quirks ;
#define IOSYNC	do  while (0)
static DEFINE_PCI_DEVICE_TABLE(rhine_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, rhine_pci_tbl);
enum register_offsets ;
enum backoff_bits ;
enum tcr_bits ;
enum camcon_bits ;
enum bcr1_bits ;
static const int mmio_verify_registers[] = ;
enum intr_status_bits ;
enum wol_bits ;
struct rx_desc ;
struct tx_desc ;
#define TXDESC		0x00e08000
enum rx_status_bits ;
enum desc_status_bits ;
enum desc_length_bits ;
enum chip_cmd_bits ;
struct rhine_private ;
#define BYTE_REG_BITS_ON(x, p)      do  while (0)
#define WORD_REG_BITS_ON(x, p)      do  while (0)
#define DWORD_REG_BITS_ON(x, p)     do  while (0)
#define BYTE_REG_BITS_IS_ON(x, p)   (ioread8((p)) & (x))
#define WORD_REG_BITS_IS_ON(x, p)   (ioread16((p)) & (x))
#define DWORD_REG_BITS_IS_ON(x, p)  (ioread32((p)) & (x))
#define BYTE_REG_BITS_OFF(x, p)     do  while (0)
#define WORD_REG_BITS_OFF(x, p)     do  while (0)
#define DWORD_REG_BITS_OFF(x, p)    do  while (0)
#define BYTE_REG_BITS_SET(x, m, p)   do  while (0)
#define WORD_REG_BITS_SET(x, m, p)   do  while (0)
#define DWORD_REG_BITS_SET(x, m, p)  do  while (0)
static int  mdio_read(struct net_device *dev, int phy_id, int location);
static void mdio_write(struct net_device *dev, int phy_id, int location, int value);
static int  rhine_open(struct net_device *dev);
static void rhine_reset_task(struct work_struct *work);
static void rhine_tx_timeout(struct net_device *dev);
static netdev_tx_t rhine_start_tx(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t rhine_interrupt(int irq, void *dev_instance);
static void rhine_tx(struct net_device *dev);
static int rhine_rx(struct net_device *dev, int limit);
static void rhine_error(struct net_device *dev, int intr_status);
static void rhine_set_rx_mode(struct net_device *dev);
static struct net_device_stats *rhine_get_stats(struct net_device *dev);
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static const struct ethtool_ops netdev_ethtool_ops;
static int  rhine_close(struct net_device *dev);
static void rhine_shutdown (struct pci_dev *pdev);
static void rhine_vlan_rx_add_vid(struct net_device *dev, unsigned short vid);
static void rhine_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid);
static void rhine_set_cam(void __iomem *ioaddr, int idx, u8 *addr);
static void rhine_set_vlan_cam(void __iomem *ioaddr, int idx, u8 *addr);
static void rhine_set_cam_mask(void __iomem *ioaddr, u32 mask);
static void rhine_set_vlan_cam_mask(void __iomem *ioaddr, u32 mask);
static void rhine_init_cam_filter(struct net_device *dev);
static void rhine_update_vcam(struct net_device *dev);
#define RHINE_WAIT_FOR(condition)				\
do  while (0)
static inline u32 get_intr_status(struct net_device *dev)
static void rhine_power_init(struct net_device *dev)
static void rhine_chip_reset(struct net_device *dev)
static void enable_mmio(long pioaddr, u32 quirks)
static void __devinit rhine_reload_eeprom(long pioaddr, struct net_device *dev)
static void rhine_poll(struct net_device *dev)
static int rhine_napipoll(struct napi_struct *napi, int budget)
static void __devinit rhine_hw_init(struct net_device *dev, long pioaddr)
static const struct net_device_ops rhine_netdev_ops = ;
static int __devinit rhine_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int alloc_ring(struct net_device* dev)
static void free_ring(struct net_device* dev)
static void alloc_rbufs(struct net_device *dev)
static void free_rbufs(struct net_device* dev)
static void alloc_tbufs(struct net_device* dev)
static void free_tbufs(struct net_device* dev)
static void rhine_check_media(struct net_device *dev, unsigned int init_media)
static void rhine_set_carrier(struct mii_if_info *mii)
static void rhine_set_cam(void __iomem *ioaddr, int idx, u8 *addr)
static void rhine_set_vlan_cam(void __iomem *ioaddr, int idx, u8 *addr)
static void rhine_set_cam_mask(void __iomem *ioaddr, u32 mask)
static void rhine_set_vlan_cam_mask(void __iomem *ioaddr, u32 mask)
static void rhine_init_cam_filter(struct net_device *dev)
static void rhine_update_vcam(struct net_device *dev)
static void rhine_vlan_rx_add_vid(struct net_device *dev, unsigned short vid)
static void rhine_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
static void init_registers(struct net_device *dev)
static void rhine_enable_linkmon(void __iomem *ioaddr)
static void rhine_disable_linkmon(void __iomem *ioaddr, u32 quirks)
static int mdio_read(struct net_device *dev, int phy_id, int regnum)
static void mdio_write(struct net_device *dev, int phy_id, int regnum, int value)
static int rhine_open(struct net_device *dev)
static void rhine_reset_task(struct work_struct *work)
static void rhine_tx_timeout(struct net_device *dev)
static netdev_tx_t rhine_start_tx(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t rhine_interrupt(int irq, void *dev_instance)
static void rhine_tx(struct net_device *dev)
static inline u16 rhine_get_vlan_tci(struct sk_buff *skb, int data_size)
static int rhine_rx(struct net_device *dev, int limit)
static inline void clear_tally_counters(void __iomem *ioaddr)
static void rhine_restart_tx(struct net_device *dev)
static void rhine_error(struct net_device *dev, int intr_status)
static struct net_device_stats *rhine_get_stats(struct net_device *dev)
static void rhine_set_rx_mode(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_nway_reset(struct net_device *dev)
static u32 netdev_get_link(struct net_device *dev)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 value)
static void rhine_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int rhine_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int rhine_close(struct net_device *dev)
static void __devexit rhine_remove_one(struct pci_dev *pdev)
static void rhine_shutdown (struct pci_dev *pdev)
static int rhine_suspend(struct pci_dev *pdev, pm_message_t state)
static int rhine_resume(struct pci_dev *pdev)
static struct pci_driver rhine_driver = ;
static struct dmi_system_id __initdata rhine_dmi_table[] = ;
static int __init rhine_init(void)
static void __exit rhine_cleanup(void)
module_init(rhine_init);
module_exit(rhine_cleanup);
