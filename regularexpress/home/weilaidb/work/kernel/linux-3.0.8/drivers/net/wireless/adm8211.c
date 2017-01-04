MODULE_AUTHOR("Michael Wu <flamingice@sourmilk.net>");
MODULE_AUTHOR("Jouni Malinen <j@w1.fi>");
MODULE_DESCRIPTION("Driver for IEEE 802.11b wireless cards based on ADMtek ADM8211");
MODULE_SUPPORTED_DEVICE("ADM8211");
MODULE_LICENSE("GPL");
static unsigned int tx_ring_size __read_mostly = 16;
static unsigned int rx_ring_size __read_mostly = 16;
module_param(tx_ring_size, uint, 0);
module_param(rx_ring_size, uint, 0);
static DEFINE_PCI_DEVICE_TABLE(adm8211_pci_id_table) = ;
static struct ieee80211_rate adm8211_rates[] = ;
static const struct ieee80211_channel adm8211_channels[] = ;
static void adm8211_eeprom_register_read(struct eeprom_93cx6 *eeprom)
static void adm8211_eeprom_register_write(struct eeprom_93cx6 *eeprom)
static int adm8211_read_eeprom(struct ieee80211_hw *dev)
static inline void adm8211_write_sram(struct ieee80211_hw *dev,
u32 addr, u32 data)
static void adm8211_write_sram_bytes(struct ieee80211_hw *dev,
unsigned int addr, u8 *buf,
unsigned int len)
static void adm8211_clear_sram(struct ieee80211_hw *dev)
static int adm8211_get_stats(struct ieee80211_hw *dev,
struct ieee80211_low_level_stats *stats)
static void adm8211_interrupt_tci(struct ieee80211_hw *dev)
static void adm8211_interrupt_rci(struct ieee80211_hw *dev)
static irqreturn_t adm8211_interrupt(int irq, void *dev_id)
#define WRITE_SYN(name,v_mask,v_shift,a_mask,a_shift,bits,prewrite,postwrite)\
static void adm8211_rf_write_syn_ ## name (struct ieee80211_hw *dev,	     \
u16 addr, u32 value)
WRITE_SYN(max2820,  0x00FFF, 0, 0x0F, 12, 15, 1, 1)
WRITE_SYN(al2210l,  0xFFFFF, 4, 0x0F,  0, 23, 1, 1)
WRITE_SYN(rfmd2958, 0x3FFFF, 0, 0x1F, 18, 23, 0, 1)
WRITE_SYN(rfmd2948, 0x0FFFF, 4, 0x0F,  0, 21, 0, 2)
#undef WRITE_SYN
static int adm8211_write_bbp(struct ieee80211_hw *dev, u8 addr, u8 data)
static int adm8211_rf_set_channel(struct ieee80211_hw *dev, unsigned int chan)
static void adm8211_update_mode(struct ieee80211_hw *dev)
static void adm8211_hw_init_syn(struct ieee80211_hw *dev)
static int adm8211_hw_init_bbp(struct ieee80211_hw *dev)
static int adm8211_set_rate(struct ieee80211_hw *dev)
static void adm8211_hw_init(struct ieee80211_hw *dev)
static int adm8211_hw_reset(struct ieee80211_hw *dev)
static u64 adm8211_get_tsft(struct ieee80211_hw *dev)
static void adm8211_set_interval(struct ieee80211_hw *dev,
unsigned short bi, unsigned short li)
static void adm8211_set_bssid(struct ieee80211_hw *dev, const u8 *bssid)
static int adm8211_config(struct ieee80211_hw *dev, u32 changed)
static void adm8211_bss_info_changed(struct ieee80211_hw *dev,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *conf,
u32 changes)
static u64 adm8211_prepare_multicast(struct ieee80211_hw *hw,
struct netdev_hw_addr_list *mc_list)
static void adm8211_configure_filter(struct ieee80211_hw *dev,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static int adm8211_add_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static void adm8211_remove_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static int adm8211_init_rings(struct ieee80211_hw *dev)
static void adm8211_free_rings(struct ieee80211_hw *dev)
static int adm8211_start(struct ieee80211_hw *dev)
static void adm8211_stop(struct ieee80211_hw *dev)
static void adm8211_calc_durations(int *dur, int *plcp, size_t payload_len, int len,
int plcp_signal, int short_preamble)
static void adm8211_tx_raw(struct ieee80211_hw *dev, struct sk_buff *skb,
u16 plcp_signal,
size_t hdrlen)
static void adm8211_tx(struct ieee80211_hw *dev, struct sk_buff *skb)
static int adm8211_alloc_rings(struct ieee80211_hw *dev)
static const struct ieee80211_ops adm8211_ops = ;
static int __devinit adm8211_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit adm8211_remove(struct pci_dev *pdev)
static int adm8211_suspend(struct pci_dev *pdev, pm_message_t state)
static int adm8211_resume(struct pci_dev *pdev)
MODULE_DEVICE_TABLE(pci, adm8211_pci_id_table);
static struct pci_driver adm8211_driver = ;
static int __init adm8211_init(void)
static void __exit adm8211_exit(void)
module_init(adm8211_init);
module_exit(adm8211_exit);
