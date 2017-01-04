MODULE_DESCRIPTION("iwl-legacy: common functions for 3945 and 4965");
MODULE_VERSION(IWLWIFI_VERSION);
MODULE_AUTHOR(DRV_COPYRIGHT " " DRV_AUTHOR);
MODULE_LICENSE("GPL");
static bool bt_coex_active = true;
module_param(bt_coex_active, bool, S_IRUGO);
MODULE_PARM_DESC(bt_coex_active, "enable wifi/bluetooth co-exist");
u32 iwlegacy_debug_level;
EXPORT_SYMBOL(iwlegacy_debug_level);
const u8 iwlegacy_bcast_addr[ETH_ALEN] = ;
EXPORT_SYMBOL(iwlegacy_bcast_addr);
struct ieee80211_hw *iwl_legacy_alloc_all(struct iwl_cfg *cfg)
EXPORT_SYMBOL(iwl_legacy_alloc_all);
#define MAX_BIT_RATE_40_MHZ 150
#define MAX_BIT_RATE_20_MHZ 72
static void iwl_legacy_init_ht_hw_capab(const struct iwl_priv *priv,
struct ieee80211_sta_ht_cap *ht_info,
enum ieee80211_band band)
int iwl_legacy_init_geos(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_init_geos);
void iwl_legacy_free_geos(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_free_geos);
static bool iwl_legacy_is_channel_extension(struct iwl_priv *priv,
enum ieee80211_band band,
u16 channel, u8 extension_chan_offset)
bool iwl_legacy_is_ht40_tx_allowed(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_sta_ht_cap *ht_cap)
EXPORT_SYMBOL(iwl_legacy_is_ht40_tx_allowed);
static u16 iwl_legacy_adjust_beacon_interval(u16 beacon_val, u16 max_beacon_val)
int
iwl_legacy_send_rxon_timing(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_send_rxon_timing);
void
iwl_legacy_set_rxon_hwcrypto(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
int hw_decrypt)
EXPORT_SYMBOL(iwl_legacy_set_rxon_hwcrypto);
int
iwl_legacy_check_rxon_cmd(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_check_rxon_cmd);
int iwl_legacy_full_rxon_required(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_full_rxon_required);
u8 iwl_legacy_get_lowest_plcp(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_get_lowest_plcp);
static void _iwl_legacy_set_rxon_ht(struct iwl_priv *priv,
struct iwl_ht_config *ht_conf,
struct iwl_rxon_context *ctx)
void iwl_legacy_set_rxon_ht(struct iwl_priv *priv, struct iwl_ht_config *ht_conf)
EXPORT_SYMBOL(iwl_legacy_set_rxon_ht);
u8 iwl_legacy_get_single_channel_number(struct iwl_priv *priv,
enum ieee80211_band band)
EXPORT_SYMBOL(iwl_legacy_get_single_channel_number);
int
iwl_legacy_set_rxon_channel(struct iwl_priv *priv, struct ieee80211_channel *ch,
struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_set_rxon_channel);
void iwl_legacy_set_flags_for_band(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
enum ieee80211_band band,
struct ieee80211_vif *vif)
EXPORT_SYMBOL(iwl_legacy_set_flags_for_band);
void iwl_legacy_connection_init_rx_config(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_connection_init_rx_config);
void iwl_legacy_set_rate(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_set_rate);
void iwl_legacy_chswitch_done(struct iwl_priv *priv, bool is_success)
EXPORT_SYMBOL(iwl_legacy_chswitch_done);
void iwl_legacy_rx_csa(struct iwl_priv *priv, struct iwl_rx_mem_buffer *rxb)
EXPORT_SYMBOL(iwl_legacy_rx_csa);
void iwl_legacy_print_rx_config_cmd(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_print_rx_config_cmd);
void iwl_legacy_irq_handle_error(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_irq_handle_error);
static int iwl_legacy_apm_stop_master(struct iwl_priv *priv)
void iwl_legacy_apm_stop(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_apm_stop);
int iwl_legacy_apm_init(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_apm_init);
int iwl_legacy_set_tx_power(struct iwl_priv *priv, s8 tx_power, bool force)
EXPORT_SYMBOL(iwl_legacy_set_tx_power);
void iwl_legacy_send_bt_config(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_send_bt_config);
int iwl_legacy_send_statistics_request(struct iwl_priv *priv, u8 flags, bool clear)
EXPORT_SYMBOL(iwl_legacy_send_statistics_request);
void iwl_legacy_rx_pm_sleep_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
EXPORT_SYMBOL(iwl_legacy_rx_pm_sleep_notif);
void iwl_legacy_rx_pm_debug_statistics_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
EXPORT_SYMBOL(iwl_legacy_rx_pm_debug_statistics_notif);
void iwl_legacy_rx_reply_error(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
EXPORT_SYMBOL(iwl_legacy_rx_reply_error);
void iwl_legacy_clear_isr_stats(struct iwl_priv *priv)
int iwl_legacy_mac_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
EXPORT_SYMBOL(iwl_legacy_mac_conf_tx);
int iwl_legacy_mac_tx_last_beacon(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(iwl_legacy_mac_tx_last_beacon);
static int
iwl_legacy_set_mode(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
static int iwl_legacy_setup_interface(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
int
iwl_legacy_mac_add_interface(struct ieee80211_hw *hw, struct ieee80211_vif *vif)
EXPORT_SYMBOL(iwl_legacy_mac_add_interface);
static void iwl_legacy_teardown_interface(struct iwl_priv *priv,
struct ieee80211_vif *vif,
bool mode_change)
void iwl_legacy_mac_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
EXPORT_SYMBOL(iwl_legacy_mac_remove_interface);
int iwl_legacy_alloc_txq_mem(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_alloc_txq_mem);
void iwl_legacy_txq_mem(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_txq_mem);
#define IWL_TRAFFIC_DUMP_SIZE	(IWL_TRAFFIC_ENTRY_SIZE * IWL_TRAFFIC_ENTRIES)
void iwl_legacy_reset_traffic_log(struct iwl_priv *priv)
int iwl_legacy_alloc_traffic_mem(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_alloc_traffic_mem);
void iwl_legacy_free_traffic_mem(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_free_traffic_mem);
void iwl_legacy_dbg_log_tx_data_frame(struct iwl_priv *priv,
u16 length, struct ieee80211_hdr *header)
EXPORT_SYMBOL(iwl_legacy_dbg_log_tx_data_frame);
void iwl_legacy_dbg_log_rx_data_frame(struct iwl_priv *priv,
u16 length, struct ieee80211_hdr *header)
EXPORT_SYMBOL(iwl_legacy_dbg_log_rx_data_frame);
const char *iwl_legacy_get_mgmt_string(int cmd)
const char *iwl_legacy_get_ctrl_string(int cmd)
void iwl_legacy_clear_traffic_stats(struct iwl_priv *priv)
void
iwl_legacy_update_stats(struct iwl_priv *priv, bool is_tx, __le16 fc, u16 len)
EXPORT_SYMBOL(iwl_legacy_update_stats);
static void _iwl_legacy_force_rf_reset(struct iwl_priv *priv)
int iwl_legacy_force_reset(struct iwl_priv *priv, int mode, bool external)
int
iwl_legacy_mac_change_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum nl80211_iftype newtype, bool newp2p)
EXPORT_SYMBOL(iwl_legacy_mac_change_interface);
static int iwl_legacy_check_stuck_queue(struct iwl_priv *priv, int cnt)
#define IWL_WD_TICK(timeout) ((timeout) / 4)
void iwl_legacy_bg_watchdog(unsigned long data)
EXPORT_SYMBOL(iwl_legacy_bg_watchdog);
void iwl_legacy_setup_watchdog(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_setup_watchdog);
u32
iwl_legacy_usecs_to_beacons(struct iwl_priv *priv,
u32 usec, u32 beacon_interval)
EXPORT_SYMBOL(iwl_legacy_usecs_to_beacons);
__le32 iwl_legacy_add_beacon_time(struct iwl_priv *priv, u32 base,
u32 addon, u32 beacon_interval)
EXPORT_SYMBOL(iwl_legacy_add_beacon_time);
int iwl_legacy_pci_suspend(struct device *device)
EXPORT_SYMBOL(iwl_legacy_pci_suspend);
int iwl_legacy_pci_resume(struct device *device)
EXPORT_SYMBOL(iwl_legacy_pci_resume);
const struct dev_pm_ops iwl_legacy_pm_ops = ;
EXPORT_SYMBOL(iwl_legacy_pm_ops);
static void
iwl_legacy_update_qos(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
int iwl_legacy_mac_config(struct ieee80211_hw *hw, u32 changed)
EXPORT_SYMBOL(iwl_legacy_mac_config);
void iwl_legacy_mac_reset_tsf(struct ieee80211_hw *hw)
EXPORT_SYMBOL(iwl_legacy_mac_reset_tsf);
static void iwl_legacy_ht_conf(struct iwl_priv *priv,
struct ieee80211_vif *vif)
static inline void iwl_legacy_set_no_assoc(struct iwl_priv *priv,
struct ieee80211_vif *vif)
static void iwl_legacy_beacon_update(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
void iwl_legacy_mac_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changes)
EXPORT_SYMBOL(iwl_legacy_mac_bss_info_changed);
irqreturn_t iwl_legacy_isr(int irq, void *data)
EXPORT_SYMBOL(iwl_legacy_isr);
void iwl_legacy_tx_cmd_protection(struct iwl_priv *priv,
struct ieee80211_tx_info *info,
__le16 fc, __le32 *tx_flags)
EXPORT_SYMBOL(iwl_legacy_tx_cmd_protection);
