#define WL1271_CMD_FAST_POLL_COUNT       50
int wl1271_cmd_send(struct wl1271 *wl, u16 id, void *buf, size_t len,
size_t res_len)
int wl1271_cmd_general_parms(struct wl1271 *wl)
int wl128x_cmd_general_parms(struct wl1271 *wl)
int wl1271_cmd_radio_parms(struct wl1271 *wl)
int wl128x_cmd_radio_parms(struct wl1271 *wl)
int wl1271_cmd_ext_radio_parms(struct wl1271 *wl)
static int wl1271_cmd_wait_for_event_or_timeout(struct wl1271 *wl, u32 mask)
static int wl1271_cmd_wait_for_event(struct wl1271 *wl, u32 mask)
int wl1271_cmd_join(struct wl1271 *wl, u8 bss_type)
int wl1271_cmd_test(struct wl1271 *wl, void *buf, size_t buf_len, u8 answer)
int wl1271_cmd_interrogate(struct wl1271 *wl, u16 id, void *buf, size_t len)
int wl1271_cmd_configure(struct wl1271 *wl, u16 id, void *buf, size_t len)
int wl1271_cmd_data_path(struct wl1271 *wl, bool enable)
int wl1271_cmd_ps_mode(struct wl1271 *wl, u8 ps_mode)
int wl1271_cmd_template_set(struct wl1271 *wl, u16 template_id,
void *buf, size_t buf_len, int index, u32 rates)
int wl1271_cmd_build_null_data(struct wl1271 *wl)
int wl1271_cmd_build_klv_null_data(struct wl1271 *wl)
int wl1271_cmd_build_ps_poll(struct wl1271 *wl, u16 aid)
int wl1271_cmd_build_probe_req(struct wl1271 *wl,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len, u8 band)
struct sk_buff *wl1271_cmd_build_ap_probe_req(struct wl1271 *wl,
struct sk_buff *skb)
int wl1271_cmd_build_arp_rsp(struct wl1271 *wl, __be32 ip_addr)
int wl1271_build_qos_null_data(struct wl1271 *wl)
int wl1271_cmd_set_sta_default_wep_key(struct wl1271 *wl, u8 id)
int wl1271_cmd_set_ap_default_wep_key(struct wl1271 *wl, u8 id)
int wl1271_cmd_set_sta_key(struct wl1271 *wl, u16 action, u8 id, u8 key_type,
u8 key_size, const u8 *key, const u8 *addr,
u32 tx_seq_32, u16 tx_seq_16)
int wl1271_cmd_set_ap_key(struct wl1271 *wl, u16 action, u8 id, u8 key_type,
u8 key_size, const u8 *key, u8 hlid, u32 tx_seq_32,
u16 tx_seq_16)
int wl1271_cmd_disconnect(struct wl1271 *wl)
int wl1271_cmd_set_sta_state(struct wl1271 *wl)
int wl1271_cmd_start_bss(struct wl1271 *wl)
int wl1271_cmd_stop_bss(struct wl1271 *wl)
int wl1271_cmd_add_sta(struct wl1271 *wl, struct ieee80211_sta *sta, u8 hlid)
int wl1271_cmd_remove_sta(struct wl1271 *wl, u8 hlid)
