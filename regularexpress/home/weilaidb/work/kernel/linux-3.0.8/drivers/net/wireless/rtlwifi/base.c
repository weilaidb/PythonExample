static struct ieee80211_channel rtl_channeltable_2g[] = ;
static struct ieee80211_channel rtl_channeltable_5g[] = ;
static struct ieee80211_rate rtl_ratetable_2g[] = ;
static struct ieee80211_rate rtl_ratetable_5g[] = ;
static const struct ieee80211_supported_band rtl_band_2ghz = ;
static struct ieee80211_supported_band rtl_band_5ghz = ;
static const u8 tid_to_ac[] = ;
u8 rtl_tid_to_ac(struct ieee80211_hw *hw, u8 tid)
static void _rtl_init_hw_ht_capab(struct ieee80211_hw *hw,
struct ieee80211_sta_ht_cap *ht_cap)
static void _rtl_init_mac80211(struct ieee80211_hw *hw)
static void _rtl_init_deferred_work(struct ieee80211_hw *hw)
void rtl_deinit_deferred_work(struct ieee80211_hw *hw)
void rtl_init_rfkill(struct ieee80211_hw *hw)
void rtl_deinit_rfkill(struct ieee80211_hw *hw)
int rtl_init_core(struct ieee80211_hw *hw)
void rtl_deinit_core(struct ieee80211_hw *hw)
void rtl_init_rx_config(struct ieee80211_hw *hw)
static void _rtl_qurey_shortpreamble_mode(struct ieee80211_hw *hw,
struct rtl_tcb_desc *tcb_desc,
struct ieee80211_tx_info *info)
static void _rtl_query_shortgi(struct ieee80211_hw *hw,
struct ieee80211_sta *sta,
struct rtl_tcb_desc *tcb_desc,
struct ieee80211_tx_info *info)
static void _rtl_query_protection_mode(struct ieee80211_hw *hw,
struct rtl_tcb_desc *tcb_desc,
struct ieee80211_tx_info *info)
static void _rtl_txrate_selectmode(struct ieee80211_hw *hw,
struct ieee80211_sta *sta,
struct rtl_tcb_desc *tcb_desc)
static void _rtl_query_bandwidth_mode(struct ieee80211_hw *hw,
struct ieee80211_sta *sta,
struct rtl_tcb_desc *tcb_desc)
static u8 _rtl_get_highest_n_rate(struct ieee80211_hw *hw)
void rtl_get_tcb_desc(struct ieee80211_hw *hw,
struct ieee80211_tx_info *info,
struct ieee80211_sta *sta,
struct sk_buff *skb, struct rtl_tcb_desc *tcb_desc)
EXPORT_SYMBOL(rtl_get_tcb_desc);
bool rtl_action_proc(struct ieee80211_hw *hw, struct sk_buff *skb, u8 is_tx)
u8 rtl_is_special_data(struct ieee80211_hw *hw, struct sk_buff *skb, u8 is_tx)
int rtl_tx_agg_start(struct ieee80211_hw *hw,
struct ieee80211_sta *sta, u16 tid, u16 *ssn)
int rtl_tx_agg_stop(struct ieee80211_hw *hw,
struct ieee80211_sta *sta, u16 tid)
int rtl_tx_agg_oper(struct ieee80211_hw *hw,
struct ieee80211_sta *sta, u16 tid)
void rtl_watchdog_wq_callback(void *data)
void rtl_watch_dog_timer_callback(unsigned long data)
u8 *rtl_find_ie(u8 *data, unsigned int len, u8 ie)
static struct sk_buff *rtl_make_smps_action(struct ieee80211_hw *hw,
enum ieee80211_smps_mode smps, u8 *da, u8 *bssid)
int rtl_send_smps_action(struct ieee80211_hw *hw,
struct ieee80211_sta *sta, u8 *da, u8 *bssid,
enum ieee80211_smps_mode smps)
static bool rtl_chk_vendor_ouisub(struct ieee80211_hw *hw,
struct octet_string vendor_ie)
static bool rtl_find_221_ie(struct ieee80211_hw *hw, u8 *data,
unsigned int len)
void rtl_recognize_peer(struct ieee80211_hw *hw, u8 *data, unsigned int len)
static ssize_t rtl_show_debug_level(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t rtl_store_debug_level(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(debug_level, S_IWUSR | S_IRUGO,
rtl_show_debug_level, rtl_store_debug_level);
static struct attribute *rtl_sysfs_entries[] = ;
struct attribute_group rtl_attribute_group = ;
MODULE_AUTHOR("lizhaoming	<chaoming_li@realsil.com.cn>");
MODULE_AUTHOR("Realtek WlanFAE	<wlanfae@realtek.com>");
MODULE_AUTHOR("Larry Finger	<Larry.FInger@lwfinger.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Realtek 802.11n PCI wireless core");
static int __init rtl_core_module_init(void)
static void __exit rtl_core_module_exit(void)
module_init(rtl_core_module_init);
module_exit(rtl_core_module_exit);
