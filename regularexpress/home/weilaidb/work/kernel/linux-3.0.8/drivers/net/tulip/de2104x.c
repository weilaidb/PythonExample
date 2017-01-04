#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME		"de2104x"
#define DRV_VERSION		"0.7"
#define DRV_RELDATE		"Mar 17, 2004"
static char version[] =
"PCI Ethernet driver v" DRV_VERSION " (" DRV_RELDATE ")";
MODULE_AUTHOR("Jeff Garzik <jgarzik@pobox.com>");
MODULE_DESCRIPTION("Intel/Digital 21040/1 series PCI Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
static int debug = -1;
module_param (debug, int, 0);
MODULE_PARM_DESC (debug, "de2104x bitmapped message enable number");
#if defined(__alpha__) || defined(__arm__) || defined(__hppa__) || \
defined(CONFIG_SPARC) || defined(__ia64__) ||		   \
defined(__sh__) || defined(__mips__)
static int rx_copybreak = 1518;
static int rx_copybreak = 100;
module_param (rx_copybreak, int, 0);
MODULE_PARM_DESC (rx_copybreak, "de2104x Breakpoint at which Rx packets are copied");
#define DE_DEF_MSG_ENABLE	(NETIF_MSG_DRV		| \
NETIF_MSG_PROBE 	| \
NETIF_MSG_LINK		| \
NETIF_MSG_IFDOWN	| \
NETIF_MSG_IFUP		| \
NETIF_MSG_RX_ERR	| \
NETIF_MSG_TX_ERR)
#define DSL			0
#define DSL			CONFIG_DE2104X_DSL
#define DE_RX_RING_SIZE		64
#define DE_TX_RING_SIZE		64
#define DE_RING_BYTES		\
((sizeof(struct de_desc) * DE_RX_RING_SIZE) +	\
(sizeof(struct de_desc) * DE_TX_RING_SIZE))
#define NEXT_TX(N)		(((N) + 1) & (DE_TX_RING_SIZE - 1))
#define NEXT_RX(N)		(((N) + 1) & (DE_RX_RING_SIZE - 1))
#define TX_BUFFS_AVAIL(CP)					\
(((CP)->tx_tail <= (CP)->tx_head) ?			\
(CP)->tx_tail + (DE_TX_RING_SIZE - 1) - (CP)->tx_head :	\
(CP)->tx_tail - (CP)->tx_head - 1)
#define PKT_BUF_SZ		1536
#define RX_OFFSET		2
#define DE_SETUP_SKB		((struct sk_buff *) 1)
#define DE_DUMMY_SKB		((struct sk_buff *) 2)
#define DE_SETUP_FRAME_WORDS	96
#define DE_EEPROM_WORDS		256
#define DE_EEPROM_SIZE		(DE_EEPROM_WORDS * sizeof(u16))
#define DE_MAX_MEDIA		5
#define DE_MEDIA_TP_AUTO	0
#define DE_MEDIA_BNC		1
#define DE_MEDIA_AUI		2
#define DE_MEDIA_TP		3
#define DE_MEDIA_TP_FD		4
#define DE_MEDIA_INVALID	DE_MAX_MEDIA
#define DE_MEDIA_FIRST		0
#define DE_MEDIA_LAST		(DE_MAX_MEDIA - 1)
#define DE_AUI_BNC		(SUPPORTED_AUI | SUPPORTED_BNC)
#define DE_TIMER_LINK		(60 * HZ)
#define DE_TIMER_NO_LINK	(5 * HZ)
#define DE_NUM_REGS		16
#define DE_REGS_SIZE		(DE_NUM_REGS * sizeof(u32))
#define DE_REGS_VER		1
#define TX_TIMEOUT		(6*HZ)
#define FULL_DUPLEX_MAGIC	0x6969
enum ;
static const u32 de_intr_mask =
IntrOK | IntrErr | RxIntr | RxEmpty | TxIntr | TxEmpty |
LinkPass | LinkFail | PciErr;
static const u32 de_bus_mode = CacheAlign16 | BurstLen4 | DescSkipLen;
struct de_srom_media_block  __packed;
struct de_srom_info_leaf  __packed;
struct de_desc ;
struct media_info ;
struct ring_info ;
struct de_private ;
static void de_set_rx_mode (struct net_device *dev);
static void de_tx (struct de_private *de);
static void de_clean_rings (struct de_private *de);
static void de_media_interrupt (struct de_private *de, u32 status);
static void de21040_media_timer (unsigned long data);
static void de21041_media_timer (unsigned long data);
static unsigned int de_ok_to_advertise (struct de_private *de, u32 new_media);
static DEFINE_PCI_DEVICE_TABLE(de_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, de_pci_tbl);
static const char * const media_name[DE_MAX_MEDIA] = ;
static u16 t21040_csr13[] = ;
static u16 t21040_csr14[] = ;
static u16 t21040_csr15[] = ;
static u16 t21041_csr13[] = ;
static u16 t21041_csr14[] = ;
static u16 t21041_csr14_brk[] = ;
static u16 t21041_csr15[] = ;
#define dr32(reg)	ioread32(de->regs + (reg))
#define dw32(reg, val)	iowrite32((val), de->regs + (reg))
static void de_rx_err_acct (struct de_private *de, unsigned rx_tail,
u32 status, u32 len)
static void de_rx (struct de_private *de)
static irqreturn_t de_interrupt (int irq, void *dev_instance)
static void de_tx (struct de_private *de)
static netdev_tx_t de_start_xmit (struct sk_buff *skb,
struct net_device *dev)
#undef set_bit_le
#define set_bit_le(i,p) do  while(0)
static void build_setup_frame_hash(u16 *setup_frm, struct net_device *dev)
static void build_setup_frame_perfect(u16 *setup_frm, struct net_device *dev)
static void __de_set_rx_mode (struct net_device *dev)
static void de_set_rx_mode (struct net_device *dev)
static inline void de_rx_missed(struct de_private *de, u32 rx_missed)
static void __de_get_stats(struct de_private *de)
static struct net_device_stats *de_get_stats(struct net_device *dev)
static inline int de_is_running (struct de_private *de)
static void de_stop_rxtx (struct de_private *de)
static inline void de_start_rxtx (struct de_private *de)
static void de_stop_hw (struct de_private *de)
static void de_link_up(struct de_private *de)
static void de_link_down(struct de_private *de)
static void de_set_media (struct de_private *de)
static void de_next_media (struct de_private *de, const u32 *media,
unsigned int n_media)
static void de21040_media_timer (unsigned long data)
static unsigned int de_ok_to_advertise (struct de_private *de, u32 new_media)
static void de21041_media_timer (unsigned long data)
static void de_media_interrupt (struct de_private *de, u32 status)
static int de_reset_mac (struct de_private *de)
static void de_adapter_wake (struct de_private *de)
static void de_adapter_sleep (struct de_private *de)
static int de_init_hw (struct de_private *de)
static int de_refill_rx (struct de_private *de)
static int de_init_rings (struct de_private *de)
static int de_alloc_rings (struct de_private *de)
static void de_clean_rings (struct de_private *de)
static void de_free_rings (struct de_private *de)
static int de_open (struct net_device *dev)
static int de_close (struct net_device *dev)
static void de_tx_timeout (struct net_device *dev)
static void __de_get_regs(struct de_private *de, u8 *buf)
static int __de_get_settings(struct de_private *de, struct ethtool_cmd *ecmd)
static int __de_set_settings(struct de_private *de, struct ethtool_cmd *ecmd)
static void de_get_drvinfo (struct net_device *dev,struct ethtool_drvinfo *info)
static int de_get_regs_len(struct net_device *dev)
static int de_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int de_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static u32 de_get_msglevel(struct net_device *dev)
static void de_set_msglevel(struct net_device *dev, u32 msglvl)
static int de_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static int de_nway_reset(struct net_device *dev)
static void de_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *data)
static const struct ethtool_ops de_ethtool_ops = ;
static void __devinit de21040_get_mac_address (struct de_private *de)
static void __devinit de21040_get_media_info(struct de_private *de)
static unsigned __devinit tulip_read_eeprom(void __iomem *regs, int location, int addr_len)
static void __devinit de21041_get_srom_info (struct de_private *de)
static const struct net_device_ops de_netdev_ops = ;
static int __devinit de_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit de_remove_one (struct pci_dev *pdev)
static int de_suspend (struct pci_dev *pdev, pm_message_t state)
static int de_resume (struct pci_dev *pdev)
static struct pci_driver de_driver = ;
static int __init de_init (void)
static void __exit de_exit (void)
module_init(de_init);
module_exit(de_exit);
