#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"iwl3945"
#define DRV_DESCRIPTION	\
"Intel(R) PRO/Wireless 3945ABG/BG Network Connection driver for Linux"
#define VD "d"
#define VD
#define DRV_VERSION  IWLWIFI_VERSION VD "s"
#define DRV_COPYRIGHT	"Copyright(c) 2003-2011 Intel Corporation"
#define DRV_AUTHOR     "<ilw@linux.intel.com>"
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_COPYRIGHT " " DRV_AUTHOR);
MODULE_LICENSE("GPL");
struct iwl_mod_params iwl3945_mod_params = ;
__le32 iwl3945_get_antenna_flags(const struct iwl_priv *priv)
static int iwl3945_set_ccmp_dynamic_key_info(struct iwl_priv *priv,
struct ieee80211_key_conf *keyconf,
u8 sta_id)
static int iwl3945_set_tkip_dynamic_key_info(struct iwl_priv *priv,
struct ieee80211_key_conf *keyconf,
u8 sta_id)
static int iwl3945_set_wep_dynamic_key_info(struct iwl_priv *priv,
struct ieee80211_key_conf *keyconf,
u8 sta_id)
static int iwl3945_clear_sta_key_info(struct iwl_priv *priv, u8 sta_id)
static int iwl3945_set_dynamic_key(struct iwl_priv *priv,
struct ieee80211_key_conf *keyconf, u8 sta_id)
static int iwl3945_remove_static_key(struct iwl_priv *priv)
static int iwl3945_set_static_key(struct iwl_priv *priv,
struct ieee80211_key_conf *key)
static void iwl3945_clear_free_frames(struct iwl_priv *priv)
static struct iwl3945_frame *iwl3945_get_free_frame(struct iwl_priv *priv)
static void iwl3945_free_frame(struct iwl_priv *priv, struct iwl3945_frame *frame)
unsigned int iwl3945_fill_beacon_frame(struct iwl_priv *priv,
struct ieee80211_hdr *hdr,
int left)
static int iwl3945_send_beacon_cmd(struct iwl_priv *priv)
static void iwl3945_unset_hw_params(struct iwl_priv *priv)
static void iwl3945_build_tx_cmd_hwcrypto(struct iwl_priv *priv,
struct ieee80211_tx_info *info,
struct iwl_device_cmd *cmd,
struct sk_buff *skb_frag,
int sta_id)
static void iwl3945_build_tx_cmd_basic(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct ieee80211_tx_info *info,
struct ieee80211_hdr *hdr, u8 std_id)
static int iwl3945_tx_skb(struct iwl_priv *priv, struct sk_buff *skb)
static int iwl3945_get_measurement(struct iwl_priv *priv,
struct ieee80211_measurement_params *params,
u8 type)
static void iwl3945_rx_reply_alive(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl3945_rx_reply_add_sta(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl3945_rx_beacon_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl3945_rx_card_state_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl3945_setup_rx_handlers(struct iwl_priv *priv)
static inline __le32 iwl3945_dma_addr2rbd_ptr(struct iwl_priv *priv,
dma_addr_t dma_addr)
static void iwl3945_rx_queue_restock(struct iwl_priv *priv)
static void iwl3945_rx_allocate(struct iwl_priv *priv, gfp_t priority)
void iwl3945_rx_queue_reset(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
void iwl3945_rx_replenish(void *data)
static void iwl3945_rx_replenish_now(struct iwl_priv *priv)
static void iwl3945_rx_queue_free(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
static u8 ratio2dB[100] = ;
int iwl3945_calc_db_from_ratio(int sig_ratio)
static void iwl3945_rx_handle(struct iwl_priv *priv)
static inline void iwl3945_synchronize_irq(struct iwl_priv *priv)
static const char *iwl3945_desc_lookup(int i)
#define ERROR_START_OFFSET  (1 * sizeof(u32))
#define ERROR_ELEM_SIZE     (7 * sizeof(u32))
void iwl3945_dump_nic_error_log(struct iwl_priv *priv)
#define EVENT_START_OFFSET  (6 * sizeof(u32))
static int iwl3945_print_event_log(struct iwl_priv *priv, u32 start_idx,
u32 num_events, u32 mode,
int pos, char **buf, size_t bufsz)
static int iwl3945_print_last_event_logs(struct iwl_priv *priv, u32 capacity,
u32 num_wraps, u32 next_entry,
u32 size, u32 mode,
int pos, char **buf, size_t bufsz)
#define DEFAULT_IWL3945_DUMP_EVENT_LOG_ENTRIES (20)
int iwl3945_dump_nic_event_log(struct iwl_priv *priv, bool full_log,
char **buf, bool display)
static void iwl3945_irq_tasklet(struct iwl_priv *priv)
static int iwl3945_get_single_channel_for_scan(struct iwl_priv *priv,
struct ieee80211_vif *vif,
enum ieee80211_band band,
struct iwl3945_scan_channel *scan_ch)
static int iwl3945_get_channels_for_scan(struct iwl_priv *priv,
enum ieee80211_band band,
u8 is_active, u8 n_probes,
struct iwl3945_scan_channel *scan_ch,
struct ieee80211_vif *vif)
static void iwl3945_init_hw_rates(struct iwl_priv *priv,
struct ieee80211_rate *rates)
static void iwl3945_dealloc_ucode_pci(struct iwl_priv *priv)
static int iwl3945_verify_inst_full(struct iwl_priv *priv, __le32 *image, u32 len)
static int iwl3945_verify_inst_sparse(struct iwl_priv *priv, __le32 *image, u32 len)
static int iwl3945_verify_ucode(struct iwl_priv *priv)
static void iwl3945_nic_start(struct iwl_priv *priv)
#define IWL3945_UCODE_GET(item)						\
static u32 iwl3945_ucode_get_##item(const struct iwl_ucode_header *ucode)\
static u32 iwl3945_ucode_get_header_size(u32 api_ver)
static u8 *iwl3945_ucode_get_data(const struct iwl_ucode_header *ucode)
IWL3945_UCODE_GET(inst_size);
IWL3945_UCODE_GET(data_size);
IWL3945_UCODE_GET(init_size);
IWL3945_UCODE_GET(init_data_size);
IWL3945_UCODE_GET(boot_size);
static int iwl3945_read_ucode(struct iwl_priv *priv)
static int iwl3945_set_ucode_ptrs(struct iwl_priv *priv)
static void iwl3945_init_alive_start(struct iwl_priv *priv)
static void iwl3945_alive_start(struct iwl_priv *priv)
static void iwl3945_cancel_deferred_work(struct iwl_priv *priv);
static void __iwl3945_down(struct iwl_priv *priv)
static void iwl3945_down(struct iwl_priv *priv)
#define MAX_HW_RESTARTS 5
static int iwl3945_alloc_bcast_station(struct iwl_priv *priv)
static int __iwl3945_up(struct iwl_priv *priv)
static void iwl3945_bg_init_alive_start(struct work_struct *data)
static void iwl3945_bg_alive_start(struct work_struct *data)
static void iwl3945_rfkill_poll(struct work_struct *data)
int iwl3945_request_scan(struct iwl_priv *priv, struct ieee80211_vif *vif)
void iwl3945_post_scan(struct iwl_priv *priv)
static void iwl3945_bg_restart(struct work_struct *data)
static void iwl3945_bg_rx_replenish(struct work_struct *data)
void iwl3945_post_associate(struct iwl_priv *priv)
#define UCODE_READY_TIMEOUT	(2 * HZ)
static int iwl3945_mac_start(struct ieee80211_hw *hw)
static void iwl3945_mac_stop(struct ieee80211_hw *hw)
static void iwl3945_mac_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
void iwl3945_config_ap(struct iwl_priv *priv)
static int iwl3945_mac_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static int iwl3945_mac_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static void iwl3945_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static ssize_t iwl3945_show_debug_level(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t iwl3945_store_debug_level(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(debug_level, S_IWUSR | S_IRUGO,
iwl3945_show_debug_level, iwl3945_store_debug_level);
static ssize_t iwl3945_show_temperature(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(temperature, S_IRUGO, iwl3945_show_temperature, NULL);
static ssize_t iwl3945_show_tx_power(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t iwl3945_store_tx_power(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(tx_power, S_IWUSR | S_IRUGO, iwl3945_show_tx_power, iwl3945_store_tx_power);
static ssize_t iwl3945_show_flags(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t iwl3945_store_flags(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(flags, S_IWUSR | S_IRUGO, iwl3945_show_flags, iwl3945_store_flags);
static ssize_t iwl3945_show_filter_flags(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t iwl3945_store_filter_flags(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(filter_flags, S_IWUSR | S_IRUGO, iwl3945_show_filter_flags,
iwl3945_store_filter_flags);
static ssize_t iwl3945_show_measurement(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t iwl3945_store_measurement(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(measurement, S_IRUSR | S_IWUSR,
iwl3945_show_measurement, iwl3945_store_measurement);
static ssize_t iwl3945_store_retry_rate(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t iwl3945_show_retry_rate(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(retry_rate, S_IWUSR | S_IRUSR, iwl3945_show_retry_rate,
iwl3945_store_retry_rate);
static ssize_t iwl3945_show_channels(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(channels, S_IRUSR, iwl3945_show_channels, NULL);
static ssize_t iwl3945_show_antenna(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t iwl3945_store_antenna(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(antenna, S_IWUSR | S_IRUGO, iwl3945_show_antenna, iwl3945_store_antenna);
static ssize_t iwl3945_show_status(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(status, S_IRUGO, iwl3945_show_status, NULL);
static ssize_t iwl3945_dump_error_log(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(dump_errors, S_IWUSR, NULL, iwl3945_dump_error_log);
static void iwl3945_setup_deferred_work(struct iwl_priv *priv)
static void iwl3945_cancel_deferred_work(struct iwl_priv *priv)
static struct attribute *iwl3945_sysfs_entries[] = ;
static struct attribute_group iwl3945_attribute_group = ;
struct ieee80211_ops iwl3945_hw_ops = ;
static int iwl3945_init_drv(struct iwl_priv *priv)
#define IWL3945_MAX_PROBE_REQUEST	200
static int iwl3945_setup_mac(struct iwl_priv *priv)
static int iwl3945_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit iwl3945_pci_remove(struct pci_dev *pdev)
static struct pci_driver iwl3945_driver = ;
static int __init iwl3945_init(void)
static void __exit iwl3945_exit(void)
MODULE_FIRMWARE(IWL3945_MODULE_FIRMWARE(IWL3945_UCODE_API_MAX));
module_param_named(antenna, iwl3945_mod_params.antenna, int, S_IRUGO);
MODULE_PARM_DESC(antenna, "select antenna (1=Main, 2=Aux, default 0 [both])");
module_param_named(swcrypto, iwl3945_mod_params.sw_crypto, int, S_IRUGO);
MODULE_PARM_DESC(swcrypto,
"using software crypto (default 1 [software])");
module_param_named(disable_hw_scan, iwl3945_mod_params.disable_hw_scan,
int, S_IRUGO);
MODULE_PARM_DESC(disable_hw_scan, "disable hardware scanning (default 1)");
module_param_named(debug, iwlegacy_debug_level, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "debug output mask");
module_param_named(fw_restart, iwl3945_mod_params.restart_fw, int, S_IRUGO);
MODULE_PARM_DESC(fw_restart, "restart firmware in case of error");
module_exit(iwl3945_exit);
module_init(iwl3945_init);
