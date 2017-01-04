static int iwm_send_lmac_ptrough_cmd(struct iwm_priv *iwm,
u8 lmac_cmd_id,
const void *lmac_payload,
u16 lmac_payload_size,
u8 resp)
int iwm_send_wifi_if_cmd(struct iwm_priv *iwm, void *payload, u16 payload_size,
bool resp)
static int modparam_wiwi = COEX_MODE_CM;
module_param_named(wiwi, modparam_wiwi, int, 0644);
MODULE_PARM_DESC(wiwi, "Wifi-WiMAX coexistence: 1=SA, 2=XOR, 3=CM (default)");
static struct coex_event iwm_sta_xor_prio_tbl[COEX_EVENTS_NUM] =
;
static struct coex_event iwm_sta_cm_prio_tbl[COEX_EVENTS_NUM] =
;
int iwm_send_prio_table(struct iwm_priv *iwm)
int iwm_send_init_calib_cfg(struct iwm_priv *iwm, u8 calib_requested)
int iwm_send_periodic_calib_cfg(struct iwm_priv *iwm, u8 calib_requested)
int iwm_store_rxiq_calib_result(struct iwm_priv *iwm)
int iwm_send_calib_results(struct iwm_priv *iwm)
int iwm_send_ct_kill_cfg(struct iwm_priv *iwm, u8 entry, u8 exit)
int iwm_send_umac_reset(struct iwm_priv *iwm, __le32 reset_flags, bool resp)
int iwm_umac_set_config_fix(struct iwm_priv *iwm, u16 tbl, u16 key, u32 value)
int iwm_umac_set_config_var(struct iwm_priv *iwm, u16 key,
void *payload, u16 payload_size)
int iwm_send_umac_config(struct iwm_priv *iwm, __le32 reset_flags)
int iwm_send_packet(struct iwm_priv *iwm, struct sk_buff *skb, int pool_id)
static int iwm_target_read(struct iwm_priv *iwm, __le32 address,
u8 *response, u32 resp_size)
int iwm_read_mac(struct iwm_priv *iwm, u8 *mac)
static int iwm_check_profile(struct iwm_priv *iwm)
int iwm_set_tx_key(struct iwm_priv *iwm, u8 key_idx)
int iwm_set_key(struct iwm_priv *iwm, bool remove, struct iwm_key *key)
int iwm_send_mlme_profile(struct iwm_priv *iwm)
int __iwm_invalidate_mlme_profile(struct iwm_priv *iwm)
int iwm_invalidate_mlme_profile(struct iwm_priv *iwm)
int iwm_tx_power_trigger(struct iwm_priv *iwm)
int iwm_send_umac_stats_req(struct iwm_priv *iwm, u32 flags)
int iwm_send_umac_channel_list(struct iwm_priv *iwm)
int iwm_scan_ssids(struct iwm_priv *iwm, struct cfg80211_ssid *ssids,
int ssid_num)
int iwm_scan_one_ssid(struct iwm_priv *iwm, u8 *ssid, int ssid_len)
int iwm_target_reset(struct iwm_priv *iwm)
int iwm_send_umac_stop_resume_tx(struct iwm_priv *iwm,
struct iwm_umac_notif_stop_resume_tx *ntf)
int iwm_send_pmkid_update(struct iwm_priv *iwm,
struct cfg80211_pmksa *pmksa, u32 command)
