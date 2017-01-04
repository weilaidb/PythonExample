static const u16 pcibridge_vendors[PCI_BRIDGE_VENDOR_MAX] = ;
static const u8 ac_to_hwq[] = ;
static u8 _rtl_mac_to_hwqueue(struct ieee80211_hw *hw,
struct sk_buff *skb)
static void _rtl_pci_update_default_setting(struct ieee80211_hw *hw)
static bool _rtl_pci_platform_switch_device_pci_aspm(
struct ieee80211_hw *hw,
u8 value)
static bool _rtl_pci_switch_clk_req(struct ieee80211_hw *hw, u8 value)
static void rtl_pci_disable_aspm(struct ieee80211_hw *hw)
static void rtl_pci_enable_aspm(struct ieee80211_hw *hw)
static bool rtl_pci_get_amd_l1_patch(struct ieee80211_hw *hw)
static void rtl_pci_get_linkcontrol_field(struct ieee80211_hw *hw)
static void rtl_pci_parse_configuration(struct pci_dev *pdev,
struct ieee80211_hw *hw)
static void rtl_pci_init_aspm(struct ieee80211_hw *hw)
static void _rtl_pci_io_handler_init(struct device *dev,
struct ieee80211_hw *hw)
static void _rtl_pci_io_handler_release(struct ieee80211_hw *hw)
static bool _rtl_update_earlymode_info(struct ieee80211_hw *hw,
struct sk_buff *skb, struct rtl_tcb_desc *tcb_desc, u8 tid)
static void _rtl_pci_tx_chk_waitq(struct ieee80211_hw *hw)
static void _rtl_pci_tx_isr(struct ieee80211_hw *hw, int prio)
static void _rtl_pci_rx_interrupt(struct ieee80211_hw *hw)
static irqreturn_t _rtl_pci_interrupt(int irq, void *dev_id)
static void _rtl_pci_irq_tasklet(struct ieee80211_hw *hw)
static void _rtl_pci_prepare_bcn_tasklet(struct ieee80211_hw *hw)
static void _rtl_pci_init_trx_var(struct ieee80211_hw *hw)
static void _rtl_pci_init_struct(struct ieee80211_hw *hw,
struct pci_dev *pdev)
static int _rtl_pci_init_tx_ring(struct ieee80211_hw *hw,
unsigned int prio, unsigned int entries)
static int _rtl_pci_init_rx_ring(struct ieee80211_hw *hw)
static void _rtl_pci_free_tx_ring(struct ieee80211_hw *hw,
unsigned int prio)
static void _rtl_pci_free_rx_ring(struct rtl_pci *rtlpci)
static int _rtl_pci_init_trx_ring(struct ieee80211_hw *hw)
static int _rtl_pci_deinit_trx_ring(struct ieee80211_hw *hw)
int rtl_pci_reset_trx_ring(struct ieee80211_hw *hw)
static bool rtl_pci_tx_chk_waitq_insert(struct ieee80211_hw *hw,
struct sk_buff *skb)
static int rtl_pci_tx(struct ieee80211_hw *hw, struct sk_buff *skb,
struct rtl_tcb_desc *ptcb_desc)
static void rtl_pci_flush(struct ieee80211_hw *hw, bool drop)
static void rtl_pci_deinit(struct ieee80211_hw *hw)
static int rtl_pci_init(struct ieee80211_hw *hw, struct pci_dev *pdev)
static int rtl_pci_start(struct ieee80211_hw *hw)
static void rtl_pci_stop(struct ieee80211_hw *hw)
static bool _rtl_pci_find_adapter(struct pci_dev *pdev,
struct ieee80211_hw *hw)
int __devinit rtl_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
EXPORT_SYMBOL(rtl_pci_probe);
void rtl_pci_disconnect(struct pci_dev *pdev)
EXPORT_SYMBOL(rtl_pci_disconnect);
int rtl_pci_suspend(struct pci_dev *pdev, pm_message_t state)
EXPORT_SYMBOL(rtl_pci_suspend);
int rtl_pci_resume(struct pci_dev *pdev)
EXPORT_SYMBOL(rtl_pci_resume);
struct rtl_intf_ops rtl_pci_ops = ;
