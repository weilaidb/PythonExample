#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME        "iwl4965"
#define DRV_DESCRIPTION	"Intel(R) Wireless WiFi 4965 driver for Linux"
#define VD "d"
#define VD
#define DRV_VERSION     IWLWIFI_VERSION VD
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_COPYRIGHT " " DRV_AUTHOR);
MODULE_LICENSE("GPL");
MODULE_ALIAS("iwl4965");
void iwl4965_update_chain_flags(struct iwl_priv *priv)
static void iwl4965_clear_free_frames(struct iwl_priv *priv)
static struct iwl_frame *iwl4965_get_free_frame(struct iwl_priv *priv)
static void iwl4965_free_frame(struct iwl_priv *priv, struct iwl_frame *frame)
static u32 iwl4965_fill_beacon_frame(struct iwl_priv *priv,
struct ieee80211_hdr *hdr,
int left)
static void iwl4965_set_beacon_tim(struct iwl_priv *priv,
struct iwl_tx_beacon_cmd *tx_beacon_cmd,
u8 *beacon, u32 frame_size)
static unsigned int iwl4965_hw_get_beacon_cmd(struct iwl_priv *priv,
struct iwl_frame *frame)
int iwl4965_send_beacon_cmd(struct iwl_priv *priv)
static inline dma_addr_t iwl4965_tfd_tb_get_addr(struct iwl_tfd *tfd, u8 idx)
static inline u16 iwl4965_tfd_tb_get_len(struct iwl_tfd *tfd, u8 idx)
static inline void iwl4965_tfd_set_tb(struct iwl_tfd *tfd, u8 idx,
dma_addr_t addr, u16 len)
static inline u8 iwl4965_tfd_get_num_tbs(struct iwl_tfd *tfd)
void iwl4965_hw_txq_free_tfd(struct iwl_priv *priv, struct iwl_tx_queue *txq)
int iwl4965_hw_txq_attach_buf_to_tfd(struct iwl_priv *priv,
struct iwl_tx_queue *txq,
dma_addr_t addr, u16 len,
u8 reset, u8 pad)
int iwl4965_hw_tx_queue_init(struct iwl_priv *priv,
struct iwl_tx_queue *txq)
static void iwl4965_rx_reply_alive(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl4965_bg_statistics_periodic(unsigned long data)
static void iwl4965_print_cont_event_trace(struct iwl_priv *priv, u32 base,
u32 start_idx, u32 num_events,
u32 mode)
static void iwl4965_continuous_event_trace(struct iwl_priv *priv)
static void iwl4965_bg_ucode_trace(unsigned long data)
static void iwl4965_rx_beacon_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl4965_perform_ct_kill_task(struct iwl_priv *priv)
static void iwl4965_rx_card_state_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl4965_setup_rx_handlers(struct iwl_priv *priv)
void iwl4965_rx_handle(struct iwl_priv *priv)
static inline void iwl4965_synchronize_irq(struct iwl_priv *priv)
static void iwl4965_irq_tasklet(struct iwl_priv *priv)
static ssize_t iwl4965_show_debug_level(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t iwl4965_store_debug_level(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(debug_level, S_IWUSR | S_IRUGO,
iwl4965_show_debug_level, iwl4965_store_debug_level);
static ssize_t iwl4965_show_temperature(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(temperature, S_IRUGO, iwl4965_show_temperature, NULL);
static ssize_t iwl4965_show_tx_power(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t iwl4965_store_tx_power(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(tx_power, S_IWUSR | S_IRUGO,
iwl4965_show_tx_power, iwl4965_store_tx_power);
static struct attribute *iwl_sysfs_entries[] = ;
static struct attribute_group iwl_attribute_group = ;
static void iwl4965_dealloc_ucode_pci(struct iwl_priv *priv)
static void iwl4965_nic_start(struct iwl_priv *priv)
static void iwl4965_ucode_callback(const struct firmware *ucode_raw,
void *context);
static int iwl4965_mac_setup_register(struct iwl_priv *priv,
u32 max_probe_length);
static int __must_check iwl4965_request_firmware(struct iwl_priv *priv, bool first)
struct iwl4965_firmware_pieces ;
static int iwl4965_load_firmware(struct iwl_priv *priv,
const struct firmware *ucode_raw,
struct iwl4965_firmware_pieces *pieces)
static void
iwl4965_ucode_callback(const struct firmware *ucode_raw, void *context)
static const char * const desc_lookup_text[] = ;
static struct  advanced_lookup[] = ;
static const char *iwl4965_desc_lookup(u32 num)
#define ERROR_START_OFFSET  (1 * sizeof(u32))
#define ERROR_ELEM_SIZE     (7 * sizeof(u32))
void iwl4965_dump_nic_error_log(struct iwl_priv *priv)
#define EVENT_START_OFFSET  (4 * sizeof(u32))
static int iwl4965_print_event_log(struct iwl_priv *priv, u32 start_idx,
u32 num_events, u32 mode,
int pos, char **buf, size_t bufsz)
static int iwl4965_print_last_event_logs(struct iwl_priv *priv, u32 capacity,
u32 num_wraps, u32 next_entry,
u32 size, u32 mode,
int pos, char **buf, size_t bufsz)
#define DEFAULT_DUMP_EVENT_LOG_ENTRIES (20)
int iwl4965_dump_nic_event_log(struct iwl_priv *priv, bool full_log,
char **buf, bool display)
static void iwl4965_rf_kill_ct_config(struct iwl_priv *priv)
static const s8 default_queue_to_tx_fifo[] = ;
static int iwl4965_alive_notify(struct iwl_priv *priv)
static void iwl4965_alive_start(struct iwl_priv *priv)
static void iwl4965_cancel_deferred_work(struct iwl_priv *priv);
static void __iwl4965_down(struct iwl_priv *priv)
static void iwl4965_down(struct iwl_priv *priv)
#define HW_READY_TIMEOUT (50)
static int iwl4965_set_hw_ready(struct iwl_priv *priv)
static int iwl4965_prepare_card_hw(struct iwl_priv *priv)
#define MAX_HW_RESTARTS 5
static int __iwl4965_up(struct iwl_priv *priv)
static void iwl4965_bg_init_alive_start(struct work_struct *data)
static void iwl4965_bg_alive_start(struct work_struct *data)
static void iwl4965_bg_run_time_calib_work(struct work_struct *work)
static void iwl4965_bg_restart(struct work_struct *data)
static void iwl4965_bg_rx_replenish(struct work_struct *data)
#define UCODE_READY_TIMEOUT	(4 * HZ)
static int iwl4965_mac_setup_register(struct iwl_priv *priv,
u32 max_probe_length)
int iwl4965_mac_start(struct ieee80211_hw *hw)
void iwl4965_mac_stop(struct ieee80211_hw *hw)
void iwl4965_mac_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
void iwl4965_mac_update_tkip_key(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_key_conf *keyconf,
struct ieee80211_sta *sta,
u32 iv32, u16 *phase1key)
int iwl4965_mac_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif, struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
int iwl4965_mac_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size)
int iwl4965_mac_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
void iwl4965_mac_channel_switch(struct ieee80211_hw *hw,
struct ieee80211_channel_switch *ch_switch)
void iwl4965_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static void iwl4965_bg_txpower_work(struct work_struct *work)
static void iwl4965_setup_deferred_work(struct iwl_priv *priv)
static void iwl4965_cancel_deferred_work(struct iwl_priv *priv)
static void iwl4965_init_hw_rates(struct iwl_priv *priv,
struct ieee80211_rate *rates)
void iwl4965_set_wr_ptrs(struct iwl_priv *priv, int txq_id, u32 index)
void iwl4965_tx_queue_set_status(struct iwl_priv *priv,
struct iwl_tx_queue *txq,
int tx_fifo_id, int scd_retry)
static int iwl4965_init_drv(struct iwl_priv *priv)
static void iwl4965_uninit_drv(struct iwl_priv *priv)
static void iwl4965_hw_detect(struct iwl_priv *priv)
static int iwl4965_set_hw_params(struct iwl_priv *priv)
static const u8 iwl4965_bss_ac_to_fifo[] = ;
static const u8 iwl4965_bss_ac_to_queue[] = ;
static int
iwl4965_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit iwl4965_pci_remove(struct pci_dev *pdev)
void iwl4965_txq_set_sched(struct iwl_priv *priv, u32 mask)
static DEFINE_PCI_DEVICE_TABLE(iwl4965_hw_card_ids) = ;
MODULE_DEVICE_TABLE(pci, iwl4965_hw_card_ids);
static struct pci_driver iwl4965_driver = ;
static int __init iwl4965_init(void)
static void __exit iwl4965_exit(void)
module_exit(iwl4965_exit);
module_init(iwl4965_init);
module_param_named(debug, iwlegacy_debug_level, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "debug output mask");
module_param_named(swcrypto, iwl4965_mod_params.sw_crypto, int, S_IRUGO);
MODULE_PARM_DESC(swcrypto, "using crypto in software (default 0 [hardware])");
module_param_named(queues_num, iwl4965_mod_params.num_of_queues, int, S_IRUGO);
MODULE_PARM_DESC(queues_num, "number of hw queues.");
module_param_named(11n_disable, iwl4965_mod_params.disable_11n, int, S_IRUGO);
MODULE_PARM_DESC(11n_disable, "disable 11n functionality");
module_param_named(amsdu_size_8K, iwl4965_mod_params.amsdu_size_8K,
int, S_IRUGO);
MODULE_PARM_DESC(amsdu_size_8K, "enable 8K amsdu size");
module_param_named(fw_restart, iwl4965_mod_params.restart_fw, int, S_IRUGO);
MODULE_PARM_DESC(fw_restart, "restart firmware in case of error");
