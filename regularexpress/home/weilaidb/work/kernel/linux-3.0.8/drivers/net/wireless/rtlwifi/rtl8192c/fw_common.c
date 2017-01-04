static void _rtl92c_enable_fw_download(struct ieee80211_hw *hw, bool enable)
static void _rtl92c_fw_block_write(struct ieee80211_hw *hw,
const u8 *buffer, u32 size)
static void _rtl92c_fw_page_write(struct ieee80211_hw *hw,
u32 page, const u8 *buffer, u32 size)
static void _rtl92c_fill_dummy(u8 *pfwbuf, u32 *pfwlen)
static void _rtl92c_write_fw(struct ieee80211_hw *hw,
enum version_8192c version, u8 *buffer, u32 size)
static int _rtl92c_fw_free_to_go(struct ieee80211_hw *hw)
int rtl92c_download_fw(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_download_fw);
static bool _rtl92c_check_fw_read_last_h2c(struct ieee80211_hw *hw, u8 boxnum)
static void _rtl92c_fill_h2c_command(struct ieee80211_hw *hw,
u8 element_id, u32 cmd_len, u8 *p_cmdbuffer)
void rtl92c_fill_h2c_cmd(struct ieee80211_hw *hw,
u8 element_id, u32 cmd_len, u8 *p_cmdbuffer)
EXPORT_SYMBOL(rtl92c_fill_h2c_cmd);
void rtl92c_firmware_selfreset(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_firmware_selfreset);
void rtl92c_set_fw_pwrmode_cmd(struct ieee80211_hw *hw, u8 mode)
EXPORT_SYMBOL(rtl92c_set_fw_pwrmode_cmd);
static bool _rtl92c_cmd_send_packet(struct ieee80211_hw *hw,
struct sk_buff *skb)
#define BEACON_PG		0
#define PSPOLL_PG		2
#define NULL_PG			3
#define PROBERSP_PG		4
#define TOTAL_RESERVED_PKT_LEN	768
static u8 reserved_page_packet[TOTAL_RESERVED_PKT_LEN] = ;
void rtl92c_set_fw_rsvdpagepkt(struct ieee80211_hw *hw, bool dl_finished)
EXPORT_SYMBOL(rtl92c_set_fw_rsvdpagepkt);
void rtl92c_set_fw_joinbss_report_cmd(struct ieee80211_hw *hw, u8 mstatus)
EXPORT_SYMBOL(rtl92c_set_fw_joinbss_report_cmd);
