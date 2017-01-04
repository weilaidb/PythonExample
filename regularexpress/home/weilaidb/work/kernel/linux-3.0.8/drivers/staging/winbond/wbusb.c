MODULE_DESCRIPTION("IS89C35 802.11bg WLAN USB Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");
static const struct usb_device_id wb35_table[] __devinitconst = ;
MODULE_DEVICE_TABLE(usb, wb35_table);
static struct ieee80211_rate wbsoft_rates[] = ;
static struct ieee80211_channel wbsoft_channels[] = ;
static struct ieee80211_supported_band wbsoft_band_2GHz = ;
static void hal_set_beacon_period(struct hw_data *pHwData, u16 beacon_period)
static int wbsoft_add_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static void wbsoft_remove_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static void wbsoft_stop(struct ieee80211_hw *hw)
static int wbsoft_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
static u64 wbsoft_prepare_multicast(struct ieee80211_hw *hw,
struct netdev_hw_addr_list *mc_list)
static void wbsoft_configure_filter(struct ieee80211_hw *dev,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static void wbsoft_tx(struct ieee80211_hw *dev, struct sk_buff *skb)
static int wbsoft_start(struct ieee80211_hw *dev)
static void hal_set_radio_mode(struct hw_data *pHwData, unsigned char radio_off)
static void hal_set_current_channel_ex(struct hw_data *pHwData, struct chan_info channel)
static void hal_set_current_channel(struct hw_data *pHwData, struct chan_info channel)
static void hal_set_accept_broadcast(struct hw_data *pHwData, u8 enable)
static void hal_set_accept_promiscuous(struct hw_data *pHwData, u8 enable)
static void hal_set_accept_multicast(struct hw_data *pHwData, u8 enable)
static void hal_set_accept_beacon(struct hw_data *pHwData, u8 enable)
static int wbsoft_config(struct ieee80211_hw *dev, u32 changed)
static u64 wbsoft_get_tsf(struct ieee80211_hw *dev)
static const struct ieee80211_ops wbsoft_ops = ;
static void hal_set_ethernet_address(struct hw_data *pHwData, u8 *current_address)
static void hal_get_permanent_address(struct hw_data *pHwData, u8 *pethernet_address)
static void hal_stop(struct hw_data *pHwData)
static unsigned char hal_idle(struct hw_data *pHwData)
u8 hal_get_antenna_number(struct hw_data *pHwData)
static u8 hal_get_hw_radio_off(struct hw_data *pHwData)
static u8 LED_GRAY[20] = ;
static u8 LED_GRAY2[30] = ;
static void hal_led_control(unsigned long data)
static int hal_init_hardware(struct ieee80211_hw *hw)
static int wb35_hw_init(struct ieee80211_hw *hw)
static int wb35_probe(struct usb_interface *intf,
const struct usb_device_id *id_table)
static void hal_halt(struct hw_data *pHwData)
static void wb35_hw_halt(struct wbsoft_priv *adapter)
static void wb35_disconnect(struct usb_interface *intf)
static struct usb_driver wb35_driver = ;
static int __init wb35_init(void)
static void __exit wb35_exit(void)
module_init(wb35_init);
module_exit(wb35_exit);
