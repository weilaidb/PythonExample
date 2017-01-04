#define WL1271_BOOT_RETRIES 3
static struct conf_drv_settings default_conf = ;
static void __wl1271_op_remove_interface(struct wl1271 *wl,
bool reset_tx_queues);
static void wl1271_free_ap_keys(struct wl1271 *wl);
static void wl1271_device_release(struct device *dev)
static struct platform_device wl1271_device = ;
static DEFINE_MUTEX(wl_list_mutex);
static LIST_HEAD(wl_list);
static int wl1271_dev_notify(struct notifier_block *me, unsigned long what,
void *arg)
static int wl1271_reg_notify(struct wiphy *wiphy,
struct regulatory_request *request)
static void wl1271_conf_init(struct wl1271 *wl)
static int wl1271_plt_init(struct wl1271 *wl)
static void wl1271_irq_ps_regulate_link(struct wl1271 *wl, u8 hlid, u8 tx_blks)
static void wl1271_irq_update_links_status(struct wl1271 *wl,
struct wl1271_fw_ap_status *status)
static void wl1271_fw_status(struct wl1271 *wl,
struct wl1271_fw_full_status *full_status)
static void wl1271_flush_deferred_work(struct wl1271 *wl)
static void wl1271_netstack_work(struct work_struct *work)
#define WL1271_IRQ_MAX_LOOPS 256
irqreturn_t wl1271_irq(int irq, void *cookie)
EXPORT_SYMBOL_GPL(wl1271_irq);
static int wl1271_fetch_firmware(struct wl1271 *wl)
static int wl1271_fetch_nvs(struct wl1271 *wl)
static void wl1271_recovery_work(struct work_struct *work)
static void wl1271_fw_wakeup(struct wl1271 *wl)
static int wl1271_setup(struct wl1271 *wl)
static int wl1271_chip_wakeup(struct wl1271 *wl)
static unsigned int wl1271_get_fw_ver_quirks(struct wl1271 *wl)
int wl1271_plt_start(struct wl1271 *wl)
static int __wl1271_plt_stop(struct wl1271 *wl)
int wl1271_plt_stop(struct wl1271 *wl)
static void wl1271_op_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
int wl1271_tx_dummy_packet(struct wl1271 *wl)
#define TOTAL_TX_DUMMY_PACKET_SIZE (ALIGN(1400, 512))
static struct sk_buff *wl12xx_alloc_dummy_packet(struct wl1271 *wl)
static struct notifier_block wl1271_dev_notifier = ;
static int wl1271_configure_suspend(struct wl1271 *wl)
static void wl1271_configure_resume(struct wl1271 *wl)
static int wl1271_op_suspend(struct ieee80211_hw *hw,
struct cfg80211_wowlan *wow)
static int wl1271_op_resume(struct ieee80211_hw *hw)
static int wl1271_op_start(struct ieee80211_hw *hw)
static void wl1271_op_stop(struct ieee80211_hw *hw)
static int wl1271_op_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void __wl1271_op_remove_interface(struct wl1271 *wl,
bool reset_tx_queues)
static void wl1271_op_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
void wl1271_configure_filters(struct wl1271 *wl, unsigned int filters)
static int wl1271_dummy_join(struct wl1271 *wl)
static int wl1271_join(struct wl1271 *wl, bool set_assoc)
static int wl1271_unjoin(struct wl1271 *wl)
static void wl1271_set_band_rate(struct wl1271 *wl)
static int wl1271_sta_handle_idle(struct wl1271 *wl, bool idle)
static int wl1271_op_config(struct ieee80211_hw *hw, u32 changed)
struct wl1271_filter_params ;
static u64 wl1271_op_prepare_multicast(struct ieee80211_hw *hw,
struct netdev_hw_addr_list *mc_list)
#define WL1271_SUPPORTED_FILTERS (FIF_PROMISC_IN_BSS | \
FIF_ALLMULTI | \
FIF_FCSFAIL | \
FIF_BCN_PRBRESP_PROMISC | \
FIF_CONTROL | \
FIF_OTHER_BSS)
static void wl1271_op_configure_filter(struct ieee80211_hw *hw,
unsigned int changed,
unsigned int *total, u64 multicast)
static int wl1271_record_ap_key(struct wl1271 *wl, u8 id, u8 key_type,
u8 key_size, const u8 *key, u8 hlid, u32 tx_seq_32,
u16 tx_seq_16)
static void wl1271_free_ap_keys(struct wl1271 *wl)
static int wl1271_ap_init_hwenc(struct wl1271 *wl)
static int wl1271_set_key(struct wl1271 *wl, u16 action, u8 id, u8 key_type,
u8 key_size, const u8 *key, u32 tx_seq_32,
u16 tx_seq_16, struct ieee80211_sta *sta)
static int wl1271_op_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key_conf)
static int wl1271_op_hw_scan(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct cfg80211_scan_request *req)
static int wl1271_op_sched_scan_start(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct cfg80211_sched_scan_request *req,
struct ieee80211_sched_scan_ies *ies)
static void wl1271_op_sched_scan_stop(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int wl1271_op_set_frag_threshold(struct ieee80211_hw *hw, u32 value)
static int wl1271_op_set_rts_threshold(struct ieee80211_hw *hw, u32 value)
static int wl1271_ssid_set(struct wl1271 *wl, struct sk_buff *skb,
int offset)
static int wl1271_bss_erp_info_changed(struct wl1271 *wl,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static int wl1271_bss_beacon_info_changed(struct wl1271 *wl,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static void wl1271_bss_info_changed_ap(struct wl1271 *wl,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static void wl1271_bss_info_changed_sta(struct wl1271 *wl,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static void wl1271_op_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static int wl1271_op_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static u64 wl1271_op_get_tsf(struct ieee80211_hw *hw)
static int wl1271_op_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
static int wl1271_allocate_sta(struct wl1271 *wl,
struct ieee80211_sta *sta,
u8 *hlid)
static void wl1271_free_sta(struct wl1271 *wl, u8 hlid)
static int wl1271_op_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int wl1271_op_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int wl1271_op_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size)
static bool wl1271_tx_frames_pending(struct ieee80211_hw *hw)
static struct ieee80211_rate wl1271_rates[] = ;
static struct ieee80211_channel wl1271_channels[] = ;
static const u8 wl1271_rate_to_idx_2ghz[] = ;
#define HW_RX_HIGHEST_RATE	72
#define WL12XX_HT_CAP
#define WL12XX_HT_CAP
static struct ieee80211_supported_band wl1271_band_2ghz = ;
static struct ieee80211_rate wl1271_rates_5ghz[] = ;
static struct ieee80211_channel wl1271_channels_5ghz[] = ;
static const u8 wl1271_rate_to_idx_5ghz[] = ;
static struct ieee80211_supported_band wl1271_band_5ghz = ;
static const u8 *wl1271_band_rate_to_idx[] = ;
static const struct ieee80211_ops wl1271_ops = ;
u8 wl1271_rate_to_idx(int rate, enum ieee80211_band band)
static ssize_t wl1271_sysfs_show_bt_coex_state(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t wl1271_sysfs_store_bt_coex_state(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(bt_coex_state, S_IRUGO | S_IWUSR,
wl1271_sysfs_show_bt_coex_state,
wl1271_sysfs_store_bt_coex_state);
static ssize_t wl1271_sysfs_show_hw_pg_ver(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(hw_pg_ver, S_IRUGO | S_IWUSR,
wl1271_sysfs_show_hw_pg_ver, NULL);
int wl1271_register_hw(struct wl1271 *wl)
EXPORT_SYMBOL_GPL(wl1271_register_hw);
void wl1271_unregister_hw(struct wl1271 *wl)
EXPORT_SYMBOL_GPL(wl1271_unregister_hw);
int wl1271_init_ieee80211(struct wl1271 *wl)
EXPORT_SYMBOL_GPL(wl1271_init_ieee80211);
#define WL1271_DEFAULT_CHANNEL 0
struct ieee80211_hw *wl1271_alloc_hw(void)
EXPORT_SYMBOL_GPL(wl1271_alloc_hw);
int wl1271_free_hw(struct wl1271 *wl)
EXPORT_SYMBOL_GPL(wl1271_free_hw);
u32 wl12xx_debug_level = DEBUG_NONE;
EXPORT_SYMBOL_GPL(wl12xx_debug_level);
module_param_named(debug_level, wl12xx_debug_level, uint, S_IRUSR | S_IWUSR);
MODULE_PARM_DESC(debug_level, "wl12xx debugging level");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Luciano Coelho <coelho@ti.com>");
MODULE_AUTHOR("Juuso Oikarinen <juuso.oikarinen@nokia.com>");
