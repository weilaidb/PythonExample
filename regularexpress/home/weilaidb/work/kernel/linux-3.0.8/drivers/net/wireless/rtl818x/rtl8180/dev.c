MODULE_AUTHOR("Michael Wu <flamingice@sourmilk.net>");
MODULE_AUTHOR("Andrea Merello <andreamrl@tiscali.it>");
MODULE_DESCRIPTION("RTL8180 / RTL8185 PCI wireless driver");
MODULE_LICENSE("GPL");
static DEFINE_PCI_DEVICE_TABLE(rtl8180_table) = ;
MODULE_DEVICE_TABLE(pci, rtl8180_table);
static const struct ieee80211_rate rtl818x_rates[] = ;
static const struct ieee80211_channel rtl818x_channels[] = ;
void rtl8180_write_phy(struct ieee80211_hw *dev, u8 addr, u32 data)
static void rtl8180_handle_rx(struct ieee80211_hw *dev)
static void rtl8180_handle_tx(struct ieee80211_hw *dev, unsigned int prio)
static irqreturn_t rtl8180_interrupt(int irq, void *dev_id)
static void rtl8180_tx(struct ieee80211_hw *dev, struct sk_buff *skb)
void rtl8180_set_anaparam(struct rtl8180_priv *priv, u32 anaparam)
static int rtl8180_init_hw(struct ieee80211_hw *dev)
static int rtl8180_init_rx_ring(struct ieee80211_hw *dev)
static void rtl8180_free_rx_ring(struct ieee80211_hw *dev)
static int rtl8180_init_tx_ring(struct ieee80211_hw *dev,
unsigned int prio, unsigned int entries)
static void rtl8180_free_tx_ring(struct ieee80211_hw *dev, unsigned int prio)
static int rtl8180_start(struct ieee80211_hw *dev)
static void rtl8180_stop(struct ieee80211_hw *dev)
static u64 rtl8180_get_tsf(struct ieee80211_hw *dev)
static void rtl8180_beacon_work(struct work_struct *work)
static int rtl8180_add_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static void rtl8180_remove_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static int rtl8180_config(struct ieee80211_hw *dev, u32 changed)
static void rtl8180_bss_info_changed(struct ieee80211_hw *dev,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info,
u32 changed)
static u64 rtl8180_prepare_multicast(struct ieee80211_hw *dev,
struct netdev_hw_addr_list *mc_list)
static void rtl8180_configure_filter(struct ieee80211_hw *dev,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static const struct ieee80211_ops rtl8180_ops = ;
static void rtl8180_eeprom_register_read(struct eeprom_93cx6 *eeprom)
static void rtl8180_eeprom_register_write(struct eeprom_93cx6 *eeprom)
static int __devinit rtl8180_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit rtl8180_remove(struct pci_dev *pdev)
static int rtl8180_suspend(struct pci_dev *pdev, pm_message_t state)
static int rtl8180_resume(struct pci_dev *pdev)
static struct pci_driver rtl8180_driver = ;
static int __init rtl8180_init(void)
static void __exit rtl8180_exit(void)
module_init(rtl8180_init);
module_exit(rtl8180_exit);
