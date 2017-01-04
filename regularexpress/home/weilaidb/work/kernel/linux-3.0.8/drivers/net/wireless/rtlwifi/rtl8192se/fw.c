static void _rtl92s_fw_set_rqpn(struct ieee80211_hw *hw)
static bool _rtl92s_firmware_enable_cpu(struct ieee80211_hw *hw)
static enum fw_status _rtl92s_firmware_get_nextstatus(
enum fw_status fw_currentstatus)
static u8 _rtl92s_firmware_header_map_rftype(struct ieee80211_hw *hw)
static void _rtl92s_firmwareheader_priveupdate(struct ieee80211_hw *hw,
struct fw_priv *pfw_priv)
static bool _rtl92s_cmd_send_packet(struct ieee80211_hw *hw,
struct sk_buff *skb, u8 last)
static bool _rtl92s_firmware_downloadcode(struct ieee80211_hw *hw,
u8 *code_virtual_address, u32 buffer_len)
static bool _rtl92s_firmware_checkready(struct ieee80211_hw *hw,
u8 loadfw_status)
int rtl92s_download_fw(struct ieee80211_hw *hw)
static u32 _rtl92s_fill_h2c_cmd(struct sk_buff *skb, u32 h2cbufferlen,
u32 cmd_num, u32 *pelement_id, u32 *pcmd_len,
u8 **pcmb_buffer, u8 *cmd_start_seq)
static u32 _rtl92s_get_h2c_cmdlen(u32 h2cbufferlen, u32 cmd_num, u32 *pcmd_len)
static bool _rtl92s_firmware_set_h2c_cmd(struct ieee80211_hw *hw, u8 h2c_cmd,
u8 *pcmd_buffer)
void rtl92s_set_fw_pwrmode_cmd(struct ieee80211_hw *hw, u8 Mode)
void rtl92s_set_fw_joinbss_report_cmd(struct ieee80211_hw *hw,
u8 mstatus, u8 ps_qosinfo)
