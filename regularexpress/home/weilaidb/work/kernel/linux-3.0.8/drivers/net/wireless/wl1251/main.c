void wl1251_enable_interrupts(struct wl1251 *wl)
void wl1251_disable_interrupts(struct wl1251 *wl)
static int wl1251_power_off(struct wl1251 *wl)
static int wl1251_power_on(struct wl1251 *wl)
static int wl1251_fetch_firmware(struct wl1251 *wl)
static int wl1251_fetch_nvs(struct wl1251 *wl)
static void wl1251_fw_wakeup(struct wl1251 *wl)
static int wl1251_chip_wakeup(struct wl1251 *wl)
#define WL1251_IRQ_LOOP_COUNT 10
static void wl1251_irq_work(struct work_struct *work)
static int wl1251_join(struct wl1251 *wl, u8 bss_type, u8 channel,
u16 beacon_interval, u8 dtim_period)
static void wl1251_filter_work(struct work_struct *work)
static void wl1251_op_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int wl1251_op_start(struct ieee80211_hw *hw)
static void wl1251_op_stop(struct ieee80211_hw *hw)
static int wl1251_op_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void wl1251_op_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int wl1251_build_qos_null_data(struct wl1251 *wl)
static int wl1251_op_config(struct ieee80211_hw *hw, u32 changed)
#define WL1251_SUPPORTED_FILTERS (FIF_PROMISC_IN_BSS | \
FIF_ALLMULTI | \
FIF_FCSFAIL | \
FIF_BCN_PRBRESP_PROMISC | \
FIF_CONTROL | \
FIF_OTHER_BSS)
static void wl1251_op_configure_filter(struct ieee80211_hw *hw,
unsigned int changed,
unsigned int *total,u64 multicast)
static int wl1251_set_key_type(struct wl1251 *wl,
struct wl1251_cmd_set_keys *key,
enum set_key_cmd cmd,
struct ieee80211_key_conf *mac80211_key,
const u8 *addr)
static int wl1251_op_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static int wl1251_op_hw_scan(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct cfg80211_scan_request *req)
static int wl1251_op_set_rts_threshold(struct ieee80211_hw *hw, u32 value)
static void wl1251_op_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static struct ieee80211_rate wl1251_rates[] = ;
static struct ieee80211_channel wl1251_channels[] = ;
static int wl1251_op_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static int wl1251_op_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
static struct ieee80211_supported_band wl1251_band_2ghz = ;
static const struct ieee80211_ops wl1251_ops = ;
static int wl1251_read_eeprom_byte(struct wl1251 *wl, off_t offset, u8 *data)
static int wl1251_read_eeprom(struct wl1251 *wl, off_t offset,
u8 *data, size_t len)
static int wl1251_read_eeprom_mac(struct wl1251 *wl)
static int wl1251_register_hw(struct wl1251 *wl)
int wl1251_init_ieee80211(struct wl1251 *wl)
EXPORT_SYMBOL_GPL(wl1251_init_ieee80211);
struct ieee80211_hw *wl1251_alloc_hw(void)
EXPORT_SYMBOL_GPL(wl1251_alloc_hw);
int wl1251_free_hw(struct wl1251 *wl)
EXPORT_SYMBOL_GPL(wl1251_free_hw);
MODULE_DESCRIPTION("TI wl1251 Wireles LAN Driver Core");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kalle Valo <kvalo@adurom.com>");
MODULE_FIRMWARE(WL1251_FW_NAME);
