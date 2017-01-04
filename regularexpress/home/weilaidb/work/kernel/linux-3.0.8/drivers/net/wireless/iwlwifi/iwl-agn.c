#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME        "iwlagn"
#define DRV_DESCRIPTION	"Intel(R) Wireless WiFi Link AGN driver for Linux"
#define VD "d"
#define VD
#define DRV_VERSION     IWLWIFI_VERSION VD
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_COPYRIGHT " " DRV_AUTHOR);
MODULE_LICENSE("GPL");
static int iwlagn_ant_coupling;
static bool iwlagn_bt_ch_announce = 1;
void iwl_update_chain_flags(struct iwl_priv *priv)
static void iwl_set_beacon_tim(struct iwl_priv *priv,
struct iwl_tx_beacon_cmd *tx_beacon_cmd,
u8 *beacon, u32 frame_size)
int iwlagn_send_beacon_cmd(struct iwl_priv *priv)
static void iwl_bg_beacon_update(struct work_struct *work)
static void iwl_bg_bt_runtime_config(struct work_struct *work)
static void iwl_bg_bt_full_concurrency(struct work_struct *work)
static void iwl_bg_statistics_periodic(unsigned long data)
static void iwl_print_cont_event_trace(struct iwl_priv *priv, u32 base,
u32 start_idx, u32 num_events,
u32 mode)
static void iwl_continuous_event_trace(struct iwl_priv *priv)
static void iwl_bg_ucode_trace(unsigned long data)
static void iwl_bg_tx_flush(struct work_struct *work)
static void iwl_rx_handle(struct iwl_priv *priv)
static void iwl_irq_tasklet(struct iwl_priv *priv)
static ssize_t show_debug_level(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_debug_level(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(debug_level, S_IWUSR | S_IRUGO,
show_debug_level, store_debug_level);
static ssize_t show_temperature(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(temperature, S_IRUGO, show_temperature, NULL);
static ssize_t show_tx_power(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_tx_power(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(tx_power, S_IWUSR | S_IRUGO, show_tx_power, store_tx_power);
static struct attribute *iwl_sysfs_entries[] = ;
static struct attribute_group iwl_attribute_group = ;
static void iwl_free_fw_desc(struct pci_dev *pci_dev, struct fw_desc *desc)
static void iwl_free_fw_img(struct pci_dev *pci_dev, struct fw_img *img)
static int iwl_alloc_fw_desc(struct pci_dev *pci_dev, struct fw_desc *desc,
const void *data, size_t len)
static void iwl_dealloc_ucode_pci(struct iwl_priv *priv)
struct iwlagn_ucode_capabilities ;
static void iwl_ucode_callback(const struct firmware *ucode_raw, void *context);
static int iwl_mac_setup_register(struct iwl_priv *priv,
struct iwlagn_ucode_capabilities *capa);
#define UCODE_EXPERIMENTAL_INDEX	100
#define UCODE_EXPERIMENTAL_TAG		"exp"
static int __must_check iwl_request_firmware(struct iwl_priv *priv, bool first)
struct iwlagn_firmware_pieces ;
static int iwlagn_load_legacy_firmware(struct iwl_priv *priv,
const struct firmware *ucode_raw,
struct iwlagn_firmware_pieces *pieces)
static int iwlagn_wanted_ucode_alternative = 1;
static int iwlagn_load_firmware(struct iwl_priv *priv,
const struct firmware *ucode_raw,
struct iwlagn_firmware_pieces *pieces,
struct iwlagn_ucode_capabilities *capa)
static void iwl_ucode_callback(const struct firmware *ucode_raw, void *context)
static const char *desc_lookup_text[] = ;
static struct  advanced_lookup[] = ;
static const char *desc_lookup(u32 num)
#define ERROR_START_OFFSET  (1 * sizeof(u32))
#define ERROR_ELEM_SIZE     (7 * sizeof(u32))
void iwl_dump_nic_error_log(struct iwl_priv *priv)
#define EVENT_START_OFFSET  (4 * sizeof(u32))
static int iwl_print_event_log(struct iwl_priv *priv, u32 start_idx,
u32 num_events, u32 mode,
int pos, char **buf, size_t bufsz)
static int iwl_print_last_event_logs(struct iwl_priv *priv, u32 capacity,
u32 num_wraps, u32 next_entry,
u32 size, u32 mode,
int pos, char **buf, size_t bufsz)
#define DEFAULT_DUMP_EVENT_LOG_ENTRIES (20)
int iwl_dump_nic_event_log(struct iwl_priv *priv, bool full_log,
char **buf, bool display)
static void iwl_rf_kill_ct_config(struct iwl_priv *priv)
static int iwlagn_send_calib_cfg_rt(struct iwl_priv *priv, u32 cfg)
int iwl_alive_start(struct iwl_priv *priv)
static void iwl_cancel_deferred_work(struct iwl_priv *priv);
static void __iwl_down(struct iwl_priv *priv)
static void iwl_down(struct iwl_priv *priv)
#define HW_READY_TIMEOUT (50)
static int iwl_set_hw_ready(struct iwl_priv *priv)
int iwl_prepare_card_hw(struct iwl_priv *priv)
#define MAX_HW_RESTARTS 5
static int __iwl_up(struct iwl_priv *priv)
static void iwl_bg_run_time_calib_work(struct work_struct *work)
static void iwlagn_prepare_restart(struct iwl_priv *priv)
static void iwl_bg_restart(struct work_struct *data)
static void iwl_bg_rx_replenish(struct work_struct *data)
static int iwl_mac_offchannel_tx(struct ieee80211_hw *hw, struct sk_buff *skb,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int wait)
static int iwl_mac_offchannel_tx_cancel_wait(struct ieee80211_hw *hw)
static int iwl_mac_setup_register(struct iwl_priv *priv,
struct iwlagn_ucode_capabilities *capa)
static int iwlagn_mac_start(struct ieee80211_hw *hw)
static void iwlagn_mac_stop(struct ieee80211_hw *hw)
static void iwlagn_mac_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static void iwlagn_mac_update_tkip_key(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_key_conf *keyconf,
struct ieee80211_sta *sta,
u32 iv32, u16 *phase1key)
static int iwlagn_mac_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static int iwlagn_mac_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size)
static int iwlagn_mac_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static void iwlagn_mac_channel_switch(struct ieee80211_hw *hw,
struct ieee80211_channel_switch *ch_switch)
static void iwlagn_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static void iwlagn_mac_flush(struct ieee80211_hw *hw, bool drop)
static void iwlagn_disable_roc(struct iwl_priv *priv)
static void iwlagn_bg_roc_done(struct work_struct *work)
static int iwl_mac_remain_on_channel(struct ieee80211_hw *hw,
struct ieee80211_channel *channel,
enum nl80211_channel_type channel_type,
int duration)
static int iwl_mac_cancel_remain_on_channel(struct ieee80211_hw *hw)
static void iwl_setup_deferred_work(struct iwl_priv *priv)
static void iwl_cancel_deferred_work(struct iwl_priv *priv)
static void iwl_init_hw_rates(struct iwl_priv *priv,
struct ieee80211_rate *rates)
static int iwl_init_drv(struct iwl_priv *priv)
static void iwl_uninit_drv(struct iwl_priv *priv)
struct ieee80211_ops iwlagn_hw_ops = ;
static u32 iwl_hw_detect(struct iwl_priv *priv)
static int iwl_set_hw_params(struct iwl_priv *priv)
static const u8 iwlagn_bss_ac_to_fifo[] = ;
static const u8 iwlagn_bss_ac_to_queue[] = ;
static const u8 iwlagn_pan_ac_to_fifo[] = ;
static const u8 iwlagn_pan_ac_to_queue[] = ;
static struct ieee80211_hw *iwl_alloc_all(struct iwl_cfg *cfg)
static int iwl_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit iwl_pci_remove(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(iwl_hw_card_ids) = ;
MODULE_DEVICE_TABLE(pci, iwl_hw_card_ids);
static struct pci_driver iwl_driver = ;
static int __init iwl_init(void)
static void __exit iwl_exit(void)
module_exit(iwl_exit);
module_init(iwl_init);
module_param_named(debug, iwl_debug_level, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "debug output mask");
module_param_named(swcrypto, iwlagn_mod_params.sw_crypto, int, S_IRUGO);
MODULE_PARM_DESC(swcrypto, "using crypto in software (default 0 [hardware])");
module_param_named(queues_num, iwlagn_mod_params.num_of_queues, int, S_IRUGO);
MODULE_PARM_DESC(queues_num, "number of hw queues.");
module_param_named(11n_disable, iwlagn_mod_params.disable_11n, int, S_IRUGO);
MODULE_PARM_DESC(11n_disable, "disable 11n functionality");
module_param_named(amsdu_size_8K, iwlagn_mod_params.amsdu_size_8K,
int, S_IRUGO);
MODULE_PARM_DESC(amsdu_size_8K, "enable 8K amsdu size");
module_param_named(fw_restart, iwlagn_mod_params.restart_fw, int, S_IRUGO);
MODULE_PARM_DESC(fw_restart, "restart firmware in case of error");
module_param_named(ucode_alternative, iwlagn_wanted_ucode_alternative, int,
S_IRUGO);
MODULE_PARM_DESC(ucode_alternative,
"specify ucode alternative to use from ucode file");
module_param_named(antenna_coupling, iwlagn_ant_coupling, int, S_IRUGO);
MODULE_PARM_DESC(antenna_coupling,
"specify antenna coupling in dB (defualt: 0 dB)");
module_param_named(bt_ch_inhibition, iwlagn_bt_ch_announce, bool, S_IRUGO);
MODULE_PARM_DESC(bt_ch_inhibition,
"Disable BT channel inhibition (default: enable)");
module_param_named(plcp_check, iwlagn_mod_params.plcp_check, bool, S_IRUGO);
MODULE_PARM_DESC(plcp_check, "Check plcp health (default: 1 [enabled])");
module_param_named(ack_check, iwlagn_mod_params.ack_check, bool, S_IRUGO);
MODULE_PARM_DESC(ack_check, "Check ack health (default: 0 [disabled])");
