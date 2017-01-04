#define __iwl_legacy_core_h__
struct iwl_host_cmd;
struct iwl_cmd;
#define IWLWIFI_VERSION "in-tree:"
#define DRV_COPYRIGHT	"Copyright(c) 2003-2011 Intel Corporation"
#define DRV_AUTHOR     "<ilw@linux.intel.com>"
#define IWL_PCI_DEVICE(dev, subdev, cfg) \
.vendor = PCI_VENDOR_ID_INTEL,  .device = (dev), \
.subvendor = PCI_ANY_ID, .subdevice = (subdev), \
.driver_data = (kernel_ulong_t)&(cfg)
#define TIME_UNIT		1024
#define IWL_SKU_G       0x1
#define IWL_SKU_A       0x2
#define IWL_SKU_N       0x8
#define IWL_CMD(x) case x: return #x
struct iwl_hcmd_ops ;
struct iwl_hcmd_utils_ops ;
struct iwl_apm_ops ;
struct iwl_debugfs_ops ;
struct iwl_temp_ops ;
struct iwl_lib_ops ;
struct iwl_led_ops ;
struct iwl_legacy_ops ;
struct iwl_ops ;
struct iwl_mod_params ;
struct iwl_base_params ;
struct iwl_cfg ;
struct ieee80211_hw *iwl_legacy_alloc_all(struct iwl_cfg *cfg);
int iwl_legacy_mac_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params);
int iwl_legacy_mac_tx_last_beacon(struct ieee80211_hw *hw);
void iwl_legacy_set_rxon_hwcrypto(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
int hw_decrypt);
int iwl_legacy_check_rxon_cmd(struct iwl_priv *priv,
struct iwl_rxon_context *ctx);
int iwl_legacy_full_rxon_required(struct iwl_priv *priv,
struct iwl_rxon_context *ctx);
int iwl_legacy_set_rxon_channel(struct iwl_priv *priv,
struct ieee80211_channel *ch,
struct iwl_rxon_context *ctx);
void iwl_legacy_set_flags_for_band(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
enum ieee80211_band band,
struct ieee80211_vif *vif);
u8 iwl_legacy_get_single_channel_number(struct iwl_priv *priv,
enum ieee80211_band band);
void iwl_legacy_set_rxon_ht(struct iwl_priv *priv,
struct iwl_ht_config *ht_conf);
bool iwl_legacy_is_ht40_tx_allowed(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_sta_ht_cap *ht_cap);
void iwl_legacy_connection_init_rx_config(struct iwl_priv *priv,
struct iwl_rxon_context *ctx);
void iwl_legacy_set_rate(struct iwl_priv *priv);
int iwl_legacy_set_decrypted_flag(struct iwl_priv *priv,
struct ieee80211_hdr *hdr,
u32 decrypt_res,
struct ieee80211_rx_status *stats);
void iwl_legacy_irq_handle_error(struct iwl_priv *priv);
int iwl_legacy_mac_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
void iwl_legacy_mac_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
int iwl_legacy_mac_change_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum nl80211_iftype newtype, bool newp2p);
int iwl_legacy_alloc_txq_mem(struct iwl_priv *priv);
void iwl_legacy_txq_mem(struct iwl_priv *priv);
int iwl_legacy_alloc_traffic_mem(struct iwl_priv *priv);
void iwl_legacy_free_traffic_mem(struct iwl_priv *priv);
void iwl_legacy_reset_traffic_log(struct iwl_priv *priv);
void iwl_legacy_dbg_log_tx_data_frame(struct iwl_priv *priv,
u16 length, struct ieee80211_hdr *header);
void iwl_legacy_dbg_log_rx_data_frame(struct iwl_priv *priv,
u16 length, struct ieee80211_hdr *header);
const char *iwl_legacy_get_mgmt_string(int cmd);
const char *iwl_legacy_get_ctrl_string(int cmd);
void iwl_legacy_clear_traffic_stats(struct iwl_priv *priv);
void iwl_legacy_update_stats(struct iwl_priv *priv, bool is_tx, __le16 fc,
u16 len);
static inline int iwl_legacy_alloc_traffic_mem(struct iwl_priv *priv)
static inline void iwl_legacy_free_traffic_mem(struct iwl_priv *priv)
static inline void iwl_legacy_reset_traffic_log(struct iwl_priv *priv)
static inline void iwl_legacy_dbg_log_tx_data_frame(struct iwl_priv *priv,
u16 length, struct ieee80211_hdr *header)
static inline void iwl_legacy_dbg_log_rx_data_frame(struct iwl_priv *priv,
u16 length, struct ieee80211_hdr *header)
static inline void iwl_legacy_update_stats(struct iwl_priv *priv, bool is_tx,
__le16 fc, u16 len)
void iwl_legacy_rx_pm_sleep_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb);
void iwl_legacy_rx_pm_debug_statistics_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb);
void iwl_legacy_rx_reply_error(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb);
void iwl_legacy_cmd_queue_unmap(struct iwl_priv *priv);
void iwl_legacy_cmd_queue_free(struct iwl_priv *priv);
int iwl_legacy_rx_queue_alloc(struct iwl_priv *priv);
void iwl_legacy_rx_queue_update_write_ptr(struct iwl_priv *priv,
struct iwl_rx_queue *q);
int iwl_legacy_rx_queue_space(const struct iwl_rx_queue *q);
void iwl_legacy_tx_cmd_complete(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb);
void iwl_legacy_rx_spectrum_measure_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb);
void iwl_legacy_recover_from_statistics(struct iwl_priv *priv,
struct iwl_rx_packet *pkt);
void iwl_legacy_chswitch_done(struct iwl_priv *priv, bool is_success);
void iwl_legacy_rx_csa(struct iwl_priv *priv, struct iwl_rx_mem_buffer *rxb);
void iwl_legacy_txq_update_write_ptr(struct iwl_priv *priv,
struct iwl_tx_queue *txq);
int iwl_legacy_tx_queue_init(struct iwl_priv *priv, struct iwl_tx_queue *txq,
int slots_num, u32 txq_id);
void iwl_legacy_tx_queue_reset(struct iwl_priv *priv,
struct iwl_tx_queue *txq,
int slots_num, u32 txq_id);
void iwl_legacy_tx_queue_unmap(struct iwl_priv *priv, int txq_id);
void iwl_legacy_tx_queue_free(struct iwl_priv *priv, int txq_id);
void iwl_legacy_setup_watchdog(struct iwl_priv *priv);
int iwl_legacy_set_tx_power(struct iwl_priv *priv, s8 tx_power, bool force);
u8 iwl_legacy_get_lowest_plcp(struct iwl_priv *priv,
struct iwl_rxon_context *ctx);
void iwl_legacy_init_scan_params(struct iwl_priv *priv);
int iwl_legacy_scan_cancel(struct iwl_priv *priv);
int iwl_legacy_scan_cancel_timeout(struct iwl_priv *priv, unsigned long ms);
void iwl_legacy_force_scan_end(struct iwl_priv *priv);
int iwl_legacy_mac_hw_scan(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct cfg80211_scan_request *req);
void iwl_legacy_internal_short_hw_scan(struct iwl_priv *priv);
int iwl_legacy_force_reset(struct iwl_priv *priv, int mode, bool external);
u16 iwl_legacy_fill_probe_req(struct iwl_priv *priv,
struct ieee80211_mgmt *frame,
const u8 *ta, const u8 *ie, int ie_len, int left);
void iwl_legacy_setup_rx_scan_handlers(struct iwl_priv *priv);
u16 iwl_legacy_get_active_dwell_time(struct iwl_priv *priv,
enum ieee80211_band band,
u8 n_probes);
u16 iwl_legacy_get_passive_dwell_time(struct iwl_priv *priv,
enum ieee80211_band band,
struct ieee80211_vif *vif);
void iwl_legacy_setup_scan_deferred_work(struct iwl_priv *priv);
void iwl_legacy_cancel_scan_deferred_work(struct iwl_priv *priv);
#define IWL_ACTIVE_QUIET_TIME       cpu_to_le16(10)
#define IWL_PLCP_QUIET_THRESH       cpu_to_le16(1)
#define IWL_SCAN_CHECK_WATCHDOG		(HZ * 7)
const char *iwl_legacy_get_cmd_string(u8 cmd);
int __must_check iwl_legacy_send_cmd_sync(struct iwl_priv *priv,
struct iwl_host_cmd *cmd);
int iwl_legacy_send_cmd(struct iwl_priv *priv, struct iwl_host_cmd *cmd);
int __must_check iwl_legacy_send_cmd_pdu(struct iwl_priv *priv, u8 id,
u16 len, const void *data);
int iwl_legacy_send_cmd_pdu_async(struct iwl_priv *priv, u8 id, u16 len,
const void *data,
void (*callback)(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct iwl_rx_packet *pkt));
int iwl_legacy_enqueue_hcmd(struct iwl_priv *priv, struct iwl_host_cmd *cmd);
static inline u16 iwl_legacy_pcie_link_ctl(struct iwl_priv *priv)
void iwl_legacy_bg_watchdog(unsigned long data);
u32 iwl_legacy_usecs_to_beacons(struct iwl_priv *priv,
u32 usec, u32 beacon_interval);
__le32 iwl_legacy_add_beacon_time(struct iwl_priv *priv, u32 base,
u32 addon, u32 beacon_interval);
int iwl_legacy_pci_suspend(struct device *device);
int iwl_legacy_pci_resume(struct device *device);
extern const struct dev_pm_ops iwl_legacy_pm_ops;
#define IWL_LEGACY_PM_OPS	(&iwl_legacy_pm_ops)
#define IWL_LEGACY_PM_OPS	NULL
void iwl4965_dump_nic_error_log(struct iwl_priv *priv);
int iwl4965_dump_nic_event_log(struct iwl_priv *priv,
bool full_log, char **buf, bool display);
void iwl_legacy_print_rx_config_cmd(struct iwl_priv *priv,
struct iwl_rxon_context *ctx);
static inline void iwl_legacy_print_rx_config_cmd(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
void iwl_legacy_clear_isr_stats(struct iwl_priv *priv);
int iwl_legacy_init_geos(struct iwl_priv *priv);
void iwl_legacy_free_geos(struct iwl_priv *priv);
#define STATUS_HCMD_ACTIVE	0
#define STATUS_INT_ENABLED	2
#define STATUS_RF_KILL_HW	3
#define STATUS_CT_KILL		4
#define STATUS_INIT		5
#define STATUS_ALIVE		6
#define STATUS_READY		7
#define STATUS_TEMPERATURE	8
#define STATUS_GEO_CONFIGURED	9
#define STATUS_EXIT_PENDING	10
#define STATUS_STATISTICS	12
#define STATUS_SCANNING		13
#define STATUS_SCAN_ABORTING	14
#define STATUS_SCAN_HW		15
#define STATUS_POWER_PMI	16
#define STATUS_FW_ERROR		17
#define STATUS_CHANNEL_SWITCH_PENDING 18
static inline int iwl_legacy_is_ready(struct iwl_priv *priv)
static inline int iwl_legacy_is_alive(struct iwl_priv *priv)
static inline int iwl_legacy_is_init(struct iwl_priv *priv)
static inline int iwl_legacy_is_rfkill_hw(struct iwl_priv *priv)
static inline int iwl_legacy_is_rfkill(struct iwl_priv *priv)
static inline int iwl_legacy_is_ctkill(struct iwl_priv *priv)
static inline int iwl_legacy_is_ready_rf(struct iwl_priv *priv)
extern void iwl_legacy_send_bt_config(struct iwl_priv *priv);
extern int iwl_legacy_send_statistics_request(struct iwl_priv *priv,
u8 flags, bool clear);
void iwl_legacy_apm_stop(struct iwl_priv *priv);
int iwl_legacy_apm_init(struct iwl_priv *priv);
int iwl_legacy_send_rxon_timing(struct iwl_priv *priv,
struct iwl_rxon_context *ctx);
static inline int iwl_legacy_send_rxon_assoc(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static inline int iwl_legacy_commit_rxon(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static inline const struct ieee80211_supported_band *iwl_get_hw_mode(
struct iwl_priv *priv, enum ieee80211_band band)
int iwl_legacy_mac_config(struct ieee80211_hw *hw, u32 changed);
void iwl_legacy_mac_reset_tsf(struct ieee80211_hw *hw);
void iwl_legacy_mac_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changes);
void iwl_legacy_tx_cmd_protection(struct iwl_priv *priv,
struct ieee80211_tx_info *info,
__le16 fc, __le32 *tx_flags);
irqreturn_t iwl_legacy_isr(int irq, void *data);
