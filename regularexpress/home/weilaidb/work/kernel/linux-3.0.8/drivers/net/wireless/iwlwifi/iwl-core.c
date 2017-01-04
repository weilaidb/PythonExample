bool bt_coex_active = true;
module_param(bt_coex_active, bool, S_IRUGO);
MODULE_PARM_DESC(bt_coex_active, "enable wifi/bluetooth co-exist");
u32 iwl_debug_level;
const u8 iwl_bcast_addr[ETH_ALEN] = ;
#define MAX_BIT_RATE_40_MHZ 150
#define MAX_BIT_RATE_20_MHZ 72
static void iwlcore_init_ht_hw_capab(const struct iwl_priv *priv,
struct ieee80211_sta_ht_cap *ht_info,
enum ieee80211_band band)
int iwlcore_init_geos(struct iwl_priv *priv)
void iwlcore_free_geos(struct iwl_priv *priv)
static bool iwl_is_channel_extension(struct iwl_priv *priv,
enum ieee80211_band band,
u16 channel, u8 extension_chan_offset)
bool iwl_is_ht40_tx_allowed(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_sta_ht_cap *ht_cap)
static u16 iwl_adjust_beacon_interval(u16 beacon_val, u16 max_beacon_val)
int iwl_send_rxon_timing(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
void iwl_set_rxon_hwcrypto(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
int hw_decrypt)
int iwl_check_rxon_cmd(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
int iwl_full_rxon_required(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
u8 iwl_rate_get_lowest_plcp(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static void _iwl_set_rxon_ht(struct iwl_priv *priv,
struct iwl_ht_config *ht_conf,
struct iwl_rxon_context *ctx)
void iwl_set_rxon_ht(struct iwl_priv *priv, struct iwl_ht_config *ht_conf)
u8 iwl_get_single_channel_number(struct iwl_priv *priv,
enum ieee80211_band band)
int iwl_set_rxon_channel(struct iwl_priv *priv, struct ieee80211_channel *ch,
struct iwl_rxon_context *ctx)
void iwl_set_flags_for_band(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
enum ieee80211_band band,
struct ieee80211_vif *vif)
void iwl_connection_init_rx_config(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
void iwl_set_rate(struct iwl_priv *priv)
void iwl_chswitch_done(struct iwl_priv *priv, bool is_success)
void iwl_print_rx_config_cmd(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static void iwlagn_abort_notification_waits(struct iwl_priv *priv)
void iwlagn_fw_error(struct iwl_priv *priv, bool ondemand)
void iwl_irq_handle_error(struct iwl_priv *priv)
static int iwl_apm_stop_master(struct iwl_priv *priv)
void iwl_apm_stop(struct iwl_priv *priv)
int iwl_apm_init(struct iwl_priv *priv)
int iwl_set_tx_power(struct iwl_priv *priv, s8 tx_power, bool force)
void iwl_send_bt_config(struct iwl_priv *priv)
int iwl_send_statistics_request(struct iwl_priv *priv, u8 flags, bool clear)
void iwl_clear_isr_stats(struct iwl_priv *priv)
int iwl_mac_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
int iwl_mac_tx_last_beacon(struct ieee80211_hw *hw)
static int iwl_set_mode(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
static int iwl_setup_interface(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
int iwl_mac_add_interface(struct ieee80211_hw *hw, struct ieee80211_vif *vif)
static void iwl_teardown_interface(struct iwl_priv *priv,
struct ieee80211_vif *vif,
bool mode_change)
void iwl_mac_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
int iwl_alloc_txq_mem(struct iwl_priv *priv)
void iwl_free_txq_mem(struct iwl_priv *priv)
#define IWL_TRAFFIC_DUMP_SIZE	(IWL_TRAFFIC_ENTRY_SIZE * IWL_TRAFFIC_ENTRIES)
void iwl_reset_traffic_log(struct iwl_priv *priv)
int iwl_alloc_traffic_mem(struct iwl_priv *priv)
void iwl_free_traffic_mem(struct iwl_priv *priv)
void iwl_dbg_log_tx_data_frame(struct iwl_priv *priv,
u16 length, struct ieee80211_hdr *header)
void iwl_dbg_log_rx_data_frame(struct iwl_priv *priv,
u16 length, struct ieee80211_hdr *header)
const char *get_mgmt_string(int cmd)
const char *get_ctrl_string(int cmd)
void iwl_clear_traffic_stats(struct iwl_priv *priv)
void iwl_update_stats(struct iwl_priv *priv, bool is_tx, __le16 fc, u16 len)
static void iwl_force_rf_reset(struct iwl_priv *priv)
int iwl_force_reset(struct iwl_priv *priv, int mode, bool external)
int iwl_mac_change_interface(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
enum nl80211_iftype newtype, bool newp2p)
static int iwl_check_stuck_queue(struct iwl_priv *priv, int cnt)
#define IWL_WD_TICK(timeout) ((timeout) / 4)
void iwl_bg_watchdog(unsigned long data)
void iwl_setup_watchdog(struct iwl_priv *priv)
u32 iwl_usecs_to_beacons(struct iwl_priv *priv, u32 usec, u32 beacon_interval)
__le32 iwl_add_beacon_time(struct iwl_priv *priv, u32 base,
u32 addon, u32 beacon_interval)
int iwl_pci_suspend(struct device *device)
int iwl_pci_resume(struct device *device)
const struct dev_pm_ops iwl_pm_ops = ;
