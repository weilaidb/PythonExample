#define __CMD_H__
struct acx_header;
int wl1271_cmd_send(struct wl1271 *wl, u16 id, void *buf, size_t len,
size_t res_len);
int wl1271_cmd_general_parms(struct wl1271 *wl);
int wl128x_cmd_general_parms(struct wl1271 *wl);
int wl1271_cmd_radio_parms(struct wl1271 *wl);
int wl128x_cmd_radio_parms(struct wl1271 *wl);
int wl1271_cmd_ext_radio_parms(struct wl1271 *wl);
int wl1271_cmd_join(struct wl1271 *wl, u8 bss_type);
int wl1271_cmd_test(struct wl1271 *wl, void *buf, size_t buf_len, u8 answer);
int wl1271_cmd_interrogate(struct wl1271 *wl, u16 id, void *buf, size_t len);
int wl1271_cmd_configure(struct wl1271 *wl, u16 id, void *buf, size_t len);
int wl1271_cmd_data_path(struct wl1271 *wl, bool enable);
int wl1271_cmd_ps_mode(struct wl1271 *wl, u8 ps_mode);
int wl1271_cmd_read_memory(struct wl1271 *wl, u32 addr, void *answer,
size_t len);
int wl1271_cmd_template_set(struct wl1271 *wl, u16 template_id,
void *buf, size_t buf_len, int index, u32 rates);
int wl1271_cmd_build_null_data(struct wl1271 *wl);
int wl1271_cmd_build_ps_poll(struct wl1271 *wl, u16 aid);
int wl1271_cmd_build_probe_req(struct wl1271 *wl,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len, u8 band);
struct sk_buff *wl1271_cmd_build_ap_probe_req(struct wl1271 *wl,
struct sk_buff *skb);
int wl1271_cmd_build_arp_rsp(struct wl1271 *wl, __be32 ip_addr);
int wl1271_build_qos_null_data(struct wl1271 *wl);
int wl1271_cmd_build_klv_null_data(struct wl1271 *wl);
int wl1271_cmd_set_sta_default_wep_key(struct wl1271 *wl, u8 id);
int wl1271_cmd_set_ap_default_wep_key(struct wl1271 *wl, u8 id);
int wl1271_cmd_set_sta_key(struct wl1271 *wl, u16 action, u8 id, u8 key_type,
u8 key_size, const u8 *key, const u8 *addr,
u32 tx_seq_32, u16 tx_seq_16);
int wl1271_cmd_set_ap_key(struct wl1271 *wl, u16 action, u8 id, u8 key_type,
u8 key_size, const u8 *key, u8 hlid, u32 tx_seq_32,
u16 tx_seq_16);
int wl1271_cmd_disconnect(struct wl1271 *wl);
int wl1271_cmd_set_sta_state(struct wl1271 *wl);
int wl1271_cmd_start_bss(struct wl1271 *wl);
int wl1271_cmd_stop_bss(struct wl1271 *wl);
int wl1271_cmd_add_sta(struct wl1271 *wl, struct ieee80211_sta *sta, u8 hlid);
int wl1271_cmd_remove_sta(struct wl1271 *wl, u8 hlid);
enum wl1271_commands ;
#define MAX_CMD_PARAMS 572
enum ;
enum cmd_templ ;
#define WL1271_COMMAND_TIMEOUT     2000
#define WL1271_CMD_TEMPL_MAX_SIZE  252
#define WL1271_EVENT_TIMEOUT       750
struct wl1271_cmd_header  __packed;
#define WL1271_CMD_MAX_PARAMS 572
struct wl1271_command  __packed;
enum ;
#define CMDMBOX_HEADER_LEN 4
#define CMDMBOX_INFO_ELEM_HEADER_LEN 4
enum ;
#define WL1271_JOIN_CMD_CTRL_TX_FLUSH     0x80
#define WL1271_JOIN_CMD_TX_SESSION_OFFSET 1
#define WL1271_JOIN_CMD_BSS_TYPE_5GHZ 0x10
struct wl1271_cmd_join  __packed;
struct cmd_enabledisable_path  __packed;
#define WL1271_RATE_AUTOMATIC  0
struct wl1271_cmd_template_set  __packed;
#define TIM_ELE_ID    5
#define PARTIAL_VBM_MAX    251
struct wl1271_tim  __packed;
enum wl1271_cmd_ps_mode ;
struct wl1271_cmd_ps_params  __packed;
#define NUM_ACCESS_CATEGORIES_COPY 4
enum wl1271_cmd_key_action ;
enum wl1271_cmd_key_type ;
struct wl1271_cmd_set_sta_keys  __packed;
enum wl1271_cmd_lid_key_type ;
struct wl1271_cmd_set_ap_keys  __packed;
struct wl1271_cmd_test_header  __packed;
enum wl1271_channel_tune_bands ;
#define WL1271_PD_REFERENCE_POINT_BAND_B_G  0
#define TEST_CMD_INI_FILE_RADIO_PARAM       0x19
#define TEST_CMD_INI_FILE_GENERAL_PARAM     0x1E
#define TEST_CMD_INI_FILE_RF_EXTENDED_PARAM 0x26
struct wl1271_general_parms_cmd  __packed;
struct wl128x_general_parms_cmd  __packed;
struct wl1271_radio_parms_cmd  __packed;
struct wl128x_radio_parms_cmd  __packed;
struct wl1271_ext_radio_parms_cmd  __packed;
enum wl1271_disconnect_type ;
struct wl1271_cmd_disconnect  __packed;
#define WL1271_CMD_STA_STATE_CONNECTED  1
struct wl1271_cmd_set_sta_state  __packed;
enum wl1271_ssid_type ;
struct wl1271_cmd_bss_start  __packed;
struct wl1271_cmd_add_sta  __packed;
struct wl1271_cmd_remove_sta  __packed;
