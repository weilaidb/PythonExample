#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
char ixgb_driver_name[] = "ixgb";
static char ixgb_driver_string[] = "Intel(R) PRO/10GbE Network Driver";
#define DRIVERNAPI "-NAPI"
#define DRV_VERSION "1.0.135-k2" DRIVERNAPI
const char ixgb_driver_version[] = DRV_VERSION;
static const char ixgb_copyright[] = "Copyright (c) 1999-2008 Intel Corporation.";
#define IXGB_CB_LENGTH 256
static unsigned int copybreak __read_mostly = IXGB_CB_LENGTH;
module_param(copybreak, uint, 0644);
MODULE_PARM_DESC(copybreak,
"Maximum size of packet that is copied to a new buffer on receive");
static DEFINE_PCI_DEVICE_TABLE(ixgb_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, ixgb_pci_tbl);
static int ixgb_init_module(void);
static void ixgb_exit_module(void);
static int ixgb_probe(struct pci_dev *pdev, const struct pci_device_id *ent);
static void __devexit ixgb_remove(struct pci_dev *pdev);
static int ixgb_sw_init(struct ixgb_adapter *adapter);
static int ixgb_open(struct net_device *netdev);
static int ixgb_close(struct net_device *netdev);
static void ixgb_configure_tx(struct ixgb_adapter *adapter);
static void ixgb_configure_rx(struct ixgb_adapter *adapter);
static void ixgb_setup_rctl(struct ixgb_adapter *adapter);
static void ixgb_clean_tx_ring(struct ixgb_adapter *adapter);
static void ixgb_clean_rx_ring(struct ixgb_adapter *adapter);
static void ixgb_set_multi(struct net_device *netdev);
static void ixgb_watchdog(unsigned long data);
static netdev_tx_t ixgb_xmit_frame(struct sk_buff *skb,
struct net_device *netdev);
static struct net_device_stats *ixgb_get_stats(struct net_device *netdev);
static int ixgb_change_mtu(struct net_device *netdev, int new_mtu);
static int ixgb_set_mac(struct net_device *netdev, void *p);
static irqreturn_t ixgb_intr(int irq, void *data);
static bool ixgb_clean_tx_irq(struct ixgb_adapter *adapter);
static int ixgb_clean(struct napi_struct *, int);
static bool ixgb_clean_rx_irq(struct ixgb_adapter *, int *, int);
static void ixgb_alloc_rx_buffers(struct ixgb_adapter *, int);
static void ixgb_tx_timeout(struct net_device *dev);
static void ixgb_tx_timeout_task(struct work_struct *work);
static void ixgb_vlan_strip_enable(struct ixgb_adapter *adapter);
static void ixgb_vlan_strip_disable(struct ixgb_adapter *adapter);
static void ixgb_vlan_rx_add_vid(struct net_device *netdev, u16 vid);
static void ixgb_vlan_rx_kill_vid(struct net_device *netdev, u16 vid);
static void ixgb_restore_vlan(struct ixgb_adapter *adapter);
static void ixgb_netpoll(struct net_device *dev);
static pci_ers_result_t ixgb_io_error_detected (struct pci_dev *pdev,
enum pci_channel_state state);
static pci_ers_result_t ixgb_io_slot_reset (struct pci_dev *pdev);
static void ixgb_io_resume (struct pci_dev *pdev);
static struct pci_error_handlers ixgb_err_handler = ;
static struct pci_driver ixgb_driver = ;
MODULE_AUTHOR("Intel Corporation, <linux.nics@intel.com>");
MODULE_DESCRIPTION("Intel(R) PRO/10GbE Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
#define DEFAULT_DEBUG_LEVEL_SHIFT 3
static int debug = DEFAULT_DEBUG_LEVEL_SHIFT;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
static int __init
ixgb_init_module(void)
module_init(ixgb_init_module);
static void __exit
ixgb_exit_module(void)
module_exit(ixgb_exit_module);
static void
ixgb_irq_disable(struct ixgb_adapter *adapter)
static void
ixgb_irq_enable(struct ixgb_adapter *adapter)
int
ixgb_up(struct ixgb_adapter *adapter)
void
ixgb_down(struct ixgb_adapter *adapter, bool kill_watchdog)
void
ixgb_reset(struct ixgb_adapter *adapter)
static const struct net_device_ops ixgb_netdev_ops = ;
static int __devinit
ixgb_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
ixgb_remove(struct pci_dev *pdev)
static int __devinit
ixgb_sw_init(struct ixgb_adapter *adapter)
static int
ixgb_open(struct net_device *netdev)
static int
ixgb_close(struct net_device *netdev)
int
ixgb_setup_tx_resources(struct ixgb_adapter *adapter)
static void
ixgb_configure_tx(struct ixgb_adapter *adapter)
int
ixgb_setup_rx_resources(struct ixgb_adapter *adapter)
static void
ixgb_setup_rctl(struct ixgb_adapter *adapter)
static void
ixgb_configure_rx(struct ixgb_adapter *adapter)
void
ixgb_free_tx_resources(struct ixgb_adapter *adapter)
static void
ixgb_unmap_and_free_tx_resource(struct ixgb_adapter *adapter,
struct ixgb_buffer *buffer_info)
static void
ixgb_clean_tx_ring(struct ixgb_adapter *adapter)
void
ixgb_free_rx_resources(struct ixgb_adapter *adapter)
static void
ixgb_clean_rx_ring(struct ixgb_adapter *adapter)
static int
ixgb_set_mac(struct net_device *netdev, void *p)
static void
ixgb_set_multi(struct net_device *netdev)
static void
ixgb_watchdog(unsigned long data)
#define IXGB_TX_FLAGS_CSUM		0x00000001
#define IXGB_TX_FLAGS_VLAN		0x00000002
#define IXGB_TX_FLAGS_TSO		0x00000004
static int
ixgb_tso(struct ixgb_adapter *adapter, struct sk_buff *skb)
static bool
ixgb_tx_csum(struct ixgb_adapter *adapter, struct sk_buff *skb)
#define IXGB_MAX_TXD_PWR	14
#define IXGB_MAX_DATA_PER_TXD	(1<<IXGB_MAX_TXD_PWR)
static int
ixgb_tx_map(struct ixgb_adapter *adapter, struct sk_buff *skb,
unsigned int first)
static void
ixgb_tx_queue(struct ixgb_adapter *adapter, int count, int vlan_id,int tx_flags)
static int __ixgb_maybe_stop_tx(struct net_device *netdev, int size)
static int ixgb_maybe_stop_tx(struct net_device *netdev,
struct ixgb_desc_ring *tx_ring, int size)
#define TXD_USE_COUNT(S) (((S) >> IXGB_MAX_TXD_PWR) + \
(((S) & (IXGB_MAX_DATA_PER_TXD - 1)) ? 1 : 0))
#define DESC_NEEDED TXD_USE_COUNT(IXGB_MAX_DATA_PER_TXD) + \
MAX_SKB_FRAGS * TXD_USE_COUNT(PAGE_SIZE) + 1 \
+ 1
static netdev_tx_t
ixgb_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static void
ixgb_tx_timeout(struct net_device *netdev)
static void
ixgb_tx_timeout_task(struct work_struct *work)
static struct net_device_stats *
ixgb_get_stats(struct net_device *netdev)
static int
ixgb_change_mtu(struct net_device *netdev, int new_mtu)
void
ixgb_update_stats(struct ixgb_adapter *adapter)
#define IXGB_MAX_INTR 10
static irqreturn_t
ixgb_intr(int irq, void *data)
static int
ixgb_clean(struct napi_struct *napi, int budget)
static bool
ixgb_clean_tx_irq(struct ixgb_adapter *adapter)
static void
ixgb_rx_checksum(struct ixgb_adapter *adapter,
struct ixgb_rx_desc *rx_desc,
struct sk_buff *skb)
static void ixgb_check_copybreak(struct net_device *netdev,
struct ixgb_buffer *buffer_info,
u32 length, struct sk_buff **skb)
static bool
ixgb_clean_rx_irq(struct ixgb_adapter *adapter, int *work_done, int work_to_do)
static void
ixgb_alloc_rx_buffers(struct ixgb_adapter *adapter, int cleaned_count)
static void
ixgb_vlan_strip_enable(struct ixgb_adapter *adapter)
static void
ixgb_vlan_strip_disable(struct ixgb_adapter *adapter)
static void
ixgb_vlan_rx_add_vid(struct net_device *netdev, u16 vid)
static void
ixgb_vlan_rx_kill_vid(struct net_device *netdev, u16 vid)
static void
ixgb_restore_vlan(struct ixgb_adapter *adapter)
static void ixgb_netpoll(struct net_device *dev)
static pci_ers_result_t ixgb_io_error_detected(struct pci_dev *pdev,
enum pci_channel_state state)
static pci_ers_result_t ixgb_io_slot_reset(struct pci_dev *pdev)
static void ixgb_io_resume(struct pci_dev *pdev)
