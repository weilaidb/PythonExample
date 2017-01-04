#define __IWM_COMMANDS_H__
#define IWM_BARKER_REBOOT_NOTIFICATION	0xF
#define IWM_ACK_BARKER_NOTIFICATION	0x10
#define UMAC_RST_CTRL_FLG_LARC_CLK_EN	0x0001
#define UMAC_RST_CTRL_FLG_LARC_RESET	0x0002
#define UMAC_RST_CTRL_FLG_FUNC_RESET	0x0004
#define UMAC_RST_CTRL_FLG_DEV_RESET	0x0008
#define UMAC_RST_CTRL_FLG_WIFI_CORE_EN	0x0010
#define UMAC_RST_CTRL_FLG_WIFI_LINK_EN	0x0040
#define UMAC_RST_CTRL_FLG_WIFI_MLME_EN	0x0080
#define UMAC_RST_CTRL_FLG_NVM_RELOAD	0x0100
struct iwm_umac_cmd_reset  __packed;
#define UMAC_PARAM_TBL_ORD_FIX    0x0
#define UMAC_PARAM_TBL_ORD_VAR    0x1
#define UMAC_PARAM_TBL_CFG_FIX    0x2
#define UMAC_PARAM_TBL_CFG_VAR    0x3
#define UMAC_PARAM_TBL_BSS_TRK    0x4
#define UMAC_PARAM_TBL_FA_CFG_FIX 0x5
#define UMAC_PARAM_TBL_STA        0x6
#define UMAC_PARAM_TBL_CHN        0x7
#define UMAC_PARAM_TBL_STATISTICS 0x8
enum ;
enum ;
enum ;
struct iwm_umac_cmd_set_param_fix  __packed;
struct iwm_umac_cmd_set_param_var  __packed;
struct iwm_umac_cmd_get_param  __packed;
struct iwm_umac_cmd_get_param_resp  __packed;
struct iwm_umac_cmd_eeprom_proxy_hdr  __packed;
struct iwm_umac_cmd_eeprom_proxy  __packed;
#define IWM_UMAC_CMD_EEPROM_TYPE_READ       0x1
#define IWM_UMAC_CMD_EEPROM_TYPE_WRITE      0x2
#define UMAC_CHANNEL_FLAG_VALID		BIT(0)
#define UMAC_CHANNEL_FLAG_IBSS		BIT(1)
#define UMAC_CHANNEL_FLAG_ACTIVE	BIT(3)
#define UMAC_CHANNEL_FLAG_RADAR		BIT(4)
#define UMAC_CHANNEL_FLAG_DFS		BIT(7)
struct iwm_umac_channel_info  __packed;
struct iwm_umac_cmd_get_channel_list  __packed;
#define COEX_MODE_SA  0x1
#define COEX_MODE_XOR 0x2
#define COEX_MODE_CM  0x3
#define COEX_MODE_MAX 0x4
#define WIRELESS_MODE_11A  0x1
#define WIRELESS_MODE_11G  0x2
#define WIRELESS_MODE_11N  0x4
#define UMAC_PROFILE_EX_IE_REQUIRED	0x1
#define UMAC_PROFILE_QOS_ALLOWED	0x2
#define UMAC_WIFI_IF_PROBE_OPTION_MAX        10
#define UMAC_WIFI_IF_SCAN_TYPE_USER          0x0
#define UMAC_WIFI_IF_SCAN_TYPE_UMAC_RESERVED 0x1
#define UMAC_WIFI_IF_SCAN_TYPE_HOST_PERIODIC 0x2
#define UMAC_WIFI_IF_SCAN_TYPE_MAX           0x3
struct iwm_umac_ssid  __packed;
struct iwm_umac_cmd_scan_request  __packed;
#define UMAC_CIPHER_TYPE_NONE		0xFF
#define UMAC_CIPHER_TYPE_USE_GROUPCAST	0x00
#define UMAC_CIPHER_TYPE_WEP_40		0x01
#define UMAC_CIPHER_TYPE_WEP_104	0x02
#define UMAC_CIPHER_TYPE_TKIP		0x04
#define UMAC_CIPHER_TYPE_CCMP		0x08
#define UMAC_AUTH_TYPE_OPEN		0x00
#define UMAC_AUTH_TYPE_LEGACY_PSK	0x01
#define UMAC_AUTH_TYPE_8021X		0x02
#define UMAC_AUTH_TYPE_RSNA_PSK		0x04
#define UMAC_SEC_FLG_WPA_ON_POS		0
#define UMAC_SEC_FLG_WPA_ON_SEED	1
#define UMAC_SEC_FLG_WPA_ON_MSK (UMAC_SEC_FLG_WPA_ON_SEED << \
UMAC_SEC_FLG_WPA_ON_POS)
#define UMAC_SEC_FLG_RSNA_ON_POS	1
#define UMAC_SEC_FLG_RSNA_ON_SEED	1
#define UMAC_SEC_FLG_RSNA_ON_MSK        (UMAC_SEC_FLG_RSNA_ON_SEED << \
UMAC_SEC_FLG_RSNA_ON_POS)
#define UMAC_SEC_FLG_WSC_ON_POS		2
#define UMAC_SEC_FLG_WSC_ON_SEED	1
#define UMAC_SEC_FLG_WSC_ON_MSK         (UMAC_SEC_FLG_WSC_ON_SEED << \
UMAC_SEC_FLG_WSC_ON_POS)
#define UMAC_SEC_FLG_LEGACY_PROFILE	0
struct iwm_umac_security  __packed;
struct iwm_umac_ibss  __packed;
#define UMAC_MODE_BSS	0
#define UMAC_MODE_IBSS	1
#define UMAC_BSSID_MAX	4
struct iwm_umac_profile  __packed;
struct iwm_umac_invalidate_profile  __packed;
struct iwm_umac_key_wep40  __packed;
struct iwm_umac_key_wep104  __packed;
#define IWM_TKIP_KEY_SIZE 16
#define IWM_TKIP_MIC_SIZE 8
struct iwm_umac_key_tkip  __packed;
struct iwm_umac_key_ccmp  __packed;
struct iwm_umac_key_remove  __packed;
struct iwm_umac_tx_key_id  __packed;
struct iwm_umac_pwr_trigger  __packed;
struct iwm_umac_cmd_stats_req  __packed;
struct iwm_umac_cmd_stop_resume_tx  __packed;
#define IWM_CMD_PMKID_ADD   1
#define IWM_CMD_PMKID_DEL   2
#define IWM_CMD_PMKID_FLUSH 3
struct iwm_umac_pmkid_update  __packed;
int iwm_read_mac(struct iwm_priv *iwm, u8 *mac);
int iwm_send_prio_table(struct iwm_priv *iwm);
int iwm_send_init_calib_cfg(struct iwm_priv *iwm, u8 calib_requested);
int iwm_send_periodic_calib_cfg(struct iwm_priv *iwm, u8 calib_requested);
int iwm_send_calib_results(struct iwm_priv *iwm);
int iwm_store_rxiq_calib_result(struct iwm_priv *iwm);
int iwm_send_ct_kill_cfg(struct iwm_priv *iwm, u8 entry, u8 exit);
int iwm_send_wifi_if_cmd(struct iwm_priv *iwm, void *payload, u16 payload_size,
bool resp);
int iwm_send_umac_reset(struct iwm_priv *iwm, __le32 reset_flags, bool resp);
int iwm_umac_set_config_fix(struct iwm_priv *iwm, u16 tbl, u16 key, u32 value);
int iwm_umac_set_config_var(struct iwm_priv *iwm, u16 key,
void *payload, u16 payload_size);
int iwm_send_umac_config(struct iwm_priv *iwm, __le32 reset_flags);
int iwm_send_mlme_profile(struct iwm_priv *iwm);
int __iwm_invalidate_mlme_profile(struct iwm_priv *iwm);
int iwm_invalidate_mlme_profile(struct iwm_priv *iwm);
int iwm_send_packet(struct iwm_priv *iwm, struct sk_buff *skb, int pool_id);
int iwm_set_tx_key(struct iwm_priv *iwm, u8 key_idx);
int iwm_set_key(struct iwm_priv *iwm, bool remove, struct iwm_key *key);
int iwm_tx_power_trigger(struct iwm_priv *iwm);
int iwm_send_umac_stats_req(struct iwm_priv *iwm, u32 flags);
int iwm_send_umac_channel_list(struct iwm_priv *iwm);
int iwm_scan_ssids(struct iwm_priv *iwm, struct cfg80211_ssid *ssids,
int ssid_num);
int iwm_scan_one_ssid(struct iwm_priv *iwm, u8 *ssid, int ssid_len);
int iwm_send_umac_stop_resume_tx(struct iwm_priv *iwm,
struct iwm_umac_notif_stop_resume_tx *ntf);
int iwm_send_pmkid_update(struct iwm_priv *iwm,
struct cfg80211_pmksa *pmksa, u32 command);
int iwm_target_reset(struct iwm_priv *iwm);
