#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME		"skge"
#define DRV_VERSION		"1.13"
#define DEFAULT_TX_RING_SIZE	128
#define DEFAULT_RX_RING_SIZE	512
#define MAX_TX_RING_SIZE	1024
#define TX_LOW_WATER		(MAX_SKB_FRAGS + 1)
#define MAX_RX_RING_SIZE	4096
#define RX_COPY_THRESHOLD	128
#define RX_BUF_SIZE		1536
#define PHY_RETRIES	        1000
#define ETH_JUMBO_MTU		9000
#define TX_WATCHDOG		(5 * HZ)
#define NAPI_WEIGHT		64
#define BLINK_MS		250
#define LINK_HZ			HZ
#define SKGE_EEPROM_MAGIC	0x9933aabb
MODULE_DESCRIPTION("SysKonnect Gigabit Ethernet driver");
MODULE_AUTHOR("Stephen Hemminger <shemminger@linux-foundation.org>");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
static const u32 default_msg = (NETIF_MSG_DRV | NETIF_MSG_PROBE |
NETIF_MSG_LINK | NETIF_MSG_IFUP |
NETIF_MSG_IFDOWN);
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
static DEFINE_PCI_DEVICE_TABLE(skge_id_table) = ;
MODULE_DEVICE_TABLE(pci, skge_id_table);
static int skge_up(struct net_device *dev);
static int skge_down(struct net_device *dev);
static void skge_phy_reset(struct skge_port *skge);
static void skge_tx_clean(struct net_device *dev);
static int xm_phy_write(struct skge_hw *hw, int port, u16 reg, u16 val);
static int gm_phy_write(struct skge_hw *hw, int port, u16 reg, u16 val);
static void genesis_get_stats(struct skge_port *skge, u64 *data);
static void yukon_get_stats(struct skge_port *skge, u64 *data);
static void yukon_init(struct skge_hw *hw, int port);
static void genesis_mac_init(struct skge_hw *hw, int port);
static void genesis_link_up(struct skge_port *skge);
static void skge_set_multicast(struct net_device *dev);
static const int txqaddr[] = ;
static const int rxqaddr[] = ;
static const u32 rxirqmask[] = ;
static const u32 txirqmask[] = ;
static const u32 napimask[] = ;
static const u32 portmask[] = ;
static int skge_get_regs_len(struct net_device *dev)
static void skge_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *p)
static u32 wol_supported(const struct skge_hw *hw)
static void skge_wol_init(struct skge_port *skge)
static void skge_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int skge_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static u32 skge_supported_modes(const struct skge_hw *hw)
static int skge_get_settings(struct net_device *dev,
struct ethtool_cmd *ecmd)
static int skge_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static void skge_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct skge_stat  skge_stats[] = ;
static int skge_get_sset_count(struct net_device *dev, int sset)
static void skge_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static struct net_device_stats *skge_get_stats(struct net_device *dev)
static void skge_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static void skge_get_ring_param(struct net_device *dev,
struct ethtool_ringparam *p)
static int skge_set_ring_param(struct net_device *dev,
struct ethtool_ringparam *p)
static u32 skge_get_msglevel(struct net_device *netdev)
static void skge_set_msglevel(struct net_device *netdev, u32 value)
static int skge_nway_reset(struct net_device *dev)
static void skge_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *ecmd)
static int skge_set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *ecmd)
static inline u32 hwkhz(const struct skge_hw *hw)
static inline u32 skge_clk2usec(const struct skge_hw *hw, u32 ticks)
static inline u32 skge_usecs2clk(const struct skge_hw *hw, u32 usec)
static int skge_get_coalesce(struct net_device *dev,
struct ethtool_coalesce *ecmd)
static int skge_set_coalesce(struct net_device *dev,
struct ethtool_coalesce *ecmd)
enum led_mode ;
static void skge_led(struct skge_port *skge, enum led_mode mode)
static int skge_set_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
static int skge_get_eeprom_len(struct net_device *dev)
static u32 skge_vpd_read(struct pci_dev *pdev, int cap, u16 offset)
static void skge_vpd_write(struct pci_dev *pdev, int cap, u16 offset, u32 val)
static int skge_get_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 *data)
static int skge_set_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 *data)
static const struct ethtool_ops skge_ethtool_ops = ;
static int skge_ring_alloc(struct skge_ring *ring, void *vaddr, u32 base)
static void skge_rx_setup(struct skge_port *skge, struct skge_element *e,
struct sk_buff *skb, unsigned int bufsize)
static inline void skge_rx_reuse(struct skge_element *e, unsigned int size)
static void skge_rx_clean(struct skge_port *skge)
static int skge_rx_fill(struct net_device *dev)
static const char *skge_pause(enum pause_status status)
static void skge_link_up(struct skge_port *skge)
static void skge_link_down(struct skge_port *skge)
static void xm_link_down(struct skge_hw *hw, int port)
static int __xm_phy_read(struct skge_hw *hw, int port, u16 reg, u16 *val)
static u16 xm_phy_read(struct skge_hw *hw, int port, u16 reg)
static int xm_phy_write(struct skge_hw *hw, int port, u16 reg, u16 val)
static void genesis_init(struct skge_hw *hw)
static void genesis_reset(struct skge_hw *hw, int port)
static const u16 phy_pause_map[] = ;
static const u16 fiber_pause_map[] = ;
static void bcom_check_link(struct skge_hw *hw, int port)
static void bcom_phy_init(struct skge_port *skge)
static void xm_phy_init(struct skge_port *skge)
static int xm_check_link(struct net_device *dev)
static void xm_link_timer(unsigned long arg)
static void genesis_mac_init(struct skge_hw *hw, int port)
static void genesis_stop(struct skge_port *skge)
static void genesis_get_stats(struct skge_port *skge, u64 *data)
static void genesis_mac_intr(struct skge_hw *hw, int port)
static void genesis_link_up(struct skge_port *skge)
static inline void bcom_phy_intr(struct skge_port *skge)
static int gm_phy_write(struct skge_hw *hw, int port, u16 reg, u16 val)
static int __gm_phy_read(struct skge_hw *hw, int port, u16 reg, u16 *val)
static u16 gm_phy_read(struct skge_hw *hw, int port, u16 reg)
static void yukon_init(struct skge_hw *hw, int port)
static void yukon_reset(struct skge_hw *hw, int port)
static int is_yukon_lite_a0(struct skge_hw *hw)
static void yukon_mac_init(struct skge_hw *hw, int port)
static void yukon_suspend(struct skge_hw *hw, int port)
static void yukon_stop(struct skge_port *skge)
static void yukon_get_stats(struct skge_port *skge, u64 *data)
static void yukon_mac_intr(struct skge_hw *hw, int port)
static u16 yukon_speed(const struct skge_hw *hw, u16 aux)
static void yukon_link_up(struct skge_port *skge)
static void yukon_link_down(struct skge_port *skge)
static void yukon_phy_intr(struct skge_port *skge)
static void skge_phy_reset(struct skge_port *skge)
static int skge_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void skge_ramset(struct skge_hw *hw, u16 q, u32 start, size_t len)
static void skge_qset(struct skge_port *skge, u16 q,
const struct skge_element *e)
static int skge_up(struct net_device *dev)
static void skge_rx_stop(struct skge_hw *hw, int port)
static int skge_down(struct net_device *dev)
static inline int skge_avail(const struct skge_ring *ring)
static netdev_tx_t skge_xmit_frame(struct sk_buff *skb,
struct net_device *dev)
static void skge_tx_free(struct skge_port *skge, struct skge_element *e,
u32 control)
static void skge_tx_clean(struct net_device *dev)
static void skge_tx_timeout(struct net_device *dev)
static int skge_change_mtu(struct net_device *dev, int new_mtu)
static const u8 pause_mc_addr[ETH_ALEN] = ;
static void genesis_add_filter(u8 filter[8], const u8 *addr)
static void genesis_set_multicast(struct net_device *dev)
static void yukon_add_filter(u8 filter[8], const u8 *addr)
static void yukon_set_multicast(struct net_device *dev)
static inline u16 phy_length(const struct skge_hw *hw, u32 status)
static inline int bad_phy_status(const struct skge_hw *hw, u32 status)
static void skge_set_multicast(struct net_device *dev)
static struct sk_buff *skge_rx_get(struct net_device *dev,
struct skge_element *e,
u32 control, u32 status, u16 csum)
static void skge_tx_done(struct net_device *dev)
static int skge_poll(struct napi_struct *napi, int to_do)
static void skge_mac_parity(struct skge_hw *hw, int port)
static void skge_mac_intr(struct skge_hw *hw, int port)
static void skge_error_irq(struct skge_hw *hw)
static void skge_extirq(unsigned long arg)
static irqreturn_t skge_intr(int irq, void *dev_id)
static void skge_netpoll(struct net_device *dev)
static int skge_set_mac_address(struct net_device *dev, void *p)
static const struct  skge_chips[] = ;
static const char *skge_board_name(const struct skge_hw *hw)
static int skge_reset(struct skge_hw *hw)
static struct dentry *skge_debug;
static int skge_debug_show(struct seq_file *seq, void *v)
static int skge_debug_open(struct inode *inode, struct file *file)
static const struct file_operations skge_debug_fops = ;
static int skge_device_event(struct notifier_block *unused,
unsigned long event, void *ptr)
static struct notifier_block skge_notifier = ;
static __init void skge_debug_init(void)
static __exit void skge_debug_cleanup(void)
#define skge_debug_init()
#define skge_debug_cleanup()
static const struct net_device_ops skge_netdev_ops = ;
static struct net_device *skge_devinit(struct skge_hw *hw, int port,
int highmem)
static void __devinit skge_show_addr(struct net_device *dev)
static int only_32bit_dma;
static int __devinit skge_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit skge_remove(struct pci_dev *pdev)
static int skge_suspend(struct device *dev)
static int skge_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(skge_pm_ops, skge_suspend, skge_resume);
#define SKGE_PM_OPS (&skge_pm_ops)
#define SKGE_PM_OPS NULL
static void skge_shutdown(struct pci_dev *pdev)
static struct pci_driver skge_driver = ;
static struct dmi_system_id skge_32bit_dma_boards[] = ;
static int __init skge_init_module(void)
static void __exit skge_cleanup_module(void)
module_init(skge_init_module);
module_exit(skge_cleanup_module);
