#define _MWIFIEX_MAIN_H_
extern const char driver_version[];
extern struct mwifiex_adapter *g_adapter;
enum ;
#define DRV_MODE_STA       0x1
#define SD8787_W0   0x30
#define SD8787_W1   0x31
#define SD8787_A0   0x40
#define SD8787_A1   0x41
#define DEFAULT_FW_NAME "mrvl/sd8787_uapsta.bin"
#define SD8787_W1_FW_NAME "mrvl/sd8787_uapsta_w1.bin"
#define SD8787_AX_FW_NAME "mrvl/sd8787_uapsta.bin"
struct mwifiex_drv_mode ;
#define MWIFIEX_DEFAULT_WATCHDOG_TIMEOUT	(5 * HZ)
#define MWIFIEX_TIMER_10S			10000
#define MWIFIEX_TIMER_1S			1000
#define MAX_TX_PENDING      100
#define LOW_TX_PENDING      80
#define MWIFIEX_UPLD_SIZE               (2312)
#define MAX_EVENT_SIZE                  1024
#define ARP_FILTER_MAX_BUF_SIZE         68
#define MWIFIEX_KEY_BUFFER_SIZE			16
#define MWIFIEX_DEFAULT_LISTEN_INTERVAL 10
#define MWIFIEX_MAX_REGION_CODE         7
#define DEFAULT_BCN_AVG_FACTOR          8
#define DEFAULT_DATA_AVG_FACTOR         8
#define FIRST_VALID_CHANNEL				0xff
#define DEFAULT_AD_HOC_CHANNEL			6
#define DEFAULT_AD_HOC_CHANNEL_A		36
#define DEFAULT_BCN_MISS_TIMEOUT		5
#define MAX_SCAN_BEACON_BUFFER			8000
#define SCAN_BEACON_ENTRY_PAD			6
#define MWIFIEX_PASSIVE_SCAN_CHAN_TIME	200
#define MWIFIEX_ACTIVE_SCAN_CHAN_TIME	200
#define MWIFIEX_SPECIFIC_SCAN_CHAN_TIME	110
#define SCAN_RSSI(RSSI)					(0x100 - ((u8)(RSSI)))
#define MWIFIEX_MAX_TOTAL_SCAN_TIME	(MWIFIEX_TIMER_10S - MWIFIEX_TIMER_1S)
#define RSN_GTK_OUI_OFFSET				2
#define MWIFIEX_OUI_NOT_PRESENT			0
#define MWIFIEX_OUI_PRESENT				1
#define IS_CARD_RX_RCVD(adapter) (adapter->cmd_resp_received || \
adapter->event_received || \
adapter->data_received)
#define MWIFIEX_TYPE_CMD				1
#define MWIFIEX_TYPE_DATA				0
#define MWIFIEX_TYPE_EVENT				3
#define DBG_CMD_NUM						5
#define MAX_BITMAP_RATES_SIZE			10
#define MAX_CHANNEL_BAND_BG     14
#define MAX_FREQUENCY_BAND_BG   2484
struct mwifiex_dbg ;
enum MWIFIEX_HARDWARE_STATUS ;
enum MWIFIEX_802_11_POWER_MODE ;
struct mwifiex_tx_param ;
enum MWIFIEX_PS_STATE ;
struct mwifiex_add_ba_param ;
struct mwifiex_tx_aggr ;
struct mwifiex_ra_list_tbl ;
struct mwifiex_tid_tbl ;
#define WMM_HIGHEST_PRIORITY		7
#define HIGH_PRIO_TID				7
#define LOW_PRIO_TID				0
#define NO_PKT_PRIO_TID				(-1)
struct mwifiex_wmm_desc ;
struct mwifiex_802_11_security ;
struct ieee_types_header  __packed;
struct ieee_obss_scan_param  __packed;
struct ieee_types_obss_scan_param  __packed;
#define MWIFIEX_SUPPORTED_RATES                 14
#define MWIFIEX_SUPPORTED_RATES_EXT             32
#define IEEE_MAX_IE_SIZE			256
struct ieee_types_vendor_specific  __packed;
struct ieee_types_generic  __packed;
struct mwifiex_bssdescriptor ;
struct mwifiex_current_bss_params ;
struct mwifiex_sleep_params ;
struct mwifiex_sleep_period ;
struct mwifiex_wep_key ;
#define MAX_REGION_CHANNEL_NUM  2
struct mwifiex_chan_freq_power ;
enum state_11d_t ;
#define MWIFIEX_MAX_TRIPLET_802_11D		83
struct mwifiex_802_11d_domain_reg ;
struct mwifiex_vendor_spec_cfg_ie ;
struct wps ;
struct mwifiex_adapter;
struct mwifiex_private;
struct mwifiex_private ;
enum mwifiex_ba_status ;
struct mwifiex_tx_ba_stream_tbl ;
struct mwifiex_rx_reorder_tbl;
struct reorder_tmr_cnxt ;
struct mwifiex_rx_reorder_tbl ;
struct mwifiex_bss_prio_node ;
struct mwifiex_bss_prio_tbl ;
struct cmd_ctrl_node ;
struct mwifiex_if_ops ;
struct mwifiex_adapter ;
int mwifiex_init_lock_list(struct mwifiex_adapter *adapter);
void mwifiex_free_lock_list(struct mwifiex_adapter *adapter);
int mwifiex_init_fw(struct mwifiex_adapter *adapter);
int mwifiex_init_fw_complete(struct mwifiex_adapter *adapter);
int mwifiex_shutdown_drv(struct mwifiex_adapter *adapter);
int mwifiex_shutdown_fw_complete(struct mwifiex_adapter *adapter);
int mwifiex_dnld_fw(struct mwifiex_adapter *, struct mwifiex_fw_image *);
int mwifiex_recv_packet(struct mwifiex_adapter *, struct sk_buff *skb);
int mwifiex_process_event(struct mwifiex_adapter *adapter);
int mwifiex_complete_cmd(struct mwifiex_adapter *adapter);
int mwifiex_send_cmd_async(struct mwifiex_private *priv, uint16_t cmd_no,
u16 cmd_action, u32 cmd_oid, void *data_buf);
int mwifiex_send_cmd_sync(struct mwifiex_private *priv, uint16_t cmd_no,
u16 cmd_action, u32 cmd_oid, void *data_buf);
void mwifiex_cmd_timeout_func(unsigned long function_context);
int mwifiex_get_debug_info(struct mwifiex_private *,
struct mwifiex_debug_info *);
int mwifiex_alloc_cmd_buffer(struct mwifiex_adapter *adapter);
int mwifiex_free_cmd_buffer(struct mwifiex_adapter *adapter);
void mwifiex_cancel_all_pending_cmd(struct mwifiex_adapter *adapter);
void mwifiex_cancel_pending_ioctl(struct mwifiex_adapter *adapter);
void mwifiex_insert_cmd_to_free_q(struct mwifiex_adapter *adapter,
struct cmd_ctrl_node *cmd_node);
void mwifiex_insert_cmd_to_pending_q(struct mwifiex_adapter *adapter,
struct cmd_ctrl_node *cmd_node,
u32 addtail);
int mwifiex_exec_next_cmd(struct mwifiex_adapter *adapter);
int mwifiex_process_cmdresp(struct mwifiex_adapter *adapter);
int mwifiex_handle_rx_packet(struct mwifiex_adapter *adapter,
struct sk_buff *skb);
int mwifiex_process_tx(struct mwifiex_private *priv, struct sk_buff *skb,
struct mwifiex_tx_param *tx_param);
int mwifiex_send_null_packet(struct mwifiex_private *priv, u8 flags);
int mwifiex_write_data_complete(struct mwifiex_adapter *adapter,
struct sk_buff *skb, int status);
int mwifiex_recv_packet_complete(struct mwifiex_adapter *,
struct sk_buff *skb, int status);
void mwifiex_clean_txrx(struct mwifiex_private *priv);
u8 mwifiex_check_last_packet_indication(struct mwifiex_private *priv);
void mwifiex_check_ps_cond(struct mwifiex_adapter *adapter);
void mwifiex_process_sleep_confirm_resp(struct mwifiex_adapter *, u8 *,
u32);
int mwifiex_cmd_enh_power_mode(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action, uint16_t ps_bitmap,
void *data_buf);
int mwifiex_ret_enh_power_mode(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf);
void mwifiex_process_hs_config(struct mwifiex_adapter *adapter);
void mwifiex_hs_activated_event(struct mwifiex_private *priv,
u8 activated);
int mwifiex_ret_802_11_hs_cfg(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp);
int mwifiex_process_rx_packet(struct mwifiex_adapter *adapter,
struct sk_buff *skb);
int mwifiex_sta_prepare_cmd(struct mwifiex_private *, uint16_t cmd_no,
u16 cmd_action, u32 cmd_oid,
void *data_buf, void *cmd_buf);
int mwifiex_process_sta_cmdresp(struct mwifiex_private *, u16 cmdresp_no,
void *cmd_buf);
int mwifiex_process_sta_rx_packet(struct mwifiex_adapter *,
struct sk_buff *skb);
int mwifiex_process_sta_event(struct mwifiex_private *);
void *mwifiex_process_sta_txpd(struct mwifiex_private *, struct sk_buff *skb);
int mwifiex_sta_init_cmd(struct mwifiex_private *, u8 first_sta);
int mwifiex_scan_networks(struct mwifiex_private *priv,
const struct mwifiex_user_scan_cfg *user_scan_in);
int mwifiex_cmd_802_11_scan(struct host_cmd_ds_command *cmd,
void *data_buf);
void mwifiex_queue_scan_cmd(struct mwifiex_private *priv,
struct cmd_ctrl_node *cmd_node);
int mwifiex_ret_802_11_scan(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp);
s32 mwifiex_find_ssid_in_list(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *ssid, u8 *bssid,
u32 mode);
s32 mwifiex_find_bssid_in_list(struct mwifiex_private *priv, u8 *bssid,
u32 mode);
int mwifiex_find_best_network(struct mwifiex_private *priv,
struct mwifiex_ssid_bssid *req_ssid_bssid);
s32 mwifiex_ssid_cmp(struct mwifiex_802_11_ssid *ssid1,
struct mwifiex_802_11_ssid *ssid2);
int mwifiex_associate(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc);
int mwifiex_cmd_802_11_associate(struct mwifiex_private *priv,
struct host_cmd_ds_command
*cmd, void *data_buf);
int mwifiex_ret_802_11_associate(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp);
void mwifiex_reset_connect_state(struct mwifiex_private *priv);
void mwifiex_2040_coex_event(struct mwifiex_private *priv);
u8 mwifiex_band_to_radio_type(u8 band);
int mwifiex_deauthenticate(struct mwifiex_private *priv, u8 *mac);
int mwifiex_adhoc_start(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *adhoc_ssid);
int mwifiex_adhoc_join(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc);
int mwifiex_cmd_802_11_ad_hoc_start(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
void *data_buf);
int mwifiex_cmd_802_11_ad_hoc_join(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
void *data_buf);
int mwifiex_ret_802_11_ad_hoc(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp);
int mwifiex_cmd_802_11_bg_scan_query(struct host_cmd_ds_command *cmd);
struct mwifiex_chan_freq_power *
mwifiex_get_cfp_by_band_and_channel_from_cfg80211(
struct mwifiex_private *priv,
u8 band, u16 channel);
struct mwifiex_chan_freq_power *mwifiex_get_cfp_by_band_and_freq_from_cfg80211(
struct mwifiex_private *priv,
u8 band, u32 freq);
u32 mwifiex_index_to_data_rate(u8 index, u8 ht_info);
u32 mwifiex_find_freq_from_band_chan(u8, u8);
int mwifiex_cmd_append_vsie_tlv(struct mwifiex_private *priv, u16 vsie_mask,
u8 **buffer);
u32 mwifiex_get_active_data_rates(struct mwifiex_private *priv,
u8 *rates);
u32 mwifiex_get_supported_rates(struct mwifiex_private *priv, u8 *rates);
u8 mwifiex_data_rate_to_index(u32 rate);
u8 mwifiex_is_rate_auto(struct mwifiex_private *priv);
int mwifiex_get_rate_index(u16 *rateBitmap, int size);
extern u16 region_code_index[MWIFIEX_MAX_REGION_CODE];
void mwifiex_save_curr_bcn(struct mwifiex_private *priv);
void mwifiex_free_curr_bcn(struct mwifiex_private *priv);
int mwifiex_cmd_get_hw_spec(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd);
int mwifiex_ret_get_hw_spec(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp);
int is_command_pending(struct mwifiex_adapter *adapter);
static inline u8
mwifiex_queuing_ra_based(struct mwifiex_private *priv)
static inline u32
mwifiex_copy_rates(u8 *dest, u32 pos, u8 *src, int len)
static inline struct mwifiex_private *
mwifiex_get_priv_by_id(struct mwifiex_adapter *adapter,
u8 bss_num, u8 bss_type)
static inline struct mwifiex_private *
mwifiex_get_priv(struct mwifiex_adapter *adapter,
enum mwifiex_bss_role bss_role)
static inline struct mwifiex_private *
mwifiex_netdev_get_priv(struct net_device *dev)
struct mwifiex_private *mwifiex_bss_index_to_priv(struct mwifiex_adapter
*adapter, u8 bss_index);
int mwifiex_init_shutdown_fw(struct mwifiex_private *priv,
u32 func_init_shutdown);
int mwifiex_add_card(void *, struct semaphore *, struct mwifiex_if_ops *);
int mwifiex_remove_card(struct mwifiex_adapter *, struct semaphore *);
void mwifiex_get_version(struct mwifiex_adapter *adapter, char *version,
int maxlen);
int mwifiex_request_set_multicast_list(struct mwifiex_private *priv,
struct mwifiex_multicast_list *mcast_list);
int mwifiex_copy_mcast_addr(struct mwifiex_multicast_list *mlist,
struct net_device *dev);
int mwifiex_wait_queue_complete(struct mwifiex_adapter *adapter);
int mwifiex_bss_start(struct mwifiex_private *priv,
struct mwifiex_ssid_bssid *ssid_bssid);
int mwifiex_set_hs_params(struct mwifiex_private *priv,
u16 action, int cmd_type,
struct mwifiex_ds_hs_cfg *hscfg);
int mwifiex_cancel_hs(struct mwifiex_private *priv, int cmd_type);
int mwifiex_enable_hs(struct mwifiex_adapter *adapter);
int mwifiex_get_signal_info(struct mwifiex_private *priv,
struct mwifiex_ds_get_signal *signal);
int mwifiex_drv_get_data_rate(struct mwifiex_private *priv,
struct mwifiex_rate_cfg *rate);
int mwifiex_find_best_bss(struct mwifiex_private *priv,
struct mwifiex_ssid_bssid *ssid_bssid);
int mwifiex_request_scan(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *req_ssid);
int mwifiex_set_user_scan_ioctl(struct mwifiex_private *priv,
struct mwifiex_user_scan_cfg *scan_req);
int mwifiex_change_adhoc_chan(struct mwifiex_private *priv, int channel);
int mwifiex_set_radio(struct mwifiex_private *priv, u8 option);
int mwifiex_drv_change_adhoc_chan(struct mwifiex_private *priv, int channel);
int mwifiex_set_encode(struct mwifiex_private *priv, const u8 *key,
int key_len, u8 key_index, int disable);
int mwifiex_set_gen_ie(struct mwifiex_private *priv, u8 *ie, int ie_len);
int mwifiex_get_ver_ext(struct mwifiex_private *priv);
int mwifiex_get_stats_info(struct mwifiex_private *priv,
struct mwifiex_ds_get_stats *log);
int mwifiex_reg_write(struct mwifiex_private *priv, u32 reg_type,
u32 reg_offset, u32 reg_value);
int mwifiex_reg_read(struct mwifiex_private *priv, u32 reg_type,
u32 reg_offset, u32 *value);
int mwifiex_eeprom_read(struct mwifiex_private *priv, u16 offset, u16 bytes,
u8 *value);
int mwifiex_set_11n_httx_cfg(struct mwifiex_private *priv, int data);
int mwifiex_get_11n_httx_cfg(struct mwifiex_private *priv, int *data);
int mwifiex_set_tx_rate_cfg(struct mwifiex_private *priv, int tx_rate_index);
int mwifiex_get_tx_rate_cfg(struct mwifiex_private *priv, int *tx_rate_index);
int mwifiex_drv_set_power(struct mwifiex_private *priv, u32 *ps_mode);
int mwifiex_drv_get_driver_version(struct mwifiex_adapter *adapter,
char *version, int max_len);
int mwifiex_set_tx_power(struct mwifiex_private *priv,
struct mwifiex_power_cfg *power_cfg);
int mwifiex_main_process(struct mwifiex_adapter *);
int mwifiex_bss_set_channel(struct mwifiex_private *,
struct mwifiex_chan_freq_power *cfp);
int mwifiex_bss_ioctl_find_bss(struct mwifiex_private *,
struct mwifiex_ssid_bssid *);
int mwifiex_set_radio_band_cfg(struct mwifiex_private *,
struct mwifiex_ds_band_cfg *);
int mwifiex_get_bss_info(struct mwifiex_private *,
struct mwifiex_bss_info *);
void mwifiex_debugfs_init(void);
void mwifiex_debugfs_remove(void);
void mwifiex_dev_debugfs_init(struct mwifiex_private *priv);
void mwifiex_dev_debugfs_remove(struct mwifiex_private *priv);
