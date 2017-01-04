#define DRV_VERSION     "1.00"
const char pch_driver_version[] = DRV_VERSION;
#define PCI_DEVICE_ID_INTEL_IOH1_GBE	0x8802
#define PCH_GBE_MAR_ENTRIES		16
#define PCH_GBE_SHORT_PKT		64
#define DSC_INIT16			0xC000
#define PCH_GBE_DMA_ALIGN		0
#define PCH_GBE_DMA_PADDING		2
#define PCH_GBE_WATCHDOG_PERIOD		(1 * HZ)
#define PCH_GBE_COPYBREAK_DEFAULT	256
#define PCH_GBE_PCI_BAR			1
#define PCI_VENDOR_ID_ROHM			0x10db
#define PCI_DEVICE_ID_ROHM_ML7223_GBE		0x8013
#define PCH_GBE_TX_WEIGHT         64
#define PCH_GBE_RX_WEIGHT         64
#define PCH_GBE_RX_BUFFER_WRITE   16
#define PCH_GBE_WL_INIT_SETTING    (PCH_GBE_WLC_MP)
#define PCH_GBE_MAC_RGMII_CTRL_SETTING ( \
PCH_GBE_CHIP_TYPE_INTERNAL | \
PCH_GBE_RGMII_MODE_RGMII     \
)
#define PCH_GBE_MAX_JUMBO_FRAME_SIZE    10318
#define PCH_GBE_FRAME_SIZE_2048         2048
#define PCH_GBE_FRAME_SIZE_4096         4096
#define PCH_GBE_FRAME_SIZE_8192         8192
#define PCH_GBE_GET_DESC(R, i, type)    (&(((struct type *)((R).desc))[i]))
#define PCH_GBE_RX_DESC(R, i)           PCH_GBE_GET_DESC(R, i, pch_gbe_rx_desc)
#define PCH_GBE_TX_DESC(R, i)           PCH_GBE_GET_DESC(R, i, pch_gbe_tx_desc)
#define PCH_GBE_DESC_UNUSED(R) \
((((R)->next_to_clean > (R)->next_to_use) ? 0 : (R)->count) + \
(R)->next_to_clean - (R)->next_to_use - 1)
#define	PCH_GBE_PAUSE_PKT1_VALUE    0x00C28001
#define	PCH_GBE_PAUSE_PKT2_VALUE    0x00000100
#define	PCH_GBE_PAUSE_PKT4_VALUE    0x01000888
#define	PCH_GBE_PAUSE_PKT5_VALUE    0x0000FFFF
#define PCH_GBE_ETH_ALEN            6
#define PCH_GBE_INT_ENABLE_MASK ( \
PCH_GBE_INT_RX_DMA_CMPLT |    \
PCH_GBE_INT_RX_DSC_EMP   |    \
PCH_GBE_INT_WOL_DET      |    \
PCH_GBE_INT_TX_CMPLT          \
)
static unsigned int copybreak __read_mostly = PCH_GBE_COPYBREAK_DEFAULT;
static int pch_gbe_mdio_read(struct net_device *netdev, int addr, int reg);
static void pch_gbe_mdio_write(struct net_device *netdev, int addr, int reg,
int data);
inline void pch_gbe_mac_load_mac_addr(struct pch_gbe_hw *hw)
s32 pch_gbe_mac_read_mac_addr(struct pch_gbe_hw *hw)
static void pch_gbe_wait_clr_bit(void *reg, u32 bit)
static void pch_gbe_mac_mar_set(struct pch_gbe_hw *hw, u8 * addr, u32 index)
static void pch_gbe_mac_reset_hw(struct pch_gbe_hw *hw)
static void pch_gbe_mac_init_rx_addrs(struct pch_gbe_hw *hw, u16 mar_count)
static void pch_gbe_mac_mc_addr_list_update(struct pch_gbe_hw *hw,
u8 *mc_addr_list, u32 mc_addr_count,
u32 mar_used_count, u32 mar_total_num)
s32 pch_gbe_mac_force_mac_fc(struct pch_gbe_hw *hw)
static void pch_gbe_mac_set_wol_event(struct pch_gbe_hw *hw, u32 wu_evt)
u16 pch_gbe_mac_ctrl_miim(struct pch_gbe_hw *hw, u32 addr, u32 dir, u32 reg,
u16 data)
static void pch_gbe_mac_set_pause_packet(struct pch_gbe_hw *hw)
static int pch_gbe_alloc_queues(struct pch_gbe_adapter *adapter)
static void pch_gbe_init_stats(struct pch_gbe_adapter *adapter)
static int pch_gbe_init_phy(struct pch_gbe_adapter *adapter)
static int pch_gbe_mdio_read(struct net_device *netdev, int addr, int reg)
static void pch_gbe_mdio_write(struct net_device *netdev,
int addr, int reg, int data)
static void pch_gbe_reset_task(struct work_struct *work)
void pch_gbe_reinit_locked(struct pch_gbe_adapter *adapter)
void pch_gbe_reset(struct pch_gbe_adapter *adapter)
static void pch_gbe_free_irq(struct pch_gbe_adapter *adapter)
static void pch_gbe_irq_disable(struct pch_gbe_adapter *adapter)
static void pch_gbe_irq_enable(struct pch_gbe_adapter *adapter)
static void pch_gbe_setup_tctl(struct pch_gbe_adapter *adapter)
static void pch_gbe_configure_tx(struct pch_gbe_adapter *adapter)
static void pch_gbe_setup_rctl(struct pch_gbe_adapter *adapter)
static void pch_gbe_configure_rx(struct pch_gbe_adapter *adapter)
static void pch_gbe_unmap_and_free_tx_resource(
struct pch_gbe_adapter *adapter, struct pch_gbe_buffer *buffer_info)
static void pch_gbe_unmap_and_free_rx_resource(
struct pch_gbe_adapter *adapter,
struct pch_gbe_buffer *buffer_info)
static void pch_gbe_clean_tx_ring(struct pch_gbe_adapter *adapter,
struct pch_gbe_tx_ring *tx_ring)
static void
pch_gbe_clean_rx_ring(struct pch_gbe_adapter *adapter,
struct pch_gbe_rx_ring *rx_ring)
static void pch_gbe_set_rgmii_ctrl(struct pch_gbe_adapter *adapter, u16 speed,
u16 duplex)
static void pch_gbe_set_mode(struct pch_gbe_adapter *adapter, u16 speed,
u16 duplex)
static void pch_gbe_watchdog(unsigned long data)
static void pch_gbe_tx_queue(struct pch_gbe_adapter *adapter,
struct pch_gbe_tx_ring *tx_ring,
struct sk_buff *skb)
void pch_gbe_update_stats(struct pch_gbe_adapter *adapter)
static irqreturn_t pch_gbe_intr(int irq, void *data)
static void
pch_gbe_alloc_rx_buffers(struct pch_gbe_adapter *adapter,
struct pch_gbe_rx_ring *rx_ring, int cleaned_count)
static void pch_gbe_alloc_tx_buffers(struct pch_gbe_adapter *adapter,
struct pch_gbe_tx_ring *tx_ring)
static bool
pch_gbe_clean_tx(struct pch_gbe_adapter *adapter,
struct pch_gbe_tx_ring *tx_ring)
static bool
pch_gbe_clean_rx(struct pch_gbe_adapter *adapter,
struct pch_gbe_rx_ring *rx_ring,
int *work_done, int work_to_do)
int pch_gbe_setup_tx_resources(struct pch_gbe_adapter *adapter,
struct pch_gbe_tx_ring *tx_ring)
int pch_gbe_setup_rx_resources(struct pch_gbe_adapter *adapter,
struct pch_gbe_rx_ring *rx_ring)
void pch_gbe_free_tx_resources(struct pch_gbe_adapter *adapter,
struct pch_gbe_tx_ring *tx_ring)
void pch_gbe_free_rx_resources(struct pch_gbe_adapter *adapter,
struct pch_gbe_rx_ring *rx_ring)
static int pch_gbe_request_irq(struct pch_gbe_adapter *adapter)
static void pch_gbe_set_multi(struct net_device *netdev);
int pch_gbe_up(struct pch_gbe_adapter *adapter)
void pch_gbe_down(struct pch_gbe_adapter *adapter)
static int pch_gbe_sw_init(struct pch_gbe_adapter *adapter)
static int pch_gbe_open(struct net_device *netdev)
static int pch_gbe_stop(struct net_device *netdev)
static int pch_gbe_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static struct net_device_stats *pch_gbe_get_stats(struct net_device *netdev)
static void pch_gbe_set_multi(struct net_device *netdev)
static int pch_gbe_set_mac(struct net_device *netdev, void *addr)
static int pch_gbe_change_mtu(struct net_device *netdev, int new_mtu)
static int pch_gbe_set_features(struct net_device *netdev, u32 features)
static int pch_gbe_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static void pch_gbe_tx_timeout(struct net_device *netdev)
static int pch_gbe_napi_poll(struct napi_struct *napi, int budget)
static void pch_gbe_netpoll(struct net_device *netdev)
static const struct net_device_ops pch_gbe_netdev_ops = ;
static pci_ers_result_t pch_gbe_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t pch_gbe_io_slot_reset(struct pci_dev *pdev)
static void pch_gbe_io_resume(struct pci_dev *pdev)
static int __pch_gbe_suspend(struct pci_dev *pdev)
static int pch_gbe_suspend(struct device *device)
static int pch_gbe_resume(struct device *device)
static void pch_gbe_shutdown(struct pci_dev *pdev)
static void pch_gbe_remove(struct pci_dev *pdev)
static int pch_gbe_probe(struct pci_dev *pdev,
const struct pci_device_id *pci_id)
static DEFINE_PCI_DEVICE_TABLE(pch_gbe_pcidev_id) = ;
static const struct dev_pm_ops pch_gbe_pm_ops = ;
static struct pci_error_handlers pch_gbe_err_handler = ;
static struct pci_driver pch_gbe_driver = ;
static int __init pch_gbe_init_module(void)
static void __exit pch_gbe_exit_module(void)
module_init(pch_gbe_init_module);
module_exit(pch_gbe_exit_module);
MODULE_DESCRIPTION("EG20T PCH Gigabit ethernet Driver");
MODULE_AUTHOR("OKI SEMICONDUCTOR, <toshiharu-linux@dsn.okisemi.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_DEVICE_TABLE(pci, pch_gbe_pcidev_id);
module_param(copybreak, uint, 0644);
MODULE_PARM_DESC(copybreak,
"Maximum size of packet that is copied to a new buffer on receive");
