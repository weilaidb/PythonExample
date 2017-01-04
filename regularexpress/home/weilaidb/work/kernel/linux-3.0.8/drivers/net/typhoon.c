static int rx_copybreak = 200;
static unsigned int use_mmio = 2;
static const int multicast_filter_limit = 32;
#define TXHI_ENTRIES		2
#define TXLO_ENTRIES		128
#define RX_ENTRIES		32
#define COMMAND_ENTRIES		16
#define RESPONSE_ENTRIES	32
#define COMMAND_RING_SIZE	(COMMAND_ENTRIES * sizeof(struct cmd_desc))
#define RESPONSE_RING_SIZE	(RESPONSE_ENTRIES * sizeof(struct resp_desc))
#define RXFREE_ENTRIES		128
#define RXENT_ENTRIES		(RXFREE_ENTRIES - 1)
#define TX_TIMEOUT  (2*HZ)
#define PKT_BUF_SZ		1536
#define FIRMWARE_NAME		"3com/typhoon.bin"
#define pr_fmt(fmt)		KBUILD_MODNAME " " fmt
MODULE_AUTHOR("David Dillow <dave@thedillows.org>");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(FIRMWARE_NAME);
MODULE_DESCRIPTION("3Com Typhoon Family (3C990, 3CR990, and variants)");
MODULE_PARM_DESC(rx_copybreak, "Packets smaller than this are copied and "
"the buffer given back to the NIC. Default "
"is 200.");
MODULE_PARM_DESC(use_mmio, "Use MMIO (1) or PIO(0) to access the NIC. "
"Default is to try MMIO and fallback to PIO.");
module_param(rx_copybreak, int, 0);
module_param(use_mmio, int, 0);
#if defined(NETIF_F_TSO) && MAX_SKB_FRAGS > 32
#warning Typhoon only supports 32 entries in its SG list for TSO, disabling TSO
#undef NETIF_F_TSO
#if TXLO_ENTRIES <= (2 * MAX_SKB_FRAGS)
#error TX ring too small!
struct typhoon_card_info ;
#define TYPHOON_CRYPTO_NONE		0x00
#define TYPHOON_CRYPTO_DES		0x01
#define TYPHOON_CRYPTO_3DES		0x02
#define	TYPHOON_CRYPTO_VARIABLE		0x04
#define TYPHOON_FIBER			0x08
#define TYPHOON_WAKEUP_NEEDS_RESET	0x10
enum typhoon_cards ;
static struct typhoon_card_info typhoon_card_info[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(typhoon_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, typhoon_pci_tbl);
#define __3xp_aligned	____cacheline_aligned
struct typhoon_shared  __packed;
struct rxbuff_ent ;
struct typhoon ;
enum completion_wait_values ;
enum state_values ;
#define typhoon_post_pci_writes(x) \
do  while(0)
#define TYPHOON_UDELAY			50
#define TYPHOON_RESET_TIMEOUT_SLEEP	(6 * HZ)
#define TYPHOON_RESET_TIMEOUT_NOSLEEP	((6 * 1000000) / TYPHOON_UDELAY)
#define TYPHOON_WAIT_TIMEOUT		((1000000 / 2) / TYPHOON_UDELAY)
#if defined(NETIF_F_TSO)
#define skb_tso_size(x)		(skb_shinfo(x)->gso_size)
#define TSO_NUM_DESCRIPTORS	2
#define TSO_OFFLOAD_ON		TYPHOON_OFFLOAD_TCP_SEGMENT
#define NETIF_F_TSO 		0
#define skb_tso_size(x) 	0
#define TSO_NUM_DESCRIPTORS	0
#define TSO_OFFLOAD_ON		0
static inline void
typhoon_inc_index(u32 *index, const int count, const int num_entries)
static inline void
typhoon_inc_cmd_index(u32 *index, const int count)
static inline void
typhoon_inc_resp_index(u32 *index, const int count)
static inline void
typhoon_inc_rxfree_index(u32 *index, const int count)
static inline void
typhoon_inc_tx_index(u32 *index, const int count)
static inline void
typhoon_inc_rx_index(u32 *index, const int count)
static int
typhoon_reset(void __iomem *ioaddr, int wait_type)
static int
typhoon_wait_status(void __iomem *ioaddr, u32 wait_value)
static inline void
typhoon_media_status(struct net_device *dev, struct resp_desc *resp)
static inline void
typhoon_hello(struct typhoon *tp)
static int
typhoon_process_response(struct typhoon *tp, int resp_size,
struct resp_desc *resp_save)
static inline int
typhoon_num_free(int lastWrite, int lastRead, int ringSize)
static inline int
typhoon_num_free_cmd(struct typhoon *tp)
static inline int
typhoon_num_free_resp(struct typhoon *tp)
static inline int
typhoon_num_free_tx(struct transmit_ring *ring)
static int
typhoon_issue_command(struct typhoon *tp, int num_cmd, struct cmd_desc *cmd,
int num_resp, struct resp_desc *resp)
static inline void
typhoon_tso_fill(struct sk_buff *skb, struct transmit_ring *txRing,
u32 ring_dma)
static netdev_tx_t
typhoon_start_tx(struct sk_buff *skb, struct net_device *dev)
static void
typhoon_set_rx_mode(struct net_device *dev)
static int
typhoon_do_get_stats(struct typhoon *tp)
static struct net_device_stats *
typhoon_get_stats(struct net_device *dev)
static int
typhoon_set_mac_address(struct net_device *dev, void *addr)
static void
typhoon_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int
typhoon_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
typhoon_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void
typhoon_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int
typhoon_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static void
typhoon_get_ringparam(struct net_device *dev, struct ethtool_ringparam *ering)
static const struct ethtool_ops typhoon_ethtool_ops = ;
static int
typhoon_wait_interrupt(void __iomem *ioaddr)
#define shared_offset(x)	offsetof(struct typhoon_shared, x)
static void
typhoon_init_interface(struct typhoon *tp)
static void
typhoon_init_rings(struct typhoon *tp)
static const struct firmware *typhoon_fw;
static int
typhoon_request_firmware(struct typhoon *tp)
static int
typhoon_download_firmware(struct typhoon *tp)
static int
typhoon_boot_3XP(struct typhoon *tp, u32 initial_status)
static u32
typhoon_clean_tx(struct typhoon *tp, struct transmit_ring *txRing,
volatile __le32 * index)
static void
typhoon_tx_complete(struct typhoon *tp, struct transmit_ring *txRing,
volatile __le32 * index)
static void
typhoon_recycle_rx_skb(struct typhoon *tp, u32 idx)
static int
typhoon_alloc_rx_skb(struct typhoon *tp, u32 idx)
static int
typhoon_rx(struct typhoon *tp, struct basic_ring *rxRing, volatile __le32 * ready,
volatile __le32 * cleared, int budget)
static void
typhoon_fill_free_ring(struct typhoon *tp)
static int
typhoon_poll(struct napi_struct *napi, int budget)
static irqreturn_t
typhoon_interrupt(int irq, void *dev_instance)
static void
typhoon_free_rx_rings(struct typhoon *tp)
static int
typhoon_sleep(struct typhoon *tp, pci_power_t state, __le16 events)
static int
typhoon_wakeup(struct typhoon *tp, int wait_type)
static int
typhoon_start_runtime(struct typhoon *tp)
static int
typhoon_stop_runtime(struct typhoon *tp, int wait_type)
static void
typhoon_tx_timeout(struct net_device *dev)
static int
typhoon_open(struct net_device *dev)
static int
typhoon_close(struct net_device *dev)
static int
typhoon_resume(struct pci_dev *pdev)
static int
typhoon_suspend(struct pci_dev *pdev, pm_message_t state)
static int __devinit
typhoon_test_mmio(struct pci_dev *pdev)
static const struct net_device_ops typhoon_netdev_ops = ;
static int __devinit
typhoon_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
typhoon_remove_one(struct pci_dev *pdev)
static struct pci_driver typhoon_driver = ;
static int __init
typhoon_init(void)
static void __exit
typhoon_cleanup(void)
module_init(typhoon_init);
module_exit(typhoon_cleanup);
