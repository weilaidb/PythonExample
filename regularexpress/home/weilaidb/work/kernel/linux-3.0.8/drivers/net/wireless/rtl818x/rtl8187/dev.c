MODULE_AUTHOR("Michael Wu <flamingice@sourmilk.net>");
MODULE_AUTHOR("Andrea Merello <andreamrl@tiscali.it>");
MODULE_AUTHOR("Herton Ronaldo Krzesinski <herton@mandriva.com.br>");
MODULE_AUTHOR("Hin-Tak Leung <htl10@users.sourceforge.net>");
MODULE_AUTHOR("Larry Finger <Larry.Finger@lwfinger.net>");
MODULE_DESCRIPTION("RTL8187/RTL8187B USB wireless driver");
MODULE_LICENSE("GPL");
static struct usb_device_id rtl8187_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(usb, rtl8187_table);
static const struct ieee80211_rate rtl818x_rates[] = ;
static const struct ieee80211_channel rtl818x_channels[] = ;
static void rtl8187_iowrite_async_cb(struct urb *urb)
static void rtl8187_iowrite_async(struct rtl8187_priv *priv, __le16 addr,
void *data, u16 len)
static inline void rtl818x_iowrite32_async(struct rtl8187_priv *priv,
__le32 *addr, u32 val)
void rtl8187_write_phy(struct ieee80211_hw *dev, u8 addr, u32 data)
static void rtl8187_tx_cb(struct urb *urb)
static void rtl8187_tx(struct ieee80211_hw *dev, struct sk_buff *skb)
static void rtl8187_rx_cb(struct urb *urb)
static int rtl8187_init_urbs(struct ieee80211_hw *dev)
static void rtl8187b_status_cb(struct urb *urb)
static int rtl8187b_init_status_urb(struct ieee80211_hw *dev)
static void rtl8187_set_anaparam(struct rtl8187_priv *priv, bool rfon)
static int rtl8187_cmd_reset(struct ieee80211_hw *dev)
static int rtl8187_init_hw(struct ieee80211_hw *dev)
static const u8 rtl8187b_reg_table[][3] = ;
static int rtl8187b_init_hw(struct ieee80211_hw *dev)
static void rtl8187_work(struct work_struct *work)
static int rtl8187_start(struct ieee80211_hw *dev)
static void rtl8187_stop(struct ieee80211_hw *dev)
static int rtl8187_add_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static void rtl8187_remove_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static int rtl8187_config(struct ieee80211_hw *dev, u32 changed)
static __le32 *rtl8187b_ac_addr[4] = ;
#define SIFS_TIME 0xa
static void rtl8187_conf_erp(struct rtl8187_priv *priv, bool use_short_slot,
bool use_short_preamble)
static void rtl8187_bss_info_changed(struct ieee80211_hw *dev,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info,
u32 changed)
static u64 rtl8187_prepare_multicast(struct ieee80211_hw *dev,
struct netdev_hw_addr_list *mc_list)
static void rtl8187_configure_filter(struct ieee80211_hw *dev,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static int rtl8187_conf_tx(struct ieee80211_hw *dev, u16 queue,
const struct ieee80211_tx_queue_params *params)
static u64 rtl8187_get_tsf(struct ieee80211_hw *dev)
static const struct ieee80211_ops rtl8187_ops = ;
static void rtl8187_eeprom_register_read(struct eeprom_93cx6 *eeprom)
static void rtl8187_eeprom_register_write(struct eeprom_93cx6 *eeprom)
static int __devinit rtl8187_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void __devexit rtl8187_disconnect(struct usb_interface *intf)
static struct usb_driver rtl8187_driver = ;
static int __init rtl8187_init(void)
static void __exit rtl8187_exit(void)
module_init(rtl8187_init);
module_exit(rtl8187_exit);
