#define MWIFIEX_MAX_CHANNELS_PER_SPECIFIC_SCAN   14
#define MWIFIEX_CHANNELS_PER_SCAN_CMD            4
#define CHAN_TLV_MAX_SIZE  (sizeof(struct mwifiex_ie_types_header)         \
+ (MWIFIEX_MAX_CHANNELS_PER_SPECIFIC_SCAN     \
*sizeof(struct mwifiex_chan_scan_param_set)))
#define RATE_TLV_MAX_SIZE   (sizeof(struct mwifiex_ie_types_rates_param_set) \
+ HOSTCMD_SUPPORTED_RATES)
#define WILDCARD_SSID_TLV_MAX_SIZE  \
(MWIFIEX_MAX_SSID_LIST_LENGTH *					\
(sizeof(struct mwifiex_ie_types_wildcard_ssid_params)	\
+ IEEE80211_MAX_SSID_LEN))
#define MAX_SCAN_CFG_ALLOC (sizeof(struct mwifiex_scan_cmd_config)        \
+ sizeof(struct mwifiex_ie_types_num_probes)   \
+ sizeof(struct mwifiex_ie_types_htcap)       \
+ CHAN_TLV_MAX_SIZE                 \
+ RATE_TLV_MAX_SIZE                 \
+ WILDCARD_SSID_TLV_MAX_SIZE)
union mwifiex_scan_cmd_config_tlv ;
enum cipher_suite ;
static u8 mwifiex_wpa_oui[CIPHER_SUITE_MAX][4] = ;
static u8 mwifiex_rsn_oui[CIPHER_SUITE_MAX][4] = ;
static u8
mwifiex_search_oui_in_ie(struct ie_body *iebody, u8 *oui)
static u8
mwifiex_is_rsn_oui_present(struct mwifiex_bssdescriptor *bss_desc, u32 cipher)
static u8
mwifiex_is_wpa_oui_present(struct mwifiex_bssdescriptor *bss_desc, u32 cipher)
s32
mwifiex_ssid_cmp(struct mwifiex_802_11_ssid *ssid1,
struct mwifiex_802_11_ssid *ssid2)
int mwifiex_find_best_bss(struct mwifiex_private *priv,
struct mwifiex_ssid_bssid *ssid_bssid)
int mwifiex_set_user_scan_ioctl(struct mwifiex_private *priv,
struct mwifiex_user_scan_cfg *scan_req)
static bool
mwifiex_is_network_compatible_for_wapi(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc)
static bool
mwifiex_is_network_compatible_for_no_sec(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc)
static bool
mwifiex_is_network_compatible_for_static_wep(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc)
static bool
mwifiex_is_network_compatible_for_wpa(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc,
int index)
static bool
mwifiex_is_network_compatible_for_wpa2(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc,
int index)
static bool
mwifiex_is_network_compatible_for_adhoc_aes(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc)
static bool
mwifiex_is_network_compatible_for_dynamic_wep(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc,
int index)
static s32
mwifiex_is_network_compatible(struct mwifiex_private *priv, u32 index, u32 mode)
static s32
mwifiex_find_best_network_in_list(struct mwifiex_private *priv)
static void
mwifiex_scan_create_channel_list(struct mwifiex_private *priv,
const struct mwifiex_user_scan_cfg
*user_scan_in,
struct mwifiex_chan_scan_param_set
*scan_chan_list,
u8 filtered_scan)
static int
mwifiex_scan_channel_list(struct mwifiex_private *priv,
u32 max_chan_per_scan, u8 filtered_scan,
struct mwifiex_scan_cmd_config *scan_cfg_out,
struct mwifiex_ie_types_chan_list_param_set
*chan_tlv_out,
struct mwifiex_chan_scan_param_set *scan_chan_list)
static void
mwifiex_scan_setup_scan_config(struct mwifiex_private *priv,
const struct mwifiex_user_scan_cfg *user_scan_in,
struct mwifiex_scan_cmd_config *scan_cfg_out,
struct mwifiex_ie_types_chan_list_param_set
**chan_list_out,
struct mwifiex_chan_scan_param_set
*scan_chan_list,
u8 *max_chan_per_scan, u8 *filtered_scan,
u8 *scan_current_only)
static void
mwifiex_ret_802_11_scan_get_tlv_ptrs(struct mwifiex_adapter *adapter,
struct mwifiex_ie_types_data *tlv,
u32 tlv_buf_size, u32 req_tlv_type,
struct mwifiex_ie_types_data **tlv_data)
static int
mwifiex_interpret_bss_desc_with_ie(struct mwifiex_adapter *adapter,
struct mwifiex_bssdescriptor *bss_entry,
u8 **beacon_info, u32 *bytes_left)
static void
mwifiex_adjust_beacon_buffer_ptrs(struct mwifiex_private *priv, u8 advance,
u8 *bcn_store, u32 rem_bcn_size,
u32 num_of_ent)
static void
mwifiex_update_beacon_buffer_ptrs(struct mwifiex_bssdescriptor *beacon)
static void
mwifiex_ret_802_11_scan_store_beacon(struct mwifiex_private *priv,
u32 beacon_idx, u32 num_of_ent,
struct mwifiex_bssdescriptor *new_beacon)
static void mwifiex_restore_curr_bcn(struct mwifiex_private *priv)
static void
mwifiex_process_scan_results(struct mwifiex_private *priv)
static u8
mwifiex_radio_type_to_band(u8 radio_type)
static void
mwifiex_scan_delete_table_entry(struct mwifiex_private *priv, s32 table_idx)
static int
mwifiex_scan_delete_ssid_table_entry(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *del_ssid)
int mwifiex_scan_networks(struct mwifiex_private *priv,
const struct mwifiex_user_scan_cfg *user_scan_in)
int mwifiex_cmd_802_11_scan(struct host_cmd_ds_command *cmd, void *data_buf)
int mwifiex_ret_802_11_scan(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
int mwifiex_cmd_802_11_bg_scan_query(struct host_cmd_ds_command *cmd)
s32
mwifiex_find_ssid_in_list(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *ssid, u8 *bssid,
u32 mode)
s32
mwifiex_find_bssid_in_list(struct mwifiex_private *priv, u8 *bssid,
u32 mode)
void
mwifiex_queue_scan_cmd(struct mwifiex_private *priv,
struct cmd_ctrl_node *cmd_node)
int mwifiex_find_best_network(struct mwifiex_private *priv,
struct mwifiex_ssid_bssid *req_ssid_bssid)
static int mwifiex_scan_specific_ssid(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *req_ssid)
int mwifiex_request_scan(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *req_ssid)
int
mwifiex_cmd_append_vsie_tlv(struct mwifiex_private *priv,
u16 vsie_mask, u8 **buffer)
void
mwifiex_save_curr_bcn(struct mwifiex_private *priv)
void
mwifiex_free_curr_bcn(struct mwifiex_private *priv)
