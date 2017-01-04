#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define MYRI10GE_VERSION_STR "1.5.2-1.459"
MODULE_DESCRIPTION("Myricom 10G driver (10GbE)");
MODULE_AUTHOR("Maintainer: help@myri.com");
MODULE_VERSION(MYRI10GE_VERSION_STR);
MODULE_LICENSE("Dual BSD/GPL");
#define MYRI10GE_MAX_ETHER_MTU 9014
#define MYRI10GE_ETH_STOPPED 0
#define MYRI10GE_ETH_STOPPING 1
#define MYRI10GE_ETH_STARTING 2
#define MYRI10GE_ETH_RUNNING 3
#define MYRI10GE_ETH_OPEN_FAILED 4
#define MYRI10GE_EEPROM_STRINGS_SIZE 256
#define MYRI10GE_MAX_SEND_DESC_TSO ((65536 / 2048) * 2)
#define MYRI10GE_MAX_LRO_DESCRIPTORS 8
#define MYRI10GE_LRO_MAX_PKTS 64
#define MYRI10GE_NO_CONFIRM_DATA htonl(0xffffffff)
#define MYRI10GE_NO_RESPONSE_RESULT 0xffffffff
#define MYRI10GE_ALLOC_ORDER 0
#define MYRI10GE_ALLOC_SIZE ((1 << MYRI10GE_ALLOC_ORDER) * PAGE_SIZE)
#define MYRI10GE_MAX_FRAGS_PER_FRAME (MYRI10GE_MAX_ETHER_MTU/MYRI10GE_ALLOC_SIZE + 1)
#define MYRI10GE_MAX_SLICES 32
struct myri10ge_rx_buffer_state ;
struct myri10ge_tx_buffer_state ;
struct myri10ge_cmd ;
struct myri10ge_rx_buf ;
struct myri10ge_tx_buf ;
struct myri10ge_rx_done ;
struct myri10ge_slice_netstats ;
struct myri10ge_slice_state ;
struct myri10ge_priv ;
static char *myri10ge_fw_unaligned = "myri10ge_ethp_z8e.dat";
static char *myri10ge_fw_aligned = "myri10ge_eth_z8e.dat";
static char *myri10ge_fw_rss_unaligned = "myri10ge_rss_ethp_z8e.dat";
static char *myri10ge_fw_rss_aligned = "myri10ge_rss_eth_z8e.dat";
MODULE_FIRMWARE("myri10ge_ethp_z8e.dat");
MODULE_FIRMWARE("myri10ge_eth_z8e.dat");
MODULE_FIRMWARE("myri10ge_rss_ethp_z8e.dat");
MODULE_FIRMWARE("myri10ge_rss_eth_z8e.dat");
static char *myri10ge_fw_name = NULL;
module_param(myri10ge_fw_name, charp, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(myri10ge_fw_name, "Firmware image name");
#define MYRI10GE_MAX_BOARDS 8
static char *myri10ge_fw_names[MYRI10GE_MAX_BOARDS] =
;
module_param_array_named(myri10ge_fw_names, myri10ge_fw_names, charp, NULL,
0444);
MODULE_PARM_DESC(myri10ge_fw_name, "Firmware image names per board");
static int myri10ge_ecrc_enable = 1;
module_param(myri10ge_ecrc_enable, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_ecrc_enable, "Enable Extended CRC on PCI-E");
static int myri10ge_small_bytes = -1;
module_param(myri10ge_small_bytes, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(myri10ge_small_bytes, "Threshold of small packets");
static int myri10ge_msi = 1;
module_param(myri10ge_msi, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(myri10ge_msi, "Enable Message Signalled Interrupts");
static int myri10ge_intr_coal_delay = 75;
module_param(myri10ge_intr_coal_delay, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_intr_coal_delay, "Interrupt coalescing delay");
static int myri10ge_flow_control = 1;
module_param(myri10ge_flow_control, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_flow_control, "Pause parameter");
static int myri10ge_deassert_wait = 1;
module_param(myri10ge_deassert_wait, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(myri10ge_deassert_wait,
"Wait when deasserting legacy interrupts");
static int myri10ge_force_firmware = 0;
module_param(myri10ge_force_firmware, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_force_firmware,
"Force firmware to assume aligned completions");
static int myri10ge_initial_mtu = MYRI10GE_MAX_ETHER_MTU - ETH_HLEN;
module_param(myri10ge_initial_mtu, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_initial_mtu, "Initial MTU");
static int myri10ge_napi_weight = 64;
module_param(myri10ge_napi_weight, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_napi_weight, "Set NAPI weight");
static int myri10ge_watchdog_timeout = 1;
module_param(myri10ge_watchdog_timeout, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_watchdog_timeout, "Set watchdog timeout");
static int myri10ge_max_irq_loops = 1048576;
module_param(myri10ge_max_irq_loops, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_max_irq_loops,
"Set stuck legacy IRQ detection threshold");
#define MYRI10GE_MSG_DEFAULT NETIF_MSG_LINK
static int myri10ge_debug = -1;
module_param(myri10ge_debug, int, 0);
MODULE_PARM_DESC(myri10ge_debug, "Debug level (0=none,...,16=all)");
static int myri10ge_lro_max_pkts = MYRI10GE_LRO_MAX_PKTS;
module_param(myri10ge_lro_max_pkts, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_lro_max_pkts,
"Number of LRO packets to be aggregated");
static int myri10ge_fill_thresh = 256;
module_param(myri10ge_fill_thresh, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(myri10ge_fill_thresh, "Number of empty rx slots allowed");
static int myri10ge_reset_recover = 1;
static int myri10ge_max_slices = 1;
module_param(myri10ge_max_slices, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_max_slices, "Max tx/rx queues");
static int myri10ge_rss_hash = MXGEFW_RSS_HASH_TYPE_SRC_DST_PORT;
module_param(myri10ge_rss_hash, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_rss_hash, "Type of RSS hashing to do");
static int myri10ge_dca = 1;
module_param(myri10ge_dca, int, S_IRUGO);
MODULE_PARM_DESC(myri10ge_dca, "Enable DCA if possible");
#define MYRI10GE_FW_OFFSET 1024*1024
#define MYRI10GE_HIGHPART_TO_U32(X) \
(sizeof (X) == 8) ? ((u32)((u64)(X) >> 32)) : (0)
#define MYRI10GE_LOWPART_TO_U32(X) ((u32)(X))
#define myri10ge_pio_copy(to,from,size) __iowrite64_copy(to,from,size/8)
static void myri10ge_set_multicast_list(struct net_device *dev);
static netdev_tx_t myri10ge_sw_tso(struct sk_buff *skb,
struct net_device *dev);
static inline void put_be32(__be32 val, __be32 __iomem * p)
static struct net_device_stats *myri10ge_get_stats(struct net_device *dev);
static void set_fw_name(struct myri10ge_priv *mgp, char *name, bool allocated)
static int
myri10ge_send_cmd(struct myri10ge_priv *mgp, u32 cmd,
struct myri10ge_cmd *data, int atomic)
static int myri10ge_read_mac_addr(struct myri10ge_priv *mgp)
static void myri10ge_dummy_rdma(struct myri10ge_priv *mgp, int enable)
static int
myri10ge_validate_firmware(struct myri10ge_priv *mgp,
struct mcp_gen_header *hdr)
static int myri10ge_load_hotplug_firmware(struct myri10ge_priv *mgp, u32 * size)
static int myri10ge_adopt_running_firmware(struct myri10ge_priv *mgp)
static int myri10ge_get_firmware_capabilities(struct myri10ge_priv *mgp)
static int myri10ge_load_firmware(struct myri10ge_priv *mgp, int adopt)
static int myri10ge_update_mac_address(struct myri10ge_priv *mgp, u8 * addr)
static int myri10ge_change_pause(struct myri10ge_priv *mgp, int pause)
static void
myri10ge_change_promisc(struct myri10ge_priv *mgp, int promisc, int atomic)
static int myri10ge_dma_test(struct myri10ge_priv *mgp, int test_type)
static int myri10ge_reset(struct myri10ge_priv *mgp)
static int myri10ge_toggle_relaxed(struct pci_dev *pdev, int on)
static void
myri10ge_write_dca(struct myri10ge_slice_state *ss, int cpu, int tag)
static inline void myri10ge_update_dca(struct myri10ge_slice_state *ss)
static void myri10ge_setup_dca(struct myri10ge_priv *mgp)
static void myri10ge_teardown_dca(struct myri10ge_priv *mgp)
static int myri10ge_notify_dca_device(struct device *dev, void *data)
static inline void
myri10ge_submit_8rx(struct mcp_kreq_ether_recv __iomem * dst,
struct mcp_kreq_ether_recv *src)
static inline void myri10ge_vlan_ip_csum(struct sk_buff *skb, __wsum hw_csum)
static inline void
myri10ge_rx_skb_build(struct sk_buff *skb, u8 * va,
struct skb_frag_struct *rx_frags, int len, int hlen)
static void
myri10ge_alloc_rx_pages(struct myri10ge_priv *mgp, struct myri10ge_rx_buf *rx,
int bytes, int watchdog)
static inline void
myri10ge_unmap_rx_page(struct pci_dev *pdev,
struct myri10ge_rx_buffer_state *info, int bytes)
#define MYRI10GE_HLEN 64
static inline int
myri10ge_rx_done(struct myri10ge_slice_state *ss, int len, __wsum csum,
int lro_enabled)
static inline void
myri10ge_tx_done(struct myri10ge_slice_state *ss, int mcp_index)
static inline int
myri10ge_clean_rx_done(struct myri10ge_slice_state *ss, int budget)
static inline void myri10ge_check_statblock(struct myri10ge_priv *mgp)
static int myri10ge_poll(struct napi_struct *napi, int budget)
static irqreturn_t myri10ge_intr(int irq, void *arg)
static int
myri10ge_get_settings(struct net_device *netdev, struct ethtool_cmd *cmd)
static void
myri10ge_get_drvinfo(struct net_device *netdev, struct ethtool_drvinfo *info)
static int
myri10ge_get_coalesce(struct net_device *netdev, struct ethtool_coalesce *coal)
static int
myri10ge_set_coalesce(struct net_device *netdev, struct ethtool_coalesce *coal)
static void
myri10ge_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int
myri10ge_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static void
myri10ge_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static const char myri10ge_gstrings_main_stats[][ETH_GSTRING_LEN] = ;
static const char myri10ge_gstrings_slice_stats[][ETH_GSTRING_LEN] = ;
#define MYRI10GE_NET_STATS_LEN      21
#define MYRI10GE_MAIN_STATS_LEN  ARRAY_SIZE(myri10ge_gstrings_main_stats)
#define MYRI10GE_SLICE_STATS_LEN  ARRAY_SIZE(myri10ge_gstrings_slice_stats)
static void
myri10ge_get_strings(struct net_device *netdev, u32 stringset, u8 * data)
static int myri10ge_get_sset_count(struct net_device *netdev, int sset)
static void
myri10ge_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 * data)
static void myri10ge_set_msglevel(struct net_device *netdev, u32 value)
static u32 myri10ge_get_msglevel(struct net_device *netdev)
static const struct ethtool_ops myri10ge_ethtool_ops = ;
static int myri10ge_allocate_rings(struct myri10ge_slice_state *ss)
static void myri10ge_free_rings(struct myri10ge_slice_state *ss)
static int myri10ge_request_irq(struct myri10ge_priv *mgp)
static void myri10ge_free_irq(struct myri10ge_priv *mgp)
static int
myri10ge_get_frag_header(struct skb_frag_struct *frag, void **mac_hdr,
void **ip_hdr, void **tcpudp_hdr,
u64 * hdr_flags, void *priv)
static int myri10ge_get_txrx(struct myri10ge_priv *mgp, int slice)
static int myri10ge_set_stats(struct myri10ge_priv *mgp, int slice)
static int myri10ge_open(struct net_device *dev)
static int myri10ge_close(struct net_device *dev)
static inline void
myri10ge_submit_req_backwards(struct myri10ge_tx_buf *tx,
struct mcp_kreq_ether_send *src, int cnt)
static inline void
myri10ge_submit_req(struct myri10ge_tx_buf *tx, struct mcp_kreq_ether_send *src,
int cnt)
static netdev_tx_t myri10ge_xmit(struct sk_buff *skb,
struct net_device *dev)
static netdev_tx_t myri10ge_sw_tso(struct sk_buff *skb,
struct net_device *dev)
static struct net_device_stats *myri10ge_get_stats(struct net_device *dev)
static void myri10ge_set_multicast_list(struct net_device *dev)
static int myri10ge_set_mac_address(struct net_device *dev, void *addr)
static u32 myri10ge_fix_features(struct net_device *dev, u32 features)
static int myri10ge_change_mtu(struct net_device *dev, int new_mtu)
static void myri10ge_enable_ecrc(struct myri10ge_priv *mgp)
static void myri10ge_firmware_probe(struct myri10ge_priv *mgp)
static void myri10ge_select_firmware(struct myri10ge_priv *mgp)
static int myri10ge_suspend(struct pci_dev *pdev, pm_message_t state)
static int myri10ge_resume(struct pci_dev *pdev)
static u32 myri10ge_read_reboot(struct myri10ge_priv *mgp)
static void myri10ge_watchdog(struct work_struct *work)
static void myri10ge_watchdog_timer(unsigned long arg)
static void myri10ge_free_slices(struct myri10ge_priv *mgp)
static int myri10ge_alloc_slices(struct myri10ge_priv *mgp)
static void myri10ge_probe_slices(struct myri10ge_priv *mgp)
static const struct net_device_ops myri10ge_netdev_ops = ;
static int myri10ge_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void myri10ge_remove(struct pci_dev *pdev)
#define PCI_DEVICE_ID_MYRICOM_MYRI10GE_Z8E 	0x0008
#define PCI_DEVICE_ID_MYRICOM_MYRI10GE_Z8E_9	0x0009
static DEFINE_PCI_DEVICE_TABLE(myri10ge_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, myri10ge_pci_tbl);
static struct pci_driver myri10ge_driver = ;
static int
myri10ge_notify_dca(struct notifier_block *nb, unsigned long event, void *p)
static struct notifier_block myri10ge_dca_notifier = ;
static __init int myri10ge_init_module(void)
module_init(myri10ge_init_module);
static __exit void myri10ge_cleanup_module(void)
module_exit(myri10ge_cleanup_module);
